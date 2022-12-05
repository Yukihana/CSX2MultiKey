#include "MsgBox.h"
#include "MultiKeyLog.h"
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::IO;
using namespace System::Diagnostics;
using namespace System::Text;
using namespace System::Drawing;
using namespace LoggingSystem;

namespace MultiKey {

	/// <summary>
	/// Summary for Splash
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Splash : public System::Windows::Forms::Form
	{
	public:
		Splash(void)
		{
			valueInit();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Splash()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  OSD;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Timer^  sTimer;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Splash::typeid));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->OSD = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->sTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->progressBar1->Location = System::Drawing::Point(0, 170);
			this->progressBar1->MarqueeAnimationSpeed = 50;
			this->progressBar1->Maximum = 319;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(320, 10);
			this->progressBar1->Step = 1;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Disclaimer: BypassPostmessage.dll is coded by JoostP. CherrySoft is not to\r\nbe he" 
				L"ld responsible for any sort of loss or damage caused by this program.";
			// 
			// OSD
			// 
			this->OSD->AutoSize = true;
			this->OSD->BackColor = System::Drawing::Color::Transparent;
			this->OSD->ForeColor = System::Drawing::Color::White;
			this->OSD->Location = System::Drawing::Point(28, 125);
			this->OSD->Name = L"OSD";
			this->OSD->Size = System::Drawing::Size(66, 13);
			this->OSD->TabIndex = 2;
			this->OSD->Text = L"Initializing...";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Splash::timer1_Tick);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(257, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"CherrySoft";
			// 
			// sTimer
			// 
			this->sTimer->Interval = 25;
			this->sTimer->Tick += gcnew System::EventHandler(this, &Splash::sTimer_Tick);
			// 
			// Splash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(320, 180);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->OSD);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Splash";
			this->Opacity = 0;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Splash";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Splash::Splash_Load);
			this->Shown += gcnew System::EventHandler(this, &Splash::Splash_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:  bool t1; short st;
		 // Init & MainStream Processing
		 void valueInit(){ t1 = true; st = 0; }
private: System::Void Splash_Load(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void sTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if( this->Opacity >= 0.9 ){
				 this->sTimer->Stop();
				 xLoad();
			 }
			 else this->Opacity += 0.15;
		 }
		 void xLoad(){
			 MultiKeyLog(L"________________________________________________________");
			 sysUpdate(L"Initializing...");
			 this->progressBar1->Value = 32;
			 this->timer1->Start();
		 }
private: System::Void Splash_Shown(System::Object^  sender, System::EventArgs^  e) {
			 this->sTimer->Start();
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Stop();
			 switch(st) {
			 case 0:
				 exitRenew();
				 this->timer1->Interval = 250; break;
			 case 1:
				 sysUpdate(L"Starting File-check...");
				 if( fileENUMcheck() == false ){
					 this->progressBar1->Value = 0; t1 = false;
				 }
				 else this->progressBar1->Value = 300;
				 break;
			 case 2: 
				 finalize();
				 this->progressBar1->Value = 319;
				 this->timer1->Interval = 100;
				 break;
			 default:
				 this->Close();				 
			 }
			  st++; this->timer1->Start();
		 }
		 // 1. Exit Log Check and Renew
		 void exitRenew(){
			 if( File::Exists(Application::StartupPath + L"\\settings.ini") ){
				 sysUpdate(L"Found 'settings.ini'. Reading settings...");
				 execSettings(L"settings.ini");
			 } else  sysUpdate(L"Couldn't find 'settings.ini' in the program directory. Skipping...");
			 if ( processCheck() == true ) prepExitLog();
			 else sysUpdate(L"Skipping ExitRecord preparation.");
		 }
		 void execSettings(String^ xFile){
			 // Set No-ReadOnly
			 FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + L"\\" + xFile);
			 if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;
			 // Read Data
			 StreamReader^ r1 = gcnew StreamReader( Application::StartupPath + L"\\" + xFile );
			 r1->ReadLine();
			 if ( r1->ReadLine() == L"1" ){
				 if ( processCheck() == true ){ dispLast(); }
				 else sysUpdate(L"Detected other instances. Skipping Last Exit Report.");
			 }
			 // Clean up
			 r1->Close(); delete r1; delete xFile;
		 }
		 void dispLast(){
			 String^ RecordName = L"ExitRecord.log";
			 if( File::Exists(Application::StartupPath + L"\\" + RecordName)){				 
				 StreamReader^ r2 = gcnew StreamReader(Application::StartupPath + L"\\" + RecordName);
				 String^ s1 = r2->ReadLine(); r2->Close(); delete r2;

				 if (s1 == L"MultiKey exited by the User.") sysUpdate(L"Last Exit: MultiKey exited by the User.");
				 else if(s1 == L"Some critical files are missing. Quitting..."){
					 sysUpdate(L"MultiKey wasn't able to start last time, because some files were missing.");
					 MessageBox::Show(L"MultiKey wasn't able to start last time, because some files were missing.",
						 L"Failed to start last time",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 } else {
					 sysUpdate(L"'ExitRecord.log was either found blank or with an unknown message.");
				     sysUpdate(L"MultiKey might not have quit properly the last time.");
					 MessageBox::Show(L"'ExitRecord.log was either found blank or with an unknown message.\r\nMultiKey might not have quit properly the last time.",
						 L"ExitRecord.log is not updated",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 }
				 delete s1;
			 } else {
				 sysUpdate(L"'ExitRecord.log' was not found in the program directory.");
				 MessageBox::Show(L"'ExitRecord.log' was not found in the program directory.",
					 L"File not found",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 }
		 }
		 bool processCheck(){
			 bool res = true;
			 //Get FileName
			 Diagnostics::Process^ p1 = Diagnostics::Process::GetCurrentProcess();
			 String^ xName = p1->MainModule->ModuleName; delete p1;
			 xName = xName->Substring(0,(xName->Length - 4));

			 //ENUM Processes with same filename and check location
			 array<Process^>^ MultiKeyInstances = Diagnostics::Process::GetProcessesByName(xName);
			 delete xName;

			 int i = 0, tnop = 0;
			 for( i = 0; i< MultiKeyInstances->Length; i++)
			 {
				 if( Application::ExecutablePath == MultiKeyInstances[i]->MainModule->FileName )
					 tnop++;
			 }
			 delete MultiKeyInstances;

			 //return results
			 if( tnop > 1 ) res = false;
			 return res;
		 }
		 void prepExitLog(){
			 String^ newFile = L"ExitRecord.log",^ oldFile = L"ExitRecord.old";
			 
			 //Check newFile
			 if( File::Exists(Application::StartupPath + L"\\" + newFile)){
				 //Set Access-Level
				 FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + L"\\" + newFile);
				 if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;
				 
				 //Check oldFile & Create if not present
				 if( File::Exists(Application::StartupPath + L"\\" + oldFile)){
					 //Set Access-Level
					 FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + L"\\" + oldFile);
					 if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;
				 } else {
					 FileStream^ StLog = gcnew FileStream( Application::StartupPath + L"\\" + oldFile,
					 FileMode::Create, FileAccess::Write, FileShare::Write );
					 StLog->Close(); delete StLog;
				 }

				 //Copy & Replace
				 File::Copy(Application::StartupPath + L"\\" + newFile,
					 Application::StartupPath + L"\\" + oldFile, true);
				 
				 //Truncate newFile
				 FileStream^ StLog = gcnew FileStream( Application::StartupPath + L"\\" + newFile,
					 FileMode::Truncate, FileAccess::Write, FileShare::Write );
					 StLog->Close(); delete StLog;
			 } else {
				 if( File::Exists(Application::StartupPath + L"\\" + oldFile)){
					 //Set Access-Level
					 FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + L"\\" + oldFile);
					 if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;

					 File::Delete(Application::StartupPath + L"\\" + oldFile);
				 }
			 }
		 }
		 // Mainstream Functions
		 bool fileENUMcheck(){ 
			 bool pseudoLoop = false, strec = true;
			 while ( pseudoLoop == false ){
				 if ( fileCheck(L"BypassedPostmessage.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 if ( fileCheck(L"CSXcapture.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 if ( fileCheck(L"csxfixedbutton.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 if ( fileCheck(L"CSXplayStop.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 if ( fileCheck(L"CSXtime.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 if ( fileCheck(L"GraphicNumberUpDown.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 if ( fileCheck(L"KeyDisplay.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 if ( fileCheck(L"KeySelection.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 if ( fileCheck(L"multibutton3.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 if ( fileCheck(L"SAKT.dll") == true ) this->progressBar1->Value += 15;
				 else { strec = false; break; }
				 //if ( filecheck(L"GraphicNumberUpDown.dll") == true ) this->progressBar1->Value += 15;
				 //else { strec = false; break; }
				 pseudoLoop = true;
			 }
			 return strec;
		 }
		 void finalize(){
			 StreamWriter^ w1 = gcnew StreamWriter( Application::StartupPath + "\\launch.tmp" );
			 if( t1 == true ) w1->WriteLine(L"1");
			 else w1->WriteLine(L"0");
			 w1->Close(); delete w1;

			 if( t1 == true ){ sysUpdate("File-check completed. Starting MultiKey..."); }
			 else { sysUpdate("Some critical files are missing. Quitting..."); failExit();}
		 }
		 void failExit(){			
			 String^ RecordName = L"ExitRecord.log";
			 // Prepare File
			 FileStream^ StLog;
			 if( File::Exists(Application::StartupPath + "\\" + RecordName) == false ){
				StLog = gcnew FileStream( Application::StartupPath + "\\" + RecordName,
					FileMode::Create, FileAccess::Write, FileShare::Write );
				StLog->Close();
			 }
			 // Set No-ReadOnly
			 FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + "\\" + RecordName);
			 if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;
			 // Write Data
			 StLog = gcnew FileStream(Application::StartupPath + "\\" + RecordName,
				 FileMode::Truncate, FileAccess::Write, FileShare::Write );	
			 AddText( StLog, L"Some critical files are missing. Quitting..." ); StLog->Close();
			 // Clean up
			 delete StLog; delete RecordName;
		 }
		 // Base Functions
		 void sysUpdate(String^ xMsg){
			 MultiKeyLog::MultiKeyLog(xMsg);
			 this->OSD->Text = xMsg;
			 delete xMsg;
		 }
		 void AddText( FileStream^ fs, String^ value )
		 {
			 array<Byte>^info = (gcnew UTF8Encoding( true ))->GetBytes( value );
			 fs->Write( info, 0, info->Length );
			 delete info; delete fs;
		 }
		 bool fileCheck(String^ xInput){
			 bool xloop = true, res = false;
			 while( xloop == true ){
				 res = File::Exists ( Application::StartupPath + L"\\" + xInput );
				 if ( res == false ){
					 sysUpdate(L"Cannot find the file '" + xInput + "' in the program directory.");
					 bool diagRes = showMsgBox( L"Cannot find the file '" + xInput + "' in the program directory.", L"Missing File",3,L"Abort",L"Retry" );
					 if ( diagRes == 0 ){
						 showMsgBox( L"The Operation was aborted.\r\nThe program will now quit.", L"Cancelled by the user",0,L"OK" );
						 sysUpdate(L"User response: Cancel"); xloop = false;
					 }
					 else sysUpdate(L"User response: Retry");
				 } else { sysUpdate(L"Found '" + xInput + "' in the program directory."); xloop = false; }
			 }
			 delete xInput;
			 return res;
		 }

		 bool showMsgBox(String^ xText, String^ xTitle, short xIcon, String^ xButton0, String^ xButton1){
			 MsgBox^ mb1 = gcnew MsgBox();
			 mb1->prepare( xText, xTitle, xIcon, xButton0, xButton1 );
			 mb1->ShowDialog();
			 bool res = mb1->getResultBool();
			 delete (IDisposable^)mb1;
			 return res;
		 }
	     bool showMsgBox(String^ xText, String^ xTitle, short xIcon, String^ xButton0){
			 MsgBox^ mb1 = gcnew MsgBox();
			 mb1->prepare( xText, xTitle, xIcon, xButton0 );
			 mb1->ShowDialog();
			 bool res = mb1->getResultBool();
			 delete (IDisposable^)mb1;
			 return res;
		 }

};
}
