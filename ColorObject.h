#pragma once
#include "DesiredColors.h"
#include "OwnedColors.h"
#include <iostream>
#include <string>
#include <openservice.h>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class ColorObject
{
public:
   ColorObject() {}
   void greyImage(int imageNum);
   void colorMap(int i);
   void outline();
};

inline void ColorObject::greyImage(int imageNum)
{
   cv::Mat img;
   if (imageNum == 1)
      img = cv::imread("chair.png", cv::IMREAD_COLOR);
   else if (imageNum == 2)
      img = cv::imread("backPackBMP.png", cv::IMREAD_COLOR);
   else if (imageNum == 3)
      img = cv::imread("doorBMP.png", cv::IMREAD_COLOR);
   else if (imageNum == 4)
      img = cv::imread("TableBMP.png", cv::IMREAD_COLOR);
   else
      img = cv::imread("vase_wow_crzy.png", cv::IMREAD_COLOR);

   if (img.empty())
      cout << "can not read image" << endl;
   cv::Mat grey_img;
   cvtColor(img, grey_img, cv::COLOR_BGR2GRAY);

   imwrite("grey.png", grey_img);
   //imshow("Grey Object", grey_img);
}

inline void ColorObject::colorMap(int i)
{
   // Reading the Image from the file and storing it in to a Matrix object
   string file = "grey.png";
   cv::Mat src = cv::imread(file);

   // Creating an empty matrix to store the resulte
   cv::Mat dst;

   // Applying color map to an image
   if (i == 1)
      applyColorMap(src, dst, cv::COLORMAP_INFERNO);
   else
      applyColorMap(src, dst, cv::COLORMAP_OCEAN);


   // Writing the image
   imwrite("colored.png", dst);
   imshow("Colored Object", dst);
}

//currently not used
inline void ColorObject::outline()
{
   // Reading the Image from the file and storing it in to a Matrix object
   string file = "chair.png";
   cv::Mat src = cv::imread(file);

   // Creating an empty matrix to store the result
   cv::Mat dst;
   threshold(src, dst, 50, 255, cv::THRESH_BINARY);

   // Writing the image
   imwrite("outlined_chair.png", dst);

   //imshow("Image Processed", dst);
}