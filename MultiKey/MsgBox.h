#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace MultiKey {

	/// <summary>
	/// Summary for MsgBox
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class MsgBox : public System::Windows::Forms::Form
	{
	public:
		MsgBox(void)
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
		~MsgBox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ImageList^  imageList1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MsgBox::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(388, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MsgBox::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(282, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MsgBox::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 109);
			this->panel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(94, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(394, 64);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(24, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 64);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(176, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MsgBox::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(70, 115);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MsgBox::button4_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"MsgError.png");
			this->imageList1->Images->SetKeyName(1, L"MsgInfo.png");
			this->imageList1->Images->SetKeyName(2, L"MsgQuery.png");
			this->imageList1->Images->SetKeyName(3, L"MsgWarn.png");
			// 
			// MsgBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(500, 150);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MsgBox";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"MsgBox";
			this->Load += gcnew System::EventHandler(this, &MsgBox::MsgBox_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private:short res, aud;
		void valueInit(){res = 0; aud = 0;}
		void DR(short xInput){
			res = xInput;
			this->Close();
		}
public: void prepare(String^ xText, String^ xTitle, short xIcon, String^ xButton0, String^ xButton1, String^ xButton2, String^ xButton3){
			setText(xText); delete xText; setTitle(xTitle); delete xTitle; setImage(xIcon);
			this->button1->Visible = true; this->button1->Text = xButton0; delete xButton0;
			this->button2->Visible = true; this->button2->Text = xButton1; delete xButton1;
			this->button3->Visible = true; this->button3->Text = xButton2; delete xButton2;
			this->button4->Visible = true; this->button4->Text = xButton3; delete xButton3;
		}
		void prepare(String^ xText, String^ xTitle, short xIcon, String^ xButton0, String^ xButton1, String^ xButton2){
			setText(xText); delete xText; setTitle(xTitle); delete xTitle; setImage(xIcon);
			this->button1->Visible = true; this->button1->Text = xButton0; delete xButton0;
			this->button2->Visible = true; this->button2->Text = xButton1; delete xButton1;
			this->button3->Visible = true; this->button3->Text = xButton2; delete xButton2;
			this->button4->Visible = false;
		}
		void prepare(String^ xText, String^ xTitle, short xIcon, String^ xButton0, String^ xButton1){
			setText(xText); delete xText; setTitle(xTitle); delete xTitle; setImage(xIcon);
			this->button1->Visible = true; this->button1->Text = xButton0; delete xButton0;
			this->button2->Visible = true; this->button2->Text = xButton1; delete xButton1;
			this->button3->Visible = false;	this->button4->Visible = false;
		}
		void prepare(String^ xText, String^ xTitle, short xIcon, String^ xButton0){
			setText(xText); delete xText; setTitle(xTitle); delete xTitle; setImage(xIcon);
			this->button1->Visible = true; this->button1->Text = xButton0; delete xButton0;
			this->button2->Visible = false;	this->button3->Visible = false;	this->button4->Visible = false;
		}
		short getResultINT(){ return res; }
		bool getResultBool(){ if( res == 0 ) return false; else return true; }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { DR(0); }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { DR(1); }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { DR(2); }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { DR(3); }
		 void setTitle(String^ xInput){ this->Text = xInput; delete xInput;}
		 void setText(String^ xInput){ this->label1->Text = xInput; delete xInput;}
		 void setImage(short xInput){ this->pictureBox1->Image = this->imageList1->Images[xInput]; aud = xInput; }
private: System::Void MsgBox_Load(System::Object^  sender, System::EventArgs^  e) {
			 switch(aud)
			 {
			 case 1: System::Media::SystemSounds::Exclamation->Play(); break;
			 case 2: System::Media::SystemSounds::Question->Play(); break;
			 case 3: System::Media::SystemSounds::Asterisk->Play(); break;
			 default: System::Media::SystemSounds::Hand->Play();
			 }			 
		 }
};
}
