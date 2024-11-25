int main () {
    int jIafGdF;
    int vqF0ZoD4T9x;
    int RHmAzbZj3;
    int ZSXKyfV3D;
    int dLHmTt5;
    jIafGdF = (145 - 145);
    char own8aBgjf6 [50];
    char q2oExA [50];
    vqF0ZoD4T9x = 0;
    cin >> q2oExA;
    ZSXKyfV3D = strlen (q2oExA);
    cin >> own8aBgjf6;
    dLHmTt5 = strlen (own8aBgjf6);
    if (ZSXKyfV3D != dLHmTt5) {
        cout << "NO" << endl;
    }
    else {
        while (vqF0ZoD4T9x < ZSXKyfV3D) {
            {
                RHmAzbZj3 = 0;
                while (RHmAzbZj3 < ZSXKyfV3D) {
                    if (own8aBgjf6[vqF0ZoD4T9x] == q2oExA[RHmAzbZj3]) {
                        q2oExA[RHmAzbZj3] = 0;
                        jIafGdF++;
                        break;
                    }
                    RHmAzbZj3++;
                };
            }
            vqF0ZoD4T9x++;
        }
        if (jIafGdF == ZSXKyfV3D) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        };
    }
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

