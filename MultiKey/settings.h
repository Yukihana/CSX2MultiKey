#include "ash.h"

//Settings list
//
//Trunc
//LastReport
//Color Tick
//DSTI
//DMItime
//Color

namespace MultiKey
{
	public ref class Settings
	{
	// Constructors and Destructors
	public:
		Settings()
		{
			ValueInit();
			bool tmp1 = readINI();
			if( tmp1 == true ) writeINI();
		}
	protected:
		~Settings(void)
		{
			if ( st ) delete st;
		}

	protected:
	//Load Based
	private:
		bool xTrunc, xDSTI, xVO, diagRes;
		int xDMIT; System::Drawing::Color xCol;
		array<String^>^st;
		void ValueInit(){
			xTrunc = xDSTI = xVO = diagRes = false;
			xDMIT = 0; xCol = Color::WhiteSmoke;
			st = gcnew array<String^>{ L"", L"", L"", L"", L"", L"", L"" };
		}
	//Read
	private:
		bool readINI(){
			bool res = false;
			String^ xFile = L"settings.ini";
			if( File::Exists(Application::StartupPath + L"\\" + xFile) ){
				// Set No-ReadOnly
				FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + L"\\" + xFile);
				if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;
				// Reading Settings
				StreamReader^ r1 = gcnew StreamReader( Application::StartupPath + L"\\" + xFile );

				int i=0;
				for( i = 0; i<5; i++ )
				{
					try{
						st[i] = r1->ReadLine();
					}catch( Exception^ e ){
						MessageBox::Show( e->ToString(), e->ToString(), MessageBoxButtons::OK, MessageBoxIcon::Stop );						
						delete e;
					}
				}
				processData();
				r1->Close(); delete r1;
			}
			delete xFile;
			return res;
		}
		bool processData(){
			bool res = false; int xData, errCount = 0;
			//Trunc
			xData = Convert::ToInt32( st[0] );
			if( xData == 0 ) xTrunc = false;
			else if( xData == 1 ) xTrunc = true;
			else errCount++;
			//VO
			xData = Convert::ToInt32( st[1] );
			if( xData == 0 ) xVO = false;
			else if( xData == 1 ) xVO = true;
			else errCount++;
			//xDSTI
			xData = Convert::ToInt32( st[2] );
			if( xData == 0 ) xDSTI = false;
			else if( xData == 1 ) xDSTI = true;
			else errCount++;
			//xDMIT
			xDMIT = Convert::ToInt32( st[3] );
			//xCol
			xData = Convert::ToInt32( st[4] );
			xCol = Color::FromArgb( xData );

			if (errCount != 0 )
				res = true;
			return res;
		}		
	//GUI & Save
	public:
		void ShowASH(short xInput){
			ash^ a1 = gcnew ash();
			a1->prepare( xInput, xCol, xDMIT, xDSTI, xVO, xTrunc );
			a1->ShowDialog();
			diagRes = a1->getDialogResult();
			if ( diagRes == true ){
				// retrieve settings
				xTrunc = a1->getTruncBool();
				xVO = a1->getVO();
				xDSTI = a1->getDSTIBool();
				xDMIT = a1->getDMItime();
				xCol = a1->getColor();
				//write settings
				writeINI();
			}
		}	
	//Base Functions
	private:
		void AddText( FileStream^ fs, String^ value )
		{
			array<Byte>^info = (gcnew UTF8Encoding( true ))->GetBytes( value );
			fs->Write( info, 0, info->Length ); delete info; delete value;
		}
		void writeINI(){
			String^ xFile = L"settings.ini";
			// Prepare File
			FileStream^ wst;
			if( File::Exists(Application::StartupPath + "\\" + xFile) == false ){
				wst = gcnew FileStream( Application::StartupPath + "\\" + xFile,
					FileMode::Create, FileAccess::Write, FileShare::Write );
				wst->Close();
			}
			// Set No-ReadOnly
			FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + "\\" + xFile);
			if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;
			// Open Stream
			wst = gcnew FileStream(Application::StartupPath + "\\" + xFile,
				FileMode::Truncate, FileAccess::Write, FileShare::Write );
			// Write Data
			AddText( wst, Convert::ToString( (int)xTrunc ) + "\r\n" );
			AddText( wst, Convert::ToString( (int)xVO ) + "\r\n" );
			AddText( wst, Convert::ToString( (int)xDSTI ) + "\r\n" );
			AddText( wst, Convert::ToString( xDMIT ) + "\r\n" );
			AddText( wst, Convert::ToString( xCol.ToArgb() ) + "\r\n" );
			AddText( wst, L"___________________" );

			//Closing Stream
			wst->Close(); delete xFile;
		}
	// MainForm Retrieval
	public:
		bool getDialogResult(){ return diagRes; }
		int getDMI(){ return xDMIT; }
		bool getDSTI(){ return xDSTI; }
		Color getCol(){ return xCol; }
	};
}