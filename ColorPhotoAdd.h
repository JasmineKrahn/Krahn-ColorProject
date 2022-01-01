#pragma once

#include <string>
#include <cstddef>
#include <vcclr.h>
//#include "../../../../../../opencv/opencv/build/include/opencv2/"
#include <opencv2/core/mat.hpp>
#include <opencv2/core/types.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
//using namespace cv;
namespace DDDJFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ColorPhotoAdd
	/// </summary>
	public ref class ColorPhotoAdd : public System::Windows::Forms::Form
	{
	public:
		gcroot<Drawing::Bitmap^> backChange() {
			gcroot<Drawing::Bitmap^> image = gcnew Drawing::Bitmap(pictureBox1->BackgroundImage);
			System::Drawing::Rectangle blank = System::Drawing::Rectangle(0, 0, image->Width, image->Height);
			System::Drawing::Imaging::BitmapData^ bmpdata = image->LockBits(blank, System::Drawing::Imaging::ImageLockMode::ReadWrite, System::Drawing::Imaging::PixelFormat::Format24bppRgb);
			cv::Mat cv_img(cv::Size(image->Width, image->Height), CV_8UC3, bmpdata->Scan0.ToPointer(), cv::Mat::AUTO_STEP);
			image= gcnew Bitmap(cv_img.cols, cv_img.rows, 4 * cv_img.rows, System::Drawing::Imaging::PixelFormat::Format24bppRgb, IntPtr(cv_img.data));
			return image;
		}
		ColorPhotoAdd(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void setImage(gcroot<Drawing::Bitmap^> image) {
			pictureBox1->BackgroundImage = (image);
		}
	protected:
		
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ColorPhotoAdd()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(481, 366);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ColorPhotoAdd::pictureBox1_MouseDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 397);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(447, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select 2 points on the image to create a cropped version of the image";
			// 
			// ColorPhotoAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 425);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ColorPhotoAdd";
			this->Text = L"ColorPhotoAdd";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	}
	};
}
