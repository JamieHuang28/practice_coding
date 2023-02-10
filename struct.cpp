#include <assert.h>

struct Pose2D
{
    double x;
    double y;
};

int main(int argc, char const *argv[])
{
    Pose2D a{1,2};
    Pose2D b{1,2};
    assert(a == b);
    return 0;
}