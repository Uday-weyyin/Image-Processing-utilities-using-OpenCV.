#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(int argc,char *argv[])
{
if(argc!=3)
{
cout<<"usage [Color2Gray source_file.jpg/png  traget_file.jpg/png]"<<endl;
return 0;
}
Mat m;
m=imread(argv[1],CV_LOAD_IMAGE_GRAYSCALE);
imwrite(argv[2],m);
cout<<argv[2]<<"grayscaled image generated"<<endl;
return 0;
}