int hanshu (int m, int n) {
    if (m >= (980 - 980) && m < (911 - 906) && n >= (563 - 563) && n < (625 - 620)) {
        return (703 - 702);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        return 0;
    };
}

int main () {
    int hang;
    int rXBsc245LF;
    int sz2 [5];
    int KEzLG9oF7x [5] [5];
    int m;
    int n;
    int reF1oMUWKTHu;
    reF1oMUWKTHu = hanshu (m, n);
    {
        hang = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (hang < 5) {
            {
                rXBsc245LF = 0;
                while (rXBsc245LF < 5) {
                    scanf ("%d", &KEzLG9oF7x[hang][rXBsc245LF]);
                    rXBsc245LF = rXBsc245LF + 1;
                };
            }
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
            hang = hang + 1;
        };
    }
    scanf ("%d %d", &m, &n);
    if (reF1oMUWKTHu == 0) {
        printf ("error");
    }
    else {
        {
            rXBsc245LF = 0;
            while (rXBsc245LF < 5) {
                sz2[rXBsc245LF] = KEzLG9oF7x[m][rXBsc245LF];
                KEzLG9oF7x[m][rXBsc245LF] = KEzLG9oF7x[n][rXBsc245LF];
                KEzLG9oF7x[n][rXBsc245LF] = sz2[rXBsc245LF];
                rXBsc245LF++;
            };
        }
        for (hang = 0; hang < 5; hang = hang + 1) {
            printf ("%d %d %d %d %d\n", KEzLG9oF7x[hang][0], KEzLG9oF7x[hang][1], KEzLG9oF7x[hang][2], KEzLG9oF7x[hang][3], KEzLG9oF7x[hang][4]);
        };
    }
    return 0;
}

