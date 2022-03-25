#pragma once
#include <string>
#include <cmath>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ buttonOperation;


	private: System::Windows::Forms::TextBox^ textBoxOperation;
	private: System::Windows::Forms::TextBox^ textBoxSecondNumber;



	private: System::Windows::Forms::TextBox^ textBoxFirstNumber;

	private: System::Windows::Forms::TextBox^ textBoxAnswer;
	private: System::Windows::Forms::Button^ buttonOperator_2;
	private: System::Windows::Forms::TextBox^ textBoxAnswer_2;
	private: System::Windows::Forms::TextBox^ textBoxMain_2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonOperation = (gcnew System::Windows::Forms::Button());
			this->textBoxOperation = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSecondNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAnswer = (gcnew System::Windows::Forms::TextBox());
			this->buttonOperator_2 = (gcnew System::Windows::Forms::Button());
			this->textBoxAnswer_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMain_2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(371, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Введите число, факториал которого хотите посчитать.";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(371, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(563, 34);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(371, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Введите номер числа ряда фибоначчи";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(563, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(371, 51);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Номер числа";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// buttonOperation
			// 
			this->buttonOperation->Location = System::Drawing::Point(12, 291);
			this->buttonOperation->Name = L"buttonOperation";
			this->buttonOperation->Size = System::Drawing::Size(371, 51);
			this->buttonOperation->TabIndex = 5;
			this->buttonOperation->Text = L"Итог";
			this->buttonOperation->UseVisualStyleBackColor = true;
			this->buttonOperation->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBoxOperation
			// 
			this->textBoxOperation->Location = System::Drawing::Point(149, 247);
			this->textBoxOperation->Name = L"textBoxOperation";
			this->textBoxOperation->Size = System::Drawing::Size(100, 22);
			this->textBoxOperation->TabIndex = 6;
			// 
			// textBoxSecondNumber
			// 
			this->textBoxSecondNumber->Location = System::Drawing::Point(283, 247);
			this->textBoxSecondNumber->Name = L"textBoxSecondNumber";
			this->textBoxSecondNumber->Size = System::Drawing::Size(100, 22);
			this->textBoxSecondNumber->TabIndex = 7;
			// 
			// textBoxFirstNumber
			// 
			this->textBoxFirstNumber->Location = System::Drawing::Point(12, 247);
			this->textBoxFirstNumber->Name = L"textBoxFirstNumber";
			this->textBoxFirstNumber->Size = System::Drawing::Size(100, 22);
			this->textBoxFirstNumber->TabIndex = 8;
			// 
			// textBoxAnswer
			// 
			this->textBoxAnswer->Location = System::Drawing::Point(12, 364);
			this->textBoxAnswer->Name = L"textBoxAnswer";
			this->textBoxAnswer->Size = System::Drawing::Size(371, 22);
			this->textBoxAnswer->TabIndex = 9;
			// 
			// buttonOperator_2
			// 
			this->buttonOperator_2->Location = System::Drawing::Point(563, 291);
			this->buttonOperator_2->Name = L"buttonOperator_2";
			this->buttonOperator_2->Size = System::Drawing::Size(371, 51);
			this->buttonOperator_2->TabIndex = 10;
			this->buttonOperator_2->Text = L"Итог";
			this->buttonOperator_2->UseVisualStyleBackColor = true;
			this->buttonOperator_2->Click += gcnew System::EventHandler(this, &MyForm::buttonOperator_2_Click);
			// 
			// textBoxAnswer_2
			// 
			this->textBoxAnswer_2->Location = System::Drawing::Point(563, 373);
			this->textBoxAnswer_2->Name = L"textBoxAnswer_2";
			this->textBoxAnswer_2->Size = System::Drawing::Size(371, 22);
			this->textBoxAnswer_2->TabIndex = 11;
			// 
			// textBoxMain_2
			// 
			this->textBoxMain_2->Location = System::Drawing::Point(563, 247);
			this->textBoxMain_2->Name = L"textBoxMain_2";
			this->textBoxMain_2->Size = System::Drawing::Size(371, 22);
			this->textBoxMain_2->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 525);
			this->Controls->Add(this->textBoxMain_2);
			this->Controls->Add(this->textBoxAnswer_2);
			this->Controls->Add(this->buttonOperator_2);
			this->Controls->Add(this->textBoxAnswer);
			this->Controls->Add(this->textBoxFirstNumber);
			this->Controls->Add(this->textBoxSecondNumber);
			this->Controls->Add(this->textBoxOperation);
			this->Controls->Add(this->buttonOperation);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = System::Convert::ToDouble(this->textBox1->Text);
		int fac = 1;
		for (int i = 1; i <= n; i++) {
			fac *= i;
		}
		this->textBox1->Text = System::Convert::ToString(fac);
	}


	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int n = System::Convert::ToDouble(this->textBox2->Text);
		int lf = 10;
		int* k = new int[lf];
		if (n == 1) {
			k[0] = 1;
		}
		else {
			k[0] = 1;
			k[1] = 1;
			for (int i = 2; i < lf; i++) {
				k[i] = k[i - 1] + k[i - 2];
			}
		}
		this->textBox2->Text = System::Convert::ToString(k[n-1]);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int FirstNumber= System::Convert::ToDouble(this->textBoxFirstNumber->Text);
		int SecondNumber = System::Convert::ToDouble(this->textBoxSecondNumber->Text);
		char Operation = System::Convert::ToChar(this->textBoxOperation->Text);
		if (Operation == '+') {
			this->textBoxAnswer->Text = System::Convert::ToString(FirstNumber + SecondNumber);
		}
		else if (Operation == '-') {
			this->textBoxAnswer->Text = System::Convert::ToString(FirstNumber - SecondNumber);
		}
		else if (Operation == ':') {
			this->textBoxAnswer->Text = System::Convert::ToString(FirstNumber / SecondNumber);
		}
		else if (Operation == '*') {
			this->textBoxAnswer->Text = System::Convert::ToString(FirstNumber * SecondNumber);
		}
	}
private: System::Void buttonOperator_2_Click(System::Object^ sender, System::EventArgs^ e) {
	int Xleft, Xright;
	char Operation;
	bool Switch = true;
	String^ Virajenie = System::Convert::ToString(this->textBoxMain_2->Text);
	for (int i = 0; i < Virajenie->Length; i++) {
		if (Virajenie[i] >= '0' && Virajenie[i] <= '9') {
			if (Switch) Xleft = Xleft * 10 + (Virajenie[i] - '0');
			else Xright = Xright * 10 + (Virajenie[i] - '0');
		}
		else {
			Operation = Virajenie[i];
			/*if (Virajenie[i] == '!') {
				break;
			}*/
			Switch = !Switch;
		}
	}
	if (Operation == '+') {
		this->textBoxAnswer_2->Text = System::Convert::ToString(Xleft+Xright);
	}
	else if (Operation == '-') {
		this->textBoxAnswer_2->Text = System::Convert::ToString(Xleft - Xright);
	}
	else if (Operation == ':' || Operation == ':') {
		this->textBoxAnswer_2->Text = System::Convert::ToString(Xleft / Xright);
	}
	else if (Operation == '*') {
		this->textBoxAnswer_2->Text = System::Convert::ToString(Xleft * Xright);
	}
	else if (Operation == '^') {
		this->textBoxAnswer_2->Text = System::Convert::ToString(pow(Xleft,Xright));
	}
	else if (Operation == '%') {
		this->textBoxAnswer_2->Text = System::Convert::ToString(Xleft%Xright);
	}
	else if (Operation == '!') {
		int fac = 1;
		for (int i = 1; i <= Xleft; i++) {
			fac *= i;
		}
		this->textBoxAnswer_2->Text = System::Convert::ToString(fac);
	}
}
};
}
