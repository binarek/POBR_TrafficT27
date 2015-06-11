/*
 * Consts.h
 *
 *  Created on: 9 cze 2015
 *      Author: ola
 */

#ifndef CONSTS_H_
#define CONSTS_H_

#include <opencv2/opencv.hpp>

const cv::Vec3b BACKGROUND_HSV_MIN_VALUE(17, 173, 165);
const cv::Vec3b BACKGROUND_HSV_MAX_VALUE(28, 255, 255);
const int BACKGROUND_MIN_SEGMENT_SIZE = 600;
const int BACKGROUND_MAX_SEGMENT_SIZE = INT_MAX;

const cv::Vec3b CIRCLE_HSV_MIN_VALUE(170, 170, 150);
const cv::Vec3b CIRCLE_HSV_MAX_VALUE(3, 255, 255);
const int CIRCLE_MIN_SEGMENT_SIZE = 400;
const int CIRCLE_MAX_SEGMENT_SIZE = INT_MAX;

const cv::Vec3b GIRL_HSV_MIN_VALUE(0, 0, 0);
const cv::Vec3b GIRL_HSV_MAX_VALUE(255, 255, 60);
const int GIRL_MIN_SEGMENT_SIZE = 600;
const int GIRL_MAX_SEGMENT_SIZE = 70000;

const cv::Vec3b STICK_HSV_MIN_VALUE(0, 0, 240);
const cv::Vec3b STICK_HSV_MAX_VALUE(255, 50, 255);
const int STICK_MIN_SEGMENT_SIZE = 600;
const int STICK_MAX_SEGMENT_SIZE = INT_MAX;

#endif /* CONSTS_H_ */
