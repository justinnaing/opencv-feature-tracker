#ifndef __BLOB_DETECTOR_
#define __BLOB_DETECTOR_

#include "common.hpp"
#include "Blob.h"
#include <vector>

namespace cv{
    class Mat;

    class BlobDetector{
    public:
        BlobDetector();
        //BlobDetector(); // fully parameterized specification
        virtual std::vector<Blob> operator()(const Mat & input_foreground_mask_image, int close_holes = 1) const;
    private:
        DISALLOW_COPY_AND_ASSIGN(BlobDetector);
    };
}

#endif