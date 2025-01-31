#include<iostream>
#include<stdlib.h>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;
int main(int argc,char *argv[])
{
if(argc!=3)
{
cout<<"[Usage : BlurImage image_file.jpg/png  kernal_size(1-20)]"<<endl;
return 0;
}
int kernelsize=atoi(argv[2]);
Mat m;
m=imread(argv[1],IMREAD_COLOR);
Mat blurImage;
//apply blur filter
blur(m,blurImage,Size(kernelsize,kernelsize));
imshow("ImageViwer 1.0",blurImage);
waitKey(0);
return 0;
}