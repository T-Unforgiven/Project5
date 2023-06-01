#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyDialog
	/// </summary>
	public ref class MyDialog : public System::Windows::Forms::Form
	{
	public:
		MyDialog(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbSinger;
	private: System::Windows::Forms::TextBox^ tbGenre1;


	private: System::Windows::Forms::TextBox^ tbTime;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ tbGenre;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbSinger = (gcnew System::Windows::Forms::TextBox());
			this->tbGenre1 = (gcnew System::Windows::Forms::TextBox());
			this->tbTime = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbGenre = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(27, 236);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(125, 51);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyDialog::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(415, 236);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(125, 51);
			this->btnCancel->TabIndex = 1;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyDialog::btnCancel_Click);
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(12, 124);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(100, 22);
			this->tbName->TabIndex = 2;
			// 
			// tbSinger
			// 
			this->tbSinger->Location = System::Drawing::Point(177, 124);
			this->tbSinger->Name = L"tbSinger";
			this->tbSinger->Size = System::Drawing::Size(100, 22);
			this->tbSinger->TabIndex = 3;
			// 
			// tbGenre1
			// 
			this->tbGenre1->Location = System::Drawing::Point(709, 236);
			this->tbGenre1->Name = L"tbGenre1";
			this->tbGenre1->Size = System::Drawing::Size(100, 22);
			this->tbGenre1->TabIndex = 4;
			// 
			// tbTime
			// 
			this->tbTime->Location = System::Drawing::Point(484, 124);
			this->tbTime->Name = L"tbTime";
			this->tbTime->Size = System::Drawing::Size(100, 22);
			this->tbTime->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(174, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Исполнитель";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(351, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Жанр";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(485, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Длительность";
			// 
			// tbGenre
			// 
			this->tbGenre->FormattingEnabled = true;
			this->tbGenre->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Металл", L"Поп", L"Вокал", L"Рэп" });
			this->tbGenre->Location = System::Drawing::Point(317, 122);
			this->tbGenre->Name = L"tbGenre";
			this->tbGenre->Size = System::Drawing::Size(121, 24);
			this->tbGenre->TabIndex = 10;
			// 
			// MyDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 355);
			this->Controls->Add(this->tbGenre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbTime);
			this->Controls->Add(this->tbGenre1);
			this->Controls->Add(this->tbSinger);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Name = L"MyDialog";
			this->Text = L"MyDialog";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		DialogResult = System::Windows::Forms::DialogResult::OK;
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	DialogResult = System::Windows::Forms::DialogResult::Cancel;
}
	   public:

	   void SettbName(String^ msg) {
		   tbName->Text = msg;
	   }

	   void SettbSinger(String^ msg) {
		   tbSinger->Text = msg;
	   }

	   void SettbGenre(String^ msg) {
		   tbGenre->Text = msg;
	   }

	   void SettbTime(String^ msg) {
		   tbTime->Text = msg;
	   }

	   String^ GetName() {
		   return tbName->Text;
	   }

	   String^ GetSinger() {
		   return tbSinger->Text;
	   }

	   String^ GetGenre() {
		   return tbGenre->Text;
	   }

	   String^ GetTime() {
		   return tbTime->Text;
	   }


};
}
