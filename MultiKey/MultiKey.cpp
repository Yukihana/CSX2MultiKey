// MultiKey.cpp : main project file.

#include "stdafx.h"
#include "Splash.h"
#include "MultiKeyForm.h"

using namespace MultiKey;
using namespace System::IO;
using namespace System::Text;

void logTruncate(){
	if( File::Exists(Application::StartupPath + "\\MultiKey.log") ){
		FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + "\\MultiKey.log");
		if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;

		FileStream^ StLog = gcnew FileStream( Application::StartupPath + "\\MultiKey.log",
			FileMode::Truncate, FileAccess::Write, FileShare::Write );
		StLog->Close(); delete StLog;
	}
}

void settCheck(){
	if ( File::Exists( Application::StartupPath + L"\\settings.ini" ) ){
		StreamReader^ r2 = gcnew StreamReader(Application::StartupPath + L"\\settings.ini");
		if (r2->ReadLine() == L"1") logTruncate();
		r2->Close(); delete r2;
	}
}

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	settCheck();

	// Create the splash window and run it
	Application::Run( gcnew Splash() );
	//code to check integrity
	if( File::Exists(Application::StartupPath + "\\launch.tmp") == true )
	{
		FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + "\\launch.tmp");		//Exist
		if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;			//ReadOnly

		StreamReader^ s1 = gcnew StreamReader(Application::StartupPath + "\\launch.tmp");	//Read
		String^ t1;
		try{ t1 = s1->ReadLine(); }catch( System::Exception^ e ){ delete e; }
		s1->Close(); delete s1;
		
		File::Delete(Application::StartupPath + "\\launch.tmp");							//Delete
		
		if( t1 != L"1" ){ delete t1; Application::Exit(); }									//Exit or
		else{ delete t1; Application::Run( gcnew MultiKeyForm() ); }						//Launch
	}
	return 0;
}