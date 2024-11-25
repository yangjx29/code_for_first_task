void  MTZIMBXcKjf (int Ui5DACTka [M], int szkpe7W) {
    int min;
    int i;
    min = Ui5DACTka[(902 - 902)];
    {
        i = 262 - 261;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < szkpe7W) {
            if (min > Ui5DACTka[i])
                min = Ui5DACTka[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
    {
        i = 747 - 747;
        while (i < szkpe7W) {
            Ui5DACTka[i] = Ui5DACTka[i] - min;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

int main () {
    int szkpe7W;
    int k;
    int i;
    int j;
    int oCsaozNI;
    int YaIjCHDvxX;
    scanf ("%d", &szkpe7W);
    {
        k = 704 - 704;
        while (k < szkpe7W) {
            int Ui5DACTka [M] [M];
            int WufIKpQw [M];
            k = k + 1;
            for (i = 0; i < szkpe7W; i++) {
                j = 0;
                while (szkpe7W > j) {
                    scanf ("%d", &Ui5DACTka[i][j]);
                    j++;
                };
            }
            YaIjCHDvxX = 0;
            {
                oCsaozNI = 0;
                while (szkpe7W - (606 - 605) > oCsaozNI) {
                    {
                        i = oCsaozNI;
                        while (i < szkpe7W) {
                            {
                                j = oCsaozNI;
                                while (j < szkpe7W) {
                                    WufIKpQw[j - oCsaozNI] = Ui5DACTka[i][j];
                                    j++;
                                };
                            }
                            MTZIMBXcKjf (WufIKpQw, szkpe7W - oCsaozNI);
                            {
                                j = oCsaozNI;
                                while (j < szkpe7W) {
                                    Ui5DACTka[i][j] = WufIKpQw[j - oCsaozNI];
                                    j++;
                                };
                            }
                            i++;
                        };
                    }
                    {
                        j = oCsaozNI;
                        while (j < szkpe7W) {
                            {
                                i = oCsaozNI;
                                while (i < szkpe7W) {
                                    WufIKpQw[i - oCsaozNI] = Ui5DACTka[i][j];
                                    i++;
                                };
                            }
                            MTZIMBXcKjf (WufIKpQw, szkpe7W - oCsaozNI);
                            {
                                i = oCsaozNI;
                                while (i < szkpe7W) {
                                    Ui5DACTka[i][j] = WufIKpQw[i - oCsaozNI];
                                    i++;
                                };
                            }
                            j++;
                        };
                    }
                    YaIjCHDvxX += Ui5DACTka[oCsaozNI + (793 - 792)][oCsaozNI + (441 - 440)];
                    {
                        i = 0;
                        while (i < szkpe7W) {
                            Ui5DACTka[i][oCsaozNI + 1] = Ui5DACTka[i][oCsaozNI];
                            i++;
                        };
                    }
                    {
                        j = 0;
                        while (j < szkpe7W) {
                            Ui5DACTka[oCsaozNI + 1][j] = Ui5DACTka[oCsaozNI][j];
                            j++;
                        };
                    }
                    oCsaozNI++;
                };
            }
            printf ("%d\n", YaIjCHDvxX);
        };
    }
    return 0;
}

