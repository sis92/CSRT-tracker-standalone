#ifndef _SAMPLES_UTILITY_HPP_
#define _SAMPLES_UTILITY_HPP_

#include "tracker.hpp"

inline cv::Ptr<cv::Tracker> createTrackerByName(cv::String name)
{
    cv::Ptr<cv::Tracker> tracker;

    if (name == "CSRT")
        tracker = cv::TrackerCSRT::create();
    else
        CV_Error(cv::Error::StsBadArg, "Only CSRT tracking algorithm is supported in this standalone implementation\n");

    return tracker;
}

#endif
