#include <dedvo/Conversion.h>


namespace dedvo
{

void Converter::sophus_se3f_to_eigen_isometry3f (Sophus::SE3f& src, Eigen::Isometry3f& dst)
{
    dst = src.rotationMatrix();
    dst.translation() = src.translation();
}

} // namespace dedvo
