#pragma once
#include <vector>
#include <numeric>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ buttonDigit1;
	private: System::Windows::Forms::Button^ buttonDigit2;
	private: System::Windows::Forms::Button^ buttonDigit3;
	protected:

	protected:

	private: System::Windows::Forms::Button^ buttonDigit4;
	private: System::Windows::Forms::Button^ buttonDigit5;
	private: System::Windows::Forms::Button^ buttonDigit6;
	private: System::Windows::Forms::Button^ buttonDigit7;
	private: System::Windows::Forms::Button^ buttonDigit8;
	private: System::Windows::Forms::Button^ buttonDigit9;
	private: System::Windows::Forms::Button^ buttonDigit0;
	private: System::Windows::Forms::TextBox^ textBoxAnswer;
	private: System::Windows::Forms::Button^ buttonZapyataya;
	private: System::Windows::Forms::Button^ buttonClearAll;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonMultiplication;
	private: System::Windows::Forms::Button^ buttonDelenie;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::Button^ buttonClear;
	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->buttonDigit1 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit2 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit3 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit4 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit5 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit6 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit7 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit8 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit9 = (gcnew System::Windows::Forms::Button());
			this->textBoxAnswer = (gcnew System::Windows::Forms::TextBox());
			this->buttonDigit0 = (gcnew System::Windows::Forms::Button());
			this->buttonZapyataya = (gcnew System::Windows::Forms::Button());
			this->buttonClearAll = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMultiplication = (gcnew System::Windows::Forms::Button());
			this->buttonDelenie = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			//
			// buttonDigit1
			//
			this->buttonDigit1->Location = System::Drawing::Point(264, 340);
			this->buttonDigit1->Name = L"buttonDigit1";
			this->buttonDigit1->Size = System::Drawing::Size(72, 50);
			this->buttonDigit1->TabIndex = 0;
			this->buttonDigit1->Text = L"1";
			this->buttonDigit1->UseVisualStyleBackColor = true;
			this->buttonDigit1->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit1_Click);
			//
			// buttonDigit2
			//
			this->buttonDigit2->Location = System::Drawing::Point(381, 340);
			this->buttonDigit2->Name = L"buttonDigit2";
			this->buttonDigit2->Size = System::Drawing::Size(72, 50);
			this->buttonDigit2->TabIndex = 1;
			this->buttonDigit2->Text = L"2";
			this->buttonDigit2->UseVisualStyleBackColor = true;
			this->buttonDigit2->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit2_Click);
			//
			// buttonDigit3
			//
			this->buttonDigit3->Location = System::Drawing::Point(488, 340);
			this->buttonDigit3->Name = L"buttonDigit3";
			this->buttonDigit3->Size = System::Drawing::Size(72, 50);
			this->buttonDigit3->TabIndex = 2;
			this->buttonDigit3->Text = L"3";
			this->buttonDigit3->UseVisualStyleBackColor = true;
			this->buttonDigit3->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit3_Click);
			//
			// buttonDigit4
			//
			this->buttonDigit4->Location = System::Drawing::Point(264, 272);
			this->buttonDigit4->Name = L"buttonDigit4";
			this->buttonDigit4->Size = System::Drawing::Size(72, 50);
			this->buttonDigit4->TabIndex = 3;
			this->buttonDigit4->Text = L"4";
			this->buttonDigit4->UseVisualStyleBackColor = true;
			this->buttonDigit4->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit4_Click);
			//
			// buttonDigit5
			//
			this->buttonDigit5->Location = System::Drawing::Point(381, 272);
			this->buttonDigit5->Name = L"buttonDigit5";
			this->buttonDigit5->Size = System::Drawing::Size(72, 50);
			this->buttonDigit5->TabIndex = 4;
			this->buttonDigit5->Text = L"5";
			this->buttonDigit5->UseVisualStyleBackColor = true;
			this->buttonDigit5->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit5_Click);
			//
			// buttonDigit6
			//
			this->buttonDigit6->Location = System::Drawing::Point(488, 272);
			this->buttonDigit6->Name = L"buttonDigit6";
			this->buttonDigit6->Size = System::Drawing::Size(72, 50);
			this->buttonDigit6->TabIndex = 5;
			this->buttonDigit6->Text = L"6";
			this->buttonDigit6->UseVisualStyleBackColor = true;
			this->buttonDigit6->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit6_Click);
			//
			// buttonDigit7
			//
			this->buttonDigit7->Location = System::Drawing::Point(264, 198);
			this->buttonDigit7->Name = L"buttonDigit7";
			this->buttonDigit7->Size = System::Drawing::Size(72, 50);
			this->buttonDigit7->TabIndex = 6;
			this->buttonDigit7->Text = L"7";
			this->buttonDigit7->UseVisualStyleBackColor = true;
			this->buttonDigit7->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit7_Click);
			//
			// buttonDigit8
			//
			this->buttonDigit8->Location = System::Drawing::Point(381, 198);
			this->buttonDigit8->Name = L"buttonDigit8";
			this->buttonDigit8->Size = System::Drawing::Size(72, 50);
			this->buttonDigit8->TabIndex = 7;
			this->buttonDigit8->Text = L"8";
			this->buttonDigit8->UseVisualStyleBackColor = true;
			this->buttonDigit8->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit8_Click);
			//
			// buttonDigit9
			//
			this->buttonDigit9->Location = System::Drawing::Point(488, 198);
			this->buttonDigit9->Name = L"buttonDigit9";
			this->buttonDigit9->Size = System::Drawing::Size(72, 50);
			this->buttonDigit9->TabIndex = 8;
			this->buttonDigit9->Text = L"9";
			this->buttonDigit9->UseVisualStyleBackColor = true;
			this->buttonDigit9->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit9_Click);
			//
			// textBoxAnswer
			//
			this->textBoxAnswer->Location = System::Drawing::Point(264, 132);
			this->textBoxAnswer->MaximumSize = System::Drawing::Size(500, 51);
			this->textBoxAnswer->MinimumSize = System::Drawing::Size(200, 51);
			this->textBoxAnswer->Name = L"textBoxAnswer";
			this->textBoxAnswer->Size = System::Drawing::Size(296, 51);
			this->textBoxAnswer->TabIndex = 9;
			this->textBoxAnswer->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxAnswer->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxAnswer_TextChanged);
			//
			// buttonDigit0
			//
			this->buttonDigit0->Location = System::Drawing::Point(381, 411);
			this->buttonDigit0->Name = L"buttonDigit0";
			this->buttonDigit0->Size = System::Drawing::Size(72, 50);
			this->buttonDigit0->TabIndex = 10;
			this->buttonDigit0->Text = L"0";
			this->buttonDigit0->UseVisualStyleBackColor = true;
			this->buttonDigit0->Click += gcnew System::EventHandler(this, &MyForm::buttonDigit0_Click);
			//
			// buttonZapyataya
			//
			this->buttonZapyataya->Location = System::Drawing::Point(488, 411);
			this->buttonZapyataya->Name = L"buttonZapyataya";
			this->buttonZapyataya->Size = System::Drawing::Size(72, 50);
			this->buttonZapyataya->TabIndex = 11;
			this->buttonZapyataya->Text = L",";
			this->buttonZapyataya->UseVisualStyleBackColor = true;
			this->buttonZapyataya->Click += gcnew System::EventHandler(this, &MyForm::buttonZapyataya_Click);
			//
			// buttonClearAll
			//
			this->buttonClearAll->Location = System::Drawing::Point(264, 409);
			this->buttonClearAll->Name = L"buttonClearAll";
			this->buttonClearAll->Size = System::Drawing::Size(72, 52);
			this->buttonClearAll->TabIndex = 12;
			this->buttonClearAll->Text = L"CA";
			this->buttonClearAll->UseVisualStyleBackColor = true;
			this->buttonClearAll->Click += gcnew System::EventHandler(this, &MyForm::buttonClearAll_Click);
			//
			// buttonPlus
			//
			this->buttonPlus->Location = System::Drawing::Point(589, 410);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(72, 50);
			this->buttonPlus->TabIndex = 13;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			//
			// buttonMinus
			//
			this->buttonMinus->Location = System::Drawing::Point(589, 340);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(72, 50);
			this->buttonMinus->TabIndex = 14;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			//
			// buttonMultiplication
			//
			this->buttonMultiplication->Location = System::Drawing::Point(589, 198);
			this->buttonMultiplication->Name = L"buttonMultiplication";
			this->buttonMultiplication->Size = System::Drawing::Size(72, 50);
			this->buttonMultiplication->TabIndex = 15;
			this->buttonMultiplication->Text = L"X";
			this->buttonMultiplication->UseVisualStyleBackColor = true;
			this->buttonMultiplication->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiplication_Click);
			//
			// buttonDelenie
			//
			this->buttonDelenie->Location = System::Drawing::Point(589, 268);
			this->buttonDelenie->Name = L"buttonDelenie";
			this->buttonDelenie->Size = System::Drawing::Size(72, 50);
			this->buttonDelenie->TabIndex = 16;
			this->buttonDelenie->Text = L"/";
			this->buttonDelenie->UseVisualStyleBackColor = true;
			this->buttonDelenie->Click += gcnew System::EventHandler(this, &MyForm::buttonDelenie_Click);
			//
			// buttonEqual
			//
			this->buttonEqual->Location = System::Drawing::Point(264, 467);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(296, 50);
			this->buttonEqual->TabIndex = 17;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::buttonEqual_Click);
			//
			// buttonClear
			//
			this->buttonClear->Location = System::Drawing::Point(589, 132);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(72, 50);
			this->buttonClear->TabIndex = 18;
			this->buttonClear->Text = L"C";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 553);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonDelenie);
			this->Controls->Add(this->buttonMultiplication);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonClearAll);
			this->Controls->Add(this->buttonZapyataya);
			this->Controls->Add(this->buttonDigit0);
			this->Controls->Add(this->textBoxAnswer);
			this->Controls->Add(this->buttonDigit9);
			this->Controls->Add(this->buttonDigit8);
			this->Controls->Add(this->buttonDigit7);
			this->Controls->Add(this->buttonDigit6);
			this->Controls->Add(this->buttonDigit5);
			this->Controls->Add(this->buttonDigit4);
			this->Controls->Add(this->buttonDigit3);
			this->Controls->Add(this->buttonDigit2);
			this->Controls->Add(this->buttonDigit1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonDigit0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAnswer->Text[textBoxAnswer->Text->Length - 1]!='/') {
			textBoxAnswer->Text = textBoxAnswer->Text + "0";
		}
	}
	private: System::Void buttonDigit1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + "1";
	}
	private: System::Void buttonDigit2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + "2";
	}
	private: System::Void buttonDigit3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + "3";
	}
	private: System::Void buttonDigit4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + "4";
	}
	private: System::Void buttonDigit5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + "5";
	}
	private: System::Void buttonDigit6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + "6";
	}
	private: System::Void buttonDigit7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + "7";
	}
	private: System::Void buttonDigit8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + "8";
	}
	private: System::Void buttonDigit9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + "9";
	}
	private: System::Void buttonDelenie_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '+'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '-'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '*'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '/') {
			textBoxAnswer->Text = textBoxAnswer->Text + "/";
		}
		else {
			buttonClear_Click(sender, e);
			textBoxAnswer->Text = textBoxAnswer->Text + "/";
		}
	}
	private: System::Void buttonMultiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '+'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '-'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '*'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '/') {
			textBoxAnswer->Text = textBoxAnswer->Text + "*";
		}
		else {
			buttonClear_Click(sender, e);
			textBoxAnswer->Text = textBoxAnswer->Text + "*";
		}
	}
	private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '+'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '-'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '*'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '/') {
			textBoxAnswer->Text = textBoxAnswer->Text + "-";
		}
		else {
			buttonClear_Click(sender, e);
			textBoxAnswer->Text = textBoxAnswer->Text + "-";
		}
	}
	private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '+'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '-'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '*'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '/') {
			textBoxAnswer->Text = textBoxAnswer->Text + "+";
		}
		else {
			buttonClear_Click(sender, e);
			textBoxAnswer->Text = textBoxAnswer->Text + "+";
		}
	}
	private: System::Void buttonZapyataya_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = textBoxAnswer->Text + ",";
	}
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAnswer->Text->Length > 0) {
			textBoxAnswer->Text = textBoxAnswer->Text->Remove(textBoxAnswer->Text->Length - 1);
		}
	}
	private: System::Void buttonClearAll_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAnswer->Text = "";
	}
	private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '+'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '-'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '*'
			&& textBoxAnswer->Text[textBoxAnswer->Text->Length - 1] != '/') {

			int answer = 0;
			String^ a = textBoxAnswer->Text;
			std::vector<int> all_nums;
			std::vector<char> all_symbols;
			int temp = 0;
			for (int i = 0; i < a->Length; i++) {
				if (a[i] >= '0' && a[i] <= '9') {
					temp = temp * 10 + (a[i] - '0');
				}
				else {
					all_nums.push_back(temp);
					temp = 0;
					all_symbols.push_back(a[i]);
				}
			}
			all_nums.push_back(temp);
			int all_symbols_len = all_symbols.size();
			int j = 0;
			for (int i = 0; i < all_symbols_len; i++) {
				if (all_symbols[j] == '*') {
					all_nums[j] *= all_nums[j + 1];
					all_nums.erase(all_nums.begin() + j + 1);
					all_symbols.erase(all_symbols.begin() + j);
				}
				else if (all_symbols[j] == '/') {
					all_nums[j] /= all_nums[j + 1];
					all_nums.erase(all_nums.begin() + j + 1);
					all_symbols.erase(all_symbols.begin() + j);
				}
				else j++;
			}
			j = 0;
			all_symbols_len = all_symbols.size();
			for (int i = 0; i < all_symbols_len; i++) {
				if (all_symbols[j] == '+') {
					all_nums[j] += all_nums[j + 1];
					all_nums.erase(all_nums.begin() + j + 1); //4+2*2 = 4+4
					all_symbols.erase(all_symbols.begin() + j);
				}
				else if (all_symbols[j] == '-') {
					all_nums[j] -= all_nums[j + 1];
					all_nums.erase(all_nums.begin() + j + 1);
					all_symbols.erase(all_symbols.begin() + j);
				}
				else j++;
			}
			answer = all_nums[0];

			if (answer == 0) {
				this->textBoxAnswer->Text = "";
			}
			else {
				this->textBoxAnswer->Text = System::Convert::ToString(answer);
			}
		}
	}
	private: System::Void textBoxAnswer_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
};
	

