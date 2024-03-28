#pragma once

namespace Calculator1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ ac;


	private: System::Windows::Forms::Button^ sign;
	private: System::Windows::Forms::Button^ module;


	private: System::Windows::Forms::Button^ divide;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ multiplication;
	private: System::Windows::Forms::Button^ minus;


	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ plus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ precision;



	private: System::Windows::Forms::Button^ button20;
	private: double^ first_num;
	private: char user_action;
	private: bool is_equal;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->ac = (gcnew System::Windows::Forms::Button());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->module = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->precision = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_exit->Location = System::Drawing::Point(14, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(31, 22);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->result_label->Location = System::Drawing::Point(14, 9);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(291, 96);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ac
			// 
			this->ac->BackColor = System::Drawing::Color::White;
			this->ac->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ac->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ac->Location = System::Drawing::Point(18, 103);
			this->ac->Name = L"ac";
			this->ac->Size = System::Drawing::Size(65, 55);
			this->ac->TabIndex = 2;
			this->ac->Text = L"AC";
			this->ac->UseVisualStyleBackColor = false;
			this->ac->Click += gcnew System::EventHandler(this, &MyForm::ac_Click);
			// 
			// sign
			// 
			this->sign->BackColor = System::Drawing::Color::White;
			this->sign->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->sign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sign->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->sign->Location = System::Drawing::Point(89, 103);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(65, 55);
			this->sign->TabIndex = 3;
			this->sign->Text = L"+/-";
			this->sign->UseVisualStyleBackColor = false;
			this->sign->Click += gcnew System::EventHandler(this, &MyForm::sign_Click);
			// 
			// module
			// 
			this->module->BackColor = System::Drawing::Color::White;
			this->module->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->module->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->module->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->module->Location = System::Drawing::Point(160, 103);
			this->module->Name = L"module";
			this->module->Size = System::Drawing::Size(65, 55);
			this->module->TabIndex = 4;
			this->module->Text = L"%";
			this->module->UseVisualStyleBackColor = false;
			this->module->Click += gcnew System::EventHandler(this, &MyForm::module_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::White;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->divide->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->divide->Location = System::Drawing::Point(231, 103);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(65, 55);
			this->divide->TabIndex = 5;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::divide_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(18, 174);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 55);
			this->button5->TabIndex = 6;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(89, 174);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 7;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(160, 174);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 8;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// multiplication
			// 
			this->multiplication->BackColor = System::Drawing::Color::White;
			this->multiplication->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiplication->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->multiplication->Location = System::Drawing::Point(231, 174);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(65, 55);
			this->multiplication->TabIndex = 9;
			this->multiplication->Text = L"*";
			this->multiplication->UseVisualStyleBackColor = false;
			this->multiplication->Click += gcnew System::EventHandler(this, &MyForm::multiplication_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::White;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->minus->Location = System::Drawing::Point(231, 244);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(65, 55);
			this->minus->TabIndex = 13;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Location = System::Drawing::Point(160, 244);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 55);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Location = System::Drawing::Point(89, 244);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 55);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Location = System::Drawing::Point(18, 244);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 55);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::White;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->plus->Location = System::Drawing::Point(231, 315);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(65, 55);
			this->plus->TabIndex = 17;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Location = System::Drawing::Point(160, 315);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 55);
			this->button14->TabIndex = 16;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->Location = System::Drawing::Point(89, 315);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 55);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button16->Location = System::Drawing::Point(18, 315);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 55);
			this->button16->TabIndex = 14;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::White;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->equal->Location = System::Drawing::Point(231, 381);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(65, 55);
			this->equal->TabIndex = 21;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// precision
			// 
			this->precision->BackColor = System::Drawing::Color::White;
			this->precision->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->precision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->precision->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->precision->Location = System::Drawing::Point(160, 381);
			this->precision->Name = L"precision";
			this->precision->Size = System::Drawing::Size(65, 55);
			this->precision->TabIndex = 20;
			this->precision->Text = L".";
			this->precision->UseVisualStyleBackColor = false;
			this->precision->Click += gcnew System::EventHandler(this, &MyForm::precision_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button20->Location = System::Drawing::Point(18, 381);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(136, 55);
			this->button20->TabIndex = 18;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->ClientSize = System::Drawing::Size(317, 453);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->precision);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->module);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->ac);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   private: System::Void buttonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
			   this->result_label->ForeColor = Color::White;
			   Button^ button = safe_cast<Button^>(sender); //safe_cast преобразует обьект во что-то другое
			 
			   if (this->result_label->Text == "0" || is_equal)
			   {
				   this->result_label->Text = button->Text;
				   is_equal = false;
			   }
			   else
				   this->result_label->Text += button->Text;

		   }

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}

	   private: System::Void math_action(char(action)) {
		   this->first_num = System::Convert::ToDouble(this->result_label->Text);
		   this->user_action = action;
		   this->result_label->Text = "0";
	   }

private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
	
	double second = System::Convert::ToDouble(this->result_label->Text);
	double result;
	switch (this->user_action) {
	case '+': result= *this->first_num + second;
		break;
	case '*': result = *this->first_num * second;
		break;
	case '-': result = *this->first_num - second;
		break;
	case '%': result = *this->first_num * second / 100;
		break;
	case '/': if (second == 0)
	{
		result = 0;
		this->result_label->ForeColor=Color::DarkRed;
		MessageBox::Show(this, "Not Allowed", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
			else
		result = *this->first_num / second;
		break;
		
	 } 
	this->is_equal = true;
	this->result_label->Text = System::Convert::ToString(result);
    }
	   
private: System::Void ac_Click(System::Object^ sender, System::EventArgs^ e) {
	this->result_label->Text = "0";
}
private: System::Void sign_Click(System::Object^ sender, System::EventArgs^ e) {

	double num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);
}





private: System::Void module_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('%');
}

private: System::Void precision_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!this->result_label->Text->Contains(","))
	{
		this->result_label->Text = this->result_label->Text + ",";
	}
}

};
}
