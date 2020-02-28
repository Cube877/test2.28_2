// test2.28_2.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main()
{
	cv::Mat srcMat = imread("E:\\Picture\\Camera Roll\\1.jpg", 0);

	imshow("src", srcMat);
	waitKey(0);
	return 0;
}

