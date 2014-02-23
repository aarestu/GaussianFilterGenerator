#include <iostream>
#include <math.h>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{

    int panjang = 7;
    double weight  = 1;

    Mat kernel;
    int kernelRadius = panjang / 2;

    /********* vektor x **************/
    kernel = Mat_<double>(1, panjang);

    for(int filterX = - kernelRadius; filterX <= kernelRadius; filterX++){
        kernel.at<double>
                (0, filterX + kernelRadius) =  exp(-( ( ( filterX * filterX )  ) / (weight * weight * 2) ));
    }

    cout <<"vektor gaussian X " << panjang << " ="<< endl <<  kernel << endl << endl;


    /********* vektor y **************/
    kernel = Mat_<double>( panjang , 1);

    for(int filterY = - kernelRadius; filterY <= kernelRadius; filterY++){
        kernel.at<double>
                (filterY + kernelRadius , 0) =  exp(-( ( ( filterY * filterY )  ) / (weight * weight * 2) ));
    }

    cout <<"vektor gaussian Y " << panjang << " ="<< endl <<  kernel << endl << endl;


    /********* dua dimensi ***********/
    kernel = Mat_<double>(panjang, panjang);


    for(int filterY = - kernelRadius; filterY <= kernelRadius; filterY++){
        for(int filterX = - kernelRadius; filterX <= kernelRadius; filterX++){

            kernel.at<double>
                    (filterY + kernelRadius, filterX + kernelRadius) =  exp(-( ( ( filterX * filterX ) + ( filterY * filterY )  ) / (weight * weight * 2) ));

        }
    }

    cout <<"matrix gaussian " << panjang << " x " << panjang << " ="<< endl <<  kernel << endl;
}
