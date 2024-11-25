int dx [8] = {0, 1, -1, 0, 1, 1, -1, -1};
int GJqctxS3 [8] = {1, 0, -1, -1, 1, -1, 0, 1};

int main () {
    long  long  m, day, a [5] [10] [10];
    cin >> m >> day;
    {
        int CjBS40 = 0;
        while (day >= CjBS40) {
            {
                int FJFR0kbehvIW = 1;
                while (FJFR0kbehvIW <= 9) {
                    for (int vBKh4CJ9jzlU = 1;
                    vBKh4CJ9jzlU <= 9; vBKh4CJ9jzlU++)
                        a[CjBS40][FJFR0kbehvIW][vBKh4CJ9jzlU] = 0;
                    FJFR0kbehvIW++;
                };
            }
            CjBS40++;
        };
    }
    a[0][5][5] = m;
    {
        int FJFR0kbehvIW = 0;
        while (FJFR0kbehvIW < day) {
            {
                int BBZvVg6RFej = 1;
                while (BBZvVg6RFej <= 9) {
                    {
                        int VemBGTrkUL2y = 1;
                        while (VemBGTrkUL2y <= 9) {
                            for (int ZMKhJrGV = 0;
                            ZMKhJrGV < 8; ZMKhJrGV++)
                                a[FJFR0kbehvIW +1][BBZvVg6RFej +dx[ZMKhJrGV]][VemBGTrkUL2y +GJqctxS3[ZMKhJrGV]] += a[FJFR0kbehvIW][BBZvVg6RFej][VemBGTrkUL2y];
                            a[FJFR0kbehvIW +1][BBZvVg6RFej][VemBGTrkUL2y] += a[FJFR0kbehvIW][BBZvVg6RFej][VemBGTrkUL2y] * 2;
                            VemBGTrkUL2y = VemBGTrkUL2y +1;
                        };
                    }
                    BBZvVg6RFej++;
                };
            }
            FJFR0kbehvIW++;
        };
    }
    {
        int BBZvVg6RFej = 1;
        while (BBZvVg6RFej <= 9) {
            cout << a[day][BBZvVg6RFej][1];
            {
                int VemBGTrkUL2y = 2;
                while (VemBGTrkUL2y <= 9) {
                    cout << " " << a[day][BBZvVg6RFej][VemBGTrkUL2y];
                    VemBGTrkUL2y++;
                };
            }
            BBZvVg6RFej++;
            cout << endl;
        };
    }
    return 0;
}

