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
	/// Summary for ash
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class ash : public System::Windows::Forms::Form
	{
	public:
		ash(void)
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
		~ash()
		{
			if (components)
			{
				delete components;
			}
		}
	private: csxfixedbutton::csxfixedbuttonControl^  csxfixedbuttonControl1;
	private: csxfixedbutton::csxfixedbuttonControl^  csxfixedbuttonControl2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: GraphicNumberUpDown::GraphicNumberUpDownControl^  graphicNumberUpDownControl1;
	private: System::Windows::Forms::PictureBox^  helpIMG;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  helpCap;
	private: System::Windows::Forms::Label^  helpLabel;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  tGrp;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::GroupBox^  sGrp;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::CheckBox^  stDMI;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::Panel^  ColorPanel;
	private: CSXtime::CSXtimeControl^  stDMItime;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::Windows::Forms::LinkLabel^  linkLabel4;
	private: System::Windows::Forms::LinkLabel^  linkLabel5;
	private: System::Windows::Forms::CheckBox^  stDSTI;
	private: System::Windows::Forms::CheckBox^  stTrunc;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  stVO;
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ash::typeid));
			this->csxfixedbuttonControl1 = (gcnew csxfixedbutton::csxfixedbuttonControl());
			this->csxfixedbuttonControl2 = (gcnew csxfixedbutton::csxfixedbuttonControl());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->helpLabel = (gcnew System::Windows::Forms::Label());
			this->helpIMG = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->helpCap = (gcnew System::Windows::Forms::Label());
			this->graphicNumberUpDownControl1 = (gcnew GraphicNumberUpDown::GraphicNumberUpDownControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->sGrp = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->stDSTI = (gcnew System::Windows::Forms::CheckBox());
			this->ColorPanel = (gcnew System::Windows::Forms::Panel());
			this->stDMItime = (gcnew CSXtime::CSXtimeControl());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->stDMI = (gcnew System::Windows::Forms::CheckBox());
			this->tGrp = (gcnew System::Windows::Forms::GroupBox());
			this->stVO = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->stTrunc = (gcnew System::Windows::Forms::CheckBox());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->helpIMG))->BeginInit();
			this->panel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->sGrp->SuspendLayout();
			this->tGrp->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// csxfixedbuttonControl1
			// 
			this->csxfixedbuttonControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->csxfixedbuttonControl1->BackColor = System::Drawing::Color::Transparent;
			this->csxfixedbuttonControl1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csxfixedbuttonControl1.BackgroundImage")));
			this->csxfixedbuttonControl1->ButtonText = L"Cancel";
			this->csxfixedbuttonControl1->Location = System::Drawing::Point(338, 369);
			this->csxfixedbuttonControl1->Name = L"csxfixedbuttonControl1";
			this->csxfixedbuttonControl1->Size = System::Drawing::Size(150, 25);
			this->csxfixedbuttonControl1->TabIndex = 0;
			this->csxfixedbuttonControl1->Click += gcnew System::EventHandler(this, &ash::DiagCan);
			this->csxfixedbuttonControl1->Clicked += gcnew System::EventHandler(this, &ash::DiagCan);
			// 
			// csxfixedbuttonControl2
			// 
			this->csxfixedbuttonControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->csxfixedbuttonControl2->BackColor = System::Drawing::Color::Transparent;
			this->csxfixedbuttonControl2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"csxfixedbuttonControl2.BackgroundImage")));
			this->csxfixedbuttonControl2->ButtonText = L"OK";
			this->csxfixedbuttonControl2->Location = System::Drawing::Point(174, 369);
			this->csxfixedbuttonControl2->Name = L"csxfixedbuttonControl2";
			this->csxfixedbuttonControl2->Size = System::Drawing::Size(150, 25);
			this->csxfixedbuttonControl2->TabIndex = 1;
			this->csxfixedbuttonControl2->Clicked += gcnew System::EventHandler(this, &ash::DiagAcc);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->ItemSize = System::Drawing::Size(150, 18);
			this->tabControl1->Location = System::Drawing::Point(12, 81);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(476, 282);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &ash::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->helpLabel);
			this->tabPage1->Controls->Add(this->helpIMG);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->graphicNumberUpDownControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(468, 256);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Instructions";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Instructions";
			// 
			// helpLabel
			// 
			this->helpLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->helpLabel->BackColor = System::Drawing::Color::Transparent;
			this->helpLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->helpLabel->Location = System::Drawing::Point(6, 140);
			this->helpLabel->Name = L"helpLabel";
			this->helpLabel->Size = System::Drawing::Size(456, 82);
			this->helpLabel->TabIndex = 3;
			// 
			// helpIMG
			// 
			this->helpIMG->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->helpIMG->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpIMG.BackgroundImage")));
			this->helpIMG->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->helpIMG->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->helpIMG->Location = System::Drawing::Point(6, 37);
			this->helpIMG->Name = L"helpIMG";
			this->helpIMG->Size = System::Drawing::Size(456, 100);
			this->helpIMG->TabIndex = 2;
			this->helpIMG->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->helpCap);
			this->panel1->Location = System::Drawing::Point(6, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(456, 25);
			this->panel1->TabIndex = 1;
			// 
			// helpCap
			// 
			this->helpCap->Dock = System::Windows::Forms::DockStyle::Fill;
			this->helpCap->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpCap->Location = System::Drawing::Point(0, 0);
			this->helpCap->Name = L"helpCap";
			this->helpCap->Size = System::Drawing::Size(456, 25);
			this->helpCap->TabIndex = 0;
			this->helpCap->Text = L"helpCap";
			this->helpCap->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// graphicNumberUpDownControl1
			// 
			this->graphicNumberUpDownControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->graphicNumberUpDownControl1->BackColor = System::Drawing::Color::Transparent;
			this->graphicNumberUpDownControl1->DecrementText = L"< Prev";
			this->graphicNumberUpDownControl1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->graphicNumberUpDownControl1->IncrementText = L"Next >";
			this->graphicNumberUpDownControl1->Location = System::Drawing::Point(212, 225);
			this->graphicNumberUpDownControl1->Maximum = 7;
			this->graphicNumberUpDownControl1->Name = L"graphicNumberUpDownControl1";
			this->graphicNumberUpDownControl1->Size = System::Drawing::Size(250, 25);
			this->graphicNumberUpDownControl1->TabIndex = 0;
			this->graphicNumberUpDownControl1->Value = 0;
			this->graphicNumberUpDownControl1->ValueChanged += gcnew System::EventHandler(this, &ash::graphicNumberUpDownControl1_ValueChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage2->Controls->Add(this->sGrp);
			this->tabPage2->Controls->Add(this->tGrp);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(468, 256);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Settings";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// sGrp
			// 
			this->sGrp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->sGrp->Controls->Add(this->label1);
			this->sGrp->Controls->Add(this->stDSTI);
			this->sGrp->Controls->Add(this->ColorPanel);
			this->sGrp->Controls->Add(this->stDMItime);
			this->sGrp->Controls->Add(this->linkLabel2);
			this->sGrp->Controls->Add(this->stDMI);
			this->sGrp->Location = System::Drawing::Point(6, 6);
			this->sGrp->Name = L"sGrp";
			this->sGrp->Size = System::Drawing::Size(456, 100);
			this->sGrp->TabIndex = 1;
			this->sGrp->TabStop = false;
			this->sGrp->Text = L"Application Settings";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Use this colour as background for the main window";
			// 
			// stDSTI
			// 
			this->stDSTI->AutoSize = true;
			this->stDSTI->Location = System::Drawing::Point(6, 72);
			this->stDSTI->Name = L"stDSTI";
			this->stDSTI->Size = System::Drawing::Size(423, 17);
			this->stDSTI->TabIndex = 5;
			this->stDSTI->Text = L"Disable system-tray icon (Note: This will also disable the \'Minimize to Tray\' fun" 
				L"ction)";
			this->stDSTI->UseVisualStyleBackColor = true;
			// 
			// ColorPanel
			// 
			this->ColorPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ColorPanel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ColorPanel->Location = System::Drawing::Point(347, 20);
			this->ColorPanel->Name = L"ColorPanel";
			this->ColorPanel->Size = System::Drawing::Size(21, 17);
			this->ColorPanel->TabIndex = 2;
			this->ColorPanel->Click += gcnew System::EventHandler(this, &ash::Choose_Colour);
			// 
			// stDMItime
			// 
			this->stDMItime->BackColor = System::Drawing::Color::Transparent;
			this->stDMItime->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"stDMItime.BackgroundImage")));
			this->stDMItime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->stDMItime->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->stDMItime->ForeColor = System::Drawing::SystemColors::ControlText;
			this->stDMItime->Location = System::Drawing::Point(147, 43);
			this->stDMItime->MaximumSize = System::Drawing::Size(303, 23);
			this->stDMItime->MinimumSize = System::Drawing::Size(303, 23);
			this->stDMItime->Name = L"stDMItime";
			this->stDMItime->Size = System::Drawing::Size(303, 23);
			this->stDMItime->TabIndex = 4;
			this->stDMItime->Value = 0;
			this->stDMItime->Value_Changed += gcnew System::EventHandler(this, &ash::stDMItime_Value_Changed);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel2->Location = System::Drawing::Point(262, 21);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(79, 13);
			this->linkLabel2->TabIndex = 3;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Choose colour:";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ash::Choose_Color);
			// 
			// stDMI
			// 
			this->stDMI->AutoSize = true;
			this->stDMI->Location = System::Drawing::Point(6, 46);
			this->stDMI->Name = L"stDMI";
			this->stDMI->Size = System::Drawing::Size(107, 17);
			this->stDMI->TabIndex = 1;
			this->stDMI->Text = L"Minimum Interval";
			this->stDMI->UseVisualStyleBackColor = true;
			this->stDMI->CheckedChanged += gcnew System::EventHandler(this, &ash::stDMI_CheckedChanged);
			// 
			// tGrp
			// 
			this->tGrp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tGrp->Controls->Add(this->stVO);
			this->tGrp->Controls->Add(this->button2);
			this->tGrp->Controls->Add(this->stTrunc);
			this->tGrp->Controls->Add(this->linkLabel5);
			this->tGrp->Controls->Add(this->linkLabel4);
			this->tGrp->Controls->Add(this->linkLabel3);
			this->tGrp->Controls->Add(this->button1);
			this->tGrp->Location = System::Drawing::Point(6, 112);
			this->tGrp->Name = L"tGrp";
			this->tGrp->Size = System::Drawing::Size(456, 138);
			this->tGrp->TabIndex = 0;
			this->tGrp->TabStop = false;
			this->tGrp->Text = L"More Settings";
			// 
			// stVO
			// 
			this->stVO->AutoSize = true;
			this->stVO->Location = System::Drawing::Point(6, 90);
			this->stVO->Name = L"stVO";
			this->stVO->Size = System::Drawing::Size(189, 17);
			this->stVO->TabIndex = 8;
			this->stVO->Text = L"View CrashLog Reports at Startup";
			this->stVO->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(325, 80);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Restore Defaults";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ash::Restore_Defaults);
			// 
			// stTrunc
			// 
			this->stTrunc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->stTrunc->AutoSize = true;
			this->stTrunc->Location = System::Drawing::Point(6, 113);
			this->stTrunc->Name = L"stTrunc";
			this->stTrunc->Size = System::Drawing::Size(291, 17);
			this->stTrunc->TabIndex = 6;
			this->stTrunc->Text = L"Automatically clear the log file when the program starts";
			this->stTrunc->UseVisualStyleBackColor = true;
			// 
			// linkLabel5
			// 
			this->linkLabel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel5->Location = System::Drawing::Point(6, 63);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(89, 13);
			this->linkLabel5->TabIndex = 5;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"Open the Log file";
			this->linkLabel5->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ash::Open_Log);
			// 
			// linkLabel4
			// 
			this->linkLabel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel4->Location = System::Drawing::Point(6, 40);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(135, 13);
			this->linkLabel4->TabIndex = 3;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Open Application Directory";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ash::Open_Folder);
			// 
			// linkLabel3
			// 
			this->linkLabel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel3->Location = System::Drawing::Point(6, 17);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(248, 13);
			this->linkLabel3->TabIndex = 1;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"View how the program was shutdown the last time";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ash::View_Old);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(325, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Clear Log Now";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ash::Clear_Log);
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->linkLabel1);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(468, 256);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"About...";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(120, 115);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(276, 117);
			this->label10->TabIndex = 7;
			this->label10->Text = resources->GetString(L"label10.Text");
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->Location = System::Drawing::Point(256, 240);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(206, 13);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"http://www.facebook.com/lilyflowerangel";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ash::linkLabel1_LinkClicked);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkGray;
			this->label8->Location = System::Drawing::Point(120, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 32);
			this->label8->TabIndex = 5;
			this->label8->Text = L"by CherrySoft © 2012\r\n__________________\r\n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkGray;
			this->label7->Location = System::Drawing::Point(219, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 16);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Build 362";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkGray;
			this->label6->Location = System::Drawing::Point(120, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Version 2.1.7";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(116, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 39);
			this->label5->TabIndex = 2;
			this->label5->Text = L"MultiKey";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(118, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"CherrySoft-X";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(6, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(104, 244);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 75);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label9->Location = System::Drawing::Point(12, 381);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 13);
			this->label9->TabIndex = 4;
			this->label9->Text = L"CherrySoft © 2012";
			this->label9->Click += gcnew System::EventHandler(this, &ash::label9_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth32Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// colorDialog1
			// 
			this->colorDialog1->AnyColor = true;
			this->colorDialog1->Color = System::Drawing::Color::WhiteSmoke;
			this->colorDialog1->ShowHelp = true;
			this->colorDialog1->SolidColorOnly = true;
			// 
			// ash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(500, 406);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->csxfixedbuttonControl2);
			this->Controls->Add(this->csxfixedbuttonControl1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ash";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"CS-X MultiKey v2";
			this->Load += gcnew System::EventHandler(this, &ash::ash_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->helpIMG))->EndInit();
			this->panel1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->sGrp->ResumeLayout(false);
			this->sGrp->PerformLayout();
			this->tGrp->ResumeLayout(false);
			this->tGrp->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Interface
private: System::Void DiagAcc(System::Object^  sender, System::EventArgs^  e) {	diagRes = true; this->Close(); }
private: System::Void DiagCan(System::Object^  sender, System::EventArgs^  e) {	this->Close(); }
private: System::Void graphicNumberUpDownControl1_ValueChanged(System::Object^  sender, System::EventArgs^  e) { updateHelp( this->graphicNumberUpDownControl1->Value ); }
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e){ titleUpdate(); }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start("http://www.facebook.com/lilyflowerangel");
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) { this->tabControl1->SelectedIndex = 2; }
	    // Interface Functional
		 void updateHelp( int xInput ){
			 this->helpCap->Text = helpCaption( xInput );
			 this->helpLabel->Text = helpText( xInput );
			 if ( File::Exists(Application::StartupPath + "\\HelpImages\\img" + Convert::ToString(xInput) + ".png") ){
				 this->helpIMG->ImageLocation = Application::StartupPath + L"\\HelpImages\\img" + Convert::ToString(xInput) + L".png";
			 } else MessageBox::Show(L"Image Missing. Unable to Display.",L"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		 }
		 String^ helpCaption( int xInput ){
			 switch(xInput){
				 case 0: return L"Setting up the capture..."; break;
				 case 1: return L"Identifying the target Window"; break;
				 case 2: return L"Selecting the Key"; break;
				 case 3: return L"Adjusting the interval"; break;
				 case 4: return L"Start, Stop and Enable buttons"; break;
				 case 5: return L"More Controls"; break;
				 case 6: return L"Tray icon and Menu"; break;
				 default: return L"Additional Information";
			 }
		 }
		 String^ helpText( int xInput ){
			 switch(xInput){
				 case 0:
					 return L"1. Adjust the Countdown time in the Numeric Box.\r\n"
						  + L"2. Press the Get Active Window Button, this starts the countdown.\r\n"
						  + L"3. Switch to the window to be targetted, and wait there till the Countdown is over.\r\n"
						  + L"4. When the countdown ends, the Windows 'Asterisk Sound will be heard' and the\r\n"
						  + L"    window will have been identified.";
					 break;
				 case 1:
					 return L"1. Once the window is Identified, the Target Window title\r\n"
						  + L"       and the Handle would be displayed in those boxes.\r\n"
						  + L"2. The text in the Target-Window-Title Box can be changed\r\n"
						  + L"       and it will also show up on the title bar.";
					 break;
				 case 2:
					 return L"1. Press the [ ... ] button and it will open up a Key-selection form.\r\n"
						  + L"2. Press the key to be spammed, and click [ OK ].\r\n"
						  + L"3. Activate small round button after selecting the Key.\r\n"
						  + L"       ( Gray - Deactivated, Green - Activated )";
					 break;
				 case 3:
					 return L"1. Adjust the spam interval here, i.e, if it is set to 2 seconds, it will spam the selected\r\n"
						  + L"       Key once every 2 seconds.\r\n"
						  + L"2. Zero Interval will give an Error upon spam, unless a minimum default interval\r\n"
						  + L"       has been specified in the settings.\r\n"
						  + L"3. The Numeric boxes are Hours, Minutes, Seconds, and Miliseconds respectively.";
					 break;
				 case 4:
					 return L"1. Start Button - Starts or Restarts the timer (Returns an error on Zero interval\r\n"
						  + L"       unless a default value has been specified).\r\n"
						  + L"2. Stop Button - Stops the timer(Disabled when the timer is not running).\r\n"
						  + L"3. Enable Spam Button - If disabled(gray), the key will not be spammed even\r\n"
						  + L"       if the timer is running.";
					 break;
				 case 5:
					 return L"1. Minimize to Tray - Minimizes MultiKey to the System Tray (Bottom-Right corner).\r\n"
						  + L"2. Compact Mode - Reduces window size by hiding the Timers.\r\n"
						  + L"3. New Window - Starts a new instance of this program.\r\n"
						  + L"4. Instruction & About(About the Program) - Self Explanatory.";
					 break;
				 case 6:
					 return L"On the Image- Tray Icon and the Right-Click Menu with functions available there.";
					 break;
				 default:
					 return L"1. The Splash screen checks if the critical files are present when starting MultiKey.\r\n"
						  + L"2. Startup and Exit are recorded in MultiKey.Log in the program folder.\r\n"
						  + L"3. The log files can be cleaned from the settings page.\r\n"
						  + L"4. The background colour of the MultiKey Window can be changed from the settings.";
			 }
		 }
		 void titleUpdate(){
			 switch(this->tabControl1->SelectedIndex)
			 {
			 case 1: this->Text = L"CS-X MultiKey v2 :: Settings"; break;
			 case 2: this->Text = L"CS-X MultiKey v2 :: About this Program..."; break;
			 default: this->Text = L"CS-X MultiKey v2 :: Instructions";
			 }
		 }
		// Interface - More Settings - Minor Functions
private: System::Void Open_Log(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start( Application::StartupPath + "\\MultiKey.log" );
		 }
private: System::Void Open_Folder(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start( Application::StartupPath );
		 }
private: System::Void Clear_Log(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult d1 = MessageBox::Show(L"Do you really want to clear the log?",
				 L"Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 if ( d1 == System::Windows::Forms::DialogResult::Yes )
				 cl();
		 }
private: System::Void View_Old(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 String^ RecordName = L"ExitRecord.old";
			 if( File::Exists(Application::StartupPath + L"\\" + RecordName)){
				 StreamReader^ r2 = gcnew StreamReader(Application::StartupPath + L"\\" + RecordName);
				 String^ s1 = r2->ReadLine(); r2->Close(); delete r2;

				 if (s1 == L"MultiKey exited by the User."){
					 MessageBox::Show(L"MultiKey was exited by the User.",
						 L"Normal Exit",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 }
				 else if(s1 == L"Some critical files are missing. Quitting..."){
					 MessageBox::Show(L"MultiKey wasn't able to start last time, because some files were missing.",
						 L"Failed to start last time",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 } else {
					 MessageBox::Show(L"The Record was either found blank or with an unknown message.\r\nMultiKey might not have quit properly the last time.",
						 L"The record is not updated",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 }
				 delete s1;
			 } else {
				 MessageBox::Show(L"The record was not found in the program directory.",
					 L"File not found",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 }
		 }
		 void cl(){
			 if( File::Exists(Application::StartupPath + "\\MultiKey.log") ){
				 FileInfo^ fInfo = gcnew FileInfo(Application::StartupPath + "\\MultiKey.log");
				 if ( fInfo->IsReadOnly == true ) fInfo->IsReadOnly = false; delete fInfo;
				 
				 FileStream^ StLog = gcnew FileStream( Application::StartupPath + "\\MultiKey.log",
					 FileMode::Truncate, FileAccess::Write, FileShare::Write );
				 StLog->Close(); delete StLog;
				 MessageBox::Show(L"MultiKey.log has been cleared.",
					 L"Success",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 }
			 else{
				 MessageBox::Show(L"MultiKey.log was not found in the program directory.",
					 L"File not found",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 }
		 }
		// Load Specific
private: bool diagRes;
		 void valueInit(){
			 diagRes = false;
		 }
private: System::Void ash_Load(System::Object^  sender, System::EventArgs^  e) {  } 
public:  void prepare( short xTab, Color xCol, int xDMItime, bool xDSTI, bool xVO, bool xTrunc ){
			 if ( xTab >= this->tabControl1->TabCount ) xTab = 0;
			 this->tabControl1->SelectedIndex = xTab; titleUpdate();
			 updateHelp(0);
			 // Load Settings
			 this->ColorPanel->BackColor = xCol;
			 setDMI( xDMItime );
			 this->stDSTI->Checked = xDSTI;
			 this->stVO->Checked = xVO;
			 this->stTrunc->Checked = xTrunc;
		 }
		 void setDMI(int xInput){
			 this->stDMItime->Value = xInput;
			 if ( xInput == 0 ) this->stDMI->Checked = false;
			 else this->stDMI->Checked = true; 
		 }
private: System::Void Restore_Defaults(System::Object^  sender, System::EventArgs^  e) {
			 this->ColorPanel->BackColor = Color::WhiteSmoke;
			 setDMI(0);
			 this->stDSTI->Checked = false;
			 this->stTrunc->Checked = false;
			 this->stVO->Checked = false;
		 }
		 // Settings Specific
private: System::Void Choose_Color(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {cc();}
private: System::Void Choose_Colour(System::Object^  sender, System::EventArgs^  e) {cc();}
		 void cc(){			 
			 this->colorDialog1->Color = this->ColorPanel->BackColor;
			 this->colorDialog1->ShowDialog();
			 this->ColorPanel->BackColor = this->colorDialog1->Color;
		 }
private: System::Void stDMI_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if( this->stDMI->Checked == false ) this->stDMItime->Value = 0;		 
		 }
private: System::Void stDMItime_Value_Changed(System::Object^  sender, System::EventArgs^  e) {
			 if( this->stDMItime->Value == 0 ) this->stDMI->Checked = false;
			 else this->stDMI->Checked = true;
		 }
		 // Retrieve methods for settings header
public:	 bool getTruncBool(){ return this->stTrunc->Checked; }
		 bool getDSTIBool(){ return this->stDSTI->Checked; }
		 int getDMItime(){ return this->stDMItime->Value; }
		 Color getColor(){ return this->ColorPanel->BackColor; }
		 bool getDialogResult(){ return diagRes; }
		 bool getVO(){ return this->stVO->Checked; }
};
}
