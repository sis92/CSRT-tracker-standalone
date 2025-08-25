#include "tracker.hpp"

namespace cv
{

// TrackerModel implementation
TrackerModel::TrackerModel() {}

TrackerModel::~TrackerModel() {}

bool TrackerModel::setTrackerStateEstimator(Ptr<TrackerStateEstimator> trackerStateEstimator) {
    return true; // Simple stub implementation
}

// Tracker base implementation
Tracker::~Tracker() {}

bool Tracker::init(InputArray image, const Rect2d& boundingBox) {
    Mat img = image.getMat();
    return initImpl(img, boundingBox);
}

bool Tracker::update(InputArray image, CV_OUT Rect2d& boundingBox) {
    Mat img = image.getMat();
    return updateImpl(img, boundingBox);
}

} // namespace cv
