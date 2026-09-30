#include<iostream>
#include"Image_Class.h"
using namespace std;
int main() {
    Image I("C:\\Users\\ASUS\\Downloads\\wallpaperflare.com_wallpaper (10).jpg") ;
    int dimension_1 ;
    int dimension_2 ;
    cout << "enter the dimensions you want the picture in" << endl ;
    cin >> dimension_1  >> dimension_2 ;
    Image resized(dimension_1, dimension_2) ;

    if (dimension_1 == 0 || dimension_2 == 0) {
        cout << "the dimensions can't be zero" << endl;
    }

    else if (dimension_1 !=0 && dimension_2 !=0) {
        for (int i = 0 ; i < dimension_1 ; i++) {
            for (int j = 0 ; j < dimension_2 ; j++) {
                unsigned int x = i * I.width /  dimension_1 ;
                unsigned int y = j * I.height /  dimension_2 ;
                for (int k = 0 ; k < I.channels ; k++) {
                    resized(i,j,k) = I(x,y,k) ;
                }


            }
        }
        resized.saveImage("C:\\Users\\ASUS\\Downloads\\wwww.png") ;
        cout << "the new dimensions are applied successfully" << endl ;

    }

    return 0;

}
