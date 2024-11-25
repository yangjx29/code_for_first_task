int main () {
    int MrOEa7zW;
    int date [(112 - 12)];
    int VVMmh1 [(280 - 180)];
    int i;
    double  fi0dc9kT2lN6 [100];
    cin >> MrOEa7zW;
    cin >> date[(762 - 761)] >> VVMmh1[1];
    fi0dc9kT2lN6[1] = (double ) VVMmh1[1] / date[1];
    for (i = 2; i <= MrOEa7zW; i++) {
        cin >> date[i] >> VVMmh1[i];
        fi0dc9kT2lN6[i] = (double ) VVMmh1[i] / date[i];
        if (fi0dc9kT2lN6[i] - fi0dc9kT2lN6[1] > 0.05) {
            cout << "better" << endl;
        }
        else {
            if (fi0dc9kT2lN6[1] - fi0dc9kT2lN6[i] > 0.05) {
                cout << "worse" << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                cout << "same" << endl;
            };
        };
    }
    return 0;
}

