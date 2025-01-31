#include<iostream>
#include<stdlib.h>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;
int main(int argc,char *argv[])
{
if(argc!=4)
{
cout<<"Usage [CropImage image_file.jpg/png width height]"<<endl;
return 0;
}
int width=atoi(argv[2]);
int height=atoi(argv[3]);

Mat m;
m=imread(argv[1]);
int centreX=m.cols/2;
int centreY=m.rows/2;
int topX=centreX-(width/2);
int topY=centreY-(height/2);
if(topX<0) topX=0;
if(topY<0) topY=0;
if(topX+width>=m.cols)
{
cout<<"Invalid width"<<endl;
return 0;
}
if(topY+height>=m.rows)
{
cout<<"Invalid height"<<endl;
return 0;
}
Rect r;
r.x=topX;
r.y=topY;
r.width=width;
r.height=height;
Mat croppedImage=m(r);
imshow("Image Processing Studio 1.0",croppedImage);
waitKey(0);
return 0;
}