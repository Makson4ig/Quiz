#pragma once
#include <string>
#include "Question.h"
#include <iostream>
#include <thread>
#include "Question.h"
#include <fstream>
#include <io.h>

namespace Quiz
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для QuizForm
	/// </summary>
	public ref class QuizForm : public System::Windows::Forms::Form
	{
	public:
		QuizForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~QuizForm()
		{
			if (components)
			{
				delete components;
			}
			
		}


		protected:





		private: System::Windows::Forms::Label^ QuestionLabel;




		private: System::Windows::Forms::Button^ NextQuestionButton;
		private: System::Windows::Forms::Button^ CompleteTestButton;
		private:Question* question = new Question();
	private: System::Windows::Forms::Label^ ScoreLabel;
	private: System::Windows::Forms::Label^ FinalLabel;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ buttonTeoria;
	private: System::Windows::Forms::Button^ buttonPract;
	private: System::Windows::Forms::Button^ buttonMenu;
	private: System::Windows::Forms::Label^ ScrolLabel1;
	private: System::Windows::Forms::Label^ ScrolLabel2;
	private: System::Windows::Forms::Label^ ScrolLabel4;
	private: System::Windows::Forms::Label^ ScrolLabel3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ Answerlabel1;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;




		private:
			/// <summary>
			/// Обязательная переменная конструктора.
			/// </summary>
			System::ComponentModel::Container^ components;
	
	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Требуемый метод для поддержки конструктора — не изменяйте 
			/// содержимое этого метода с помощью редактора кода.
			/// </summary>
			void InitializeComponent(void)
		{
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(QuizForm::typeid));
				this->QuestionLabel = (gcnew System::Windows::Forms::Label());
				this->NextQuestionButton = (gcnew System::Windows::Forms::Button());
				this->CompleteTestButton = (gcnew System::Windows::Forms::Button());
				this->ScoreLabel = (gcnew System::Windows::Forms::Label());
				this->FinalLabel = (gcnew System::Windows::Forms::Label());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
				this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
				this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
				this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
				this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
				this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
				this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
				this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
				this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
				this->buttonTeoria = (gcnew System::Windows::Forms::Button());
				this->buttonPract = (gcnew System::Windows::Forms::Button());
				this->buttonMenu = (gcnew System::Windows::Forms::Button());
				this->ScrolLabel1 = (gcnew System::Windows::Forms::Label());
				this->ScrolLabel2 = (gcnew System::Windows::Forms::Label());
				this->ScrolLabel4 = (gcnew System::Windows::Forms::Label());
				this->ScrolLabel3 = (gcnew System::Windows::Forms::Label());
				this->listBox1 = (gcnew System::Windows::Forms::ListBox());
				this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
				this->Answerlabel1 = (gcnew System::Windows::Forms::Label());
				this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
				this->SuspendLayout();
				// 
				// QuestionLabel
				// 
				this->QuestionLabel->AutoSize = true;
				this->QuestionLabel->BackColor = System::Drawing::SystemColors::ControlDark;
				this->QuestionLabel->Cursor = System::Windows::Forms::Cursors::Default;
				this->QuestionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->QuestionLabel->Location = System::Drawing::Point(23, 34);
				this->QuestionLabel->MaximumSize = System::Drawing::Size(600, 400);
				this->QuestionLabel->Name = L"QuestionLabel";
				this->QuestionLabel->Size = System::Drawing::Size(60, 24);
				this->QuestionLabel->TabIndex = 5;
				this->QuestionLabel->Text = L"label1";
				// 
				// NextQuestionButton
				// 
				this->NextQuestionButton->BackColor = System::Drawing::SystemColors::Control;
				this->NextQuestionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->NextQuestionButton->Location = System::Drawing::Point(24, 337);
				this->NextQuestionButton->Name = L"NextQuestionButton";
				this->NextQuestionButton->Size = System::Drawing::Size(215, 33);
				this->NextQuestionButton->TabIndex = 10;
				this->NextQuestionButton->Text = L"Следующий вопрос";
				this->NextQuestionButton->UseVisualStyleBackColor = false;
				this->NextQuestionButton->Click += gcnew System::EventHandler(this, &QuizForm::NextQuestionButton_Click);
				// 
				// CompleteTestButton
				// 
				this->CompleteTestButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->CompleteTestButton->Location = System::Drawing::Point(259, 337);
				this->CompleteTestButton->Name = L"CompleteTestButton";
				this->CompleteTestButton->Size = System::Drawing::Size(215, 33);
				this->CompleteTestButton->TabIndex = 11;
				this->CompleteTestButton->Text = L"Завершить тест";
				this->CompleteTestButton->UseVisualStyleBackColor = true;
				this->CompleteTestButton->Click += gcnew System::EventHandler(this, &QuizForm::CompleteTestButton_Click);
				// 
				// ScoreLabel
				// 
				this->ScoreLabel->AutoSize = true;
				this->ScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
				this->ScoreLabel->Location = System::Drawing::Point(495, 341);
				this->ScoreLabel->Name = L"ScoreLabel";
				this->ScoreLabel->Size = System::Drawing::Size(0, 24);
				this->ScoreLabel->TabIndex = 12;
				// 
				// FinalLabel
				// 
				this->FinalLabel->AutoSize = true;
				this->FinalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
				this->FinalLabel->Location = System::Drawing::Point(209, 180);
				this->FinalLabel->Name = L"FinalLabel";
				this->FinalLabel->Size = System::Drawing::Size(0, 24);
				this->FinalLabel->TabIndex = 13;
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(196, 256);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(146, 22);
				this->textBox1->TabIndex = 14;
				// 
				// checkBox1
				// 
				this->checkBox1->AutoSize = true;
				this->checkBox1->Location = System::Drawing::Point(24, 77);
				this->checkBox1->Name = L"checkBox1";
				this->checkBox1->Size = System::Drawing::Size(98, 21);
				this->checkBox1->TabIndex = 15;
				this->checkBox1->Text = L"checkBox1";
				this->checkBox1->UseVisualStyleBackColor = true;
				// 
				// checkBox2
				// 
				this->checkBox2->AutoSize = true;
				this->checkBox2->Location = System::Drawing::Point(24, 104);
				this->checkBox2->Name = L"checkBox2";
				this->checkBox2->Size = System::Drawing::Size(98, 21);
				this->checkBox2->TabIndex = 17;
				this->checkBox2->Text = L"checkBox2";
				this->checkBox2->UseVisualStyleBackColor = true;
				// 
				// checkBox3
				// 
				this->checkBox3->AutoSize = true;
				this->checkBox3->Location = System::Drawing::Point(24, 158);
				this->checkBox3->Name = L"checkBox3";
				this->checkBox3->Size = System::Drawing::Size(98, 21);
				this->checkBox3->TabIndex = 19;
				this->checkBox3->Text = L"checkBox3";
				this->checkBox3->UseVisualStyleBackColor = true;
				// 
				// checkBox4
				// 
				this->checkBox4->AutoSize = true;
				this->checkBox4->Location = System::Drawing::Point(24, 131);
				this->checkBox4->Name = L"checkBox4";
				this->checkBox4->Size = System::Drawing::Size(98, 21);
				this->checkBox4->TabIndex = 21;
				this->checkBox4->Text = L"checkBox4";
				this->checkBox4->UseVisualStyleBackColor = true;
				// 
				// radioButton1
				// 
				this->radioButton1->AutoSize = true;
				this->radioButton1->Location = System::Drawing::Point(138, 76);
				this->radioButton1->Name = L"radioButton1";
				this->radioButton1->Size = System::Drawing::Size(110, 21);
				this->radioButton1->TabIndex = 22;
				this->radioButton1->TabStop = true;
				this->radioButton1->Text = L"radioButton1";
				this->radioButton1->UseVisualStyleBackColor = true;
				// 
				// radioButton2
				// 
				this->radioButton2->AutoSize = true;
				this->radioButton2->Location = System::Drawing::Point(138, 104);
				this->radioButton2->Name = L"radioButton2";
				this->radioButton2->Size = System::Drawing::Size(110, 21);
				this->radioButton2->TabIndex = 23;
				this->radioButton2->TabStop = true;
				this->radioButton2->Text = L"radioButton2";
				this->radioButton2->UseVisualStyleBackColor = true;
				// 
				// radioButton3
				// 
				this->radioButton3->AutoSize = true;
				this->radioButton3->Location = System::Drawing::Point(138, 131);
				this->radioButton3->Name = L"radioButton3";
				this->radioButton3->Size = System::Drawing::Size(110, 21);
				this->radioButton3->TabIndex = 24;
				this->radioButton3->TabStop = true;
				this->radioButton3->Text = L"radioButton3";
				this->radioButton3->UseVisualStyleBackColor = true;
				// 
				// radioButton4
				// 
				this->radioButton4->AutoSize = true;
				this->radioButton4->Location = System::Drawing::Point(138, 158);
				this->radioButton4->Name = L"radioButton4";
				this->radioButton4->Size = System::Drawing::Size(110, 21);
				this->radioButton4->TabIndex = 25;
				this->radioButton4->TabStop = true;
				this->radioButton4->Text = L"radioButton4";
				this->radioButton4->UseVisualStyleBackColor = true;
				// 
				// comboBox1
				// 
				this->comboBox1->FormattingEnabled = true;
				this->comboBox1->Location = System::Drawing::Point(387, 216);
				this->comboBox1->Name = L"comboBox1";
				this->comboBox1->Size = System::Drawing::Size(121, 24);
				this->comboBox1->TabIndex = 26;
				// 
				// checkedListBox1
				// 
				this->checkedListBox1->FormattingEnabled = true;
				this->checkedListBox1->Location = System::Drawing::Point(27, 216);
				this->checkedListBox1->Name = L"checkedListBox1";
				this->checkedListBox1->Size = System::Drawing::Size(146, 89);
				this->checkedListBox1->TabIndex = 28;
				// 
				// buttonTeoria
				// 
				this->buttonTeoria->Location = System::Drawing::Point(24, 337);
				this->buttonTeoria->Name = L"buttonTeoria";
				this->buttonTeoria->Size = System::Drawing::Size(215, 33);
				this->buttonTeoria->TabIndex = 30;
				this->buttonTeoria->Text = L"Теоритическая часть";
				this->buttonTeoria->UseVisualStyleBackColor = true;
				this->buttonTeoria->Click += gcnew System::EventHandler(this, &QuizForm::buttonTeoria_Click);
				// 
				// buttonPract
				// 
				this->buttonPract->Location = System::Drawing::Point(259, 337);
				this->buttonPract->Name = L"buttonPract";
				this->buttonPract->Size = System::Drawing::Size(215, 33);
				this->buttonPract->TabIndex = 31;
				this->buttonPract->Text = L"Практическая часть";
				this->buttonPract->UseVisualStyleBackColor = true;
				this->buttonPract->Click += gcnew System::EventHandler(this, &QuizForm::buttonPract_Click);
				// 
				// buttonMenu
				// 
				this->buttonMenu->Location = System::Drawing::Point(612, 2);
				this->buttonMenu->Name = L"buttonMenu";
				this->buttonMenu->Size = System::Drawing::Size(102, 33);
				this->buttonMenu->TabIndex = 32;
				this->buttonMenu->Text = L"В меню";
				this->buttonMenu->UseVisualStyleBackColor = true;
				this->buttonMenu->Click += gcnew System::EventHandler(this, &QuizForm::buttonMenu_Click);
				// 
				// ScrolLabel1
				// 
				this->ScrolLabel1->AutoSize = true;
				this->ScrolLabel1->Location = System::Drawing::Point(254, 78);
				this->ScrolLabel1->Name = L"ScrolLabel1";
				this->ScrolLabel1->Size = System::Drawing::Size(46, 17);
				this->ScrolLabel1->TabIndex = 33;
				this->ScrolLabel1->Text = L"label1";
				// 
				// ScrolLabel2
				// 
				this->ScrolLabel2->AutoSize = true;
				this->ScrolLabel2->Location = System::Drawing::Point(254, 106);
				this->ScrolLabel2->Name = L"ScrolLabel2";
				this->ScrolLabel2->Size = System::Drawing::Size(46, 17);
				this->ScrolLabel2->TabIndex = 34;
				this->ScrolLabel2->Text = L"label1";
				// 
				// ScrolLabel4
				// 
				this->ScrolLabel4->AutoSize = true;
				this->ScrolLabel4->Location = System::Drawing::Point(254, 162);
				this->ScrolLabel4->Name = L"ScrolLabel4";
				this->ScrolLabel4->Size = System::Drawing::Size(46, 17);
				this->ScrolLabel4->TabIndex = 35;
				this->ScrolLabel4->Text = L"label1";
				// 
				// ScrolLabel3
				// 
				this->ScrolLabel3->AutoSize = true;
				this->ScrolLabel3->Location = System::Drawing::Point(254, 133);
				this->ScrolLabel3->Name = L"ScrolLabel3";
				this->ScrolLabel3->Size = System::Drawing::Size(46, 17);
				this->ScrolLabel3->TabIndex = 36;
				this->ScrolLabel3->Text = L"label1";
				// 
				// listBox1
				// 
				this->listBox1->FormattingEnabled = true;
				this->listBox1->ItemHeight = 16;
				this->listBox1->Location = System::Drawing::Point(533, 216);
				this->listBox1->Name = L"listBox1";
				this->listBox1->Size = System::Drawing::Size(145, 100);
				this->listBox1->TabIndex = 37;
				// 
				// trackBar1
				// 
				this->trackBar1->LargeChange = 1;
				this->trackBar1->Location = System::Drawing::Point(387, 256);
				this->trackBar1->Maximum = 4;
				this->trackBar1->Name = L"trackBar1";
				this->trackBar1->Size = System::Drawing::Size(121, 56);
				this->trackBar1->TabIndex = 38;
				this->trackBar1->Value = 1;
				this->trackBar1->Scroll += gcnew System::EventHandler(this, &QuizForm::trackBar1_Scroll);
				// 
				// Answerlabel1
				// 
				this->Answerlabel1->AutoSize = true;
				this->Answerlabel1->Location = System::Drawing::Point(193, 256);
				this->Answerlabel1->Name = L"Answerlabel1";
				this->Answerlabel1->Size = System::Drawing::Size(52, 17);
				this->Answerlabel1->TabIndex = 39;
				this->Answerlabel1->Text = L"Ответ:";
				// 
				// hScrollBar1
				// 
				this->hScrollBar1->LargeChange = 1;
				this->hScrollBar1->Location = System::Drawing::Point(196, 216);
				this->hScrollBar1->Maximum = 4;
				this->hScrollBar1->Name = L"hScrollBar1";
				this->hScrollBar1->Size = System::Drawing::Size(146, 23);
				this->hScrollBar1->TabIndex = 40;
				this->hScrollBar1->Value = 1;
				this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &QuizForm::hScrollBar1_Scroll);
				// 
				// QuizForm
				// 
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->ClientSize = System::Drawing::Size(716, 398);
				this->Controls->Add(this->hScrollBar1);
				this->Controls->Add(this->Answerlabel1);
				this->Controls->Add(this->trackBar1);
				this->Controls->Add(this->listBox1);
				this->Controls->Add(this->ScrolLabel3);
				this->Controls->Add(this->ScrolLabel4);
				this->Controls->Add(this->ScrolLabel2);
				this->Controls->Add(this->ScrolLabel1);
				this->Controls->Add(this->buttonMenu);
				this->Controls->Add(this->buttonPract);
				this->Controls->Add(this->buttonTeoria);
				this->Controls->Add(this->checkedListBox1);
				this->Controls->Add(this->comboBox1);
				this->Controls->Add(this->radioButton4);
				this->Controls->Add(this->radioButton3);
				this->Controls->Add(this->radioButton2);
				this->Controls->Add(this->radioButton1);
				this->Controls->Add(this->checkBox4);
				this->Controls->Add(this->checkBox3);
				this->Controls->Add(this->checkBox2);
				this->Controls->Add(this->checkBox1);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->FinalLabel);
				this->Controls->Add(this->ScoreLabel);
				this->Controls->Add(this->CompleteTestButton);
				this->Controls->Add(this->NextQuestionButton);
				this->Controls->Add(this->QuestionLabel);
				this->MaximizeBox = false;
				this->MaximumSize = System::Drawing::Size(734, 445);
				this->MinimizeBox = false;
				this->MinimumSize = System::Drawing::Size(734, 445);
				this->Name = L"QuizForm";
				this->Text = L"Главная форма";
				this->Load += gcnew System::EventHandler(this, &QuizForm::QuizForm_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
		
		private:int score;
		private:int countQuestion;
		private:int countQuestionPassed;

		private: Void QuizForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
			VisibleGameTable(false);
			VisibleMenu(true);
			if (FileExists("TestResults.txt")) 
			{
				remove("TestResults.txt");
			};
		}

		bool FileExists(const char* fname)
		{
			_finddata_t data;
			long nFind = _findfirst(fname, &data);
			if (nFind != -1)
			{
			 _findclose(nFind);
			 return true;
			}
			return false;
		}

		public: void VisibleMenu(bool Visibility)
		{
			if (Visibility == true)
			{
				buttonPract->Visible = Visibility;
				buttonTeoria->Visible = Visibility;
			}

			if (Visibility == false)
			{
				buttonPract->Visible = Visibility;
				buttonTeoria->Visible = Visibility;
			}
		}
		public: void VisibleGameTable(bool Visibility)
		{
			if (Visibility == true)
			{
				QuestionLabel->Visible = Visibility;
				NextQuestionButton->Visible = Visibility;
				CompleteTestButton->Visible = Visibility;
				checkBox1->Visible = Visibility;
				checkBox2->Visible = Visibility;
				checkBox3->Visible = Visibility;
				checkBox4->Visible = Visibility;
				radioButton1->Visible = Visibility;
				radioButton2->Visible = Visibility;
				radioButton3->Visible = Visibility;
				radioButton4->Visible = Visibility;
				checkedListBox1->Visible = Visibility;
				hScrollBar1->Visible = Visibility;
				ScrolLabel1->Visible = Visibility;
				ScrolLabel2->Visible = Visibility;
				ScrolLabel3->Visible = Visibility;
				ScrolLabel4->Visible = Visibility;
				comboBox1->Visible = Visibility;
				textBox1->Visible = Visibility;
				listBox1->Visible = Visibility;
				trackBar1->Visible = Visibility;
				Answerlabel1->Visible = Visibility;
			}

			if (Visibility == false)
			{
				QuestionLabel->Visible = Visibility;
				NextQuestionButton->Visible = Visibility;
				CompleteTestButton->Visible = Visibility;
				checkBox1->Visible = Visibility;
				checkBox2->Visible = Visibility;
				checkBox3->Visible = Visibility;
				checkBox4->Visible = Visibility;
				radioButton1->Visible = Visibility;
				radioButton2->Visible = Visibility;
				radioButton3->Visible = Visibility;
				radioButton4->Visible = Visibility;
				checkedListBox1->Visible = Visibility;
				hScrollBar1->Visible = Visibility;
				ScrolLabel1->Visible = Visibility;
				ScrolLabel2->Visible = Visibility;
				ScrolLabel3->Visible = Visibility;
				ScrolLabel4->Visible = Visibility;
				comboBox1->Visible = Visibility;
				textBox1->Visible = Visibility;
				listBox1->Visible = Visibility;
				trackBar1->Visible = Visibility;
				Answerlabel1->Visible = Visibility;
			}
		}
		private:void VisibleElement() 
		{
			checkBox1->Visible = false;
			checkBox2->Visible = false;
			checkBox3->Visible = false;
			checkBox4->Visible = false;
			radioButton1->Visible = false;
			radioButton2->Visible = false;
			radioButton3->Visible = false;
			radioButton4->Visible = false;
			checkedListBox1->Visible = false;
			hScrollBar1->Visible = false;
			ScrolLabel1->Visible = false;
			ScrolLabel2->Visible = false;
			ScrolLabel3->Visible = false;
			ScrolLabel4->Visible = false;
			comboBox1->Visible = false;
			textBox1->Visible = false;
			listBox1->Visible = false;
			trackBar1->Visible = false;
			Answerlabel1->Visible = false;
			
		}

		private:Void WriteToText(string countQuestionPassed, string answer)
		{
			ofstream out;
			out.open("TestResults.txt", std::ios::app);
			if (out.is_open())
			{
				string rez = "Вопрос №" + countQuestionPassed + " " + answer;
				out << rez << std::endl;
			}
		}

		public:void VisibleHideElementControl(bool Visibility)
		{
			VisibleElement();
			QuestionLabel->Visible = Visibility;
			NextQuestionButton->Visible = Visibility;
			CompleteTestButton->Visible = Visibility;
			Answerlabel1->Text = "";
			
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "TextBox")
			{
				textBox1->Text = "";
				textBox1->Visible = Visibility;
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "checkBox")
			{
				SetEmptyBox();
				checkBox1->Checked = false;
				checkBox2->Checked = false;
				checkBox3->Checked = false;
				checkBox4->Checked = false;
				checkBox1->Visible = Visibility;
				checkBox2->Visible = Visibility;
				checkBox3->Visible = Visibility;
				checkBox4->Visible = Visibility;
				checkBox1->Text = gcnew System::String(question->GetFrontQuestion().answers[0].c_str());
				checkBox2->Text = gcnew System::String(question->GetFrontQuestion().answers[1].c_str());
				checkBox3->Text = gcnew System::String(question->GetFrontQuestion().answers[2].c_str());
				checkBox4->Text = gcnew System::String(question->GetFrontQuestion().answers[3].c_str());
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "radioButton")
			{
				SetEmptyBox();
				radioButton1->Checked = false;
				radioButton2->Checked = false;
				radioButton3->Checked = false;
				radioButton4->Checked = false;
				radioButton1->Visible = Visibility;
				radioButton2->Visible = Visibility;
				radioButton3->Visible = Visibility;
				radioButton4->Visible = Visibility;
				radioButton1->Text = gcnew System::String(question->GetFrontQuestion().answers[0].c_str());
				radioButton2->Text = gcnew System::String(question->GetFrontQuestion().answers[1].c_str());
				radioButton3->Text = gcnew System::String(question->GetFrontQuestion().answers[2].c_str());
				radioButton4->Text = gcnew System::String(question->GetFrontQuestion().answers[3].c_str());
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "checkedListBox")
			{
				checkedListBox1->Items->Clear();
				checkedListBox1->Visible = Visibility;
				checkedListBox1->Items->Add(gcnew System::String(question->GetFrontQuestion().answers[0].c_str()));
				checkedListBox1->Items->Add(gcnew System::String(question->GetFrontQuestion().answers[1].c_str()));
				checkedListBox1->Items->Add(gcnew System::String(question->GetFrontQuestion().answers[2].c_str()));
				checkedListBox1->Items->Add(gcnew System::String(question->GetFrontQuestion().answers[3].c_str()));
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "hScrollBar" )
			{
				hScrollBar1->Visible = Visibility;
				Answerlabel1->Visible = Visibility;
				hScrollBar1->Minimum = 1;
				hScrollBar1->Maximum = 4;
				ScrolLabel1->Visible = Visibility;
				ScrolLabel2->Visible = Visibility;
				ScrolLabel3->Visible = Visibility;
				ScrolLabel4->Visible = Visibility;
				ScrolLabel1->Text = "Вариант 1: "+gcnew System::String(question->GetFrontQuestion().answers[0].c_str());
				ScrolLabel2->Text = "Вариант 2: "+gcnew System::String(question->GetFrontQuestion().answers[1].c_str());
				ScrolLabel3->Text = "Вариант 3: "+gcnew System::String(question->GetFrontQuestion().answers[2].c_str());
				ScrolLabel4->Text = "Вариант 4: "+gcnew System::String(question->GetFrontQuestion().answers[3].c_str());
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "comboBox")
			{
				comboBox1->Text = "";
				comboBox1->Items->Clear();
				comboBox1->Visible = Visibility;
				comboBox1->Items->Add(gcnew System::String(question->GetFrontQuestion().answers[0].c_str()));
				comboBox1->Items->Add(gcnew System::String(question->GetFrontQuestion().answers[1].c_str()));
				comboBox1->Items->Add(gcnew System::String(question->GetFrontQuestion().answers[2].c_str()));
				comboBox1->Items->Add(gcnew System::String(question->GetFrontQuestion().answers[3].c_str()));
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "listBox")
			{
				listBox1->Items->Clear();
				listBox1->Visible = Visibility;
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "trackBar")
			{
				trackBar1->Maximum = 4;
				trackBar1->Minimum = 1;
				Answerlabel1->Visible = Visibility;
				trackBar1->Visible = Visibility;
				ScrolLabel1->Visible = Visibility;
				ScrolLabel2->Visible = Visibility;
				ScrolLabel3->Visible = Visibility;
				ScrolLabel4->Visible = Visibility;
				ScrolLabel1->Text = "Вариант 1: " + gcnew System::String(question->GetFrontQuestion().answers[0].c_str());
				ScrolLabel2->Text = "Вариант 2: " + gcnew System::String(question->GetFrontQuestion().answers[1].c_str());
				ScrolLabel3->Text = "Вариант 3: " + gcnew System::String(question->GetFrontQuestion().answers[2].c_str());
				ScrolLabel4->Text = "Вариант 4: " + gcnew System::String(question->GetFrontQuestion().answers[3].c_str());
			}
		}

		private:string ResponseCheck() 
		{
			string answer;
			string answerWriteText;

			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "TextBox")
			{
				if (FailTextBox() != "0") return "Нужно выбрать один ответ.";
				if (textBox1->Text == gcnew System::String(question->GetFrontQuestion().correct_answer.c_str()))
				{
					answerWriteText = "Правильно";
					score++;
				}
				else answerWriteText = "Неправильно";
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "checkBox")
			{
				if (FailCheckBox() != "0") return "Нужно выбрать один ответ.";
				if (checkBox1->Checked == true) answer = "0";
				if (checkBox2->Checked == true) answer = "1";
				if (checkBox3->Checked == true) answer = "2";
				if (checkBox4->Checked == true) answer = "3";
				if (gcnew String(answer.c_str()) == gcnew String(question->GetFrontQuestion().correct_answer.c_str()))
				{
					answerWriteText = "Правильно";
					score++;
				}
				else answerWriteText = "Неправильно";
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "radioButton")
			{
				if (FailRadioButton() != "0") return "Нужно выбрать один ответ.";
				if (radioButton1->Checked == true) answer = "0";
				if (radioButton2->Checked == true) answer = "1";
				if (radioButton3->Checked == true) answer = "2";
				if (radioButton4->Checked == true) answer = "3";
				if (gcnew String(answer.c_str()) == gcnew System::String(question->GetFrontQuestion().correct_answer.c_str()))
				{
					answerWriteText = "Правильно";
					score++;
				}
				else answerWriteText = "Неправильно";
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "checkedListBox")
			{
				if (FailCheckedListBox() != "0") return "Нужно выбрать один ответ.";
				if (checkedListBox1->GetItemChecked(0) == true) answer = "0";
				if (checkedListBox1->GetItemChecked(1) == true) answer = "1";
				if (checkedListBox1->GetItemChecked(2) == true) answer = "2";
				if (checkedListBox1->GetItemChecked(3) == true) answer = "3";
				if (gcnew String(answer.c_str()) == gcnew System::String(question->GetFrontQuestion().correct_answer.c_str()))
				{
					answerWriteText = "Правильно";
					score++;
				}
				else answerWriteText = "Неправильно";
			}
			if (gcnew String(question->GetFrontQuestion().control_element.c_str()) == "hScrollBar")
			{
				if (FailScrollTrack() != "0") return "Нужно выбрать один ответ.";
				answer = hScrollBar1->Value;
				if (gcnew String(answer.c_str()) == gcnew String(question->GetFrontQuestion().correct_answer.c_str()))
				{
					answerWriteText = "Правильно";
					score++;
				}
				else answerWriteText = "Неправильно";
			}
			if (gcnew System::String(question->GetFrontQuestion().control_element.c_str()) == "comboBox")
			{
				if (comboBox1->SelectedIndex > -1)
				{
					if (comboBox1->SelectedItem->ToString() == gcnew String(question->GetFrontQuestion().correct_answer.c_str()))
					{
						answerWriteText = "Правильно";
						score++;
					}
					else answerWriteText = "Неправильно";
				}
				else 
				{
					MessageBox::Show("Нужно выбрать один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return "Нужно выбрать один ответ.";
				}
			}
			if (gcnew String(question->GetFrontQuestion().control_element.c_str()) == "trackBar")
			{
				if (FailScrollTrack() != "0") return "Нужно выбрать один ответ.";
				answer = trackBar1->Value;
				if (gcnew String(answer.c_str()) == gcnew String(question->GetFrontQuestion().correct_answer.c_str()))
				{
					answerWriteText = "Правильно";
					score++;
				}
				else answerWriteText = "Неправильно";
			}

			WriteToText(std::to_string(countQuestionPassed+1),answerWriteText);
			return "0";
		}
		
		private:Void NextQuestionButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (question->EmptyQuestion())
			{
				VisibleGameTable(false);
				return;
			}

			if (ResponseCheck() == "Нужно выбрать один ответ.") return;

			countQuestionPassed++;
			ScoreLabel->Text = "Пройдено вопросов: " + countQuestionPassed.ToString() + " из " + countQuestion.ToString();

			question->DelFrontQuestion();

			if (question->EmptyQuestion())
			{
				VisibleGameTable(false);
				ScoreLabel->Visible = false;
				FinalLabel->Text = "Тест завершен! Правильных ответов: " + score.ToString() + " из " + countQuestion.ToString();
				FinalLabel->Visible = true;
				return;
			}

			QuestionLabel->Text = "Вопрос: " + gcnew System::String(question->GetFrontQuestion().question.c_str());
			VisibleHideElementControl(true);
		}
		private:Void CompleteTestButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			VisibleGameTable(false);
			ScoreLabel->Visible = false;
			FinalLabel->Visible = true;
			FinalLabel->Text = "Тест завершен! Правильных ответов: " + score.ToString() + " из " + countQuestion.ToString();
		}
		private:Void buttonTeoria_Click(System::Object^ sender, System::EventArgs^ e) 
		{

		}
		private:Void buttonPract_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			VisibleMenu(false);
			score = 0;
			countQuestion = 0;
			countQuestionPassed = 0;
			question->ClearQuestion();
			FinalLabel->Visible = false;
			question->QuestionFilling();
			countQuestion = question->SizeQuestion();
			ScoreLabel->Visible = true;
			ScoreLabel->Text = "Пройдено вопросов: " + countQuestionPassed.ToString();
			QuestionLabel->Text = "Вопрос: " + gcnew System::String(question->GetFrontQuestion().question.c_str());
			VisibleHideElementControl(true);
		}
		private:Void buttonMenu_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			VisibleGameTable(false);
			VisibleMenu(true);
			ScoreLabel->Visible = false;
			FinalLabel->Visible = false;
		}

		private:void SetEmptyBox()
		{
			checkBox1->Checked = false;
			checkBox2->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = false;
			radioButton1->Checked = false;
			radioButton2->Checked = false;
			radioButton3->Checked = false;
			radioButton4->Checked = false;
		}

		private:string FailCheckBox()
		{
			if (checkBox1->Checked == false && checkBox2->Checked == false && checkBox3->Checked == false && checkBox4->Checked == false) { MessageBox::Show("Нужно выбрать один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == true && checkBox4->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkBox2->Checked == true && checkBox3->Checked == true && checkBox4->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkBox1->Checked == true && checkBox3->Checked == true && checkBox4->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox4->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkBox1->Checked == true && checkBox2->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkBox3->Checked == true && checkBox4->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);	return "Нужно выбрать один ответ."; }
			if (checkBox2->Checked == true && checkBox3->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);	return "Нужно выбрать один ответ."; }
			if (checkBox1->Checked == true && checkBox4->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkBox4->Checked == true && checkBox2->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkBox1->Checked == true && checkBox3->Checked == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			return "0";
		}

		private:string FailRadioButton()
		{
			if (radioButton1->Checked == false && radioButton2->Checked == false && radioButton3->Checked == false && radioButton4->Checked == false) { MessageBox::Show("Нужно выбрать один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			return "0";
		}

		private:string FailCheckedListBox()
		{
			if (checkedListBox1->GetItemChecked(0) == false && checkedListBox1->GetItemChecked(1) == false && checkedListBox1->GetItemChecked(2) == false && checkedListBox1->GetItemChecked(3) == false) { MessageBox::Show("Нужно выбрать один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(0) == true && checkedListBox1->GetItemChecked(1) == true && checkedListBox1->GetItemChecked(2) == true && checkedListBox1->GetItemChecked(3) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(1) == true && checkedListBox1->GetItemChecked(2) == true && checkedListBox1->GetItemChecked(3) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(0) == true && checkedListBox1->GetItemChecked(2) == true && checkedListBox1->GetItemChecked(3) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(0) == true && checkedListBox1->GetItemChecked(1) == true && checkedListBox1->GetItemChecked(3) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(0) == true && checkedListBox1->GetItemChecked(1) == true && checkedListBox1->GetItemChecked(2) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(0) == true && checkedListBox1->GetItemChecked(1) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(2) == true && checkedListBox1->GetItemChecked(3) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);	return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(1) == true && checkedListBox1->GetItemChecked(2) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);	return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(0) == true && checkedListBox1->GetItemChecked(3) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(3) == true && checkedListBox1->GetItemChecked(1) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			if (checkedListBox1->GetItemChecked(0) == true && checkedListBox1->GetItemChecked(2) == true) { MessageBox::Show("Выбрать можно только один ответ.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			return "0";
		}

		private:string FailTextBox()
		{
			if (textBox1->Text == "") { MessageBox::Show("Введите значение.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			return "0";
		}
		private:string FailScrollTrack()
		{
			if (Answerlabel1->Text == "Ответ:" || Answerlabel1->Text == "") { MessageBox::Show("Выберите значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return "Нужно выбрать один ответ."; }
			return "0";
		}

		private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) 
		{
			Answerlabel1->Text = "Ответ:" + hScrollBar1->Value;
		}
		private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) 
		{
			Answerlabel1->Text = "Ответ:" + trackBar1->Value;
		}
};
}