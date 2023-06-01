#pragma once

#include "MyDialog.h"

namespace Project5 {
	using namespace System::Runtime::InteropServices;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			dgw1->RowCount = 1;
			dlg = gcnew MyDialog();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::OpenFileDialog^ ofd1;
	protected:

	private: System::Windows::Forms::DataGridView^ dgw1;





	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSort;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ tb1;







	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name228;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Singer;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Genre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btnAppend;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hasagiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wgvbToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lcmToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hahaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ heheToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ sfd1;
	private: System::Windows::Forms::Button^ btnApp;
	private: System::Windows::Forms::Button^ btnAddsong;
	private: System::Windows::Forms::Button^ btnChange;
	private: System::Windows::Forms::Label^ label2;





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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hasagiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wgvbToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lcmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hahaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->heheToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ofd1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dgw1 = (gcnew System::Windows::Forms::DataGridView());
			this->Name228 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Singer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Genre = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSort = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAppend = (gcnew System::Windows::Forms::Button());
			this->sfd1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btnApp = (gcnew System::Windows::Forms::Button());
			this->btnAddsong = (gcnew System::Windows::Forms::Button());
			this->btnChange = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->openToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 517);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(738, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(14, 24);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->hasagiToolStripMenuItem,
					this->hahaToolStripMenuItem, this->heheToolStripMenuItem
			});
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->openToolStripMenuItem->Text = L"file";
			// 
			// hasagiToolStripMenuItem
			// 
			this->hasagiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->wgvbToolStripMenuItem,
					this->lcmToolStripMenuItem
			});
			this->hasagiToolStripMenuItem->Name = L"hasagiToolStripMenuItem";
			this->hasagiToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->hasagiToolStripMenuItem->Text = L"Save";
			// 
			// wgvbToolStripMenuItem
			// 
			this->wgvbToolStripMenuItem->Name = L"wgvbToolStripMenuItem";
			this->wgvbToolStripMenuItem->Size = System::Drawing::Size(141, 26);
			this->wgvbToolStripMenuItem->Text = L"Save";
			this->wgvbToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::wgvbToolStripMenuItem_Click);
			// 
			// lcmToolStripMenuItem
			// 
			this->lcmToolStripMenuItem->Name = L"lcmToolStripMenuItem";
			this->lcmToolStripMenuItem->Size = System::Drawing::Size(141, 26);
			this->lcmToolStripMenuItem->Text = L"Save as";
			this->lcmToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lcmToolStripMenuItem_Click);
			// 
			// hahaToolStripMenuItem
			// 
			this->hahaToolStripMenuItem->Name = L"hahaToolStripMenuItem";
			this->hahaToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->hahaToolStripMenuItem->Text = L"Open";
			this->hahaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hahaToolStripMenuItem_Click);
			// 
			// heheToolStripMenuItem
			// 
			this->heheToolStripMenuItem->Name = L"heheToolStripMenuItem";
			this->heheToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->heheToolStripMenuItem->Text = L"Exit";
			this->heheToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::heheToolStripMenuItem_Click);
			// 
			// ofd1
			// 
			this->ofd1->FileName = L"ofd1";
			// 
			// dgw1
			// 
			this->dgw1->AllowUserToAddRows = false;
			this->dgw1->ColumnHeadersHeight = 29;
			this->dgw1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Name228, this->Singer,
					this->Genre, this->Time
			});
			this->dgw1->Location = System::Drawing::Point(12, 27);
			this->dgw1->Name = L"dgw1";
			this->dgw1->RowHeadersWidth = 51;
			this->dgw1->RowTemplate->Height = 24;
			this->dgw1->Size = System::Drawing::Size(734, 311);
			this->dgw1->TabIndex = 1;
			// 
			// Name228
			// 
			this->Name228->HeaderText = L"Название";
			this->Name228->MinimumWidth = 6;
			this->Name228->Name = L"Name228";
			this->Name228->Width = 125;
			// 
			// Singer
			// 
			this->Singer->HeaderText = L"Исполнитель";
			this->Singer->MinimumWidth = 6;
			this->Singer->Name = L"Singer";
			this->Singer->Width = 125;
			// 
			// Genre
			// 
			this->Genre->HeaderText = L"Жанр";
			this->Genre->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Металл", L"Поп", L"Вокал", L"Рэп" });
			this->Genre->MinimumWidth = 6;
			this->Genre->Name = L"Genre";
			this->Genre->Width = 125;
			// 
			// Time
			// 
			this->Time->HeaderText = L"Длительность";
			this->Time->MinimumWidth = 6;
			this->Time->Name = L"Time";
			this->Time->Width = 125;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(12, 392);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(156, 23);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"Добавить перед";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnSort
			// 
			this->btnSort->Location = System::Drawing::Point(12, 421);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(156, 23);
			this->btnSort->TabIndex = 3;
			this->btnSort->Text = L"Сортировка";
			this->btnSort->UseVisualStyleBackColor = true;
			this->btnSort->Click += gcnew System::EventHandler(this, &MyForm::btnSort_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(12, 450);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(156, 23);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"Найти исполнителя";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(12, 479);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(156, 22);
			this->tb1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 460);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 6;
			// 
			// btnAppend
			// 
			this->btnAppend->Location = System::Drawing::Point(12, 363);
			this->btnAppend->Name = L"btnAppend";
			this->btnAppend->Size = System::Drawing::Size(156, 23);
			this->btnAppend->TabIndex = 8;
			this->btnAppend->Text = L"Добавить строку";
			this->btnAppend->UseVisualStyleBackColor = true;
			this->btnAppend->Click += gcnew System::EventHandler(this, &MyForm::btnAppend_Click);
			// 
			// btnApp
			// 
			this->btnApp->Location = System::Drawing::Point(499, 392);
			this->btnApp->Name = L"btnApp";
			this->btnApp->Size = System::Drawing::Size(204, 23);
			this->btnApp->TabIndex = 9;
			this->btnApp->Text = L"Добавить композицию";
			this->btnApp->UseVisualStyleBackColor = true;
			this->btnApp->Click += gcnew System::EventHandler(this, &MyForm::btnApp_Click);
			// 
			// btnAddsong
			// 
			this->btnAddsong->Location = System::Drawing::Point(499, 421);
			this->btnAddsong->Name = L"btnAddsong";
			this->btnAddsong->Size = System::Drawing::Size(204, 23);
			this->btnAddsong->TabIndex = 10;
			this->btnAddsong->Text = L"Вставить композицию";
			this->btnAddsong->UseVisualStyleBackColor = true;
			this->btnAddsong->Click += gcnew System::EventHandler(this, &MyForm::btnAddsong_Click);
			// 
			// btnChange
			// 
			this->btnChange->Location = System::Drawing::Point(499, 450);
			this->btnChange->Name = L"btnChange";
			this->btnChange->Size = System::Drawing::Size(204, 23);
			this->btnChange->TabIndex = 11;
			this->btnChange->Text = L"Редактировать композицию";
			this->btnChange->UseVisualStyleBackColor = true;
			this->btnChange->Click += gcnew System::EventHandler(this, &MyForm::btnChange_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(577, 366);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"NEW!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 545);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnChange);
			this->Controls->Add(this->btnAddsong);
			this->Controls->Add(this->btnApp);
			this->Controls->Add(this->btnAppend);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnSort);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgw1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		MyDialog^ dlg;
		int size;
		bool open = false, save = false;

		int GetMax() {
			if (dgw1->Rows[dgw1->RowCount - 1]->Cells[0]->Value == nullptr) {
				dgw1->Rows->RemoveAt(dgw1->RowCount - 1);
				dgw1->Refresh();
			}
			int max = 0;
			for (int i = 0; i < size; i++) {
				if (System::Convert::ToDouble(dgw1->Rows[i]->Cells[3]->Value) > System::Convert::ToDouble(dgw1->Rows[max]->Cells[3]->Value)) {
					max = i;
				}
			}
			return max;
		}

		void Selectionsort() {
			while (size > 0) {
				int index = GetMax();
				for (int i = 0; i < 4; i++) {
					String^ p = System::Convert::ToString(dgw1->Rows[size - 1]->Cells[i]->Value);
					dgw1->Rows[size - 1]->Cells[i]->Value = dgw1->Rows[index]->Cells[i]->Value;
					dgw1->Rows[index]->Cells[i]->Value = p;
				}
				size--;
			}
		}

	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {

	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		int count = dgw1->CurrentCell->RowIndex;
		dgw1->RowCount++;
		for (int j = dgw1->RowCount - 1; j > count; j--) {
			for (int i = 0; i < 4; i++) {
				dgw1->Rows[j]->Cells[i]->Value = dgw1->Rows[j-1]->Cells[i]->Value;
			}
		}
		for (int i = 0; i < 4; i++) {
			dgw1->Rows[count]->Cells[i]->Value = "";
		}
	}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e) {
	size = dgw1->RowCount;
	Selectionsort();
}
private: System::Void btnAppend_Click(System::Object^ sender, System::EventArgs^ e) {
	dgw1->RowCount++;
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ s = "";
	for (int i = 0; i < dgw1->RowCount; i++) {
		if (System::Convert::ToString(dgw1->Rows[i]->Cells[1]->Value) == tb1->Text) {
			s += System::Convert::ToString(dgw1->Rows[i]->Cells[0]->Value);
			s += " ";
			s += System::Convert::ToString(dgw1->Rows[i]->Cells[1]->Value);
			s += " ";
			s += System::Convert::ToString(dgw1->Rows[i]->Cells[2]->Value);
			s += " ";
			s += System::Convert::ToString(dgw1->Rows[i]->Cells[3]->Value);
			s += " *** ";
		}
	}
	if (s == "") {
		s = "Совпадений не найдено";
	}
	MessageBox::Show(s);
}
private: System::Void heheToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void hahaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ofd1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ filename = ofd1->FileName;
		IO::StreamReader^ din = IO::File::OpenText(filename);
		String^ str;
		int i = 0, j = 0;
		int count = 0;
		dgw1->RowCount = 1;
		while ((str = din->ReadLine()) != nullptr) {
			if (str == "")
				continue;
			dgw1->Rows[i]->Cells[j]->Value = str;
			j++;
			count++;
			if (count == 4) {
				dgw1->RowCount++;
				i++;
				j = 0;
				count = 0;
			}
		}
		open = true;
		save = false;
		dgw1->RowCount--;
		din->Close();
	}
}
private: System::Void wgvbToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName;
	if (!open && !save) {
		if (sfd1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			fileName = sfd1->FileName;
			IO::StreamWriter^ sw = gcnew IO::StreamWriter(fileName);
			for (int i = 0; i < dgw1->RowCount; i++) {
				for (int j = 0; j < 4; j++) {
					String^ s1 = System::Convert::ToString(dgw1->Rows[i]->Cells[j]->Value);
					sw->WriteLine(s1);
					sw->WriteLine("\n");
				}
			}
			sw->Close();
		}
	}
	else {
		if(open)
			fileName = ofd1->FileName;
		if (save)
			fileName = sfd1->FileName;
		IO::StreamWriter^ sw = gcnew IO::StreamWriter(fileName);
		for (int i = 0; i < dgw1->RowCount; i++) {
			for (int j = 0; j < 4; j++) {
				String^ s1 = System::Convert::ToString(dgw1->Rows[i]->Cells[j]->Value);
				sw->WriteLine(s1);
				sw->WriteLine("\n");
			}
		}
		sw->Close();
	}
}
private: System::Void lcmToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sfd1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileName = sfd1->FileName;
		IO::StreamWriter^ sw = gcnew IO::StreamWriter(fileName);
		for (int i = 0; i < dgw1->RowCount; i++) {
			for (int j = 0; j < 4; j++) {
				String^ s1 = System::Convert::ToString(dgw1->Rows[i]->Cells[j]->Value);
				sw->WriteLine(s1);
				sw->WriteLine("\n");
			}
		}
		sw->Close();
		save = true;
		open = false;
	}
}
private: System::Void btnApp_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		dgw1->RowCount++;
		dgw1->Rows[dgw1->RowCount - 1]->Cells[0]->Value = dlg->GetName();
		dgw1->Rows[dgw1->RowCount - 1]->Cells[1]->Value = dlg->GetSinger();
		dgw1->Rows[dgw1->RowCount - 1]->Cells[2]->Value = dlg->GetGenre();
		dgw1->Rows[dgw1->RowCount - 1]->Cells[3]->Value = dlg->GetTime();
	}
	dlg->SettbName("");
	dlg->SettbGenre("");
	dlg->SettbSinger("");
	dlg->SettbTime("");
}
private: System::Void btnAddsong_Click(System::Object^ sender, System::EventArgs^ e) {
	int count = dgw1->CurrentCell->RowIndex;
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		dgw1->RowCount++;
		for (int j = dgw1->RowCount - 1; j > count; j--) {
			for (int i = 0; i < 4; i++) {
				dgw1->Rows[j]->Cells[i]->Value = dgw1->Rows[j - 1]->Cells[i]->Value;
			}
		}
		dgw1->Rows[count]->Cells[0]->Value = dlg->GetName();
		dgw1->Rows[count]->Cells[1]->Value = dlg->GetSinger();
		dgw1->Rows[count]->Cells[2]->Value = dlg->GetGenre();
		dgw1->Rows[count]->Cells[3]->Value = dlg->GetTime();
	}
	dlg->SettbName("");
	dlg->SettbGenre("");
	dlg->SettbSinger("");
	dlg->SettbTime("");
}
private: System::Void btnChange_Click(System::Object^ sender, System::EventArgs^ e) {
	int count = dgw1->CurrentCell->RowIndex;
	dlg->SettbName(System::Convert::ToString(dgw1->Rows[count]->Cells[0]->Value));
	dlg->SettbGenre(System::Convert::ToString(dgw1->Rows[count]->Cells[2]->Value));
	dlg->SettbSinger(System::Convert::ToString(dgw1->Rows[count]->Cells[1]->Value));
	dlg->SettbTime(System::Convert::ToString(dgw1->Rows[count]->Cells[3]->Value));
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		dgw1->Rows[count]->Cells[0]->Value = dlg->GetName();
		dgw1->Rows[count]->Cells[1]->Value = dlg->GetSinger();
		dgw1->Rows[count]->Cells[2]->Value = dlg->GetGenre();
		dgw1->Rows[count]->Cells[3]->Value = dlg->GetTime();
	}
	dlg->SettbName("");
	dlg->SettbGenre("");
	dlg->SettbSinger("");
	dlg->SettbTime("");
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
