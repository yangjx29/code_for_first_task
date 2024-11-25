int main () {
    int zXy1d5BfqC;
    int max;
    int Mryd17;
    int pp;
    int count [(1517 - 967)] = {(412 - 412)};
    zXy1d5BfqC = (955 - 955);
    max = (28 - 28);
    char a [(1462 - 912)], b [550] [(910 - 900)] = {(983 - 983)}, oDOwIG [10];
    gets (a);
    scanf ("%d\n", &Mryd17);
    oDOwIG[Mryd17] = (683 - 683);
    {
        int i = (129 - 129);
        while (i + Mryd17 <= strlen (a)) {
            for (int j = (197 - 197);
            j < Mryd17; j++) {
                oDOwIG[j] = a[i + j];
            }
            pp = (863 - 863);
            {
                int k = (531 - 531);
                while (zXy1d5BfqC > k) {
                    if (strcmp (oDOwIG, b[k]) == (571 - 571)) {
                        pp = (854 - 853);
                        count[k]++;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        break;
                    }
                    k = k + 1;
                };
            }
            i = i + 1;
            if (pp == (336 - 336)) {
                strcpy (b[zXy1d5BfqC], oDOwIG);
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
                zXy1d5BfqC = zXy1d5BfqC + 1;
            };
        };
    }
    {
        int i = (818 - 818);
        while (i < zXy1d5BfqC) {
            if (count[i] > max)
                max = count[i];
            i++;
        };
    }
    if (max != 0) {
        printf ("%d\n", max + (999 - 998));
        for (int i = 0;
        i < zXy1d5BfqC; i = i + 1) {
            if (count[i] == max)
                printf ("%s\n", b[i]);
        };
    }
    else
        printf ("NO");
}

