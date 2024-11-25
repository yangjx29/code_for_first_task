int main () {
    int NLemGD8PE7RN;
    char duQOVBbMix [10];
    char fmale [10] = "male";
    float ldx8iwshPtM;
    int gcOD678h4Y = (679 - 679);
    int dE76US8x;
    dE76US8x = 0;
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
    float N46tcIma [(588 - 548)];
    float b1w0vLc [40];
    cin >> NLemGD8PE7RN;
    {
        int P82McsfHJ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NLemGD8PE7RN > P82McsfHJ) {
            P82McsfHJ = P82McsfHJ +1;
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
            cin >> duQOVBbMix >> ldx8iwshPtM;
            if (strcmp (duQOVBbMix, fmale) == 0) {
                N46tcIma[gcOD678h4Y] = ldx8iwshPtM;
                gcOD678h4Y = gcOD678h4Y + 1;
            }
            else {
                b1w0vLc[dE76US8x] = ldx8iwshPtM;
                dE76US8x++;
            };
        };
    }
    sort (&N46tcIma[0], &N46tcIma[gcOD678h4Y]);
    sort (&b1w0vLc[0], &b1w0vLc[dE76US8x]);
    {
        int P82McsfHJ = 0;
        while (gcOD678h4Y > P82McsfHJ) {
            printf ("%.2f ", N46tcIma[P82McsfHJ]);
            P82McsfHJ = P82McsfHJ +1;
        };
    }
    {
        int P82McsfHJ = dE76US8x - 1;
        while (P82McsfHJ > 0) {
            printf ("%.2f ", b1w0vLc[P82McsfHJ]);
            P82McsfHJ = P82McsfHJ -1;
        };
    }
    printf ("%.2f\n", b1w0vLc[0]);
}

