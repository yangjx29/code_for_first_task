int main () {
    int ycZrdoiMV4O;
    int min;
    ycZrdoiMV4O = 0;
    min = 1000;
    int A;
    int j3mgRlY7;
    int Z3GahJKmrAsf;
    int uiRY7Uln;
    int SdSgIJX;
    int LGBqV0N;
    int jp8so6Akur0;
    int WRqN1KfDi;
    WRqN1KfDi = 0;
    int sz [8] [8];
    scanf ("%d,%d", &A, &j3mgRlY7);
    for (Z3GahJKmrAsf = 0; A > Z3GahJKmrAsf; Z3GahJKmrAsf++) {
        for (uiRY7Uln = 0; j3mgRlY7 > uiRY7Uln; uiRY7Uln++) {
            scanf ("%d", &(sz[Z3GahJKmrAsf][uiRY7Uln]));
        };
    }
    for (Z3GahJKmrAsf = 0; Z3GahJKmrAsf < A; Z3GahJKmrAsf++) {
        for (uiRY7Uln = 0; j3mgRlY7 > uiRY7Uln; uiRY7Uln++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ycZrdoiMV4O < (sz[Z3GahJKmrAsf][uiRY7Uln])) {
                ycZrdoiMV4O = (sz[Z3GahJKmrAsf][uiRY7Uln]);
                SdSgIJX = uiRY7Uln;
            };
        }
        for (jp8so6Akur0 = 0; A > jp8so6Akur0; jp8so6Akur0++) {
            if ((sz[jp8so6Akur0][SdSgIJX]) < min) {
                min = (sz[jp8so6Akur0][SdSgIJX]);
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
                LGBqV0N = jp8so6Akur0;
            };
        }
        if (ycZrdoiMV4O == min) {
            WRqN1KfDi = WRqN1KfDi +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            printf ("%d+%d", LGBqV0N, SdSgIJX);
        };
    }
    if (WRqN1KfDi == 0) {
        printf ("No");
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
        };
    }
    return 0;
}

