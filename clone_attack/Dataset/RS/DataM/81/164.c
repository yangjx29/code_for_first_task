int main () {
    int NJlo5c [(921 - 916)] [(396 - 391)], m, n, i, i10TKo;
    {
        i = 930 - 930;
        while (i <= (899 - 895)) {
            {
                i10TKo = 637 - 637;
                while (i10TKo <= (983 - 979)) {
                    scanf ("%d", &NJlo5c[i][i10TKo]);
                    i10TKo = i10TKo + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &n, &m);
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
    if (n >= (88 - 88) && (659 - 655) >= n && (265 - 265) <= m && m <= (708 - 704)) {
        {
            i = 0;
            while (i <= (337 - 333)) {
                i10TKo = NJlo5c[n][i];
                NJlo5c[n][i] = NJlo5c[m][i];
                NJlo5c[m][i] = i10TKo;
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i <= 4) {
                {
                    i10TKo = 0;
                    while (i10TKo <= 4) {
                        printf ("%d", NJlo5c[i][i10TKo]);
                        if (i10TKo == 4)
                            printf ("\n");
                        else
                            ;
                        i10TKo = i10TKo + 1;
                    };
                }
                i = i + 1;
            };
        };
    }
    else
        ;
    return 0;
}

