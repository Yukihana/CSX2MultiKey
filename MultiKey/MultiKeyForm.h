#include "Settings.h"

#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Text;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace MultiKey {

	/// <summary>
	/// Summary for MultiKeyForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class MultiKeyForm : public System::Windows::Forms::Form
	{
	public:
		MultiKeyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MultiKeyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: SAKT::SAKTControl^  saktControl1;
	private: CSXcapture::CSXcaptureControl^  csXcaptureControl1;
	private: multibutton3::multibutton3Control^  multibutton3Control1;
	private: SAKT::SAKTControl^  saktControl9;
	private: SAKT::SAKTControl^  saktControl8;
	private: SAKT::SAKTControl^  saktControl7;
	private: SAKT::SAKTControl^  saktControl6;
	private: SAKT::SAKTControl^  saktControl5;
	private: SAKT::SAKTControl^  saktControl4;
	private: SAKT::SAKTControl^  saktControl3;
	private: SAKT::SAKTControl^  saktControl2;
	private: SAKT::SAKTControl^  saktControl10;
	private: csxfixedbutton::csxfixedbuttonControl^  csxfixedbuttonControl1;

	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  showHideMultiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  captureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newWindowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutThisProgramToolStripMenuItem;
	private: System::Windows::Forms::Timer^  sTimer;



	private: System::ComponentModel::IContainer^  components;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MultiKeyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->saktControl10 = (gcnew SAKT::SAKTControl());
			this->saktControl9 = (gcnew SAKT::SAKTControl());
			this->saktControl8 = (gcnew SAKT::SAKTControl());
			this->saktControl7 = (gcnew SAKT::SAKTControl());
			this->saktControl6 = (gcnew SAKT::SAKTControl());
			this->saktControl5 = (gcnew SAKT::SAKTControl());
			this->saktControl4 = (gcnew SAKT::SAKTControl());
			this->saktControl3 = (gcnew SAKT::SAKTControl());
			this->saktControl2 = (gcnew SAKT::SAKTControl());
			this->saktControl1 = (gcnew SAKT::SAKTControl());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->showHideMultiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->newWindowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->captureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutThisProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->multibutton3Control1 = (gcnew multibutton3::multibutton3Control());
			this->csxfixedbuttonControl1 = (gcnew csxfixedbutton::csxfixedbuttonControl());
			this->csXcaptureControl1 = (gcnew CSXcapture::CSXcaptureControl());
			this->sTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->saktControl10);
			this->groupBox1->Controls->Add(this->saktControl9);
			this->groupBox1->Controls->Add(this->saktControl8);
			this->groupBox1->Controls->Add(this->saktControl7);
			this->groupBox1->Controls->Add(this->saktControl6);
			this->groupBox1->Controls->Add(this->saktControl5);
			this->groupBox1->Controls->Add(this->saktControl4);
			this->groupBox1->Controls->Add(this->saktControl3);
			this->groupBox1->Controls->Add(this->saktControl2);
			this->groupBox1->Controls->Add(this->saktControl1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Location = System::Drawing::Point(12, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(580, 370);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Timers";
			// 
			// saktControl10
			// 
			this->saktControl10->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl10->DefaultMinimumInterval = 0;
			this->saktControl10->Interval = 0;
			this->saktControl10->KeyEnabled = false;
			this->saktControl10->Location = System::Drawing::Point(6, 335);
			this->saktControl10->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl10->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl10->Name = L"saktControl10";
			this->saktControl10->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl10->Size = System::Drawing::Size(568, 29);
			this->saktControl10->TabIndex = 9;
			this->saktControl10->TargetHandle = 0;
			// 
			// saktControl9
			// 
			this->saktControl9->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl9->DefaultMinimumInterval = 0;
			this->saktControl9->Interval = 0;
			this->saktControl9->KeyEnabled = false;
			this->saktControl9->Location = System::Drawing::Point(6, 300);
			this->saktControl9->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl9->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl9->Name = L"saktControl9";
			this->saktControl9->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl9->Size = System::Drawing::Size(568, 29);
			this->saktControl9->TabIndex = 8;
			this->saktControl9->TargetHandle = 0;
			// 
			// saktControl8
			// 
			this->saktControl8->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl8->DefaultMinimumInterval = 0;
			this->saktControl8->Interval = 0;
			this->saktControl8->KeyEnabled = false;
			this->saktControl8->Location = System::Drawing::Point(6, 265);
			this->saktControl8->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl8->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl8->Name = L"saktControl8";
			this->saktControl8->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl8->Size = System::Drawing::Size(568, 29);
			this->saktControl8->TabIndex = 7;
			this->saktControl8->TargetHandle = 0;
			// 
			// saktControl7
			// 
			this->saktControl7->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl7->DefaultMinimumInterval = 0;
			this->saktControl7->Interval = 0;
			this->saktControl7->KeyEnabled = false;
			this->saktControl7->Location = System::Drawing::Point(6, 230);
			this->saktControl7->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl7->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl7->Name = L"saktControl7";
			this->saktControl7->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl7->Size = System::Drawing::Size(568, 29);
			this->saktControl7->TabIndex = 6;
			this->saktControl7->TargetHandle = 0;
			// 
			// saktControl6
			// 
			this->saktControl6->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl6->DefaultMinimumInterval = 0;
			this->saktControl6->Interval = 0;
			this->saktControl6->KeyEnabled = false;
			this->saktControl6->Location = System::Drawing::Point(6, 195);
			this->saktControl6->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl6->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl6->Name = L"saktControl6";
			this->saktControl6->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl6->Size = System::Drawing::Size(568, 29);
			this->saktControl6->TabIndex = 5;
			this->saktControl6->TargetHandle = 0;
			// 
			// saktControl5
			// 
			this->saktControl5->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl5->DefaultMinimumInterval = 0;
			this->saktControl5->Interval = 0;
			this->saktControl5->KeyEnabled = false;
			this->saktControl5->Location = System::Drawing::Point(6, 160);
			this->saktControl5->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl5->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl5->Name = L"saktControl5";
			this->saktControl5->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl5->Size = System::Drawing::Size(568, 29);
			this->saktControl5->TabIndex = 4;
			this->saktControl5->TargetHandle = 0;
			// 
			// saktControl4
			// 
			this->saktControl4->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl4->DefaultMinimumInterval = 0;
			this->saktControl4->Interval = 0;
			this->saktControl4->KeyEnabled = false;
			this->saktControl4->Location = System::Drawing::Point(6, 125);
			this->saktControl4->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl4->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl4->Name = L"saktControl4";
			this->saktControl4->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl4->Size = System::Drawing::Size(568, 29);
			this->saktControl4->TabIndex = 3;
			this->saktControl4->TargetHandle = 0;
			// 
			// saktControl3
			// 
			this->saktControl3->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl3->DefaultMinimumInterval = 0;
			this->saktControl3->Interval = 0;
			this->saktControl3->KeyEnabled = false;
			this->saktControl3->Location = System::Drawing::Point(6, 90);
			this->saktControl3->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl3->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl3->Name = L"saktControl3";
			this->saktControl3->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl3->Size = System::Drawing::Size(568, 29);
			this->saktControl3->TabIndex = 2;
			this->saktControl3->TargetHandle = 0;
			// 
			// saktControl2
			// 
			this->saktControl2->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl2->DefaultMinimumInterval = 0;
			this->saktControl2->Interval = 0;
			this->saktControl2->KeyEnabled = false;
			this->saktControl2->Location = System::Drawing::Point(6, 55);
			this->saktControl2->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl2->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl2->Name = L"saktControl2";
			this->saktControl2->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl2->Size = System::Drawing::Size(568, 29);
			this->saktControl2->TabIndex = 1;
			this->saktControl2->TargetHandle = 0;
			// 
			// saktControl1
			// 
			this->saktControl1->BackColor = System::Drawing::SystemColors::Control;
			this->saktControl1->DefaultMinimumInterval = 0;
			this->saktControl1->Interval = 0;
			this->saktControl1->KeyEnabled = false;
			this->saktControl1->Location = System::Drawing::Point(6, 20);
			this->saktControl1->MaximumSize = System::Drawing::Size(568, 29);
			this->saktControl1->MinimumSize = System::Drawing::Size(568, 29);
			this->saktControl1->Name = L"saktControl1";
			this->saktControl1->SelectedKey = System::Windows::Forms::Keys::None;
			this->saktControl1->Size = System::Drawing::Size(568, 29);
			this->saktControl1->TabIndex = 0;
			this->saktControl1->TargetHandle = 0;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon1->Text = L"CS-X Multi-Key v2";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->DoubleClick += gcnew System::EventHandler(this, &MultiKeyForm::csxVisib);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->showHideMultiToolStripMenuItem, 
				this->toolStripSeparator1, this->newWindowToolStripMenuItem, this->captureToolStripMenuItem, this->toolStripSeparator3, this->settingsToolStripMenuItem, 
				this->instructionsToolStripMenuItem, this->aboutThisProgramToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(206, 198);
			// 
			// showHideMultiToolStripMenuItem
			// 
			this->showHideMultiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->showHideMultiToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"showHideMultiToolStripMenuItem.Image")));
			this->showHideMultiToolStripMenuItem->Name = L"showHideMultiToolStripMenuItem";
			this->showHideMultiToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->showHideMultiToolStripMenuItem->Text = L"Show / Hide Window";
			this->showHideMultiToolStripMenuItem->Click += gcnew System::EventHandler(this, &MultiKeyForm::csxVisib);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(202, 6);
			// 
			// newWindowToolStripMenuItem
			// 
			this->newWindowToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newWindowToolStripMenuItem.Image")));
			this->newWindowToolStripMenuItem->Name = L"newWindowToolStripMenuItem";
			this->newWindowToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->newWindowToolStripMenuItem->Text = L"New Window";
			this->newWindowToolStripMenuItem->Click += gcnew System::EventHandler(this, &MultiKeyForm::New_Window);
			// 
			// captureToolStripMenuItem
			// 
			this->captureToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"captureToolStripMenuItem.Image")));
			this->captureToolStripMenuItem->Name = L"captureToolStripMenuItem";
			this->captureToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->captureToolStripMenuItem->Text = L"Capture";
			this->captureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MultiKeyForm::Win_Capture);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(202, 6);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"settingsToolStripMenuItem.Image")));
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->settingsToolStripMenuItem->Text = L"Settings";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MultiKeyForm::st_Settings);
			// 
			// instructionsToolStripMenuItem
			// 
			this->instructionsToolStripMenuItem->Name = L"instructionsToolStripMenuItem";
			this->instructionsToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->instructionsToolStripMenuItem->Text = L"Instructions";
			this->instructionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MultiKeyForm::st_Instructions);
			// 
			// aboutThisProgramToolStripMenuItem
			// 
			this->aboutThisProgramToolStripMenuItem->Name = L"aboutThisProgramToolStripMenuItem";
			this->aboutThisProgramToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->aboutThisProgramToolStripMenuItem->Text = L"About this Program...";
			this->aboutThisProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MultiKeyForm::st_About);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(202, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MultiKeyForm::This_Exit);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->AutoSize = true;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBox1->Location = System::Drawing::Point(184, 415);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(88, 23);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Compact Mode";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MultiKeyForm::Compact_Changed);
			// 
			// multibutton3Control1
			// 
			this->multibutton3Control1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->multibutton3Control1->BackColor = System::Drawing::Color::Transparent;
			this->multibutton3Control1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->multibutton3Control1->Location = System::Drawing::Point(291, 413);
			this->multibutton3Control1->MaximumSize = System::Drawing::Size(300, 25);
			this->multibutton3Control1->MinimumSize = System::Drawing::Size(300, 25);
			this->multibutton3Control1->Name = L"multibutton3Control1";
			this->multibutton3Control1->Size = System::Drawing::Size(300, 25);
			this->multibutton3Control1->TabIndex = 1;
			this->multibutton3Control1->Text1 = L"   New Window";
			this->multibutton3Control1->Text2 = L" Instructions";
			this->multibutton3Control1->Text3 = L"About...";
			this->multibutton3Control1->Button1Clicked += gcnew System::EventHandler(this, &MultiKeyForm::New_Window);
			this->multibutton3Control1->Button3Clicked += gcnew System::EventHandler(this, &MultiKeyForm::st_About);
			this->multibutton3Control1->Button2Clicked += gcnew System::EventHandler(this, &MultiKeyForm::st_Instructions);
			// 
			// csxfixedbuttonControl1
			// 
			this->csxfixedbuttonControl1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->csxfixedbuttonControl1->BackColor = System::Drawing::Color::Transparent;
			this->csxfixedbuttonControl1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csxfixedbuttonControl1.BackgroundImage")));
			this->csxfixedbuttonControl1->ButtonText = L"Minimize to Tray";
			this->csxfixedbuttonControl1->Location = System::Drawing::Point(12, 413);
			this->csxfixedbuttonControl1->Name = L"csxfixedbuttonControl1";
			this->csxfixedbuttonControl1->Size = System::Drawing::Size(150, 25);
			this->csxfixedbuttonControl1->TabIndex = 2;
			this->csxfixedbuttonControl1->Clicked += gcnew System::EventHandler(this, &MultiKeyForm::Min_Tray);
			// 
			// csXcaptureControl1
			// 
			this->csXcaptureControl1->BackColor = System::Drawing::Color::Transparent;
			this->csXcaptureControl1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csXcaptureControl1.BackgroundImage")));
			this->csXcaptureControl1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->csXcaptureControl1->Dock = System::Windows::Forms::DockStyle::Top;
			this->csXcaptureControl1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->csXcaptureControl1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->csXcaptureControl1->Location = System::Drawing::Point(0, 0);
			this->csXcaptureControl1->MaximumSize = System::Drawing::Size(750, 31);
			this->csXcaptureControl1->MinimumSize = System::Drawing::Size(460, 31);
			this->csXcaptureControl1->Name = L"csXcaptureControl1";
			this->csXcaptureControl1->Size = System::Drawing::Size(603, 31);
			this->csXcaptureControl1->TabIndex = 1;
			this->csXcaptureControl1->WindowTitle = L"Window Title";
			this->csXcaptureControl1->OnCaptureCompleted += gcnew System::EventHandler(this, &MultiKeyForm::Capture_Completed);
			this->csXcaptureControl1->WindowCaptionChanged += gcnew System::EventHandler(this, &MultiKeyForm::WinTitle_Changed);
			// 
			// sTimer
			// 
			this->sTimer->Interval = 25;
			this->sTimer->Tick += gcnew System::EventHandler(this, &MultiKeyForm::sTimer_Tick);
			// 
			// MultiKeyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(603, 450);
			this->Controls->Add(this->csxfixedbuttonControl1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->multibutton3Control1);
			this->Controls->Add(this->csXcaptureControl1);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MultiKeyForm";
			this->Opacity = 0;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"CS-X MultiKey v2";
			this->Load += gcnew System::EventHandler(this, &MultiKeyForm::MultiKeyForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MultiKeyForm::MultiKeyForm_Shown);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MultiKeyForm::MultiKeyForm_FormClosed);
			this->groupBox1->ResumeLayout(false);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// Load Specific
private:
		 bool mst;
		 void valueInit(){ mst = false; }
private: System::Void MultiKeyForm_Load(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void MultiKeyForm_Shown(System::Object^  sender, System::EventArgs^  e) {
			 xLoad(); this->sTimer->Start();
		 }
		 void xLoad(){
			 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MultiKeyForm::typeid));
			 this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			 delete resources;
			 Settings^ st1 = gcnew Settings();
			 setSAKTmin( st1->getDMI() );
			 setDSTI( st1->getDSTI() );
			 setBGcolor( st1->getCol() );
			 delete (IDisposable^)st1;
		 }
private: System::Void sTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if( this->Opacity < 100 ) this->Opacity += 0.2;
			 else this->sTimer->Stop();
		 }
// Unload Specific
private: System::Void MultiKeyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) { exitRecord(); }
		 void exitRecord(){			
			 String^ LogFileName = "MultiKey.log";
			 String^ RecordName = "ExitRecord.log";
			 // Prepare File
			 FileStream^ StLog;
			 if( File::Exists(Application::StartupPath + "\\" + LogFileName) == false ){
				StLog = gcnew FileStream( Application::StartupPath + "\\" + LogFileName,
					FileMode::Create, FileAccess::Write, FileShare::Write );
				StLog->Close();
			 }
			 if( File::Exists(Application::StartupPath + "\\" + RecordName) == false ){
				StLog = gcnew FileStream( Application::StartupPath + "\\" + RecordName,
					FileMode::Create, FileAccess::Write, FileShare::Write );
				StLog->Close();
			 }
			 // Set No-ReadOnly
			 FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + "\\" + LogFileName);
			 if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false;
			 fInfo = gcnew FileInfo(Application::StartupPath + "\\" + RecordName);
			 if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false;
			 delete fInfo;
			 //Prepare Data to be written
			 DateTime^ d1 = DateTime::Now;
			 String^ s1 = L"[ " + Convert::ToString(d1->Year) + "-" + Convert::ToString(d1->Month) 
				 + "-" + Convert::ToString(d1->Day) + " @ " + Convert::ToString(d1->Hour)
				 + ":" + Convert::ToString(d1->Minute) + ":" + Convert::ToString(d1->Second)
				 + "." + Convert::ToString(d1->Millisecond) + " ]\tMultiKey exited by the user.\r\n";
			 delete d1;
			 //Write Data
			 StLog = gcnew FileStream(Application::StartupPath + "\\" + LogFileName,
				 FileMode::Append, FileAccess::Write, FileShare::Write );	
			 AddText( StLog, s1 ); StLog->Close();
			 StLog = gcnew FileStream(Application::StartupPath + "\\" + RecordName,
				 FileMode::Truncate, FileAccess::Write, FileShare::Write );	
			 AddText( StLog, L"MultiKey exited by the User." ); StLog->Close();
			 //Clean up
			 delete s1; delete StLog; delete LogFileName; delete RecordName;
		 }
		 void AddText( FileStream^ fs, String^ value )
		 {
			 array<Byte>^info = (gcnew UTF8Encoding( true ))->GetBytes( value );
			 fs->Write( info, 0, info->Length );
			 delete info; delete fs;
		 }

// Interface Functions
		 // LaunchASH
private: System::Void st_Instructions(System::Object^  sender, System::EventArgs^  e) { launchSett(0); }
private: System::Void st_Settings(System::Object^  sender, System::EventArgs^  e) {	launchSett(1); }
private: System::Void st_About(System::Object^  sender, System::EventArgs^  e) { launchSett(2); }
		 // More Shell
private: System::Void csxVisib(System::Object^  sender, System::EventArgs^  e) { visib(); }
private: System::Void Min_Tray(System::Object^  sender, System::EventArgs^  e) { visib(); }
		 void visib(){
			 if ( this->Visible == true && mst == false ) this->Hide();
			 else this->Show();
		 }
private: System::Void Compact_Changed(System::Object^  sender, System::EventArgs^  e) {
			 if ( this->checkBox1->Checked == true ){
				 this->groupBox1->Visible = false;
				 this->ClientSize = System::Drawing::Size(603, 74);
			 } else {
				 this->groupBox1->Visible = true;
				 this->ClientSize = System::Drawing::Size(603, 450);
			 }
		 }
private: System::Void New_Window(System::Object^  sender, System::EventArgs^  e) { noMutex(); }
		 void noMutex(){ System::Diagnostics::Process::Start(Application::ExecutablePath);}
private: System::Void This_Exit(System::Object^  sender, System::EventArgs^  e) { Application::Exit(); }
// Capture Based
private: System::Void Win_Capture(System::Object^  sender, System::EventArgs^  e) { this->csXcaptureControl1->CaptureWithCountdown(); }
private: System::Void Capture_Completed(System::Object^  sender, System::EventArgs^  e) {
			 this->Text = L"CS-X MultiKey v2 :: " + this->csXcaptureControl1->WindowTitle 
				 + "(" + Convert::ToString(this->csXcaptureControl1->GetHandleInt32()) + ")";
			 this->saktControl1->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
			 this->saktControl2->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
			 this->saktControl3->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
			 this->saktControl4->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
			 this->saktControl5->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
			 this->saktControl6->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
			 this->saktControl7->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
			 this->saktControl8->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
			 this->saktControl9->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
			 this->saktControl10->TargetHandle = this->csXcaptureControl1->GetHandleInt32();
		 }
private: System::Void WinTitle_Changed(System::Object^  sender, System::EventArgs^  e) {
			 this->Text = L"CS-X MultiKey v2 :: " + this->csXcaptureControl1->WindowTitle 
				 + "(" + Convert::ToString(this->csXcaptureControl1->GetHandleInt32()) + ")";
		 }
// ASH
private: void launchSett(short xInput){
			 Settings^ st1 = gcnew Settings();
			 st1->ShowASH(xInput);
			 if ( st1->getDialogResult() == true )
			 {
				 setSAKTmin( st1->getDMI() );
				 setDSTI( st1->getDSTI() );
				 setBGcolor( st1->getCol() );
			 }
			 delete (IDisposable^)st1;
		 }
// Settings
private: void setBGcolor( Color xInput ){
			 this->BackColor = xInput;
			 this->saktControl1->BackColor = xInput;
			 this->saktControl2->BackColor = xInput;
			 this->saktControl3->BackColor = xInput;
			 this->saktControl4->BackColor = xInput;
			 this->saktControl5->BackColor = xInput;
			 this->saktControl6->BackColor = xInput;
			 this->saktControl7->BackColor = xInput;
			 this->saktControl8->BackColor = xInput;
			 this->saktControl9->BackColor = xInput;
			 this->saktControl10->BackColor = xInput;
		 }
		 void setDSTI( bool xInput ){
			 mst = xInput;
			 if ( xInput == true ){
				 this->notifyIcon1->Visible = false;
				 visib();
			 } else this->notifyIcon1->Visible = true;
		 }		 
		 void setSAKTmin( int dMin ) {
			 this->saktControl1->DefaultMinimumInterval = dMin;
			 this->saktControl2->DefaultMinimumInterval = dMin;
			 this->saktControl3->DefaultMinimumInterval = dMin;
			 this->saktControl4->DefaultMinimumInterval = dMin;
			 this->saktControl5->DefaultMinimumInterval = dMin;
			 this->saktControl6->DefaultMinimumInterval = dMin;
			 this->saktControl7->DefaultMinimumInterval = dMin;
			 this->saktControl8->DefaultMinimumInterval = dMin;
			 this->saktControl9->DefaultMinimumInterval = dMin;
			 this->saktControl10->DefaultMinimumInterval = dMin;
		 }
};
}