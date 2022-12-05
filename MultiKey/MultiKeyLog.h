using namespace System;
using namespace System::IO;
using namespace System::Text;

namespace LoggingSystem
{
	public ref class MultiKeyLog
	{
	public:
		 MultiKeyLog()
		 {
			 logFunc(L"No Message");
		 }
		 MultiKeyLog(String^ xInput)
		 {
			 logFunc( xInput ); delete xInput;
		 }
	private:
		 void logFunc( String^ xInput ){
			 String^ LogFileName = "MultiKey.log";
			 // Prepare File
			 FileStream^ StLog;
			 if( File::Exists(Application::StartupPath + "\\" + LogFileName) == false ){
				StLog = gcnew FileStream( Application::StartupPath + "\\" + LogFileName,
					FileMode::Create, FileAccess::Write, FileShare::Write );
				StLog->Close();
			 }
			 // Set No-ReadOnly
			 FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + "\\" + LogFileName);
			 if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;
			 // Opening Write Stream
			 StLog = gcnew FileStream(Application::StartupPath + "\\" + LogFileName,
				 FileMode::Append, FileAccess::Write, FileShare::Write );
			 //Prepare Data to be written
			 DateTime^ d1 = DateTime::Now;
			 String^ s1 = L"[ " + Convert::ToString(d1->Year) + "-" + Convert::ToString(d1->Month) 
				 + "-" + Convert::ToString(d1->Day) + " @ " + Convert::ToString(d1->Hour)
				 + ":" + Convert::ToString(d1->Minute) + ":" + Convert::ToString(d1->Second)
				 + "." + Convert::ToString(d1->Millisecond) + " ]\t" + xInput +"\r\n";
			 delete d1;
			 //Write Data
			 AddText( StLog, s1 );
			 //Clean up
			 StLog->Close();
			 delete s1; delete StLog; delete xInput; delete LogFileName;
		}
	protected:
		~MultiKeyLog(void)
		{}
	private:
		void AddText( FileStream^ fs, String^ value )
		{
			array<Byte>^info = (gcnew UTF8Encoding( true ))->GetBytes( value );
			fs->Write( info, 0, info->Length );
			delete info; delete fs;
		}
	};
}