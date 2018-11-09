#pragma once
#include "code.h"
#include "TSortie.h"
#include "TClient.h"
#include <math.h>

namespace ConsoleApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Diagnostics::EventLog^  eventLog1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  grapheCos;



	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->grapheCos = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grapheCos))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1067, 107);
			this->button2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(301, 110);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SIMULER";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(147, 60);
			this->label2->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(298, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Durée de la simulation";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(477, 52);
			this->textBox1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(399, 38);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(477, 141);
			this->textBox2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(399, 38);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(477, 224);
			this->textBox3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(399, 38);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(117, 148);
			this->label3->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(322, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Durée entre deux clients";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 231);
			this->label4->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(400, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Durée de traitement d\'un client";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(80, 343);
			this->groupBox1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->groupBox1->Size = System::Drawing::Size(1032, 310);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Paramètres du modèle";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(80, 60);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(843, 196);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(1455, 60);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(933, 593);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			// 
			// backgroundWorker2
			// 
			this->backgroundWorker2->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker2_DoWork);
			// 
			// grapheCos
			// 
			chartArea1->Name = L"ChartArea1";
			this->grapheCos->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->grapheCos->Legends->Add(legend1);
			this->grapheCos->Location = System::Drawing::Point(80, 736);
			this->grapheCos->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->grapheCos->Name = L"grapheCos";
			this->grapheCos->Size = System::Drawing::Size(2308, 771);
			this->grapheCos->TabIndex = 13;
			this->grapheCos->Text = L"dessinerCosinus";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2477, 1741);
			this->Controls->Add(this->grapheCos);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grapheCos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int durSim;
		int durInter;
		int durTrait;
		float * moy;
		
		TSortie sortie;
		TClient * tabClient;

		durSim = System::Convert::ToInt32(this->textBox1->Text);
		durInter = System::Convert::ToInt32(this->textBox2->Text);
		durTrait = System::Convert::ToInt32(this->textBox3->Text);

		sortie = simuler(durSim, durInter, durTrait);

		tabClient = sortie.getTabClient();

		this->richTextBox1->Text = "SIMULATION :\n";
		this->richTextBox1->Text += "ID\tDate Entree File\tDateEntreeServeur\tDateSortie\n";


		for (int i = 0; i < sortie.getCpt(); i++) {

			this->richTextBox1->Text += tabClient[i].getId() + "\t\t" + tabClient[i].getDateEntreeFile() + "\t\t" + tabClient[i].getDateEntreeSys() + "\t\t" + tabClient[i].getDateSortieSys() + "\n";
		}

		//AFFICHAGE GRAPHIQUE

		this->grapheCos->Series->Clear();
		this->grapheCos->Series->Add("Moyenne");
		this->grapheCos->Series["Moyenne"]->ChartType = SeriesChartType::Line;

		moy = sortie.getMoyennes();

		for (int i = 0; i < sortie.getCpt(); i++) {
			this->grapheCos->Series["Moyenne"]->Points->AddXY(i, moy[i]);
		}

	}

	private: System::Void backgroundWorker2_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

	}

};
}
