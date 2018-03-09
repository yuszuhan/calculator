//計算機
//完成日期與時間；2017/07/10 上午05:29
//有加減乘除與括號的功能
//考慮使用者直接輸入負數(運算數字第一位如果是負數可以不用括號、其餘都要括號)
//完成日期與時間；2017/07/10 下午02:50

#pragma once
#include <string>
//#include <vector>
#include <iostream>
#include <math.h>
#include "Header.h"


namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//

		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		int check1 = 0;
		int check2 = 0;
		int check3 = 0;
		int check4 = 0;

		//int number[20] = {};
		//int useop = 0;  // + 1 - 2 x 3 / 4 % 5
		//array<System::String >^ ff = {};
		System::String^ a = {};
		std::vector<double> *num = new vector<double>;
		std::vector<int> *op = new vector<int>;

	private: System::Windows::Forms::Button^  button_cancel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button_DESCREASE;
	private: System::Windows::Forms::Button^  button_PLUS;
	private: System::Windows::Forms::Button^  button_EQUAL;
	private: System::Windows::Forms::Button^  button_NODEVIDE;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button_COUPLE;
	private: System::Windows::Forms::Button^  button_X;
	private: System::Windows::Forms::Button^  buttonPLUSANDNOT;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button_5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button0;
	private: System::Windows::Forms::Button^  button_DEVIDE;
	private: System::Windows::Forms::Button^  button_7;
	private: System::Windows::Forms::Button^  button_4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button_DOT;
	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_DESCREASE = (gcnew System::Windows::Forms::Button());
			this->button_PLUS = (gcnew System::Windows::Forms::Button());
			this->button_EQUAL = (gcnew System::Windows::Forms::Button());
			this->button_NODEVIDE = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_COUPLE = (gcnew System::Windows::Forms::Button());
			this->button_X = (gcnew System::Windows::Forms::Button());
			this->buttonPLUSANDNOT = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button_DEVIDE = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_DOT = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_cancel
			// 
			this->button_cancel->Location = System::Drawing::Point(20, 84);
			this->button_cancel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(56, 28);
			this->button_cancel->TabIndex = 0;
			this->button_cancel->Text = L"C";
			this->button_cancel->UseVisualStyleBackColor = true;
			this->button_cancel->Click += gcnew System::EventHandler(this, &MyForm::button_cancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(16, 30);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button_DESCREASE
			// 
			this->button_DESCREASE->Location = System::Drawing::Point(312, 184);
			this->button_DESCREASE->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_DESCREASE->Name = L"button_DESCREASE";
			this->button_DESCREASE->Size = System::Drawing::Size(56, 24);
			this->button_DESCREASE->TabIndex = 2;
			this->button_DESCREASE->Text = L"-";
			this->button_DESCREASE->UseVisualStyleBackColor = true;
			this->button_DESCREASE->Click += gcnew System::EventHandler(this, &MyForm::button_DESCREASE_Click);
			// 
			// button_PLUS
			// 
			this->button_PLUS->Location = System::Drawing::Point(312, 234);
			this->button_PLUS->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_PLUS->Name = L"button_PLUS";
			this->button_PLUS->Size = System::Drawing::Size(56, 26);
			this->button_PLUS->TabIndex = 3;
			this->button_PLUS->Text = L"+";
			this->button_PLUS->UseVisualStyleBackColor = true;
			this->button_PLUS->Click += gcnew System::EventHandler(this, &MyForm::button_PLUS_Click);
			// 
			// button_EQUAL
			// 
			this->button_EQUAL->Location = System::Drawing::Point(312, 290);
			this->button_EQUAL->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_EQUAL->Name = L"button_EQUAL";
			this->button_EQUAL->Size = System::Drawing::Size(56, 28);
			this->button_EQUAL->TabIndex = 4;
			this->button_EQUAL->Text = L"=";
			this->button_EQUAL->UseVisualStyleBackColor = true;
			this->button_EQUAL->Click += gcnew System::EventHandler(this, &MyForm::button_EQUAL_Click);
			// 
			// button_NODEVIDE
			// 
			this->button_NODEVIDE->Location = System::Drawing::Point(215, 85);
			this->button_NODEVIDE->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_NODEVIDE->Name = L"button_NODEVIDE";
			this->button_NODEVIDE->Size = System::Drawing::Size(56, 27);
			this->button_NODEVIDE->TabIndex = 5;
			this->button_NODEVIDE->Text = L"%";
			this->button_NODEVIDE->UseVisualStyleBackColor = true;
			this->button_NODEVIDE->Click += gcnew System::EventHandler(this, &MyForm::button_NODEVIDE_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(215, 138);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(56, 27);
			this->button9->TabIndex = 6;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(215, 184);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 24);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(215, 235);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 26);
			this->button3->TabIndex = 8;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button_COUPLE
			// 
			this->button_COUPLE->Location = System::Drawing::Point(116, 84);
			this->button_COUPLE->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_COUPLE->Name = L"button_COUPLE";
			this->button_COUPLE->Size = System::Drawing::Size(56, 28);
			this->button_COUPLE->TabIndex = 9;
			this->button_COUPLE->Text = L"( )";
			this->button_COUPLE->UseVisualStyleBackColor = true;
			this->button_COUPLE->Click += gcnew System::EventHandler(this, &MyForm::button_COUPLE_Click_1);
			// 
			// button_X
			// 
			this->button_X->Location = System::Drawing::Point(312, 138);
			this->button_X->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_X->Name = L"button_X";
			this->button_X->Size = System::Drawing::Size(56, 27);
			this->button_X->TabIndex = 10;
			this->button_X->Text = L"X";
			this->button_X->UseVisualStyleBackColor = true;
			this->button_X->Click += gcnew System::EventHandler(this, &MyForm::button_X_Click);
			// 
			// buttonPLUSANDNOT
			// 
			this->buttonPLUSANDNOT->Location = System::Drawing::Point(215, 289);
			this->buttonPLUSANDNOT->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonPLUSANDNOT->Name = L"buttonPLUSANDNOT";
			this->buttonPLUSANDNOT->Size = System::Drawing::Size(56, 29);
			this->buttonPLUSANDNOT->TabIndex = 11;
			this->buttonPLUSANDNOT->Text = L"+/-";
			this->buttonPLUSANDNOT->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(116, 138);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(56, 27);
			this->button8->TabIndex = 12;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button_5
			// 
			this->button_5->Location = System::Drawing::Point(116, 184);
			this->button_5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(56, 24);
			this->button_5->TabIndex = 13;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = true;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::button_5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(116, 235);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 26);
			this->button2->TabIndex = 14;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(116, 290);
			this->button0->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(56, 28);
			this->button0->TabIndex = 15;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button_DEVIDE
			// 
			this->button_DEVIDE->Location = System::Drawing::Point(312, 85);
			this->button_DEVIDE->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_DEVIDE->Name = L"button_DEVIDE";
			this->button_DEVIDE->Size = System::Drawing::Size(56, 27);
			this->button_DEVIDE->TabIndex = 16;
			this->button_DEVIDE->Text = L"/";
			this->button_DEVIDE->UseVisualStyleBackColor = true;
			this->button_DEVIDE->Click += gcnew System::EventHandler(this, &MyForm::button_DEVIDE_Click);
			// 
			// button_7
			// 
			this->button_7->Location = System::Drawing::Point(20, 138);
			this->button_7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(56, 28);
			this->button_7->TabIndex = 17;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = true;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::button_7_Click);
			// 
			// button_4
			// 
			this->button_4->Location = System::Drawing::Point(20, 184);
			this->button_4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(56, 24);
			this->button_4->TabIndex = 18;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = true;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::button_4_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 234);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 26);
			this->button1->TabIndex = 19;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button_DOT
			// 
			this->button_DOT->Location = System::Drawing::Point(20, 289);
			this->button_DOT->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_DOT->Name = L"button_DOT";
			this->button_DOT->Size = System::Drawing::Size(56, 29);
			this->button_DOT->TabIndex = 20;
			this->button_DOT->Text = L".";
			this->button_DOT->UseVisualStyleBackColor = true;
			this->button_DOT->Click += gcnew System::EventHandler(this, &MyForm::button_DOT_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 367);
			this->Controls->Add(this->button_DOT);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_DEVIDE);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->buttonPLUSANDNOT);
			this->Controls->Add(this->button_X);
			this->Controls->Add(this->button_COUPLE);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button_NODEVIDE);
			this->Controls->Add(this->button_EQUAL);
			this->Controls->Add(this->button_PLUS);
			this->Controls->Add(this->button_DESCREASE);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_cancel);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->label1->Text = "0";
	}
	private: System::Void button_cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->label1->Text = "0";
				 a = {};
				 op->clear();
				 num->clear();
				 std::system("cls");

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "1";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(1);
				 std::cout << (num->at((num->size()) - 1));

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "2";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(2);
				 std::cout << (num->at((num->size()) - 1));

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "3";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(3);
				 std::cout << (num->at((num->size()) - 1));

	}
	private: System::Void button_4_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "4";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(4);
				 std::cout << (num->at((num->size()) - 1));

	}
	private: System::Void button_5_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "5";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(5);
				 std::cout << (num->at((num->size()) - 1));
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "6";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(6);
				 std::cout << (num->at((num->size()) - 1));
	}
	private: System::Void button_7_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "7";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(7);
				 std::cout << (num->at((num->size()) - 1));
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "8";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(8);
				 std::cout << (num->at((num->size()) - 1));
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "9";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(9);
				 std::cout << (num->at((num->size()) - 1));
	}
	private: System::Void button0_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "0";
				 this->label1->Text = a;
				 op->push_back(100);
				 num->push_back(0);
				 std::cout << (num->at((num->size()) - 1));
	}
	private: System::Void button_PLUS_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "+";
				 this->label1->Text = a;
				 op->push_back(1); // +
				 num->push_back(100);
				 std::cout << " + ";
	}
	private: System::Void button_DESCREASE_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "-";
				 this->label1->Text = a;
				 op->push_back(2);  // -
				 num->push_back(100);
				 std::cout << " - ";
	}
	private: System::Void button_X_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "x";
				 this->label1->Text = a;
				 op->push_back(3);  //x
				 num->push_back(100);
				 std::cout << " X ";
	}
	private: System::Void button_DEVIDE_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "/";
				 this->label1->Text = a;
				 op->push_back(4);  // /
				 num->push_back(100);
				 std::cout << " / ";
	}
	private: System::Void button_NODEVIDE_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + "%";
				 this->label1->Text = a;
				 op->push_back(5); // %
				 num->push_back(100);
				 //std::cout << (op->at((op->size()) - 2));
				 std::cout << " % ";
	}

	private: System::Void button_EQUAL_Click(System::Object^  sender, System::EventArgs^  e) {
				 std::system("cls");
				 op->push_back(6); // =
				 num->push_back(100);
				 int firsttodo = 0; //判斷情況 3是error
				 double number1 = 0; //數字1
				 double number2 = 0; //數字2
				 double subans = 0;  //計算過程各階段的答案
				 int end = 0;  //判斷各階段是否結束
				 int dot1 = 0; //小數點"."前的第一位
				 int dot2 = 0; //小數點"."前的最後一位
				 int dot3 = 0; //小數點"."後的第一位
				 int dot4 = 0; //小數點"."後的最後一位
				 int one = 0;
				 int ri = 0; //右括號的index
				 int li = 0; //左括號的index

				 if (op->size() != 1)
				 {
					 int yesc = 0;
					 for (signed i = 0; i < (op->size()); i++)
					 {
						 if (op->at(i) == 7)
						 {
							 yesc = 1;
						 }
					 }
					 //括號()
					 if (firsttodo != 3 && yesc == 1)
					 {
						 check1 = 0;
						 check2 = 0;
						 firsttodo = 0;
						 end = 0;
						 one = 0;
						 int r = 0; //計算左括號數量
						 int l = 0; //計算右括號數量

						 for (signed a = 0; a < ((op->size()) - 1); a++)
						 {

							 if (firsttodo != 3)
							 {
								 if (op->at(a) == 7)
								 {
									 l = l + 1;
								 }
								 else if (op->at(a) == 8)
								 {
									 r = r + 1;
								 }

								 if (op->at(a) == 7 && op->at(a + 1) == 8)
								 {
									 this->label1->Text = " E R R O R ! ! ! ";
									 firsttodo = 3;
								 }
								 else if (op->at(a) == 8 && op->at(a + 1) == 7)
								 {
									 this->label1->Text = " E R R O R ! ! ! ";
									 firsttodo = 3;
								 }
								 else if (op->at(a) == 8 && op->at(a + 1) == 100)
								 {
									 this->label1->Text = " E R R O R ! ! ! ";
									 firsttodo = 3;
								 }
								 else if (a == ((op->size()) - 2) && op->at(a) == 7)
								 {
									 this->label1->Text = " E R R O R ! ! ! ";
									 firsttodo = 3;
								 }
								 else if (a == ((op->size()) - 2) && r != l)
								 {
									 this->label1->Text = " E R R O R ! ! ! ";
									 firsttodo = 3;
								 }

							 }
						 }
					 }
					 while (firsttodo != 3 && end != 1 && yesc == 1)
					 {
						 ri = 0;
						 li = 0;
						 for (signed a = 0; a < ((op->size())); a++)
						 {
							 if (op->at(a) == 7)
							 {
								 li = a;
							 }
							 else if (op->at(a) == 8)
							 {
								 ri = a;
								 break;
							 }
						 }

						 if (firsttodo != 3)
						 {
							 firsttodo = 0;
							 end = 0;
						 }
						 //處理"."和"%"
						 for (signed i = (li + 1); i < (ri); i++)
						 {
							 if (op->at(i) == 0 || op->at(i) == 5)  //有"."或"%"
							 {
								 if (i == 0)
								 {
									 this->label1->Text = " E R R O R ! ! ! ";
									 firsttodo = 3;
								 }
								 else if (firsttodo != 3 && op->at(i) == 0)
								 {
									 firsttodo = 1;
								 }
								 else if (firsttodo != 3 && op->at(i) == 5)
								 {
									 if (firsttodo != 1)
									 {
										 firsttodo = 2;
									 }
								 }
							 }
						 }
						 while (firsttodo != 3 && end != 1) //處理"."和"%"
						 {
							 //std::cout << firsttodo << "!+111++++!" << endl;
							 while (firsttodo == 1)
							 {
								 one = 0;
								 for (signed i = (li + 1); i < (ri); i++)
								 {
									 if (one == 0)
									 {
										 //std::cout << end << "!+111++++!" << endl;

										 if (op->at(i) == 0)
										 {
											 one = 1;
											 dot2 = (i - 1);
											 dot1 = 0;
											 if (op->at(dot2) == 200)
											 {
												 dot1 = dot2;
											 }
											 else
											 {
												 for (unsigned j = (i - 1); j >= 0; j--)
												 {
													 if (num->at(j) == 100 && op->at(j) != 200)
													 {
														 dot1 = (j + 1);
														 if (j == (i - 1))
														 {
															 this->label1->Text = " E R R O R ! ! ! ";
															 firsttodo = 3;
														 }
														 if (op->at(j) == 0 || op->at(j) == 5)
														 {
															 this->label1->Text = " E R R O R ! ! ! ";
															 firsttodo = 3;
														 }
														 break;
													 }
												 }
											 }
											 number1 = 0;
											 if (firsttodo == 1)
											 {
												 for (signed u = dot1; u <= dot2; u++)
												 {
													 number1 = number1 + (num->at(u))*(pow(10, (dot2 - u)));
												 }
												 //std::cout << number1 << endl;
											 }
											 dot3 = (i + 1);
											 if (op->at(dot3) == 200)
											 {
												 dot4 = dot3;
											 }
											 else
											 {
												 for (signed j = (i + 1); j < (op->size()); j++)
												 {
													 if (num->at(j) == 100 && op->at(j) != 200)
													 {
														 dot4 = (j - 1);
														 if (j == (i + 1))
														 {
															 this->label1->Text = " E R R O R ! ! ! ";
															 firsttodo = 3;
														 }
														 if (op->at(j) == 0 || op->at(j) == 7)
														 {
															 this->label1->Text = " E R R O R ! ! ! ";
															 firsttodo = 3;
														 }
														 break;
													 }
												 }
											 }
											 number2 = 0;
											 if (firsttodo == 1)
											 {
												 for (signed u = dot3; u <= dot4; u++)
												 {
													 number2 = number2 + (num->at(u))*(pow(10, ((-1)*(u - dot3 + 1))));
												 }
												 //std::cout << number2 << endl;
											 }
											 if (firsttodo == 1)
											 {
												 if (op->at(i) == 0)
												 {
													 subans = (number1 + number2);
													 double &m = num->at(dot1);
													 m = subans;
													 int &n = op->at(dot1);
													 n = 200;
													 op->erase((op->begin() + dot1 + 1), (op->begin() + dot4 + 1));
													 num->erase((num->begin() + dot1 + 1), (num->begin() + dot4 + 1));
												 }
												 for (signed kk = li; kk < ((op->size())); kk++)
												 {
													 if (op->at(kk) == 8)
													 {
														 ri = kk;
														 break;
													 }
												 }
											 }
										 }

										 //確認還有沒有"."和"%"
										 if (firsttodo != 3)
										 {
											 firsttodo = 2;
											 for (signed g = (li + 1); g < (ri); g++)
											 {
												 //std::cout << num->at(g) << "  ";
												 if (op->at(g) == 0)
												 {
													 if (g == 0 || g == ((op->size()) - 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 else if (firsttodo != 3)
													 {
														 firsttodo = 1;
													 }
												 }
											 }
										 }

										 end = 1;
										 for (signed a = (li + 1); a < (ri); a++)
										 {
											 if (op->at(a) == 0 || op->at(a) == 5)
											 {
												 end = 0;
											 }
										 }
									 }
								 }
							 }
							 while (firsttodo == 2)
							 {
								 one = 0;
								 for (signed i = (li + 1); i < (ri); i++)
								 {
									 if (i != (op->size() - 1))
									 {
										 if (op->at(i + 1) == 100 || op->at(i + 1) == 200)
										 {
											 if (op->at(i) == 5 && firsttodo != 3)
											 {
												 this->label1->Text = " E R R O R ! ! ! ";
												 firsttodo = 3;
												 one = 1;
											 }
										 }
									 }
									 if (firsttodo == 3)
									 {
										 break;
									 }
									 if (one == 0)
									 {
										 //std::cout << end << "!+5555++++!" << endl;
										 if (op->at(i) == 5)
										 {
											 one = 1;
											 dot2 = (i - 1);
											 dot1 = 0;
											 if (op->at(dot2) == 200)
											 {
												 dot1 = dot2;
											 }
											 else
											 {
												 for (signed j = (i - 1); j >= 0; j--)
												 {
													 if (num->at(j) == 100 && op->at(j) != 200)
													 {
														 dot1 = (j + 1);
														 if (j == (i - 1) && op->at(j) != 2)
														 {
															 this->label1->Text = " E R R O R ! ! ! ";
															 firsttodo = 3;
														 }
														 break;
													 }
												 }
											 }
											 number1 = 0;

											 if (firsttodo != 3)
											 {
												 if (op->at(i + 1) == 5)
												 {
													 this->label1->Text = " E R R O R ! ! ! ";
													 firsttodo = 3;
												 }
											 }

											 if (firsttodo != 3)
											 {
												 for (signed u = dot1; u <= dot2; u++)
												 {
													 number1 = number1 + (num->at(u))*(pow(10, (dot2 - u)));
													 //std::cout << number1 << " %number1 ing " << endl;
												 }
											 }
											 if (firsttodo != 3)
											 {
												 if (op->at(i) == 5)
												 {
													 subans = (number1 / 100);
													 double &m = num->at(dot1);
													 m = subans;
													 int &n = op->at(dot1);
													 n = 200;
													 op->erase((op->begin() + dot1 + 1), (op->begin() + i + 1));
													 num->erase((num->begin() + dot1 + 1), (num->begin() + i + 1));
												 }
//
												 for (signed kk = li; kk < ((op->size())); kk++)
												 {
													 if (op->at(kk) == 8)
													 {
														 ri = kk;
														 break;
													 }
												 }
											 }
										 }
										 //確認還有沒有"%"
										 if (firsttodo != 3)
										 {
											 firsttodo = 0;
											 for (signed p = (li + 1); p < (ri); p++)
											 {
												 //std::cout << num->at(p) << "  ";

												 if (op->at(p) == 5)
												 {
													 if (p == 0)
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 else if (firsttodo != 3)
													 {
														 firsttodo = 2;
													 }
												 }
											 }

										 }
										 end = 1;
										 for (signed a = (li + 1); a < (ri); a++)
										 {
											 if (op->at(a) == 5)
											 {
												 end = 0;
											 }
										 }
									 }
								 }
							 }

							 end = 1;
							 for (signed aa = (li + 1); aa < (ri); aa++)
							 {
								 if (op->at(aa) == 0 || op->at(aa) == 5)
								 {
									 end = 0;
								 }
							 }

						 }

						 std::cout << "!~~~!" << endl;

						 if (firsttodo != 3)
						 {
							 firsttodo = 0;
							 end = 0;
							 one = 0;
						 }

        				 //整數
						 if (firsttodo != 3)
						 {
							 one = 1;
							 for (signed aaa = (li + 1); aaa < (ri); aaa++)
							 {
								 if (op->at(aaa) == 100)
								 {
									 one = 0;
								 }
							 }

							 while (one == 0)
							 {
								 //std::cout << " int ";
								 check1 = 0;
								 check2 = 0;
								 for (signed aa = (li + 1); aa < (ri); aa++)
								 {
									 if (op->at(aa) == 100)
									 {
										 check1 = aa;
										 break;
									 }
								 }
								 for (signed aa = check1; aa <= (ri); aa++)
								 {
									 if (num->at(aa) == 100 && op->at(aa) != 200)
									 {
										 check2 = (aa - 1);
										 break;
									 }
								 }
								 number1 = 0;
								 if (firsttodo != 3)
								 {
									 for (signed u = check1; u <= check2; u++)
									 {
										 number1 = number1 + (num->at(u))*(pow(10, (check2 - u)));
										 //std::cout << number1 << endl;
									 }
								 }

								 double &m = num->at(check1);
								 m = number1;
								 int &n = op->at(check1);
								 n = 200;
								 if (check1 != check2)
								 {
									 op->erase((op->begin() + check1 + 1), (op->begin() + check2 + 1));
									 num->erase((num->begin() + check1 + 1), (num->begin() + check2 + 1));
									 for (signed kk = li; kk < ((op->size())); kk++)
									 {
										 if (op->at(kk) == 8)
										 {
											 ri = kk;
											 break;
										 }
									 }
								 }

								 one = 1;
								 for (signed aaa = (li + 1); aaa < (ri); aaa++)
								 {
									 if (op->at(aaa) == 100)
									 {
										 one = 0;
									 }
								 }
								 if (one == 1)
								 {
									 if (op->at(li + 1) == 2)
									 {
										 double &km = num->at(li + 1);
										 km = (-1)*(num->at(li + 2));
										 int &kn = op->at(li + 1);
										 kn = 200;
										 op->erase((op->begin() + li + 2), (op->begin() + li + 3));
										 num->erase((num->begin() + li + 2), (num->begin() + li + 3));
										 for (signed kk = li; kk < ((op->size())); kk++)
										 {
											 if (op->at(kk) == 8)
											 {
												 ri = kk;
												 break;
											 }
										 }

									 }
								 }
								 check1 = 0;
								 check2 = 0;
							 }
							 if (one == 1)
							 {
								 if (op->at(li + 1) == 2)
								 {
									 double &km = num->at(li + 1);
									 km = (-1)*(num->at(li + 2));
									 int &kn = op->at(li + 1);
									 kn = 200;
									 op->erase((op->begin() + li + 2), (op->begin() + li + 3));
									 num->erase((num->begin() + li + 2), (num->begin() + li + 3));
									 for (signed kk = li; kk < ((op->size())); kk++)
									 {
										 if (op->at(kk) == 8)
										 {
											 ri = kk;
											 break;
										 }
									 }
								 }
							 }
						 }

						 //處理乘除加減
						 if (firsttodo != 3)
						 {
							 firsttodo = 0;
							 end = 0;
							 one = 0;
							 check1 = 0;
							 check2 = 0;

							 for (signed i = (li + 1); i < (ri); i++)
							 {
								 if (op->at(i) == 3 || op->at(i) == 4)
								 {
									 if (i == 0 || i == ((op->size()) - 1))
									 {
										 this->label1->Text = " E R R O R ! ! ! ";
										 firsttodo = 3;
									 }
									 else if (firsttodo != 3)
									 {
										 firsttodo = 1;
									 }
								 }
								 else if (op->at(i) == 1 || op->at(i) == 2)
								 {
									 if (firsttodo != 1 && firsttodo != 3)
									 {
										 if (i == 0 || i == ((op->size()) - 1))
										 {
											 this->label1->Text = " E R R O R ! ! ! ";
											 firsttodo = 3;
										 }
										 else if (firsttodo != 3)
										 {
											 firsttodo = 2;
										 }
									 }
								 }
							 }
						 }
						 while (firsttodo != 3 && end != 1)
						 {
							 //std::cout << "!^^^^^~wh~!" << endl;	 
							 while (firsttodo == 1)
							 {
								 one = 0;
								 check1 = 0;
								 check2 = 0;
								 check3 = 0;
								 check4 = 0;

								 for (signed i = (li + 1); i < (ri); i++)
								 {
									 //std::cout << i << "!~whiiiiiiiiiiiiiii~!" << endl;
									 if (one == 0)
									 {
										 if (op->at(i) == 3 || op->at(i) == 4)
										 {
											 //std::cout << op->at(i) << "!~whiiiiii=====iiiii~!   ##" << endl;
											 one = 1;
											 check2 = (i - 1);
											 if (op->at(check2) == 200)
											 {
												 check1 = check2;
											 }
											 else
											 {
												 for (signed j = (i - 1); j >= 0; j--)
												 {
													 if (num->at(j) == 100 && op->at(j) != 200)
													 {
														 check1 = (j + 1);
														 if (j == (i - 1))
														 {
															 this->label1->Text = " E R R O R ! ! ! ";
															 firsttodo = 3;
														 }
														 break;
													 }
												 }
											 }
											 number1 = 0;
											 if (firsttodo != 3)
											 {
												 for (signed u = check1; u <= check2; u++)
												 {
													 number1 = number1 + (num->at(u))*(pow(10, (check2 - u)));
												 }
												 //std::cout << number1 << endl;
											 }
											 check3 = (i + 1);
											 if (op->at(check3) == 200)
											 {
												 check4 = check3;
											 }
											 else
											 {
												 for (signed j = (i + 1); j < (op->size()); j++)
												 {
													 if (num->at(j) == 100 && op->at(j) != 200)
													 {
														 if (j == (i + 1))
														 {
															 this->label1->Text = " E R R O R ! ! ! ";
															 firsttodo = 3;
														 }
														 else
														 {
															 check4 = (j - 1);
														 }
														 break;
													 }
												 }
											 }
											 number2 = 0;
											 if (firsttodo != 3)
											 {
												 for (signed u = check3; u <= check4; u++)
												 {
													 number2 = number2 + (num->at(u))*(pow(10, (check4 - u)));
												 }
												 //std::cout << number2 << endl;
											 }
											 if (firsttodo != 3)
											 {
												 if (op->at(i) == 3 || op->at(i) == 4)
												 {
													 if (op->at(i) == 3)
													 {
														 subans = (number1*number2);
													 }
													 else if (op->at(i) == 4)
													 {
														 subans = (number1 / number2);
													 }
													 double &m = num->at(check1);
													 m = subans;
													 int &n = op->at(check1);
													 n = 200;
													 op->erase((op->begin() + check1 + 1), (op->begin() + check4 + 1));
													 num->erase((num->begin() + check1 + 1), (num->begin() + check4 + 1));

													 for (signed kk = li; kk < ((op->size())); kk++)
													 {
														 if (op->at(kk) == 8)
														 {
															 ri = kk;
															 break;
														 }
													 }

												 }
											 }
										 }

										 //確認還有沒有乘除
										 if (firsttodo != 3)
										 {
											 firsttodo = 2;
											 for (signed i = (li + 1); i < (ri); i++)
											 {
												 //std::cout << num->at(i) << "  ";

												 if (op->at(i) == 3 || op->at(i) == 4)
												 {
													 if (i == 0 || i == ((op->size()) - 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 else if (firsttodo != 3)
													 {
														 firsttodo = 1;
													 }
												 }
											 }
										 }

										 end = 1;
										 for (signed a = (li + 1); a < (ri); a++)
										 {
											 if (op->at(a) == 1 || op->at(a) == 2)
											 {
												 end = 0;
											 }
										 }
									 }
								 }
								 //std::cout << "!~wh~!" << endl;
							 }

							 check1 = 0;
							 check2 = 0;
							 check3 = 0;
							 check4 = 0;
							 subans = 0;

							 while (firsttodo == 2)
							 {
								 check1 = 0;
								 check2 = 0;
								 check3 = 0;
								 check4 = 0;
								 subans = 0;
								 one = 0;
								 // std::cout << end << "!$$$$$$$$$$$$$$$$$$$$$$@!" << endl;

								 for (signed i = (li + 1); i < (ri); i++)
								 {
									 if (one == 0)
									 {
										 if (op->at(i) == 1 || op->at(i) == 2)
										 {
											 one = 1;
											 check2 = (i - 1);
											 if (op->at(check2) == 200)
											 {
												 check1 = check2;
											 }
											 else
											 {
												 for (unsigned j = (i - 1); j >= 0; j--)
												 {
													 if (num->at(j) == 100 && op->at(j) != 200)
													 {
														 check1 = (j + 1);
														 if (j == (i - 1))
														 {
															 this->label1->Text = " E R R O R ! ! ! ";
															 firsttodo = 3;
														 }
														 break;
													 }
												 }
											 }

											 number1 = 0;
											 if (firsttodo != 3)
											 {
												 for (signed u = check1; u <= check2; u++)
												 {
													 number1 = number1 + (num->at(u))*(pow(10, (check2 - u)));
												 }
												 //std::cout << number1 << endl;
											 }
											 check3 = (i + 1);
											 check4 = 0;
											 if (op->at(check3) == 200)
											 {
												 check4 = check3;
											 }
											 else
											 {
												 for (signed j = (i + 1); j < (op->size()); j++)
												 {
													 if (num->at(j) == 100 && op->at(j) != 200)
													 {
														 if (j == (i + 1))
														 {
															 this->label1->Text = " E R R O R ! ! ! ";
															 firsttodo = 3;
														 }
														 else
														 {
															 check4 = (j - 1);
														 }
														 break;
													 }
												 }
											 }
											 number2 = 0;
											 if (firsttodo != 3)
											 {
												 for (signed u = check3; u <= check4; u++)
												 {
													 number2 = number2 + (num->at(u))*(pow(10, (check4 - u)));
												 }
												 //std::cout << number2 << endl;
											 }
											 if (firsttodo != 3)
											 {
												 if (op->at(i) == 1 || op->at(i) == 2)
												 {
													 if (op->at(i) == 1)
													 {
														 subans = (number1 + number2);
													 }
													 else if (op->at(i) == 2)
													 {
														 subans = (number1 - number2);
													 }
													 double &m = num->at(check1);
													 m = subans;
													 int &n = op->at(check1);
													 n = 200;
													 op->erase((op->begin() + check1 + 1), (op->begin() + check4 + 1));
													 num->erase((num->begin() + check1 + 1), (num->begin() + check4 + 1));
													 for (signed kk = li; kk < ((op->size())); kk++)
													 {
														 if (op->at(kk) == 8)
														 {
															 ri = kk;
															 break;
														 }
													 }
												 }
											 }
										 }
										 //std::cout << endl;

										 //確認還有沒有加減
										 if (firsttodo != 3)
										 {
											 firsttodo = 0;
											 for (signed i = (li + 1); i < (ri); i++)
											 {
												 //std::cout << num->at(i) << "  ";

												 if (op->at(i) == 1 || op->at(i) == 2)
												 {
													 if (i == 0 || i == ((op->size()) - 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 else if (firsttodo != 3)
													 {
														 firsttodo = 2;
													 }
												 }
											 }
										 }
										 //std::cout << firsttodo << "!!!" << endl;

										 end = 1;
										 for (signed a = (li + 1); a < (ri); a++)
										 {
											 if (op->at(a) == 1 || op->at(a) == 2)
											 {
												 end = 0;
											 }
										 }
										 //std::cout << end << "!@!" << endl;

									 }
								 }
							 }
							 //////////////////////////////
							 //std::cout << end << "!@********&&&&&&&&&&&&&&!" << endl;

							 double &m = num->at(li);
							 m = num->at(li + 1);
							 int &n = op->at(li);
							 n = 200;
							 //std::cout << endl << li << " = = () " << endl;
							 //std::cout << endl << ri << " = = ()" << endl;

							 op->erase((op->begin() + li + 1), (op->begin() + ri + 1));
							 num->erase((num->begin() + li + 1), (num->begin() + ri + 1));
							 end = 1;

							 if (firsttodo != 3)
							 {
								 if (op->at(li) != 200)
								 {
									 end = 0;
								 }
							 }
						 }

						 end = 1;
						 for (signed a = 0; a < ((op->size())); a++)
						 {
							 if (op->at(a) == 7)
							 {
								 end = 0;
							 }
						 }
					 }

					 //std::cout << firsttodo << "!+111++^^^^^^^^^^^^^^^^^^^++!" << endl;

					 if (firsttodo != 3)
					 {
						 firsttodo = 0;
						 end = 0;
					 }
					 //處理"."和"%"
					 for (signed i = 0; i < (op->size()); i++)
					 {
						 //std::cout << firsttodo << "!+111++++!" << endl;

						 if (op->at(i) == 0 || op->at(i) == 5)  //有"."或"%"
						 {
							 if (i == 0)
							 {
								 this->label1->Text = " E R R O R ! ! ! ";
								 firsttodo = 3;
							 }
							 else if (firsttodo != 3 && op->at(i) == 0)
							 {
								 firsttodo = 1;
							 }
							 else if (firsttodo != 3 && op->at(i) == 5)
							 {
								 if (firsttodo != 1)
								 {
									 firsttodo = 2;
								 }
							 }
						 }
					 }
					 while (firsttodo != 3 && end != 1) //處理"."和"%"
					 {
						 //std::cout << firsttodo << "!+111++^^^^^^^^^^^^^^^^^^^++!" << endl;
						 while (firsttodo == 1)
						 {
							 one = 0;
							 for (signed i = 0; i < (op->size()); i++)
							 {
								 if (one == 0)
								 {
									 //std::cout << end << "!+111++++!" << endl;
									 if (op->at(i) == 0)
									 {
										 one = 1;
										 dot2 = (i - 1);
										 dot1 = 0;
										 if (op->at(dot2) == 200)
										 {
											 dot1 = dot2;
										 }
										 else
										 {
											 for (signed j = (i - 1); j >= 0; j--)
											 {
												 if (num->at(j) == 100 && op->at(j) != 200)
												 {
													 dot1 = (j + 1);
													 if (j == (i - 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 if (op->at(j) == 0 || op->at(j) == 5)
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 break;
												 }
											 }
										 }
										 number1 = 0;
										 if (firsttodo == 1)
										 {
											 for (signed u = dot1; u <= dot2; u++)
											 {
												 number1 = number1 + (num->at(u))*(pow(10, (dot2 - u)));
											 }
											 //std::cout << number1 << endl;
										 }
										 dot3 = (i + 1);
										 if (op->at(dot3) == 200)
										 {
											 dot4 = dot3;
										 }
										 else
										 {
											 for (signed j = (i + 1); j < (op->size()); j++)
											 {
												 if (num->at(j) == 100 && op->at(j) != 200)
												 {
													 dot4 = (j - 1);
													 if (j == (i + 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 if (op->at(j) == 0 || op->at(j) == 7)
													 { 
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 break;
												 }
											 }
										 }
										 number2 = 0;
										 if (firsttodo == 1)
										 {
											 for (signed u = dot3; u <= dot4; u++)
											 {
												 number2 = number2 + (num->at(u))*(pow(10, ((-1)*(u - dot3 + 1))));
											 }
											 //std::cout << number2 << endl;
										 }
										 if (firsttodo == 1)
										 {
											 if (op->at(i) == 0)
											 {
												 subans = (number1 + number2);
												 double &m = num->at(dot1);
												 m = subans;
												 int &n = op->at(dot1);
												 n = 200;
												 op->erase((op->begin() + dot1 + 1), (op->begin() + dot4 + 1));
												 num->erase((num->begin() + dot1 + 1), (num->begin() + dot4 + 1));
											 }
										 }
									 }

									 //確認還有沒有"."和"%"
									 if (firsttodo != 3)
									 {
										 firsttodo = 2;
										 for (signed g = 0; g < (op->size()); g++)
										 {
											 //std::cout << num->at(g) << "  ";
											 if (op->at(g) == 0)
											 {
												 if (g == 0 || g == ((op->size()) - 1))
												 {
													 this->label1->Text = " E R R O R ! ! ! ";
													 firsttodo = 3;
												 }
												 else if (firsttodo != 3)
												 {
													 firsttodo = 1;
												 }
											 }
										 }
									 }

									 end = 1;
									 for (signed aa = 0; aa < ((op->size())); aa++)
									 {
										 if (op->at(aa) == 0 || op->at(aa) == 5)
										 {
											 end = 0;
										 }
									 }
								 }
							 }
						 }
						 while (firsttodo == 2)
						 {
							 one = 0;
							 for (signed i = 0; i < (op->size()); i++)
							 {
								 //std::cout << end << "!nooooooooooooooooneo!" << endl;

								 if (i != (op->size() - 1))
								 {
									 if (op->at(i + 1) == 100 || op->at(i + 1) == 200)
									 {
										 if (op->at(i) == 5 && firsttodo != 3)
										 {
											 this->label1->Text = " E R R O R ! ! ! ";
											 firsttodo = 3;
											 one = 1;
											 end = 1;
										 }
									 }
								 }
								 if (firsttodo == 3)
								 {
									 break;
								 }
								 if (one == 0)
								 {
									 if (op->at(i) == 5)
									 {
										 one = 1;
										 dot2 = (i - 1);
										 dot1 = 0;
										 if (op->at(dot2) == 200)
										 {
											 dot1 = dot2;
										 }
										 else
										 {
											 for (signed j = (i - 1); j >= 0; j--)
											 {
												 if (num->at(j) == 100 && op->at(j) != 200)
												 {
													 dot1 = (j + 1);
													 if (j == (i - 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 break;
												 }
											 }
										 }
										 number1 = 0;

										 if (firsttodo != 3)
										 {
											 if (op->at(i + 1) == 5)
											 {
												 this->label1->Text = " E R R O R ! ! ! ";
												 firsttodo = 3;
											 }
										 }
										 if (firsttodo != 3)
										 {
											 for (signed u = dot1; u <= dot2; u++)
											 {
												 number1 = number1 + (num->at(u))*(pow(10, (dot2 - u)));
											 }
										 }
										 if (firsttodo != 3)
										 {
											 if (op->at(i) == 5)
											 {
												 subans = (number1 / 100);
												 double &m = num->at(dot1);
												 m = subans;
												 int &n = op->at(dot1);
												 n = 200;
												 //std::cout << dot1 << "!nodot1!" << endl;
												 op->erase((op->begin() + dot1 + 1), (op->begin() + i + 1));
												 num->erase((num->begin() + dot1 + 1), (num->begin() + i + 1));

											 }
										 }

									 }

									 //確認還有沒有"%"
									 if (firsttodo != 3)
									 {
										 firsttodo = 0;
										 for (signed p = 0; p < (op->size()); p++)
										 {
											 if (op->at(p) == 5)
											 {
												 if (p == 0)
												 {
													 this->label1->Text = " E R R O R ! ! ! ";
													 firsttodo = 3;
												 }
												 else if (firsttodo != 3)
												 {
													 firsttodo = 2;
												 }
											 }
										 }
									 }
									 end = 1;
									 for (signed a = 0; a < (op->size()); a++)
									 {
										 if (op->at(a) == 5)
										 {
											 end = 0;
										 }
									 }
								 }
							 }
						 }

						 end = 1;
						 for (signed a = 0; a < ((op->size())); a++)
						 {
							 if (op->at(a) == 0 || op->at(a) == 5)
							 {
								 end = 0;
							 }
						 }

					 }

					 //std::cout << "!~~~!" << endl;

					 if (firsttodo != 3)
					 {
						 firsttodo = 0;
						 end = 0;
						 one = 0;
					 }

					 //整數
					 if (firsttodo != 3)
					 {
						 one = 1;
						 for (signed ad = 0; ad < ((op->size())); ad++)
						 {
							 if (op->at(ad) == 100)
							 {
								 one = 0;
							 }
						 }
						 while (one == 0)
						 {
							 //std::cout << " int ";
							 check1 = 0;
							 check2 = 0;
							 for (signed ac = 0; ac < ((op->size())); ac++)
							 {
								 if (op->at(ac) == 100)
								 {
									 check1 = ac;
									 break;
								 }
							 }
							 for (signed ab = check1; ab < ((op->size())); ab++)
							 {
								 if (num->at(ab) == 100 && op->at(ab) != 200)
								 {
									 check2 = (ab - 1);
									 break;
								 }
							 }

							 number1 = 0;
							 if (firsttodo != 3)
							 {
								 for (signed u = check1; u <= check2; u++)
								 {
									 number1 = number1 + (num->at(u))*(pow(10, (check2 - u)));
								 }
							 }

							 double &m = num->at(check1);
							 m = number1;
							 int &n = op->at(check1);
							 n = 200;
							 if (check1 != check2)
							 {
								 op->erase((op->begin() + check1 + 1), (op->begin() + check2 + 1));
								 num->erase((num->begin() + check1 + 1), (num->begin() + check2 + 1));
							 }

							 one = 1;
							 for (signed ad = 0; ad < ((op->size())); ad++)
							 {
								 if (op->at(ad) == 100)
								 {
									 one = 0;
								 }
							 }
						 }
						 if (one == 1)
						 {
							 if (op->at(0) == 2)
							 {
								 double &km = num->at(0);
								 km = (-1)*(num->at(1));
								 int &kn = op->at(0);
								 kn = 200;
								 op->erase((op->begin() + 1), (op->begin() + 2));
								 num->erase((num->begin() + 1), (num->begin() + 2));
							 }
						 }
					 }

					 //處理乘除加減
					 if (firsttodo != 3)
					 {
						 firsttodo = 0;
						 end = 0;
						 one = 0;
						 //std::cout << firsttodo << "!@ff+++***!" << endl;
						 //std::cout << end << "!@fff+++***!" << endl;

						 for (signed i = 0; i < (op->size()); i++)
						 {
							 if (op->at(i) == 3 || op->at(i) == 4)
							 {
								 if (i == 0 || i == ((op->size()) - 1))
								 {
									 this->label1->Text = " E R R O R ! ! ! ";
									 firsttodo = 3;
								 }
								 else if (firsttodo != 3)
								 {
									 firsttodo = 1;
								 }
							 }
							 else if (op->at(i) == 1 || op->at(i) == 2)
							 {
								 if (firsttodo != 1 && firsttodo != 3)
								 {
									 if (i == 0 || i == ((op->size()) - 1))
									 {
										 this->label1->Text = " E R R O R ! ! ! ";
										 firsttodo = 3;
									 }
									 else if (firsttodo != 3)
									 {
										 firsttodo = 2;
									 }
								 }
							 }
						 }
					 }
					 while (firsttodo != 3 && end != 1)
					 {
						 //std::cout << "!~wh~!" << endl;
						 while (firsttodo == 1)
						 {
							 one = 0;
							 check1 = 0;
							 check2 = 0;
							 check3 = 0;
							 check4 = 0;

							 for (signed i = 0; i < (op->size()); i++)
							 {
								 //std::cout << i << "!~whiiiiiiiiiiiiiii~!" << endl;
								 if (one == 0)
								 {
									 if (op->at(i) == 3 || op->at(i) == 4)
									 {
										 //std::cout << op->at(i) << "!~whiiiiii=====iiiii~!   ##" << endl;
										 one = 1;
										 check2 = (i - 1);
										 if (op->at(check2) == 200)
										 {
											 check1 = check2;
										 }
										 else
										 {
											 for (signed j = (i - 1); j >= 0; j--)
											 {
												 if (num->at(j) == 100 && op->at(j) != 200)
												 {
													 check1 = (j + 1);
													 if (j == (i - 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 break;
												 }
											 }
										 }
										 number1 = 0;
										 if (firsttodo != 3)
										 {
											 for (signed u = check1; u <= check2; u++)
											 {
												 number1 = number1 + (num->at(u))*(pow(10, (check2 - u)));
											 }
											 //std::cout << number1 << endl;
										 }
										 check3 = (i + 1);
										 if (op->at(check3) == 200)
										 {
											 check4 = check3;
										 }
										 else
										 {
											 for (signed j = (i + 1); j < (op->size()); j++)
											 {
												 if (num->at(j) == 100 && op->at(j) != 200)
												 {
													 if (j == (i + 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 else
													 {
														 check4 = (j - 1);
													 }
													 break;
												 }
											 }
										 }
										 number2 = 0;
										 if (firsttodo != 3)
										 {
											 for (signed u = check3; u <= check4; u++)
											 {
												 number2 = number2 + (num->at(u))*(pow(10, (check4 - u)));
											 }
											 //std::cout << number2 << endl;
										 }
										 if (firsttodo != 3)
										 {
											 if (op->at(i) == 3 || op->at(i) == 4)
											 {
												 if (op->at(i) == 3)
												 {
													 subans = (number1*number2);
												 }
												 else if (op->at(i) == 4)
												 {
													 subans = (number1 / number2);
												 }

												 double &m = num->at(check1);
												 m = subans;
												 int &n = op->at(check1);
												 n = 200;
												 op->erase((op->begin() + check1 + 1), (op->begin() + check4 + 1));
												 num->erase((num->begin() + check1 + 1), (num->begin() + check4 + 1));

											 }
										 }
									 }
									 //確認還有沒有乘除
									 if (firsttodo != 3)
									 {
										 firsttodo = 2;
										 for (signed i = 0; i < (op->size()); i++)
										 {
											 //std::cout << num->at(i) << "  ";

											 if (op->at(i) == 3 || op->at(i) == 4)
											 {
												 if (i == 0 || i == ((op->size()) - 1))
												 {
													 this->label1->Text = " E R R O R ! ! ! ";
													 firsttodo = 3;
												 }
												 else if (firsttodo != 3)
												 {
													 firsttodo = 1;
												 }
											 }
										 }
									 }
									 end = 1;
									 for (signed a = 0; a < ((op->size()) - 1); a++)
									 {
										 if (op->at(a) == 1 || op->at(a) == 2)
										 {
											 end = 0;
										 }
									 }
								 }
							 }
							 //std::cout << "!~wh~!" << endl;
						 }
						 check1 = 0;
						 check2 = 0;
						 check3 = 0;
						 check4 = 0;
						 subans = 0;

						 while (firsttodo == 2)
						 {
							 one = 0;
							 //std::cout << end << "!$$$$$$$$$$$$$$$$$$$$$$@!" << endl;

							 for (signed i = 0; i < (op->size()); i++)
							 {
								 if (one == 0)
								 {

									 if (op->at(i) == 1 || op->at(i) == 2)
									 {
										 one = 1;
										 check2 = (i - 1);
										 if (op->at(check2) == 200)
										 {
											 check1 = check2;
										 }
										 else
										 {
											 for (signed j = (i - 1); j >= 0; j--)
											 {
												 if (num->at(j) == 100 && op->at(j) != 200)
												 {
													 check1 = (j + 1);
													 if (j == (i - 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 break;
												 }
											 }
										 }
										 number1 = 0;
										 if (firsttodo != 3)
										 {
											 for (signed u = check1; u <= check2; u++)
											 {
												 number1 = number1 + (num->at(u))*(pow(10, (check2 - u)));
											 }
											 //std::cout << number1 << endl;
										 }
										 check3 = (i + 1);
										 if (op->at(check3) == 200)
										 {
											 check4 = check3;
										 }
										 else
										 {
											 for (signed j = (i + 1); j < (op->size()); j++)
											 {
												 if (num->at(j) == 100 && op->at(j) != 200)
												 {
													 if (j == (i + 1))
													 {
														 this->label1->Text = " E R R O R ! ! ! ";
														 firsttodo = 3;
													 }
													 else
													 {
														 check4 = (j - 1);
													 }
													 break;
												 }
											 }
										 }
										 number2 = 0;
										 if (firsttodo != 3)
										 {
											 for (signed u = check3; u <= check4; u++)
											 {
												 number2 = number2 + (num->at(u))*(pow(10, (check4 - u)));
											 }
											 //std::cout << number2 << endl;
										 }
										 if (firsttodo != 3)
										 {
											 if (op->at(i) == 1 || op->at(i) == 2)
											 {
												 if (op->at(i) == 1)
												 {
													 subans = (number1 + number2);
												 }
												 else if (op->at(i) == 2)
												 {
													 subans = (number1 - number2);
												 }

												 double &m = num->at(check1);
												 m = subans;
												 int &n = op->at(check1);
												 n = 200;
												 op->erase((op->begin() + check1 + 1), (op->begin() + check4 + 1));
												 num->erase((num->begin() + check1 + 1), (num->begin() + check4 + 1));

											 }
										 }
									 }

									 //確認還有沒有加減
									 if (firsttodo != 3)
									 {
										 firsttodo = 0;
										 for (signed i = 0; i < (op->size()); i++)
										 {
											 //std::cout << num->at(i) << "  ";

											 if (op->at(i) == 1 || op->at(i) == 2)
											 {
												 if (i == 0 || i == ((op->size()) - 1))
												 {
													 this->label1->Text = " E R R O R ! ! ! ";
													 firsttodo = 3;
												 }
												 else if (firsttodo != 3)
												 {
													 firsttodo = 2;
												 }
											 }
										 }
									 }
									 //std::cout << firsttodo << "!!!" << endl;

									 end = 1;
									 for (signed a = 0; a < ((op->size()) - 1); a++)
									 {
										 if (op->at(a) == 1 || op->at(a) == 2)
										 {
											 end = 0;
										 }
									 }

								 }
							 }
						 }
						 end = 1;
						 for (signed a = 0; a < ((op->size()) - 1); a++)
						 {
							 if (op->at(a) != 200)
							 {
								 end = 0;
							 }
							 //std::cout << op->at(a) << "!@*************!" << endl;
						 }

					 }
				 }

				 //std::cout  << "~55~~!" << endl;
				 std::cout << "~計算完畢~!" << endl;
				 if (op->size() != 1)
				 {
					 a = System::Convert::ToString(num->at(0));
				 }
				 else
				 {
					 a = "0";
				 }
				 if (firsttodo != 3)
				 {
					 this->label1->Text = a;
				 }
				 a = {};
				 op->clear();
				 num->clear();
				 check1 = 0;
				 check2 = 0;
				 check3 = 0;
				 check4 = 0;
				 firsttodo = 0;

	}
	private: System::Void button_COUPLE_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 if (op->size() == 0)
				 {
					 std::cout << "(";
					 a = a + "(";
					 this->label1->Text = a;
					 op->push_back(7); // (
					 num->push_back(100);
				 }
				 else if (op->at((op->size()) - 1) != 100 && op->at((op->size()) - 1) != 5)
				 {
					 if (op->at((op->size()) - 1) != 8)
					 {
						 std::cout << "(";
						 a = a + "(";
						 this->label1->Text = a;
						 op->push_back(7); // (
						 num->push_back(100);
					 }
				 }
				 else if (op->at((op->size()) - 1) == 100 || op->at((op->size()) - 1) == 5)
				 {
					 int yes = 0;

					 for (signed a = 0; a < (op->size()); a++)
					 {
						 if (op->at(a) == 7)
						 {
							 yes = 1;
						 }
					 }
					 if (yes == 1)
					 {
						 std::cout << ")";
						 a = a + ")";
						 this->label1->Text = a;
						 op->push_back(8); // )
						 num->push_back(100);
					 }
				 }
	}
	private: System::Void button_DOT_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = a + ".";
				 this->label1->Text = a;
				 op->push_back(0); // .
				 num->push_back(100);
				 std::cout << ".";
	}
	};
}
