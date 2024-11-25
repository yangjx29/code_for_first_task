int main () {
    char zNcsv1C [N];
    char iuR1X9 [U];
    char GgFiArY1 [U];
    puts (iuR1X9);
    puts (GgFiArY1);
    gets (zNcsv1C);
    int i = 0, j, max1, HQReAmj, k, pv821PX6, m;
    {
        m = 0;
        while (N > m) {
            zNcsv1C[m] = '\0';
            m = m + 1;
        };
    }
    {
        m = 0;
        while (U > m) {
            iuR1X9[m] = '\0';
            m++;
        };
    }
    {
        m = 0;
        while (U > m) {
            GgFiArY1[m] = '\0';
            m++;
        };
    }
    for (i = 0;;) {
        if (!('\0' != zNcsv1C[i]))
            break;
        else {
            k = 0;
            {
                j = i;
                while (N > j) {
                    if (zNcsv1C[j] == ' ' || !(',' != zNcsv1C[j]) || !('\0' != zNcsv1C[j]))
                        break;
                    else
                        k++;
                    j++;
                };
            }
            if (!i) {
                max1 = HQReAmj = k;
                {
                    pv821PX6 = 0;
                    while (pv821PX6 < j) {
                        iuR1X9[pv821PX6] = GgFiArY1[pv821PX6] = zNcsv1C[pv821PX6];
                        pv821PX6 = pv821PX6 + 1;
                    };
                };
            }
            else {
                if (max1 < k) {
                    {
                        pv821PX6 = i;
                        while (pv821PX6 < j) {
                            iuR1X9[pv821PX6 - i] = zNcsv1C[pv821PX6];
                            pv821PX6 = pv821PX6 + 1;
                        };
                    }
                    max1 = k;
                }
                else if (k < HQReAmj &&k != 0) {
                    HQReAmj = k;
                    for (m = 0; m < U; m++)
                        GgFiArY1[m] = '\0';
                    {
                        pv821PX6 = 1;
                        while (pv821PX6 < j) {
                            GgFiArY1[pv821PX6 - i] = zNcsv1C[pv821PX6];
                            pv821PX6++;
                        };
                    };
                };
            };
        }
        i = j + 1;
    }
    return 0;
}

