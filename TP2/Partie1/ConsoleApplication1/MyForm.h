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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->grapheCos = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
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
			this->button2->Location = System::Drawing::Point(1117, 141);
			this->button2->Margin = System::Windows::Forms::Padding(8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(302, 110);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SIMULER";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(318, 52);
			this->label2->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(298, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Durée de la simulation";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(630, 45);
			this->textBox1->Margin = System::Windows::Forms::Padding(8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 38);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"1000";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(630, 122);
			this->textBox2->Margin = System::Windows::Forms::Padding(8);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(206, 38);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"2";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(630, 194);
			this->textBox3->Margin = System::Windows::Forms::Padding(8);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(206, 38);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"6";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(288, 128);
			this->label3->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(322, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Durée entre deux clients";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 200);
			this->label4->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(570, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Durée de traitement d\'un client sur serveur 1";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(80, 343);
			this->groupBox1->Margin = System::Windows::Forms::Padding(8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(8);
			this->groupBox1->Size = System::Drawing::Size(1314, 380);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Paramètres du modèle";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(958, 194);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(248, 36);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Stop si blocage";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1110, 121);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(122, 38);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"8";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1110, 44);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(122, 38);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"8";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(927, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 32);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Taille file 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(927, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 32);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Taille file 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 275);
			this->label1->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(570, 32);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Durée de traitement d\'un client sur serveur 2";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(630, 267);
			this->textBox4->Margin = System::Windows::Forms::Padding(8);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(206, 38);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"30";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(86, 51);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 200);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(1456, 60);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(8);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1706, 593);
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
			this->grapheCos->Margin = System::Windows::Forms::Padding(8);
			this->grapheCos->Name = L"grapheCos";
			this->grapheCos->Size = System::Drawing::Size(3086, 771);
			this->grapheCos->TabIndex = 13;
			this->grapheCos->Text = L"dessinerCosinus";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(958, 270);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(324, 36);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"Refusée si trop vieille";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(3204, 1600);
			this->Controls->Add(this->grapheCos);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(8);
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
		int durTraitServeur1;
		int durTraitServeur2;
		int tailleFile1;
		int tailleFile2;
		float * moy;
		
		TSortie sortie;
		TClient * tabClient;

		durSim = System::Convert::ToInt32(this->textBox1->Text);
		durInter = System::Convert::ToInt32(this->textBox2->Text);
		durTraitServeur1 = System::Convert::ToInt32(this->textBox3->Text);
		durTraitServeur2 = System::Convert::ToInt32(this->textBox4->Text);
		tailleFile1 = System::Convert::ToInt32(this->textBox5->Text);
		tailleFile2 = System::Convert::ToInt32(this->textBox6->Text);
		sortie = simuler(durSim, durInter, durTraitServeur1, durTraitServeur2, tailleFile1, tailleFile2, checkBox1->Checked, checkBox2->Checked);

		tabClient = sortie.getTabClient();

		this->richTextBox1->Text = "SIMULATION :\n";
		this->richTextBox1->Text += "ID\tDate Entree File1\tDateEntreeServeur1\tDateSortieServeur1\tDateEntreeServeur2 DateSortieServeur2\n";


		for (int i = 0; i < sortie.getCpt(); i++) {

			this->richTextBox1->Text += tabClient[i].getId() + "\t\t" + tabClient[i].getDateEntreeSys() + "\t\t" + tabClient[i].getDateEntreeServ1() + "\t\t" + tabClient[i].getDateSortieServ1() + "\t\t" + tabClient[i].getDateEntreeServ2() + "\t\t\t" + tabClient[i].getDateSortieSys() + "\n";
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




private: System::Void backgroundWorker2_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {}

private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
