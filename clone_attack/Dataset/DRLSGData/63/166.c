int main () {
    int AzaewX71j4, DRGFvOqkeb2K, hDiGKag9t, zjb0Q9, jR4VDszXkUJA, uJxS6FwgV8, W0KrBGLpwC36 [(367 - 267)] [(383 - 283)], RAqPYJ2nbr0 [(773 - 673)] [(654 - 554)], lGyKcQN8p291 [(402 - 302)] [100];
    cin >> hDiGKag9t >> zjb0Q9;
    {
        AzaewX71j4 = 534 - 534;
        for (; AzaewX71j4 < hDiGKag9t;) {
            {
                DRGFvOqkeb2K = 960 - 960;
                while (DRGFvOqkeb2K < zjb0Q9) {
                    cin >> W0KrBGLpwC36[AzaewX71j4][DRGFvOqkeb2K];
                    DRGFvOqkeb2K = DRGFvOqkeb2K +1;
                }
            }
            AzaewX71j4 = AzaewX71j4 +1;
        }
    }
    cin >> jR4VDszXkUJA >> uJxS6FwgV8;
    {
        AzaewX71j4 = 0;
        for (; AzaewX71j4 < jR4VDszXkUJA;) {
            {
                DRGFvOqkeb2K = 0;
                for (; DRGFvOqkeb2K < uJxS6FwgV8;) {
                    cin >> RAqPYJ2nbr0[AzaewX71j4][DRGFvOqkeb2K];
                    DRGFvOqkeb2K++;
                }
            }
            AzaewX71j4++;
        }
    }
    if (zjb0Q9 != jR4VDszXkUJA) {
        cout << "Input error";
        return 0;
    }
    {
        AzaewX71j4 = 0;
        while (AzaewX71j4 < hDiGKag9t) {
            {
                DRGFvOqkeb2K = 0;
                for (; DRGFvOqkeb2K < uJxS6FwgV8;) {
                    int JI1Wyrb = 0;
                    {
                        int yz9GrYsM = 0;
                        for (; yz9GrYsM < zjb0Q9;) {
                            JI1Wyrb = JI1Wyrb +W0KrBGLpwC36[AzaewX71j4][yz9GrYsM] * RAqPYJ2nbr0[yz9GrYsM][DRGFvOqkeb2K];
                            yz9GrYsM++;
                        }
                    }
                    lGyKcQN8p291[AzaewX71j4][DRGFvOqkeb2K] = JI1Wyrb;
                    DRGFvOqkeb2K++;
                }
            }
            AzaewX71j4++;
        }
    }
    {
        AzaewX71j4 = 0;
        for (; AzaewX71j4 < hDiGKag9t;) {
            {
                DRGFvOqkeb2K = 0;
                for (; DRGFvOqkeb2K < uJxS6FwgV8 - (906 - 905);) {
                    cout << lGyKcQN8p291[AzaewX71j4][DRGFvOqkeb2K] << ' ';
                    DRGFvOqkeb2K++;
                }
            }
            cout << lGyKcQN8p291[AzaewX71j4][uJxS6FwgV8 - 1] << endl;
            AzaewX71j4++;
        }
    }
    return 0;
}

