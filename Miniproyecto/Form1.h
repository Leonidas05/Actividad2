#pragma once
#include<stdlib.h>
#include<time.h>
#include<string>
#include <iostream>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TBMin;
	private: System::Windows::Forms::TextBox^ TBMax;
	private: System::Windows::Forms::TextBox^ TBVal;
	protected:



	private: System::Windows::Forms::Label^ labeltítulo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ BCerrar;
	private: System::Windows::Forms::Label^ LLimites;
	private: System::Windows::Forms::Label^ LMin;
	private: System::Windows::Forms::Label^ LMax;
	private: System::Windows::Forms::Label^ Lintentos;
	private: System::Windows::Forms::Label^ LDesc1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ LDesc2;
	private: System::Windows::Forms::Label^ LAyuda;
	private: System::Windows::Forms::Button^ BIntento;



	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TBMin = (gcnew System::Windows::Forms::TextBox());
			this->TBMax = (gcnew System::Windows::Forms::TextBox());
			this->TBVal = (gcnew System::Windows::Forms::TextBox());
			this->labeltítulo = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BCerrar = (gcnew System::Windows::Forms::Button());
			this->LLimites = (gcnew System::Windows::Forms::Label());
			this->LMin = (gcnew System::Windows::Forms::Label());
			this->LMax = (gcnew System::Windows::Forms::Label());
			this->Lintentos = (gcnew System::Windows::Forms::Label());
			this->LDesc1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LDesc2 = (gcnew System::Windows::Forms::Label());
			this->LAyuda = (gcnew System::Windows::Forms::Label());
			this->BIntento = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TBMin
			// 
			this->TBMin->Location = System::Drawing::Point(112, 126);
			this->TBMin->Name = L"TBMin";
			this->TBMin->Size = System::Drawing::Size(70, 20);
			this->TBMin->TabIndex = 0;
			// 
			// TBMax
			// 
			this->TBMax->Location = System::Drawing::Point(331, 126);
			this->TBMax->Name = L"TBMax";
			this->TBMax->Size = System::Drawing::Size(70, 20);
			this->TBMax->TabIndex = 1;
			// 
			// TBVal
			// 
			this->TBVal->Location = System::Drawing::Point(47, 265);
			this->TBVal->Name = L"TBVal";
			this->TBVal->Size = System::Drawing::Size(113, 20);
			this->TBVal->TabIndex = 2;
			// 
			// labeltítulo
			// 
			this->labeltítulo->AutoSize = true;
			this->labeltítulo->BackColor = System::Drawing::SystemColors::ControlText;
			this->labeltítulo->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeltítulo->ForeColor = System::Drawing::Color::Aquamarine;
			this->labeltítulo->Location = System::Drawing::Point(69, 9);
			this->labeltítulo->Name = L"labeltítulo";
			this->labeltítulo->Size = System::Drawing::Size(322, 36);
			this->labeltítulo->TabIndex = 3;
			this->labeltítulo->Text = L"¡Adivina el número!";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Controls->Add(this->BCerrar);
			this->panel1->Controls->Add(this->labeltítulo);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(531, 55);
			this->panel1->TabIndex = 4;
			// 
			// BCerrar
			// 
			this->BCerrar->Dock = System::Windows::Forms::DockStyle::Right;
			this->BCerrar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->BCerrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->BCerrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BCerrar->Location = System::Drawing::Point(476, 0);
			this->BCerrar->Name = L"BCerrar";
			this->BCerrar->Size = System::Drawing::Size(55, 55);
			this->BCerrar->TabIndex = 5;
			this->BCerrar->Text = L"X";
			this->BCerrar->UseVisualStyleBackColor = true;
			this->BCerrar->Click += gcnew System::EventHandler(this, &Form1::BCerrar_Click);
			// 
			// LLimites
			// 
			this->LLimites->AutoSize = true;
			this->LLimites->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLimites->Location = System::Drawing::Point(43, 75);
			this->LLimites->Name = L"LLimites";
			this->LLimites->Size = System::Drawing::Size(403, 20);
			this->LLimites->TabIndex = 5;
			this->LLimites->Text = L"Ingresa los límites del número aleatorio que se generará";
			// 
			// LMin
			// 
			this->LMin->AutoSize = true;
			this->LMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LMin->Location = System::Drawing::Point(71, 126);
			this->LMin->Name = L"LMin";
			this->LMin->Size = System::Drawing::Size(34, 20);
			this->LMin->TabIndex = 6;
			this->LMin->Text = L"Min";
			// 
			// LMax
			// 
			this->LMax->AutoSize = true;
			this->LMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LMax->Location = System::Drawing::Point(287, 126);
			this->LMax->Name = L"LMax";
			this->LMax->Size = System::Drawing::Size(38, 20);
			this->LMax->TabIndex = 7;
			this->LMax->Text = L"Max";
			// 
			// Lintentos
			// 
			this->Lintentos->AutoSize = true;
			this->Lintentos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lintentos->Location = System::Drawing::Point(43, 310);
			this->Lintentos->Name = L"Lintentos";
			this->Lintentos->Size = System::Drawing::Size(159, 20);
			this->Lintentos->TabIndex = 8;
			this->Lintentos->Text = L"Te quedan 5 intentos";
			// 
			// LDesc1
			// 
			this->LDesc1->AutoSize = true;
			this->LDesc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LDesc1->Location = System::Drawing::Point(43, 205);
			this->LDesc1->Name = L"LDesc1";
			this->LDesc1->Size = System::Drawing::Size(442, 20);
			this->LDesc1->TabIndex = 9;
			this->LDesc1->Text = L"Intenta adivinar el número, te dire si estás por debajo o arriba,";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 10;
			// 
			// LDesc2
			// 
			this->LDesc2->AutoSize = true;
			this->LDesc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LDesc2->Location = System::Drawing::Point(43, 229);
			this->LDesc2->Name = L"LDesc2";
			this->LDesc2->Size = System::Drawing::Size(110, 20);
			this->LDesc2->TabIndex = 11;
			this->LDesc2->Text = L"o si le atinaste";
			// 
			// LAyuda
			// 
			this->LAyuda->AutoSize = true;
			this->LAyuda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LAyuda->Location = System::Drawing::Point(183, 265);
			this->LAyuda->Name = L"LAyuda";
			this->LAyuda->Size = System::Drawing::Size(66, 20);
			this->LAyuda->TabIndex = 12;
			this->LAyuda->Text = L"Ejemplo";
			this->LAyuda->Visible = false;
			// 
			// BIntento
			// 
			this->BIntento->Location = System::Drawing::Point(410, 310);
			this->BIntento->Name = L"BIntento";
			this->BIntento->Size = System::Drawing::Size(75, 23);
			this->BIntento->TabIndex = 13;
			this->BIntento->Text = L"Intentalo";
			this->BIntento->UseVisualStyleBackColor = true;
			this->BIntento->Click += gcnew System::EventHandler(this, &Form1::BIntento_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 379);
			this->Controls->Add(this->BIntento);
			this->Controls->Add(this->LAyuda);
			this->Controls->Add(this->LDesc2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->LDesc1);
			this->Controls->Add(this->Lintentos);
			this->Controls->Add(this->LMax);
			this->Controls->Add(this->LMin);
			this->Controls->Add(this->LLimites);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->TBVal);
			this->Controls->Add(this->TBMax);
			this->Controls->Add(this->TBMin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		this->Lintentos->Text = "Te quedan 5 intentos";		
			}

	public: int intentos = 5;
	

	void Proceso() {
	int max = System::Convert::ToInt32(this->TBMax->Text);
	int min = System::Convert::ToInt32(this->TBMin->Text);
	
	int num = rand() % max + min;
	int *apv = &num;
	
		this->LAyuda->Visible = true;
		int val = System::Convert::ToInt32(this->TBVal->Text);
		if (intentos > 0){
			if (val > *apv)// Cuando el número de entrada es mayor que el número aleatorio
			{
				this->LAyuda->Text = "Intenta un valor mas chico";
			}
			else if (val < *apv)// Cuando el número de entrada es menor que el número aleatorio
			{
				this->LAyuda->Text = "Intenta un valor mas grande";
			}
			else// Cuando el número de entrada es igual al número aleatorio
			{
				this->LAyuda->Text = "Felicidades, le atinaste";
				this->BIntento->Visible = false;
				this->Lintentos->Visible = false;

			}
		}
		else {
			MessageBox::Show(L"Perdiste, el num era " + *apv);
			this->BIntento->Visible = false;
		}
	}

	private: System::Void BIntento_Click(System::Object^ sender, System::EventArgs^ e) {
		intentos--;
		Proceso();
		this->Lintentos->Text = "Te quedan " + intentos + " intentos";
		
		
	}
	private: System::Void BCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
			public: static string toStandardString(System::String^ string)
			{
				using System::Runtime::InteropServices::Marshal;
				System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
				char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
				std::string returnString(charPointer, string->Length);
				Marshal::FreeHGlobal(pointer);
				return returnString;
			}
}
	;};

