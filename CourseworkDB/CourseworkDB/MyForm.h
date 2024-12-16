#pragma once
#include <cmath>

namespace CourseworkDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::OleDb;

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
	private: System::Windows::Forms::Label^ Zadanie;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel_task;
	private: System::Windows::Forms::Button^ button_calc;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button_reset;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::ComboBox^ Type_peredaci_option;
	private: System::Windows::Forms::TextBox^ box_b;
	private: System::Windows::Forms::TextBox^ box_v;
	private: System::Windows::Forms::TextBox^ box_delta;
	private: System::Windows::Forms::TextBox^ box_alfa1;
	private: System::Windows::Forms::TextBox^ box_F;
	private: System::Windows::Forms::TextBox^ box_sigmaC;
	private: System::Windows::Forms::TextBox^ box_sigma0;
	private: System::Windows::Forms::TextBox^ box_p;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ box_Q1;
	private: System::Windows::Forms::TextBox^ box_gamma1;
	private: System::Windows::Forms::TextBox^ box_Q0;
	private: System::Windows::Forms::TextBox^ box_Rmax;
	private: System::Windows::Forms::TextBox^ box_R;
	private: System::Windows::Forms::TextBox^ box_Q2;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ box_Id;

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
			this->Zadanie = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel_task = (gcnew System::Windows::Forms::Panel());
			this->button_calc = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->box_Id = (gcnew System::Windows::Forms::TextBox());
			this->box_v = (gcnew System::Windows::Forms::TextBox());
			this->box_delta = (gcnew System::Windows::Forms::TextBox());
			this->box_alfa1 = (gcnew System::Windows::Forms::TextBox());
			this->box_F = (gcnew System::Windows::Forms::TextBox());
			this->box_sigma0 = (gcnew System::Windows::Forms::TextBox());
			this->box_p = (gcnew System::Windows::Forms::TextBox());
			this->box_b = (gcnew System::Windows::Forms::TextBox());
			this->Type_peredaci_option = (gcnew System::Windows::Forms::ComboBox());
			this->box_sigmaC = (gcnew System::Windows::Forms::TextBox());
			this->button_reset = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->box_Q0 = (gcnew System::Windows::Forms::TextBox());
			this->box_Rmax = (gcnew System::Windows::Forms::TextBox());
			this->box_R = (gcnew System::Windows::Forms::TextBox());
			this->box_Q2 = (gcnew System::Windows::Forms::TextBox());
			this->box_Q1 = (gcnew System::Windows::Forms::TextBox());
			this->box_gamma1 = (gcnew System::Windows::Forms::TextBox());
			this->panel_task->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel14->SuspendLayout();
			this->SuspendLayout();
			// 
			// Zadanie
			// 
			this->Zadanie->AutoSize = true;
			this->Zadanie->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Zadanie->Location = System::Drawing::Point(125, 7);
			this->Zadanie->Name = L"Zadanie";
			this->Zadanie->Size = System::Drawing::Size(501, 22);
			this->Zadanie->TabIndex = 0;
			this->Zadanie->Text = L"Проверочный расчет для текущей плоскоременной передачи";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 8);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 15);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Плотность ремня, p[кг/м3]*10^3:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(261, 15);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Начальное напряжение ремня, sigma0[МПа]:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(8, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(268, 15);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Напряжение центробежных сил, sigmaц[Мпа]:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 8);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 15);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Окружная сила, F[Н]:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(8, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(265, 15);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Угол обхвата на меньшем шкиве, alfa1[град.]:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(8, 8);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(158, 15);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Толщина ремня, delta[мм]:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(8, 8);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(139, 15);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Скорость ремня, v[м/с]:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(8, 6);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(252, 15);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Начальное напряжение ветви ремня, Q0[Н]:";
			// 
			// panel_task
			// 
			this->panel_task->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel_task->Controls->Add(this->Zadanie);
			this->panel_task->Location = System::Drawing::Point(12, 4);
			this->panel_task->Name = L"panel_task";
			this->panel_task->Size = System::Drawing::Size(746, 37);
			this->panel_task->TabIndex = 24;
			// 
			// button_calc
			// 
			this->button_calc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_calc->Location = System::Drawing::Point(401, 358);
			this->button_calc->Name = L"button_calc";
			this->button_calc->Size = System::Drawing::Size(357, 51);
			this->button_calc->TabIndex = 31;
			this->button_calc->Text = L"Рассчитать";
			this->button_calc->UseVisualStyleBackColor = true;
			this->button_calc->Click += gcnew System::EventHandler(this, &MyForm::button_calc_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel21);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Location = System::Drawing::Point(12, 46);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(454, 306);
			this->panel1->TabIndex = 32;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel21->Controls->Add(this->label2);
			this->panel21->Location = System::Drawing::Point(12, 4);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(430, 27);
			this->panel21->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Уникальный идентификатор передачи";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel10->Controls->Add(this->label13);
			this->panel10->Location = System::Drawing::Point(12, 269);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(430, 27);
			this->panel10->TabIndex = 30;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel9->Controls->Add(this->label12);
			this->panel9->Location = System::Drawing::Point(12, 236);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(430, 27);
			this->panel9->TabIndex = 30;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel8->Controls->Add(this->label11);
			this->panel8->Location = System::Drawing::Point(12, 203);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(430, 27);
			this->panel8->TabIndex = 30;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel7->Controls->Add(this->label8);
			this->panel7->Location = System::Drawing::Point(12, 170);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(430, 27);
			this->panel7->TabIndex = 29;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel5->Controls->Add(this->label6);
			this->panel5->Location = System::Drawing::Point(12, 137);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(430, 27);
			this->panel5->TabIndex = 27;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(12, 104);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(430, 27);
			this->panel4->TabIndex = 26;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(12, 71);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(430, 27);
			this->panel3->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ширина ремня, b[мм]:";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel12->Controls->Add(this->label1);
			this->panel12->Location = System::Drawing::Point(12, 38);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(430, 27);
			this->panel12->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Тип натяжения передачи:";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel6->Controls->Add(this->label7);
			this->panel6->Location = System::Drawing::Point(12, 12);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(430, 27);
			this->panel6->TabIndex = 28;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->box_Id);
			this->panel2->Controls->Add(this->box_v);
			this->panel2->Controls->Add(this->box_delta);
			this->panel2->Controls->Add(this->box_alfa1);
			this->panel2->Controls->Add(this->box_F);
			this->panel2->Controls->Add(this->box_sigma0);
			this->panel2->Controls->Add(this->box_p);
			this->panel2->Controls->Add(this->box_b);
			this->panel2->Controls->Add(this->Type_peredaci_option);
			this->panel2->Location = System::Drawing::Point(472, 46);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(286, 306);
			this->panel2->TabIndex = 33;
			// 
			// box_Id
			// 
			this->box_Id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_Id->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_Id->Location = System::Drawing::Point(8, 5);
			this->box_Id->Name = L"box_Id";
			this->box_Id->Size = System::Drawing::Size(269, 27);
			this->box_Id->TabIndex = 10;
			// 
			// box_v
			// 
			this->box_v->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_v->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_v->Location = System::Drawing::Point(9, 265);
			this->box_v->Name = L"box_v";
			this->box_v->Size = System::Drawing::Size(269, 27);
			this->box_v->TabIndex = 9;
			// 
			// box_delta
			// 
			this->box_delta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_delta->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_delta->Location = System::Drawing::Point(8, 232);
			this->box_delta->Name = L"box_delta";
			this->box_delta->Size = System::Drawing::Size(270, 27);
			this->box_delta->TabIndex = 8;
			// 
			// box_alfa1
			// 
			this->box_alfa1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_alfa1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_alfa1->Location = System::Drawing::Point(9, 199);
			this->box_alfa1->Name = L"box_alfa1";
			this->box_alfa1->Size = System::Drawing::Size(269, 27);
			this->box_alfa1->TabIndex = 7;
			// 
			// box_F
			// 
			this->box_F->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_F->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_F->Location = System::Drawing::Point(8, 168);
			this->box_F->Name = L"box_F";
			this->box_F->Size = System::Drawing::Size(270, 27);
			this->box_F->TabIndex = 6;
			// 
			// box_sigma0
			// 
			this->box_sigma0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_sigma0->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_sigma0->Location = System::Drawing::Point(8, 137);
			this->box_sigma0->Name = L"box_sigma0";
			this->box_sigma0->Size = System::Drawing::Size(270, 27);
			this->box_sigma0->TabIndex = 4;
			// 
			// box_p
			// 
			this->box_p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_p->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_p->Location = System::Drawing::Point(8, 104);
			this->box_p->Name = L"box_p";
			this->box_p->Size = System::Drawing::Size(269, 27);
			this->box_p->TabIndex = 2;
			// 
			// box_b
			// 
			this->box_b->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_b->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_b->Location = System::Drawing::Point(8, 71);
			this->box_b->Name = L"box_b";
			this->box_b->Size = System::Drawing::Size(270, 27);
			this->box_b->TabIndex = 1;
			// 
			// Type_peredaci_option
			// 
			this->Type_peredaci_option->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Type_peredaci_option->FormattingEnabled = true;
			this->Type_peredaci_option->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Автоматическая", L"Неавтоматическая" });
			this->Type_peredaci_option->Location = System::Drawing::Point(7, 38);
			this->Type_peredaci_option->Name = L"Type_peredaci_option";
			this->Type_peredaci_option->Size = System::Drawing::Size(270, 27);
			this->Type_peredaci_option->TabIndex = 0;
			this->Type_peredaci_option->Text = L"Выберите";
			// 
			// box_sigmaC
			// 
			this->box_sigmaC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_sigmaC->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_sigmaC->Location = System::Drawing::Point(8, 12);
			this->box_sigmaC->Name = L"box_sigmaC";
			this->box_sigmaC->ReadOnly = true;
			this->box_sigmaC->Size = System::Drawing::Size(270, 27);
			this->box_sigmaC->TabIndex = 5;
			// 
			// button_reset
			// 
			this->button_reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_reset->Location = System::Drawing::Point(12, 358);
			this->button_reset->Name = L"button_reset";
			this->button_reset->Size = System::Drawing::Size(383, 51);
			this->button_reset->TabIndex = 34;
			this->button_reset->Text = L"Очистить поля";
			this->button_reset->UseVisualStyleBackColor = true;
			this->button_reset->Click += gcnew System::EventHandler(this, &MyForm::button_reset_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->panel20);
			this->panel13->Controls->Add(this->panel19);
			this->panel13->Controls->Add(this->panel18);
			this->panel13->Controls->Add(this->panel17);
			this->panel13->Controls->Add(this->panel16);
			this->panel13->Controls->Add(this->panel6);
			this->panel13->Controls->Add(this->panel11);
			this->panel13->Location = System::Drawing::Point(12, 415);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(454, 270);
			this->panel13->TabIndex = 35;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel20->Controls->Add(this->label18);
			this->panel20->Location = System::Drawing::Point(12, 231);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(430, 27);
			this->panel20->TabIndex = 31;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel19->Controls->Add(this->label17);
			this->panel19->Location = System::Drawing::Point(12, 177);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(430, 48);
			this->panel19->TabIndex = 31;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(8, 10);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(270, 30);
			this->label17->TabIndex = 28;
			this->label17->Text = L"Усилие, действующее на вал\r\n(начальное или после подтягивания), Rmax[Н]:";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel18->Controls->Add(this->label10);
			this->panel18->Location = System::Drawing::Point(12, 144);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(430, 27);
			this->panel18->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(8, 8);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(146, 15);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Суммарное усилие, R[Н]:";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel17->Controls->Add(this->label16);
			this->panel17->Location = System::Drawing::Point(12, 111);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(430, 27);
			this->panel17->TabIndex = 31;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(8, 8);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(181, 15);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Усилие в ведомой ветви, Q2[Н]:";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel16->Controls->Add(this->label15);
			this->panel16->Location = System::Drawing::Point(12, 78);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(430, 27);
			this->panel16->TabIndex = 31;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(8, 8);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(180, 15);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Усилие в ведущей ветви, Q1[Н]:";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel11->Controls->Add(this->label14);
			this->panel11->Location = System::Drawing::Point(12, 45);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(430, 27);
			this->panel11->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(8, 8);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(252, 15);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Угол между ветвями ремня, gamma1[град.]:";
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->box_Q0);
			this->panel14->Controls->Add(this->box_Rmax);
			this->panel14->Controls->Add(this->box_R);
			this->panel14->Controls->Add(this->box_Q2);
			this->panel14->Controls->Add(this->box_Q1);
			this->panel14->Controls->Add(this->box_sigmaC);
			this->panel14->Controls->Add(this->box_gamma1);
			this->panel14->Location = System::Drawing::Point(472, 415);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(286, 270);
			this->panel14->TabIndex = 36;
			// 
			// box_Q0
			// 
			this->box_Q0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_Q0->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_Q0->Location = System::Drawing::Point(8, 231);
			this->box_Q0->Name = L"box_Q0";
			this->box_Q0->ReadOnly = true;
			this->box_Q0->Size = System::Drawing::Size(271, 27);
			this->box_Q0->TabIndex = 15;
			// 
			// box_Rmax
			// 
			this->box_Rmax->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_Rmax->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_Rmax->Location = System::Drawing::Point(9, 177);
			this->box_Rmax->Multiline = true;
			this->box_Rmax->Name = L"box_Rmax";
			this->box_Rmax->ReadOnly = true;
			this->box_Rmax->Size = System::Drawing::Size(270, 48);
			this->box_Rmax->TabIndex = 14;
			// 
			// box_R
			// 
			this->box_R->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_R->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_R->Location = System::Drawing::Point(9, 144);
			this->box_R->Name = L"box_R";
			this->box_R->ReadOnly = true;
			this->box_R->Size = System::Drawing::Size(269, 27);
			this->box_R->TabIndex = 13;
			// 
			// box_Q2
			// 
			this->box_Q2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_Q2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_Q2->Location = System::Drawing::Point(8, 111);
			this->box_Q2->Name = L"box_Q2";
			this->box_Q2->ReadOnly = true;
			this->box_Q2->Size = System::Drawing::Size(270, 27);
			this->box_Q2->TabIndex = 12;
			// 
			// box_Q1
			// 
			this->box_Q1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_Q1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_Q1->Location = System::Drawing::Point(8, 78);
			this->box_Q1->Name = L"box_Q1";
			this->box_Q1->ReadOnly = true;
			this->box_Q1->Size = System::Drawing::Size(270, 27);
			this->box_Q1->TabIndex = 11;
			// 
			// box_gamma1
			// 
			this->box_gamma1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_gamma1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->box_gamma1->Location = System::Drawing::Point(8, 45);
			this->box_gamma1->Name = L"box_gamma1";
			this->box_gamma1->ReadOnly = true;
			this->box_gamma1->Size = System::Drawing::Size(270, 27);
			this->box_gamma1->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->ClientSize = System::Drawing::Size(770, 698);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->button_reset);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button_calc);
			this->Controls->Add(this->panel_task);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel_task->ResumeLayout(false);
			this->panel_task->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\bnast\\source\\repos\\CourseworkDB\\CourseworkDB.mdb");

		//возможно используется для того, чтобы в датаГриде вывести БД, стирать не буду, тк придется немнооожечко переделывать всю прогу ХЫ
		void ConnectionDB() {
			try {
				conn->Open();
				OleDbCommand^ cmd = conn->CreateCommand(); //инструкция sql
				cmd->CommandType = CommandType::Text;
				cmd->CommandText = "select * from Detail, UssemblyUnit"; //?
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable(); //?
				OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
				dp->Fill(dt);
				/*dataGridView1-> DataSource = dt;*/
				conn->Close();
				MessageBox::Show("Connection is Successful", "C++ Access DataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "C++ Access DataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		//окно вызывается каждый раз, как прогружается форма
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			try {
				ConnectionDB();
			}
			catch(Exception^ ex){
				MessageBox::Show(ex->Message, "C++ Access DataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		//кнопка сбора, расчета, вывода и загрузки данных в БД
		private: System::Void button_reset_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				System::Windows::Forms::DialogResult iReset;
				iReset = MessageBox::Show("Confirm if you want to Reset", "C++ Access DataBase Connector", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (iReset == System::Windows::Forms::DialogResult::Yes) {
					box_Id->Text = "";
					Type_peredaci_option->Text = "";
					box_b->Text = "";
					box_p->Text = "";
					box_sigma0->Text = "";
					box_F->Text = "";
					box_alfa1->Text = "";
					box_delta->Text = "";
					box_v->Text = "";

					MessageBox::Show("You have Successfully Reset your System", "C++ Access DataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Information);
					ConnectionDB();
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "C++ Access DataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		private: System::Void button_calc_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				//Сохранение введенных пользователем параметров
				int id = System::Convert::ToInt32(box_Id->Text);
				String^ type_peredachi = System::Convert::ToString(Type_peredaci_option->Text);
				double b = System::Convert::ToDouble(box_b->Text);
				double p = System::Convert::ToDouble(box_p->Text);
				double sigma0 = System::Convert::ToDouble(box_sigma0->Text);
				double F = System::Convert::ToDouble(box_F->Text);
				double alfa1 = System::Convert::ToDouble(box_alfa1->Text);
				double delta = System::Convert::ToDouble(box_delta->Text);
				double v = System::Convert::ToDouble(box_v->Text);

				//Расчет параметров
				double Q1 = calc_Q1(sigma0, b, delta, F);
				double Q2 = calc_Q2(sigma0, b, delta, F);
				double gamma1 = calc_gamma1(alfa1);
				double R;
				if (alfa1 >= 120) R = 2 * sigma0 * b * delta;
				else R = calc_R(Q1, Q2, gamma1);
				int x;
				double Rmax;
				if (type_peredachi == "Автоматическая") {
					x = 1;
					Rmax = 0;
				}
				else {
					x = 0;
					Rmax = calc_Rmax(R);
				}
				double sigmaC = calc_sigmaC(p, v);
				double Q0 = calc_Q0(sigma0, x, sigmaC, b, delta);

				//Вывод на форму новых данных
				box_gamma1->Text = gamma1.ToString();
				box_Q1->Text = Q1.ToString();
				box_Q2->Text = Q2.ToString();
				box_R->Text = R.ToString();
				box_Rmax->Text = Rmax.ToString();
				box_sigmaC->Text = sigmaC.ToString();
				box_Q0->Text = Q0.ToString();


				conn->Open();
				OleDbCommand^ cmd = conn->CreateCommand();
				//Запись данных в таблицу Detail
				cmd->CommandType = CommandType::Text;
				cmd->CommandText = "insert into Detail(id, alfa1, delta, v, gamma1, Q1, Q2, Rmax, Q0) values('"+
					box_Id->Text + "','" +
					box_alfa1->Text + "','" +
					box_delta->Text + "','" +
					box_v->Text + "','" +
					box_gamma1->Text + "','" +
					box_Q1->Text + "','" +
					box_Q2->Text+ "','" +
					box_Rmax->Text + "','" +
					box_Q0->Text + "')";
				cmd->ExecuteNonQuery();

				//Запись данных в таблицу UssemblyUnit
				cmd->CommandType = CommandType::Text;
				cmd->CommandText = "insert into UssemblyUnit(id, type_peredachi, b, p, x, sigma0, sigmaC, F, R) values('" +
					box_Id->Text + "','" +
					Type_peredaci_option->Text + "','" +
					box_b->Text + "','" +
					box_p->Text + "','" +
					x.ToString() + "','" +
					box_sigma0->Text + "','" +
					box_sigmaC->Text + "','" +
					box_F->Text + "','" +
					box_R->Text + "')";
				cmd->ExecuteNonQuery();

				//Закрытие подключения к БД
				conn->Close();
				MessageBox::Show("Record is Successfully Added", "C++ Access DataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Information);
				ConnectionDB();


			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "C++ Access DataBase Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	
		//Функции расчета параметров
		double calc_gamma1(double alfa1) {return 180 - alfa1;}
		double calc_Q1(double sigma0, double b, double delta, double F) {return sigma0 * b * delta + F / 2;}
		double calc_Q2(double sigma0, double b, double delta, double F) {return sigma0 * b * delta - F / 2;}
		double calc_R(double Q1, double Q2, double gamma1) {return pow(pow(Q1, 2) + pow(Q2, 2) + 2 * Q1 * Q2 * cos(gamma1), 0.5);}
		double calc_Rmax(double R) { return R * 1.5; }
		double calc_sigmaC(double p, double v) { return p * pow(v, 2) / 1000000; }
		double calc_Q0(double sigma0, int x, double sigmaC, double b, double delta) { return (sigma0 + (1 - x) * sigmaC) * b * delta; }
};
}
