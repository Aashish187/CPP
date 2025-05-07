#include <iostream>
using namespace std;
// Class for 1D, 2D, and 3D arrays
class Arrays {
private:
    int oneD[5];           // 1D array
    int twoD[3][3];        // 2D array
    int threeD[2][2][2];   // 3D array

public:
    Arrays() {
        // Initialize 1D array
        for(int i = 0; i < 5; i++) {
            oneD[i] = i + 1;
        }
        
        // Initialize 2D array
        int value = 1;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                twoD[i][j] = value++;
            }
        }
        
        // Initialize 3D array
        value = 1;
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                for(int k = 0; k < 2; k++) {
                    threeD[i][j][k] = value++;
                }
            }
        }
    }

    // Function to display 1D array
    void showOneD() {
        cout << "1D Array: ";
        for(int i = 0; i < 5; i++) {
            cout << oneD[i] << " ";
        }
        cout << endl;
    }

    // Function to display 2D array
    void showTwoD() {
        cout << "2D Array:\n";
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cout << twoD[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to display 3D array
    void showThreeD() {
        cout << "3D Array:\n";
        for(int i = 0; i < 2; i++) {
            cout << "Layer " << i << ":\n";
            for(int j = 0; j < 2; j++) {
                for(int k = 0; k < 2; k++) {
                    cout << threeD[i][j][k] << " ";
                }
                cout << endl;
            }
        }
    }
};
int main() {
    Arrays arr;
    // Display all arrays
    arr.showOneD();
    arr.showTwoD();
    arr.showThreeD();
    return 0;
}