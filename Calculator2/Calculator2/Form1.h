#pragma once

namespace Calculator2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  text;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->text = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// text
			// 
			this->text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->text->Location = System::Drawing::Point(12, 12);
			this->text->Name = L"text";
			this->text->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->text->Size = System::Drawing::Size(318, 29);
			this->text->TabIndex = 0;
			this->text->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(93, 47);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(174, 47);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(255, 48);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 104);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(93, 104);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 50);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(174, 104);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 50);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(255, 104);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 50);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 160);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 50);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(93, 160);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 50);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(174, 160);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 50);
			this->button11->TabIndex = 11;
			this->button11->Text = L"AC";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(255, 160);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 50);
			this->button12->TabIndex = 12;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(12, 216);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 50);
			this->button13->TabIndex = 13;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(93, 216);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 50);
			this->button14->TabIndex = 14;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(174, 216);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 50);
			this->button15->TabIndex = 15;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(255, 216);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 50);
			this->button16->TabIndex = 16;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(341, 276);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->text);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int num1,num2,Result;
		char operation;

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(text->Text=="0"){
					text->Text="1";
				 }else{
					text->Text=Convert::ToInt32(text->Text) + "1";
				 }
			 }

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				if(text->Text=="0"){
					text->Text="0";
				 }else{
					text->Text=Convert::ToInt32(text->Text) + "0";
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(text->Text=="0"){
					text->Text="2";
				 }else{
					 text->Text = Convert::ToInt32(text->Text) + "2";
				 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(text->Text=="0"){
					text->Text="3";
				 }else{
					 text->Text = Convert::ToInt32(text->Text) + "3";
				 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(text->Text=="0"){
					text->Text="4";
				 }else{
					 text->Text = Convert::ToInt32(text->Text) + "4";
				 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(text->Text=="0"){
					text->Text="5";
				 }else{
					 text->Text = Convert::ToInt32(text->Text) + "5";
				 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(text->Text=="0"){
					text->Text="6";
				 }else{
					 text->Text = Convert::ToInt32(text->Text) + "6";
				 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(text->Text=="0"){
					text->Text="7";
				 }else{
					 text->Text = Convert::ToInt32(text->Text) + "7";
				 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(text->Text=="0"){
					text->Text="8";
				 }else{
					 text->Text = Convert::ToInt32(text->Text) + "8";
				 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(text->Text=="0"){
					text->Text="9";
				 }else{
					 text->Text = Convert::ToInt32(text->Text) + "9";
				 }
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 text->Text="0";
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 //division
			 num1=Convert::ToInt32(text->Text);
			 text->Text="0";
			 operation='/';
		 }

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 num1=Convert::ToInt32(text->Text);
			 text->Text="0";
			 operation='-';
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 num1=Convert::ToInt32(text->Text);
			 text->Text="0";
			 operation='+';
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 num1=Convert::ToInt32(text->Text);
			 text->Text="0";
			 operation='*';
		 }

private: System::Void button16_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 num2=Convert::ToInt32(text->Text);
			 
			 switch(operation){
			 case '+':
				 Result=num1+num2;
				 text->Text=System::Convert::ToString(Result);
				 break;
			 case '-':
				 Result=num1-num2;
				 text->Text=System::Convert::ToString(Result);
				 break;
			 case '/':
				 Result=num1/num2;
				 text->Text=System::Convert::ToString(Result);
				 break;
			 case '*':
				 Result=num1*num2;
				 text->Text=System::Convert::ToString(Result);
				 break;
			 }
		 }
};
}

