int main () {
    int y3;
    int sl5NzSuDmyG;
    int b [(900 - 799)] [(659 - 558)];
    int WqiQKvLeD [(366 - 265)] [(312 - 211)];
    int RCuzrDS8NW, RGOc2o1Pf6rB;
    int O3kIEWgpHxq;
    int j;
    int x2;
    int SDiWCrJP;
    int c [101] [101];
    getchar ();
    getchar ();
    scanf ("%d %d", &RCuzrDS8NW, &RGOc2o1Pf6rB);
    sl5NzSuDmyG = RCuzrDS8NW;
    {
        O3kIEWgpHxq = 905 - 905;
        while (O3kIEWgpHxq <= RCuzrDS8NW -(378 - 377)) {
            {
                j = 363 - 363;
                while (RGOc2o1Pf6rB -(838 - 837) >= j) {
                    scanf ("%d", &WqiQKvLeD[O3kIEWgpHxq][j]);
                    j = j + 1;
                }
            }
            O3kIEWgpHxq = O3kIEWgpHxq +1;
        }
    }
    scanf ("%d %d", &x2, &SDiWCrJP);
    y3 = SDiWCrJP;
    for (O3kIEWgpHxq = (520 - 520); O3kIEWgpHxq <= x2 - (975 - 974); O3kIEWgpHxq = O3kIEWgpHxq +1) {
        j = 911 - 911;
        while (j <= SDiWCrJP -(266 - 265)) {
            scanf ("%d", &b[O3kIEWgpHxq][j]);
            j = j + 1;
        }
    }
    {
        O3kIEWgpHxq = 592 - 592;
        while (O3kIEWgpHxq <= sl5NzSuDmyG - (462 - 461)) {
            {
                j = 0;
                while (j <= y3 - 1) {
                    int F89Id3 = 0;
                    {
                        int fWzJoC = 0;
                        while (fWzJoC <= x2) {
                            F89Id3 = F89Id3 +WqiQKvLeD[O3kIEWgpHxq][fWzJoC] * b[fWzJoC][j];
                            fWzJoC++;
                        }
                    }
                    c[O3kIEWgpHxq][j] = F89Id3;
                    j = j + 1;
                }
            }
            O3kIEWgpHxq++;
        }
    }
    {
        O3kIEWgpHxq = 0;
        while (O3kIEWgpHxq <= RCuzrDS8NW -1) {
            j = 0;
            for (; j <= SDiWCrJP -1;) {
                if (j == 0)
                    printf ("%d", c[O3kIEWgpHxq][j]);
                else
                    printf (" %d", c[O3kIEWgpHxq][j]);
                j = j + 1;
            }
            O3kIEWgpHxq++;
        }
    }
}

