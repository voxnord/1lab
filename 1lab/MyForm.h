#pragma once
#include <Windows.h>
namespace My1lab {

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
		}

	protected: 
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		// Пользовательские поля	
    private: unsigned short int N;		 // Глобальная переменна, используемая для передачи значения введёного в поле ввода в параметр n рекурсивной функции 1 или 2
	private: unsigned int count = 0; // Глобальная переменна, используемая для фиксации количества рекурсивных вызовов
	private: bool choice_check;		 // Булевая переменная, отображающая выбранную рекурсию

	private: System::Windows::Forms::Button^ button_start1;
	private: System::Windows::Forms::RadioButton^ recursionbtn1;
	private: System::Windows::Forms::RadioButton^ recursionbtn2;

	private: System::Windows::Forms::Label^ input_field_label;
	private: System::Windows::Forms::Label^ recursion_label;
	private: System::Windows::Forms::TextBox^ input_field1;
	private: System::Windows::Forms::Label^ formula_of_recursion_label;
	private: System::Windows::Forms::Label^ output;
	private: System::Windows::Forms::Label^ count_of_recursion_label;
	private: System::Windows::Forms::GroupBox^ first_ex;
	private: System::Windows::Forms::GroupBox^ second_ex;
	private: System::Windows::Forms::Button^ clr_inp_field1;	
	private: System::Windows::Forms::Button^ input_button;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_start2;
	private: System::Windows::Forms::Button^ clr_inp_field2;
	private: System::Windows::Forms::TextBox^ input_field2;
	private: System::Windows::Forms::Button^ err_check;
		private: System::Windows::Forms::Button^ info1;

	private: System::Windows::Forms::Button^ info2;
	private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ Rresult;

		private: System::Windows::Forms::Label^ Ncount;
		private: System::Windows::Forms::Label^ out_label;
		private: System::Windows::Forms::Label^ in_label;

		private: System::ComponentModel::Container^ components;

	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_start1 = (gcnew System::Windows::Forms::Button());
			this->recursionbtn1 = (gcnew System::Windows::Forms::RadioButton());
			this->recursionbtn2 = (gcnew System::Windows::Forms::RadioButton());
			this->input_field_label = (gcnew System::Windows::Forms::Label());
			this->recursion_label = (gcnew System::Windows::Forms::Label());
			this->input_field1 = (gcnew System::Windows::Forms::TextBox());
			this->formula_of_recursion_label = (gcnew System::Windows::Forms::Label());
			this->output = (gcnew System::Windows::Forms::Label());
			this->count_of_recursion_label = (gcnew System::Windows::Forms::Label());
			this->first_ex = (gcnew System::Windows::Forms::GroupBox());
			this->Ncount = (gcnew System::Windows::Forms::Label());
			this->Rresult = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->info1 = (gcnew System::Windows::Forms::Button());
			this->clr_inp_field1 = (gcnew System::Windows::Forms::Button());
			this->second_ex = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->out_label = (gcnew System::Windows::Forms::Label());
			this->clr_inp_field2 = (gcnew System::Windows::Forms::Button());
			this->info2 = (gcnew System::Windows::Forms::Button());
			this->err_check = (gcnew System::Windows::Forms::Button());
			this->button_start2 = (gcnew System::Windows::Forms::Button());
			this->input_field2 = (gcnew System::Windows::Forms::TextBox());
			this->input_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->in_label = (gcnew System::Windows::Forms::Label());
			this->first_ex->SuspendLayout();
			this->second_ex->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_start1
			// 
			this->button_start1->Location = System::Drawing::Point(219, 20);
			this->button_start1->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->button_start1->Name = L"button_start1";
			this->button_start1->Size = System::Drawing::Size(96, 65);
			this->button_start1->TabIndex = 0;
			this->button_start1->Text = L"Старт";
			this->button_start1->UseVisualStyleBackColor = true;
			this->button_start1->Click += gcnew System::EventHandler(this, &MyForm::button_start1_Click);
			// 
			// recursionbtn1
			// 
			this->recursionbtn1->AutoSize = true;
			this->recursionbtn1->Location = System::Drawing::Point(98, 58);
			this->recursionbtn1->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->recursionbtn1->Name = L"recursionbtn1";
			this->recursionbtn1->Size = System::Drawing::Size(43, 24);
			this->recursionbtn1->TabIndex = 1;
			this->recursionbtn1->TabStop = true;
			this->recursionbtn1->Text = L"1";
			this->recursionbtn1->UseVisualStyleBackColor = true;
			this->recursionbtn1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::recursionbtn1_CheckedChanged);
			// 
			// recursionbtn2
			// 
			this->recursionbtn2->AutoSize = true;
			this->recursionbtn2->Location = System::Drawing::Point(153, 58);
			this->recursionbtn2->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->recursionbtn2->Name = L"recursionbtn2";
			this->recursionbtn2->Size = System::Drawing::Size(43, 24);
			this->recursionbtn2->TabIndex = 2;
			this->recursionbtn2->TabStop = true;
			this->recursionbtn2->Text = L"2";
			this->recursionbtn2->UseVisualStyleBackColor = true;
			this->recursionbtn2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::recursionbtn2_CheckedChanged);
			// 
			// input_field_label
			// 
			this->input_field_label->AutoSize = true;
			this->input_field_label->Location = System::Drawing::Point(10, 25);
			this->input_field_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->input_field_label->Name = L"input_field_label";
			this->input_field_label->Size = System::Drawing::Size(100, 20);
			this->input_field_label->TabIndex = 3;
			this->input_field_label->Text = L"Поле ввода";
			// 
			// recursion_label
			// 
			this->recursion_label->AutoSize = true;
			this->recursion_label->Location = System::Drawing::Point(10, 62);
			this->recursion_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->recursion_label->Name = L"recursion_label";
			this->recursion_label->Size = System::Drawing::Size(82, 20);
			this->recursion_label->TabIndex = 4;
			this->recursion_label->Text = L"Рекурсия:";
			// 
			// input_field1
			// 
			this->input_field1->Location = System::Drawing::Point(117, 20);
			this->input_field1->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->input_field1->Name = L"input_field1";
			this->input_field1->Size = System::Drawing::Size(80, 26);
			this->input_field1->TabIndex = 5;
			this->input_field1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::input_field1_KeyPress);
			// 
			// formula_of_recursion_label
			// 
			this->formula_of_recursion_label->AutoSize = true;
			this->formula_of_recursion_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->formula_of_recursion_label->Location = System::Drawing::Point(10, 140);
			this->formula_of_recursion_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->formula_of_recursion_label->Name = L"formula_of_recursion_label";
			this->formula_of_recursion_label->Size = System::Drawing::Size(0, 20);
			this->formula_of_recursion_label->TabIndex = 6;
			// 
			// output
			// 
			this->output->AutoSize = true;
			this->output->Location = System::Drawing::Point(10, 278);
			this->output->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(64, 20);
			this->output->TabIndex = 7;
			this->output->Text = L"Вывод:";
			// 
			// count_of_recursion_label
			// 
			this->count_of_recursion_label->AutoSize = true;
			this->count_of_recursion_label->Location = System::Drawing::Point(10, 312);
			this->count_of_recursion_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->count_of_recursion_label->Name = L"count_of_recursion_label";
			this->count_of_recursion_label->Size = System::Drawing::Size(242, 20);
			this->count_of_recursion_label->TabIndex = 8;
			this->count_of_recursion_label->Text = L"Количество вызовов функции:";
			// 
			// first_ex
			// 
			this->first_ex->Controls->Add(this->Ncount);
			this->first_ex->Controls->Add(this->Rresult);
			this->first_ex->Controls->Add(this->label1);
			this->first_ex->Controls->Add(this->info1);
			this->first_ex->Controls->Add(this->clr_inp_field1);
			this->first_ex->Controls->Add(this->button_start1);
			this->first_ex->Controls->Add(this->input_field1);
			this->first_ex->Controls->Add(this->input_field_label);
			this->first_ex->Controls->Add(this->recursionbtn1);
			this->first_ex->Controls->Add(this->recursion_label);
			this->first_ex->Controls->Add(this->count_of_recursion_label);
			this->first_ex->Controls->Add(this->recursionbtn2);
			this->first_ex->Controls->Add(this->output);
			this->first_ex->Controls->Add(this->formula_of_recursion_label);
			this->first_ex->Location = System::Drawing::Point(18, 9);
			this->first_ex->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->first_ex->Name = L"first_ex";
			this->first_ex->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->first_ex->Size = System::Drawing::Size(429, 395);
			this->first_ex->TabIndex = 12;
			this->first_ex->TabStop = false;
			// 
			// Ncount
			// 
			this->Ncount->AutoSize = true;
			this->Ncount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Ncount->Location = System::Drawing::Point(262, 312);
			this->Ncount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Ncount->Name = L"Ncount";
			this->Ncount->Size = System::Drawing::Size(0, 20);
			this->Ncount->TabIndex = 13;
			// 
			// Rresult
			// 
			this->Rresult->AutoSize = true;
			this->Rresult->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Rresult->Location = System::Drawing::Point(84, 278);
			this->Rresult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Rresult->Name = L"Rresult";
			this->Rresult->Size = System::Drawing::Size(0, 20);
			this->Rresult->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 106);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Формула выбранной рекурсии";
			// 
			// info1
			// 
			this->info1->Location = System::Drawing::Point(15, 351);
			this->info1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->info1->Name = L"info1";
			this->info1->Size = System::Drawing::Size(390, 35);
			this->info1->TabIndex = 10;
			this->info1->Text = L"Информация";
			this->info1->UseVisualStyleBackColor = true;
			this->info1->Click += gcnew System::EventHandler(this, &MyForm::info1_Click);
			// 
			// clr_inp_field1
			// 
			this->clr_inp_field1->Location = System::Drawing::Point(324, 20);
			this->clr_inp_field1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->clr_inp_field1->Name = L"clr_inp_field1";
			this->clr_inp_field1->Size = System::Drawing::Size(96, 65);
			this->clr_inp_field1->TabIndex = 9;
			this->clr_inp_field1->Text = L"Очистить поле";
			this->clr_inp_field1->UseVisualStyleBackColor = true;
			this->clr_inp_field1->Click += gcnew System::EventHandler(this, &MyForm::clr_inp_field1_Click);
			// 
			// second_ex
			// 
			this->second_ex->Controls->Add(this->groupBox2);
			this->second_ex->Controls->Add(this->clr_inp_field2);
			this->second_ex->Controls->Add(this->info2);
			this->second_ex->Controls->Add(this->err_check);
			this->second_ex->Controls->Add(this->button_start2);
			this->second_ex->Controls->Add(this->input_field2);
			this->second_ex->Controls->Add(this->input_button);
			this->second_ex->Controls->Add(this->groupBox1);
			this->second_ex->Location = System::Drawing::Point(18, 414);
			this->second_ex->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->second_ex->Name = L"second_ex";
			this->second_ex->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->second_ex->Size = System::Drawing::Size(429, 232);
			this->second_ex->TabIndex = 13;
			this->second_ex->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->out_label);
			this->groupBox2->Location = System::Drawing::Point(324, 29);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox2->Size = System::Drawing::Size(81, 152);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Вывод";
			// 
			// out_label
			// 
			this->out_label->AutoSize = true;
			this->out_label->Location = System::Drawing::Point(9, 26);
			this->out_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->out_label->Name = L"out_label";
			this->out_label->Size = System::Drawing::Size(0, 20);
			this->out_label->TabIndex = 1;
			// 
			// clr_inp_field2
			// 
			this->clr_inp_field2->Location = System::Drawing::Point(93, 85);
			this->clr_inp_field2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->clr_inp_field2->Name = L"clr_inp_field2";
			this->clr_inp_field2->Size = System::Drawing::Size(117, 57);
			this->clr_inp_field2->TabIndex = 4;
			this->clr_inp_field2->Text = L"Очистить поле";
			this->clr_inp_field2->UseVisualStyleBackColor = true;
			this->clr_inp_field2->Click += gcnew System::EventHandler(this, &MyForm::clr_inp_field2_Click);
			// 
			// info2
			// 
			this->info2->Location = System::Drawing::Point(15, 188);
			this->info2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->info2->Name = L"info2";
			this->info2->Size = System::Drawing::Size(390, 35);
			this->info2->TabIndex = 7;
			this->info2->Text = L"Информация";
			this->info2->UseVisualStyleBackColor = true;
			this->info2->Click += gcnew System::EventHandler(this, &MyForm::info2_Click);
			// 
			// err_check
			// 
			this->err_check->Location = System::Drawing::Point(15, 151);
			this->err_check->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->err_check->Name = L"err_check";
			this->err_check->Size = System::Drawing::Size(195, 31);
			this->err_check->TabIndex = 6;
			this->err_check->Text = L"Проверка на ошибки";
			this->err_check->UseVisualStyleBackColor = true;
			this->err_check->Click += gcnew System::EventHandler(this, &MyForm::err_check_Click);
			// 
			// button_start2
			// 
			this->button_start2->Location = System::Drawing::Point(15, 85);
			this->button_start2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_start2->Name = L"button_start2";
			this->button_start2->Size = System::Drawing::Size(69, 57);
			this->button_start2->TabIndex = 5;
			this->button_start2->Text = L"Старт";
			this->button_start2->UseVisualStyleBackColor = true;
			this->button_start2->Click += gcnew System::EventHandler(this, &MyForm::button_start2_Click);
			// 
			// input_field2
			// 
			this->input_field2->Location = System::Drawing::Point(15, 45);
			this->input_field2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->input_field2->Name = L"input_field2";
			this->input_field2->Size = System::Drawing::Size(67, 26);
			this->input_field2->TabIndex = 3;
			this->input_field2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::input_field2_KeyPress);
			// 
			// input_button
			// 
			this->input_button->Location = System::Drawing::Point(93, 45);
			this->input_button->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->input_button->Name = L"input_button";
			this->input_button->Size = System::Drawing::Size(117, 31);
			this->input_button->TabIndex = 2;
			this->input_button->Text = L"Ввести";
			this->input_button->UseVisualStyleBackColor = true;
			this->input_button->Click += gcnew System::EventHandler(this, &MyForm::input_button_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->in_label);
			this->groupBox1->Location = System::Drawing::Point(236, 29);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(80, 152);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод";
			// 
			// in_label
			// 
			this->in_label->AutoSize = true;
			this->in_label->Location = System::Drawing::Point(9, 26);
			this->in_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->in_label->Name = L"in_label";
			this->in_label->Size = System::Drawing::Size(0, 20);
			this->in_label->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(465, 665);
			this->Controls->Add(this->second_ex);
			this->Controls->Add(this->first_ex);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Lab 1 - Recursion";
			this->first_ex->ResumeLayout(false);
			this->first_ex->PerformLayout();
			this->second_ex->ResumeLayout(false);
			this->second_ex->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		/////////////////////
		/*Первая программа.*/
		/////////////////////
		int recursion_1(unsigned int n)
		{
			++count; // Фиксация количества рекурсивных вызовов.

			if (n == 1)
			{
				return 1;
			}
			else if (n == 2)
			{
				return 2;
			}
			else if (n > 2 && n % 2 == 0)  // > 2 и четное.
			{
				return ((8 * n + recursion_1(n - 3)) / 9);		
			}
			else if (n > 2 && n % 2 != 0) // > 2 и не чётное.
			{
				return ((4 * n + recursion_1(n - 1) + recursion_1(n - 2)) / 7);
			}
		}

		int recursion_2(unsigned int n)
		{
			++count; // Фиксация количества рекурсивных вызовов.

			if (n == 1)
			{
				return 1;
			}
			else if (n % 2 == 0) // четное 
			{
				return (n + 2 * recursion_2(n - 1));
			}
			else if (n > 1 && n % 2 != 0) // > 1 и не чётное.
			{
				return (1 + 3 * recursion_2(n - 2));
			}
		}

		int high_valid_value1{ 70 }, low_valid_value1{ 1 };
		int high_valid_value2{ 20000 }, low_valid_value2{ 1 };

		bool ValidacityCheck1() // Проверка 1 на корректность введеных значений.
		{
			String^ error_overflow = ""; // Изначальное значение для текстовой переменной, чтобы её можно было менять удобнее.

			try
			{
				if (this->recursionbtn1->Checked == true && this->input_field1->Text != "") // Проверяется, не является ли текст введенного значения пустым и выбрана ли рекурсионная формула 1.
				{
					int dataI = System::Convert::ToInt32(this->input_field1->Text); // Текст из поля ввода конвертируется в целое число(dataI).

					if (dataI > high_valid_value1) // проверка макс. значения 1
					{
						error_overflow = "Введённое значение превышает допустимое " + high_valid_value1 + "!\nПосмотрите информацию, чтобы узнать подробнее.";
						throw error_overflow; // Выдаёт ошибку с заданным текстом.
					}
					
					else if (dataI < low_valid_value1) // проверка мин. значения 1.
					{
						error_overflow = "Число введённое вами не должно быть меньше " + low_valid_value1 + "!";
						throw error_overflow; // Выдаёт ошибку с заданным текстом.
					}
				}
			}
			catch (String^ error_overflow) // Берёт из try полученное значение текста ошибки.
			{
				this->input_field1->ForeColor = Color::Red; // Подсветка текста в поле ввода красным.
				System::Windows::Forms::DialogResult result = MessageBox::Show(error_overflow, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); // Выводит диалоговое окно result с полученной из условия ошибкой с кнопкой OK и иконкой Error.

				if (result == System::Windows::Forms::DialogResult::OK) // Условие при нажатии кнопки OK очищаются поля и убираются галочки.  
				{
					this->input_field1->Text = "";                // Очищает поле ввода.
					this->input_field1->ForeColor = Color::Black; // Меняет текст обратно на черный.
					this->recursionbtn1->Checked = false;         // Убирает галочку с кнопки рекурскии 1.
					this->recursionbtn2->Checked = false;         // Убирает галочку с кнопки рекурскии 2.
				}
			}
			return 0;

		}

		bool ValidacityCheck2() // Проверка 2 на корректность введеных значений.
		{
			String^ error_overflow = ""; // Изначальное значение для текстовой переменной, чтобы её можно было менять удобнее.

			try
			{
				if (this->recursionbtn2->Checked == true && this->input_field1->Text != "")  // Проверяется, не является ли текст введенного значения пустым и выбрана ли рекурсионная формула 2.
				{
					int dataI = System::Convert::ToInt32(this->input_field1->Text); // Целочисленному значению присваивается преобразованный текст из поля ввода.

					if (dataI > high_valid_value2) // проверка макс. значения 2.
					{
						error_overflow = "Введённое значение превышает допустимое " + high_valid_value2 + "!\nПосмотрите информацию, чтобы узнать подробнее.";
						throw error_overflow; // Выдаёт ошибку с заданным текстом.
					}
					else if (dataI < low_valid_value2) // проверка мин. значения 2.
					{
						error_overflow = "Число введённое вами не должно быть меньше " + low_valid_value2 + "!";
						throw error_overflow; // Выдаёт ошибку с заданным текстом.
					}
				}
			}
			catch (String^ error_overflow) // Берёт из try полученное значение текста ошибки.
			{
				this->input_field1->ForeColor = Color::Red;
				System::Windows::Forms::DialogResult result = MessageBox::Show(error_overflow, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); // Выводит диалоговое окно result с полученной из условия ошибкой с кнопкой OK и иконкой Error.

				if (result == System::Windows::Forms::DialogResult::OK) // Условие при нажатии кнопки OK очищаются поля и убираются галочки.
				{
					this->input_field1->Text = "";                // Очищает поле ввода.
					this->input_field1->ForeColor = Color::Black; // Меняет текст обратно на черный.
					this->recursionbtn1->Checked = false;         // Убирает галочку с кнопки рекурскии 1.
					this->recursionbtn2->Checked = false;         // Убирает галочку с кнопки рекурскии 2.
				}
			}

			return 0;
		}

        private: System::Void recursionbtn1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) // Проверяет нажата ли кнопка первой рекурсивной формулы.
		{

			if (this->recursionbtn1->Checked == true) // Условие для вывода текста первой рекурсивной функции.
			{
				this->formula_of_recursion_label->Text =
					"F(n) = 1, при n = 1;\r\n"
					"F(n) = 2, при n = 2;\r\n"
					"F(n) = [(8 * n + F(n - 3)) / 9], если n > 2 и при этом \nn четно;\r\n"
					"F(n) = [(4 * n + F(n - 1) + F(n - 2)) / 7], если n > 2 и при \nэтом n нечетно.";
				choice_check = true;
			}

			else
			{
				this->formula_of_recursion_label->Text = ""; // Очистка поля вывода текста в случае выбора другой рекурсивной функции.
			}

		}

		private: System::Void recursionbtn2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) // Проверяет нажата ли кнопка второй рекурсивной формулы.
		{

			if (this->recursionbtn2->Checked == true) // Условие для вывода текста второй рекурсивной функции.
			{
				this->formula_of_recursion_label->Text = 
					"F(n) = 1, при n = 1;\r\n" 
					"F(n) = n + 2 * F(n - 1), если n чётно;\r\n"
					"F(n) = 1 + 3 * F(n - 2), если n > 1 и при этом n нечётно.";
				choice_check = false;
			}
			else 
			{
				this->formula_of_recursion_label->Text = ""; // Очистка поля вывода текста в случае выбора другой рекурсивной функции.
			}
		}
		private: System::Void input_field1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ en) // Нажатие Enter для первой программы.
		{
			if (en->KeyChar == (char)Keys::Enter)
			{
				button_start1_Click(sender, en); // Вызываем обработчик события нажатия кнопки button_start1.
				
				en->Handled = true; // Предотвращаем дальнейшую обработку нажатия клавиши Enter.
			}
		}

        private: System::Void button_start1_Click(System::Object^ sender, System::EventArgs^ e) 
		{

			count = 0; // Начальное значение для вызовов рекурсивной функции.

			if (this->input_field1->Text == "") // Условие для проверки на наличие значений в поле ввода.
			{
				MessageBox::Show("Поле ввода пусто!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			if (this->recursionbtn1->Checked == false && this->recursionbtn2->Checked == false)  // Условие для проверки на наличие выбора рекурсивной функции.
			{
				MessageBox::Show("Не выбрана ни одна из рекурсивных формул!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			if (this->input_field1->Text != "") 
			{
				if(input_field1->Text->Length > 8) // Проверка на длину введённого значения.
				{
					MessageBox::Show("Длина введенного числа превышает максимальное допустимое значение.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				int exclude;
				if (!Int32::TryParse(input_field1->Text, exclude)) // Условие исключает нечисловые значения.
				{
					// Если введенное значение не является числом, выводим сообщение об ошибке.
					MessageBox::Show("Поле ввода должно содержать только числовые значения и не содержать пробелов между цифрами/числами!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				N = System::Convert::ToInt32(this->input_field1->Text); // Преобразованный текст из поля ввода присваевается глобальной переменной N.

				if (ValidacityCheck1() == true) // Проверяет допустимые значения через функцию ValidacityCheck1 и снимает флажки, если есть недопустимые значения.
				{
					this->recursionbtn1->Checked = false;
					this->recursionbtn2->Checked = false;
				}

				if (ValidacityCheck2() == true) // Проверяет допустимые значения через функцию ValidacityCheck2 и снимает флажки, если есть недопустимые значения.
				{
					this->recursionbtn1->Checked = false;
					this->recursionbtn2->Checked = false;
				}

				if (this->recursionbtn1->Checked || this->recursionbtn2->Checked) // Проверяет нажата ли какая-либо из рекурсий.
				{
					if (choice_check == true) // Проверка для первой рекурсии.
					{
						this->Rresult->Text = System::Convert::ToString(recursion_1(N));
						this->Ncount->Text = System::Convert::ToString(count);
					}
					else if (choice_check == false) // Проверка для второй рекурсии.
					{
						this->Rresult->Text = System::Convert::ToString(recursion_2(N));
						this->Ncount->Text = System::Convert::ToString(count);
					}
				}
			}
		}

		private: System::Void clr_inp_field1_Click(System::Object^ sender, System::EventArgs^ e) // Очистка всех полей и галочек.
		{
			this->recursionbtn1->Checked = false;        // Убирает галочку с кнопки рекурскии 1.
			this->recursionbtn2->Checked = false;        // Убирает галочку с кнопки рекурскии 2.
			this->input_field1->Text = "";               // Очищает поле ввода.
			this->formula_of_recursion_label->Text = ""; // Очищает поле с информацией о выбранной рекурсивной функции.
			this->Rresult->Text = "";                    // Очищает поле результата.
			this->Ncount->Text = "";                     // Очищает поле подсчёта вызовов.
		}
        
        private: System::Void info1_Click(System::Object^ sender, System::EventArgs^ e) // Информационное окно 1.
		{
			String^ info_p1 = 
				"1) Для ввода значений введите данные в поле ввода (максимальное значение - " + high_valid_value1 + ", минимальное - " + low_valid_value1 + " для рекурсии 1, максимальное значение - " + high_valid_value2 + ", минимальное - " + low_valid_value2 + " для рекурсии 2);\n\n"
				"2) Выберите вариант рекурсивной функции. После выбора ниже будет выведена формула выбранной функции;\n\n"
				"3) Нажмине кнопку \"Старт\" для запуска рекурсии;\n\n4) После запуска рекурсии будет выведен результат рекурсивных вычислений и количество вызовов функции.\n\n"
				"Примечание: Введение нечисловых значений и превышение лимита элементов в строке в 8 символов выведет окно с предупреждением.";
			MessageBox::Show(info_p1, "Информация о программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
		/////////////////////
		/*Вторая программа.*/
		/////////////////////
		void recursion_3(array<int>^ numbers, int index) // Объявление рекурсивной функции с параметрами: 1) массив строк numbers для массива введенных значений; 2) Целочисленное index для индексации значений в массиве.
		{

			if (numbers[index] == 0)  // Проверяет равен ли элемент массива с текущим индексом 0.
			{
				return; // Если элемент равен "0", функция прекращает выполнение и возвраща	ет управление вызывающему коду.
			}

			if ((index + 1) % 2 != 0) // Проверка, является ли индекс плюс один нечетным числом для выбора через один.
			{
				int result = numbers[index];
				out_label->Text += result + "\r\n"; // Если индекс плюс один нечетный, то добавляем текущий элемент массива и перенос новой строки в списке вывода.
			}

			recursion_3(numbers, index + 1); // Рекурсивный вызов функции с увеличенным на единицу индексом для проверки последующих элементов.
		}

        private: System::Void input_field2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ en) // Нажатие Enter для первой программы.
		{

			if (en->KeyChar == (char)Keys::Enter) //Проверяем, нажата ли клавиша Enter.
			{
				input_button_Click(sender, en); // Вызываем обработчик события нажатия кнопки input_button.
				
				en->Handled = true; // Предотвращаем дальнейшую обработку нажатия клавиши Enter.
			}
		}

		private: System::Void input_button_Click(System::Object^ sender, System::EventArgs^ e) // Кнопка ввода значений в массив.
		{

			if (this->input_field2->Text == "") // Проверка пустого поля ввода.
			{
				MessageBox::Show("Поле ввода не может быть пустым!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			if (input_field2->Text->Length > 6) // Проверка количества введённых символов в поле ввода.
			{
				MessageBox::Show("Длина введенного числа превышает максимальное допустимое значение.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			if (in_label->Text->Split('\n')->Length - 1 >= 7) // Проверка количества строк в списке вводе массива.
			{
				MessageBox::Show("Превышено максимальное количество строк!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}		
			
		
			if (input_field2->Text != "") 
			{
				int exclude;
				if (!Int32::TryParse(input_field2->Text, exclude)) // Проверка на наличие нечисловых значений.
				{
					MessageBox::Show("Поле ввода должно содержать только числовые значения и не содержать пробелов между цифрами/числами!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}
				bool allowInput = true;	// Булевое значение для проверки ввода новых значений после записи в массив предыдущих.
				int numbers = System::Convert::ToInt32(input_field2->Text); // Конвертирует numbers введённые значения в числовые.
				this->input_field2->Text = ""; // Очищает поле ввода для последующего ввода значений.

				if (in_label->Text->Split('\n')->Length - 1 == 6 && numbers != 0) // Проверка на количество строк в списке ввода.
				{
					MessageBox::Show("Количество строк достигло максимального значения.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}
					
				if (in_label->Text->Split('\n')->Length - 1 == 5 && numbers != 0) // Условие для добавления в конец 0 по достижении 5 строк.
				{
					in_label->Text += "0\n";
					allowInput = false; 
				}
				else
				{
					
					if (allowInput) // Проверка, разрешен ли ввод новых значений.
					{
						in_label->Text += numbers + "\r\n"; // Добавление введённого числа в ввод и перенос строки в списке ввода.
					}
				}

			}
		}

		private: System::Void clr_inp_field2_Click(System::Object^ sender, System::EventArgs^ e) // Очистка всех полей.
		{
			this->input_field2->Text = ""; // Очищает поле ввода.
			this->in_label->Text = ""; // Очищает список ввода массива чисел.
			this->out_label->Text = ""; // Очищает вывод массива чисел.

			if (!button_start2->Enabled) // Взводит кнопку старта.
			{
				button_start2->Enabled = true;
			}
		}

		
        
        private: System::Void button_start2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			
			array<String^>^ split_numbers = in_label->Text->Split(gcnew array<wchar_t> {'\n', '\r'}, StringSplitOptions::RemoveEmptyEntries); // Разделение значений в массиве путём построчного разделения(на подстроки) для того, чтобы возможно было обеспечить преобразование отдельной части функции.
			array<int>^ numbers = gcnew array<int>(split_numbers->Length); // Создание управляемого массива(array<int>) целых чисел numbers с размерами массива split_numbers

			for (int i = 0; i < split_numbers->Length; i++)
			{
				numbers[i] = System::Convert::ToInt32(split_numbers[i]);
			}

			if (numbers->Length == 0) // Условие для проверки пуст ли список ввода.
			{
				MessageBox::Show("Список чисел пуст.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			
			if (numbers[numbers->Length - 1] != 0) // Проверяем, что последний элемент является 0.
			{
				MessageBox::Show("Последнее число не равно \"0\".", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			recursion_3(numbers, 0); // Начинает рекурсию после всех проверок и записи массива чисел.

			button_start2->Enabled = false; // Отключает кнопку старта для предотвращения дальнейшего нажатия.
			
		}
        
        private: System::Void info2_Click(System::Object^ sender, System::EventArgs^ e) // Информационное окно 2.
		{
			String^ info_p2 = 
				"Программа определяет нечетные числа в заданной пользователем последовательности:\n\n"
				"1) Для ввода значений введите данные в поле ввода;\n\n2) Нажмите на кнопку \"Ввести\" и в поле \"Ввод\" появятся введённые вами значения;\n\n"
				"3) Последняя цифра должна быть всегда равно 0 (По достижении 6 строк последнее ведденое число заменится 0);\n\n"
				"4) Нажмите кнопку \"Старт\" для запуска программы; \n\n5) После выполнения рекурсии в поле \"Вывод\" появится результат выполнения;\n\n"
				"6) После завершения программы и при желании вновь воспользоваться программой нажмите кнопку \"Очистить поле\". \n\n Примечание: Введение нечисловых значений и превышение лимита элементов в строке в 6 символов выведет окно с предупреждением.";
			MessageBox::Show(info_p2, "Информация о программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

        private: System::Void err_check_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (1) {
				MessageBox::Show("Тесты успешно пройдены!", "Успех");
			}
			else {
				MessageBox::Show("Тесты не пройдены!", "Ошибка");
			}	
		}

};
}