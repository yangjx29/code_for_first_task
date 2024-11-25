int main () {
    int MdswvK0Ot6R1;
    int g2N74u5FGTtr;
    int j;
    int hTOCrY7;
    int zRIGXsJgj9A;
    int vArwNp6O0;
    int PfCIruxZO;
    int v9coYOs [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int tyoDsw [1000];
    int JX0lnD [1000];
    for (j = 1; j <= 365; j = j + 1) {
        if (31 >= j) {
            tyoDsw[j] = j;
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
            JX0lnD[j] = 1;
        }
        else {
            if ((307 - 248) >= j) {
                tyoDsw[j] = j - 31;
                JX0lnD[j] = 2;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (j <= 90) {
                    tyoDsw[j] = j - 59;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    JX0lnD[j] = 3;
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    if (j <= 120) {
                        tyoDsw[j] = j - 90;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        JX0lnD[j] = 4;
                    }
                    else {
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
                        if (j <= 151) {
                            tyoDsw[j] = j - 120;
                            JX0lnD[j] = 5;
                        }
                        else {
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            if (j <= 181) {
                                tyoDsw[j] = j - 151;
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        float n = 0.0;
                                        if (n > 10)
                                            return;
                                        else
                                            n = 0;
                                    }
                                }
                                JX0lnD[j] = 6;
                            }
                            else {
                                if (j <= 212) {
                                    tyoDsw[j] = j - 181;
                                    {
                                        int x = 0, y;
                                        if (!(x * (x - 1) % 2 == 0)) {
                                            for (x = 0; x < 20; x++) {
                                                y += x;
                                            }
                                            if (y > 30)
                                                return y;
                                        }
                                    }
                                    JX0lnD[j] = 7;
                                }
                                else {
                                    if (j <= 243) {
                                        tyoDsw[j] = j - 212;
                                        JX0lnD[j] = 8;
                                    }
                                    else if (j <= 273) {
                                        tyoDsw[j] = j - 243;
                                        JX0lnD[j] = 9;
                                    }
                                    else if (j <= 304) {
                                        tyoDsw[j] = j - 273;
                                        JX0lnD[j] = 10;
                                    }
                                    else if (j <= 334) {
                                        tyoDsw[j] = j - 304;
                                        JX0lnD[j] = (819 - 808);
                                    }
                                    else if (j <= 365) {
                                        tyoDsw[j] = j - 334;
                                        JX0lnD[j] = 12;
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    {
        g2N74u5FGTtr = 1;
        while (g2N74u5FGTtr <= 365) {
            v9coYOs[g2N74u5FGTtr] = (MdswvK0Ot6R1 +g2N74u5FGTtr - 1) % 7;
            g2N74u5FGTtr = g2N74u5FGTtr + 1;
        };
    }
    for (g2N74u5FGTtr = 1; g2N74u5FGTtr <= 365; g2N74u5FGTtr++) {
        if (v9coYOs[g2N74u5FGTtr] == 5 && tyoDsw[g2N74u5FGTtr] == 13)
            printf ("%d\n", JX0lnD[g2N74u5FGTtr]);
    }
    scanf ("%d", &MdswvK0Ot6R1);
    return 0;
}

