int main () {
    int FinZb7uw2;
    int a [(169 - 163)] [6];
    int vgFpyo05m;
    int NdTfui;
    int tgLjxM18XU3;
    int uMndR0gufY5I;
    int foFI2enGm;
    int JPcI1y89tqDC;
    int cQ90KLfe8vF;
    int aTohpX;
    {
        JPcI1y89tqDC = (496 - 495);
        for (; (72 - 67) >= JPcI1y89tqDC;) {
            {
                foFI2enGm = (184 - 183);
                for (; (50 - 45) >= foFI2enGm;) {
                    cin >> a[JPcI1y89tqDC][foFI2enGm];
                    foFI2enGm++;
                }
            }
            JPcI1y89tqDC++;
        }
    }
    FinZb7uw2 = (224 - 223);
    {
        JPcI1y89tqDC = 1;
        for (; 5 >= JPcI1y89tqDC;) {
            vgFpyo05m = 1;
            tgLjxM18XU3 = a[JPcI1y89tqDC][1];
            aTohpX = JPcI1y89tqDC;
            {
                foFI2enGm = 1;
                for (; foFI2enGm <= 5;) {
                    if (a[JPcI1y89tqDC][foFI2enGm] >= tgLjxM18XU3) {
                        tgLjxM18XU3 = a[JPcI1y89tqDC][foFI2enGm];
                        vgFpyo05m = foFI2enGm;
                    }
                    foFI2enGm++;
                }
            }
            NdTfui = a[aTohpX][vgFpyo05m];
            {
                uMndR0gufY5I = 1;
                while (uMndR0gufY5I <= 5) {
                    if (a[uMndR0gufY5I][vgFpyo05m] <= NdTfui) {
                        NdTfui = a[uMndR0gufY5I][vgFpyo05m];
                        cQ90KLfe8vF = uMndR0gufY5I;
                    }
                    uMndR0gufY5I++;
                }
            }
            if (aTohpX == cQ90KLfe8vF) {
                FinZb7uw2 = 0;
                cout << aTohpX << ' ' << vgFpyo05m << ' ' << a[aTohpX][vgFpyo05m] << endl;
                break;
            }
            else if (aTohpX != cQ90KLfe8vF) {
                continue;
            }
            JPcI1y89tqDC++;
        }
    }
    if (FinZb7uw2) {
        cout << "not found" << endl;
    }
    return 0;
}

