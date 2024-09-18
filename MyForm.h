#pragma once

#include <algorithm>
#include <msclr/marshal_cppstd.h>
#include <sstream>
#include <vector>

namespace Project1 {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public
ref class MyForm : public System::Windows::Forms::Form {
public:
  MyForm(void) { InitializeComponent(); }

protected:
  ~MyForm() {
    if (components) {
      delete components;
    }
  }

private:
  System::ComponentModel::Container ^ components;

  void InitializeComponent(void) {
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->textBox2 = (gcnew System::Windows::Forms::TextBox());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->textBox3 = (gcnew System::Windows::Forms::TextBox());
    this->textBox4 = (gcnew System::Windows::Forms::TextBox());
    this->button2 = (gcnew System::Windows::Forms::Button());
    this->textBox5 = (gcnew System::Windows::Forms::TextBox());
    this->textBox6 = (gcnew System::Windows::Forms::TextBox());
    this->button3 = (gcnew System::Windows::Forms::Button());
    this->textBox7 = (gcnew System::Windows::Forms::TextBox());
    this->textBox8 = (gcnew System::Windows::Forms::TextBox());
    this->button4 = (gcnew System::Windows::Forms::Button());
    this->textBox9 = (gcnew System::Windows::Forms::TextBox());
    this->button5 = (gcnew System::Windows::Forms::Button());

    this->SuspendLayout();
    //
    // textBox1
    //
    this->textBox1->Location = System::Drawing::Point(12, 12);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = System::Drawing::Size(260, 20);
    this->textBox1->TabIndex = 0;
    //
    // textBox2
    //
    this->textBox2->Location = System::Drawing::Point(12, 38);
    this->textBox2->Name = L"textBox2";
    this->textBox2->Size = System::Drawing::Size(260, 20);
    this->textBox2->TabIndex = 1;
    //
    // button1
    //
    this->button1->Location = System::Drawing::Point(12, 64);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(75, 23);
    this->button1->TabIndex = 2;
    this->button1->Text = L"Task 1";
    this->button1->UseVisualStyleBackColor = true;
    this->button1->Click +=
        gcnew System::EventHandler(this, &MyForm::button1_Click);
    //
    // textBox3
    //
    this->textBox3->Location = System::Drawing::Point(12, 93);
    this->textBox3->Name = L"textBox3";
    this->textBox3->Size = System::Drawing::Size(260, 20);
    this->textBox3->TabIndex = 3;
    //
    // textBox4
    //
    this->textBox4->Location = System::Drawing::Point(12, 119);
    this->textBox4->Name = L"textBox4";
    this->textBox4->Size = System::Drawing::Size(260, 20);
    this->textBox4->TabIndex = 4;
    //
    // button2
    //
    this->button2->Location = System::Drawing::Point(12, 145);
    this->button2->Name = L"button2";
    this->button2->Size = System::Drawing::Size(75, 23);
    this->button2->TabIndex = 5;
    this->button2->Text = L"Task 2";
    this->button2->UseVisualStyleBackColor = true;
    this->button2->Click +=
        gcnew System::EventHandler(this, &MyForm::button2_Click);
    //
    // textBox5
    //
    this->textBox5->Location = System::Drawing::Point(12, 174);
    this->textBox5->Name = L"textBox5";
    this->textBox5->Size = System::Drawing::Size(260, 20);
    this->textBox5->TabIndex = 6;
    this->textBox5->TextChanged +=
        gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
    //
    // textBox6
    //
    this->textBox6->Location = System::Drawing::Point(12, 200);
    this->textBox6->Name = L"textBox6";
    this->textBox6->Size = System::Drawing::Size(260, 20);
    this->textBox6->TabIndex = 7;
    //
    // button3
    //
    this->button3->Location = System::Drawing::Point(12, 226);
    this->button3->Name = L"button3";
    this->button3->Size = System::Drawing::Size(75, 23);
    this->button3->TabIndex = 8;
    this->button3->Text = L"Task 3";
    this->button3->UseVisualStyleBackColor = true;
    this->button3->Click +=
        gcnew System::EventHandler(this, &MyForm::button3_Click);
    //
    // textBox7
    //
    this->textBox7->Location = System::Drawing::Point(12, 255);
    this->textBox7->Name = L"textBox7";
    this->textBox7->Size = System::Drawing::Size(260, 20);
    this->textBox7->TabIndex = 9;
    this->textBox7->TextChanged +=
        gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
    //
    // textBox8
    //
    this->textBox8->Location = System::Drawing::Point(12, 281);
    this->textBox8->Name = L"textBox8";
    this->textBox8->Size = System::Drawing::Size(260, 20);
    this->textBox8->TabIndex = 10;
    //
    // button4
    //
    this->button4->Location = System::Drawing::Point(12, 307);
    this->button4->Name = L"button4";
    this->button4->Size = System::Drawing::Size(75, 23);
    this->button4->TabIndex = 11;
    this->button4->Text = L"Task 4";
    this->button4->UseVisualStyleBackColor = true;
    this->button4->Click +=
        gcnew System::EventHandler(this, &MyForm::button4_Click);
    //
    // textBox9
    //
    this->textBox9->Location = System::Drawing::Point(12, 336);
    this->textBox9->Name = L"textBox9";
    this->textBox9->Size = System::Drawing::Size(260, 20);
    this->textBox9->TabIndex = 12;
    //
    // button5
    //
    this->button5->Location = System::Drawing::Point(12, 362);
    this->button5->Name = L"button5";
    this->button5->Size = System::Drawing::Size(75, 23);
    this->button5->TabIndex = 13;
    this->button5->Text = L"Set Size";
    this->button5->UseVisualStyleBackColor = true;
    this->button5->Click +=
        gcnew System::EventHandler(this, &MyForm::button5_Click);
    //
    // MyForm
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(284, 397);
    this->Controls->Add(this->button5);
    this->Controls->Add(this->textBox9);
    this->Controls->Add(this->button4);
    this->Controls->Add(this->textBox8);
    this->Controls->Add(this->textBox7);
    this->Controls->Add(this->button3);
    this->Controls->Add(this->textBox6);
    this->Controls->Add(this->textBox5);
    this->Controls->Add(this->button2);
    this->Controls->Add(this->textBox4);
    this->Controls->Add(this->textBox3);
    this->Controls->Add(this->button1);
    this->Controls->Add(this->textBox2);
    this->Controls->Add(this->textBox1);
    this->Name = L"MyForm";
    this->Text = L"MyForm";
    this->ResumeLayout(false);
    this->PerformLayout();
  }

private:
  System::Windows::Forms::TextBox ^ textBox1;
  System::Windows::Forms::TextBox ^ textBox2;
  System::Windows::Forms::Button ^ button1;
  System::Windows::Forms::TextBox ^ textBox3;
  System::Windows::Forms::TextBox ^ textBox4;
  System::Windows::Forms::Button ^ button2;
  System::Windows::Forms::TextBox ^ textBox5;
  System::Windows::Forms::TextBox ^ textBox6;
  System::Windows::Forms::Button ^ button3;
  System::Windows::Forms::TextBox ^ textBox7;
  System::Windows::Forms::TextBox ^ textBox8;
  System::Windows::Forms::Button ^ button4;
  System::Windows::Forms::TextBox ^ textBox9;
  System::Windows::Forms::Button ^ button5;

  int matrixSize;
  array<array<int> ^> ^ matrix3;
  array<array<int> ^> ^ matrix4;

  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
    String ^ input = textBox1->Text;
    std::vector<int> arr;
    std::stringstream ss(msclr::interop::marshal_as<std::string>(input));
    int num;
    while (ss >> num) {
      arr.push_back(num);
    }

    int maxIndex = std::max_element(arr.begin(), arr.end()) - arr.begin();
    for (size_t i = maxIndex + 1; i < arr.size(); ++i) {
      arr[i] = 0;
    }

    std::string result;
    for (int n : arr) {
      result += std::to_string(n) + " ";
    }

    textBox2->Text = msclr::interop::marshal_as<String ^>(result);
  }

  System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
    String ^ input = textBox3->Text;
    std::vector<int> arr;
    std::stringstream ss(msclr::interop::marshal_as<std::string>(input));
    int num;
    while (ss >> num) {
      arr.push_back(num);
    }

    int sum = 0;
    int count = 0;
    for (int n : arr) {
      if (n > 0 && n % 2 != 0) {
        sum += n;
        count++;
      }
    }

    double average = count > 0 ? static_cast<double>(sum) / count : 0;
    textBox4->Text = average.ToString();
  }

  System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {
    int maxSum = INT_MIN;
    int maxIndex = 0;
    for (int i = 0; i < matrix3->Length; ++i) {
      int sum = 0;
      for (int j = 0; j < matrix3[i]->Length; ++j) {
        sum += matrix3[i][j];
      }
      if (sum > maxSum) {
        maxSum = sum;
        maxIndex = i;
      }
    }

    String ^ result = "";
    if (maxIndex < matrix3->Length) {
      for (int j = 0; j < matrix3[maxIndex]->Length; ++j) {
        result += matrix3[maxIndex][j].ToString() + " ";
      }
    }

    textBox6->Text = result;
  }

  System::Void button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
    int sum = 0;
    for (int j = 0; j < 5; ++j) {
      int minVal = INT_MAX;
      for (int i = 0; i < 5; ++i) {
        if (matrix4[i][j] < minVal) {
          minVal = matrix4[i][j];
        }
      }
      sum += minVal;
    }

    textBox8->Text = sum.ToString();
  }

  System::Void button5_Click(System::Object ^ sender, System::EventArgs ^ e) {
    matrixSize = Convert::ToInt32(textBox9->Text);
    matrix3 = gcnew array<array<int> ^>(matrixSize);
    for (int i = 0; i < matrixSize; ++i) {
      matrix3[i] = gcnew array<int>(matrixSize);
    }
    textBox5->Text = "";

    matrix4 = gcnew array<array<int> ^>(5);
    for (int i = 0; i < 5; ++i) {
      matrix4[i] = gcnew array<int>(5);
    }
    textBox7->Text = "";
  }

 System::Void textBox5_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {
    String ^ input = textBox5->Text;
    std::string inputStr = msclr::interop::marshal_as<std::string>(input);
    std::stringstream ss(inputStr);
    std::string line;
    int row = 0;
    while (std::getline(ss, line, ';')) {
      std::stringstream row_ss(line);
      int num;
      int col = 0;
      while (row_ss >> num) {
        if (col < matrixSize && row < matrixSize) {
          matrix3[row][col] = num;
          col++;
        }
      }
      if (row < matrixSize) {
        row++;
      }
    }
  }

  System::Void textBox7_TextChanged(System::Object ^ sender,
                                    System::EventArgs ^ e) {
    String ^ input = textBox7->Text;
    std::string inputStr = msclr::interop::marshal_as<std::string>(input);
    std::stringstream ss(inputStr);
    std::string line;
    int row = 0;
    while (std::getline(ss, line, ';')) {
      std::stringstream row_ss(line);
      int num;
      int col = 0;
      while (row_ss >> num) {
        if (col < 5 && row < 5) {
          matrix4[row][col] = num;
          col++;
        }
      }
      if (row < 5) {
        row++;
      }
    }
  }
};
} // namespace Project1