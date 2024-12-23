#pragma once

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;








    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(12, 27);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->ReadOnly = true;
            this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
            this->textBox1->Size = System::Drawing::Size(291, 152);
            this->textBox1->TabIndex = 0;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(309, 58);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(136, 25);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Skaiciuoti galutini pazymi";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->Filter = L"Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(12, 198);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->ReadOnly = true;
            this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
            this->textBox2->Size = System::Drawing::Size(291, 152);
            this->textBox2->TabIndex = 2;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(309, 27);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(136, 25);
            this->button2->TabIndex = 3;
            this->button2->Text = L"Skaityti duomenys is failo";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 10);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(96, 13);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Galutiniai pazymiai:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(12, 182);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(92, 13);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Duomenys is failo:";
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(309, 89);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(136, 35);
            this->button3->TabIndex = 6;
            this->button3->Text = L"Issaugoti galutinius pazymius";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(309, 315);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(136, 35);
            this->button4->TabIndex = 7;
            this->button4->Text = L"Uzdaryti programa";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(309, 274);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(136, 35);
            this->button5->TabIndex = 8;
            this->button5->Text = L"Apie programa";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(309, 130);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(136, 35);
            this->button6->TabIndex = 9;
            this->button6->Text = L"Issaugoti galutinius pazymius <5\r\n";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
            // 
            // button7
            // 
            this->button7->Location = System::Drawing::Point(309, 171);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(136, 35);
            this->button7->TabIndex = 10;
            this->button7->Text = L"Issaugoti galutinius pazymius >5\r\n";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(461, 367);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"Form1";
            this->Text = L"2Savarankiskas";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {

            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                String^ filePath = openFileDialog1->FileName;

                System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();

                StreamReader^ reader = gcnew StreamReader(filePath);
                String^ line;

                reader->ReadLine();

                while ((line = reader->ReadLine()) != nullptr)
                {
                    array<String^>^ columns = line->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries);
                    if (columns->Length >= 8)
                    {
                        String^ vardas = columns[0];
                        String^ pavarde = columns[1];

                        int nd1, nd2, nd3, nd4, nd5, egzaminas;
                        bool success = true;
                        success &= Int32::TryParse(columns[2], nd1);
                        success &= Int32::TryParse(columns[3], nd2);
                        success &= Int32::TryParse(columns[4], nd3);
                        success &= Int32::TryParse(columns[5], nd4);
                        success &= Int32::TryParse(columns[6], nd5);
                        success &= Int32::TryParse(columns[7], egzaminas);

                        if (success)
                        {

                            double vidurkis = (nd1 + nd2 + nd3 + nd4 + nd5) / 5.0;

                            double galutinis = 0.4 * vidurkis + 0.6 * egzaminas;
                            result->AppendFormat("{0} {1} - Galutinis: {2:F2}\r\n", vardas, pavarde, galutinis);
                        }
                        else
                        {
                            result->AppendFormat("Klaida {0} {1}\r\n", vardas, pavarde);
                        }
                    }
                }
                reader->Close();
                textBox1->Text = result->ToString();
            }
        }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            String^ filePath = openFileDialog1->FileName;

            StreamReader^ reader = gcnew StreamReader(filePath);
            reader->ReadLine();
            String^ fileContent = reader->ReadToEnd();

            reader->Close();
            textBox2->Text = fileContent;
        }
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();

        saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
        saveFileDialog->DefaultExt = "txt";
        if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            String^ filePath = saveFileDialog->FileName;

         
            StreamWriter^ writer = gcnew StreamWriter(filePath);
            writer->Write(textBox1->Text);
            writer->Close();
        }
    }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("Programa skirta skaiciuoti studentu galutinius ivertinimus.", "Apie programa", MessageBoxButtons::OK );
}




private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

    array<String^>^ lines = textBox1->Text->Split(gcnew array<Char>{'\n'}, StringSplitOptions::RemoveEmptyEntries);
    System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();

    for each (String ^ line in lines) {
        array<String^>^ columns = line->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries);
        double galutinis;
        if (columns->Length > 0 && Double::TryParse(columns[columns->Length - 1], galutinis) && galutinis < 5.0) {
            result->AppendLine(line);
        }
    }
    if (result->Length > 0) {
        SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
        saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
        saveFileDialog->DefaultExt = "txt";
        if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            StreamWriter^ writer = gcnew StreamWriter(saveFileDialog->FileName);
            writer->Write(result->ToString());
            writer->Close();
        }
    }
    
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

    array<String^>^ lines = textBox1->Text->Split(gcnew array<Char>{'\n'}, StringSplitOptions::RemoveEmptyEntries);
    System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();

    for each (String ^ line in lines) {
        array<String^>^ columns = line->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries);
        double galutinis;
        if (columns->Length > 0 && Double::TryParse(columns[columns->Length - 1], galutinis) && galutinis > 5.0) {
            result->AppendLine(line);
        }
    }
    if (result->Length > 0) {
        SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
        saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
        saveFileDialog->DefaultExt = "txt";
        if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            StreamWriter^ writer = gcnew StreamWriter(saveFileDialog->FileName);
            writer->Write(result->ToString());
            writer->Close();
        }
    }
}
};
}