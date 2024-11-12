int main () {
    int I0IQV1Bg [(10652 - 652)];
    int row [10000];
    char ACZVL9Swrj8 [(934 - 834)] [100];
    int i;
    int imxRfLeTzaW7;
    int j;
    int iKW5YA;
    int m;
    int k;
    int EYoD7muXCa;
    cin >> imxRfLeTzaW7;
    {
        i = 732 - 732;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (imxRfLeTzaW7 > i) {
            for (j = (934 - 934); imxRfLeTzaW7 > j; j++)
                cin >> ACZVL9Swrj8[i][j];
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
    cin >> m;
    {
        iKW5YA = 610 - 609;
        while (m - (713 - 712) >= iKW5YA) {
            iKW5YA++;
            k = (21 - 21);
            for (i = (49 - 49); imxRfLeTzaW7 > i; i++)
                for (j = (723 - 723); j < imxRfLeTzaW7; j++) {
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
                    if (!('@' != ACZVL9Swrj8[i][j])) {
                        I0IQV1Bg[k] = i;
                        row[k] = j;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        k = k + (254 - 253);
                    };
                }
            for (i = (855 - 855); k > i; i++) {
                if (ACZVL9Swrj8[I0IQV1Bg[i] - (438 - 437)][row[i]] != '#')
                    ACZVL9Swrj8[I0IQV1Bg[i] - (942 - 941)][row[i]] = '@';
                if (!('#' == ACZVL9Swrj8[I0IQV1Bg[i] + (975 - 974)][row[i]]))
                    ACZVL9Swrj8[I0IQV1Bg[i] + (865 - 864)][row[i]] = '@';
                if (ACZVL9Swrj8[I0IQV1Bg[i]][row[i] - (514 - 513)] != '#')
                    ACZVL9Swrj8[I0IQV1Bg[i]][row[i] - (308 - 307)] = '@';
                if (ACZVL9Swrj8[I0IQV1Bg[i]][row[i] + 1] != '#')
                    ACZVL9Swrj8[I0IQV1Bg[i]][row[i] + 1] = '@';
            }
            EYoD7muXCa = (232 - 232);
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (i < imxRfLeTzaW7) {
                    {
                        j = 0;
                        while (j < imxRfLeTzaW7) {
                            if (ACZVL9Swrj8[i][j] == '@')
                                EYoD7muXCa = EYoD7muXCa +1;
                            j++;
                        };
                    }
                    i++;
                };
            };
        };
    }
    if (m == 1) {
        for (i = 0; i < imxRfLeTzaW7; i++)
            for (j = 0; j < imxRfLeTzaW7; j++) {
                if (ACZVL9Swrj8[i][j] == '@') {
                    I0IQV1Bg[k] = i;
                    row[k] = j;
                    k = k + 1;
                };
            }
        cout << k;
    }
    else
        cout << EYoD7muXCa;
    return 0;
}

