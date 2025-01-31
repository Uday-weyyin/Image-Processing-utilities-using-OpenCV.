#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(int argc,char *argv[])
{
if(argc!=2)
{
cout<<"Usage [ImageViewer  file_name.jpg/pnp]"<<endl;
return 0;
}
Mat i;
i=imread(argv[1],IMREAD_COLOR);
imshow("ImageViewer - 1.0",i);
waitKey(0);
return 0;
}