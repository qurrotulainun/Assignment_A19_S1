#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n;
    // Data nomer plat mobil
    int matrix[3][5] = {{9458,2154,4856,7854,3214},{2546,8456,4859,1245,4586},{1124,7965,4568,2325,1254}};
    int matrix1[5] = {9458,2154,4856,7854,3214};
    int matrix2[5] = {2546,8456,4859,1245,4586};
    int matrix3[5] = {1124,7965,4568,2325,1254};
    int pencarian;
    cout <<"\t""----- WELCOME TO C++ CAFE-----"<< endl;
    cout << "" << endl;
    cout << "Berikut ini adalah Menu Pada C++ Cafe"<<endl;
    cout << "" << endl;
    cout <<"|======================================|"<<endl;
    cout <<"|" "   " "|  "" 1 "" | ""  2""  | "" 3 ""  | " " 4 " "  | "  "  5 "" | "<<endl;
    cout <<"|======================================|"<<endl;
    cout <<"|" " 1 " "| "<<matrix[0][0]<<" | "<<matrix[0][1]<<" | "<<matrix[0][2]<<" | "<<matrix[0][3]<<" | "<<matrix[0][4]<<" | "<<endl;
    cout <<"|======================================|"<<endl;
    cout <<"|" " 2 " "| "<<matrix[1][0]<<" | "<<matrix[1][1]<<" | "<<matrix[1][2]<<" | "<<matrix[1][3]<<" | "<<matrix[1][4]<<" | "<<endl;
    cout <<"|======================================|"<<endl;
    cout <<"|" " 3 " "| "<<matrix[2][0]<<" | "<<matrix[2][1]<<" | "<<matrix[2][2]<<" | "<<matrix[2][3]<<" | "<<matrix[2][4]<<" | "<<endl;
    cout <<"|======================================|"<<endl;

//    // Sequential Search
//    // input user plat mobil
//    cout<<endl;
//    cout<<"--Berapa plat nomer mobil anda ? : ";
//    cin >> pencarian;
//
//    // matrix1
//    cout<<endl;
//
//for(int g=0; g<3; g++){
//    int d = g+1;
//    for(int h=0; h<5; h++){
//        if(matrix[g][h] == pencarian){
//            cout << "Mobil anda terdapat terdapat di " << h+1 << "-" << d <<endl;
//            cout <<endl;
//            break;
//            
//        }
//        else if(matrix[g][h] != pencarian){
//                cout << "Telah terisi di --- " << h+1 << "-" << d <<endl;
//                cout<<endl;
//                
//            }
//        }
//    
//}
//    return 0;
//}
// Sequential Search
    // input user plat mobil
    cout<<"\nMasukkan Plat mobil anda : ";cin>>pencarian;
    cout<<"=========================================\n";
    for(i=0;i<3;i++)
	{
        for(n=0;n<5;n++)
		{
            if(matrix[i][n]==pencarian)
			{
				cout<<"Plat "<<pencarian<<" ditemukan pada posisi ["<<i+1<<"]["<<n+1<<"]"<<endl;
				cout<<"=========================================\n"; 
            }
			
		}
    }
return 0; 
}
