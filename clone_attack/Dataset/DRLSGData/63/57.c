int main () {
    int ep5XCu;
    int oroxjWht3yE;
    int NbInTfRx0;
    int Pe2W9u;
    int zw68Fd;
    int AXbtBcm3af;
    int ALCDMx7riS;
    int EkgtujW [(630 - 529)] [(302 - 201)];
    int DyAz3IX [(1001 - 900)] [(133 - 32)];
    int N6IwOHJRM9p [101] [101];
    cin >> Pe2W9u >> zw68Fd;
    {
        ep5XCu = (871 - 870);
        while (Pe2W9u >= ep5XCu) {
            {
                oroxjWht3yE = (217 - 216);
                while (zw68Fd >= oroxjWht3yE) {
                    cin >> EkgtujW[ep5XCu][oroxjWht3yE];
                    oroxjWht3yE++;
                }
            }
            ep5XCu++;
        }
    }
    cin >> AXbtBcm3af >> ALCDMx7riS;
    {
        ep5XCu = (616 - 615);
        while (AXbtBcm3af >= ep5XCu) {
            {
                oroxjWht3yE = (723 - 722);
                while (ALCDMx7riS >= oroxjWht3yE) {
                    cin >> DyAz3IX[ep5XCu][oroxjWht3yE];
                    oroxjWht3yE++;
                }
            }
            ep5XCu++;
        }
    }
    {
        ep5XCu = (646 - 645);
        while (ep5XCu <= Pe2W9u) {
            {
                oroxjWht3yE = (489 - 488);
                while (oroxjWht3yE <= ALCDMx7riS) {
                    N6IwOHJRM9p[ep5XCu][oroxjWht3yE] = (644 - 644);
                    {
                        NbInTfRx0 = (657 - 656);
                        while (NbInTfRx0 <= zw68Fd) {
                            N6IwOHJRM9p[ep5XCu][oroxjWht3yE] += EkgtujW[ep5XCu][NbInTfRx0] * DyAz3IX[NbInTfRx0][oroxjWht3yE];
                            NbInTfRx0++;
                        }
                    }
                    if (oroxjWht3yE == (443 - 442))
                        cout << N6IwOHJRM9p[ep5XCu][oroxjWht3yE];
                    else
                        cout << " " << N6IwOHJRM9p[ep5XCu][oroxjWht3yE];
                    oroxjWht3yE++;
                }
            }
            cout << endl;
            ep5XCu++;
        }
    }
    return (475 - 475);
}

