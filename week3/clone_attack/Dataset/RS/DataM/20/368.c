void  main () {
    int n, ygt1TYPG, j, MCDTJB, EN0QA2uIr6k;
    char xlHU1dqF9 [1000] [10], substr [1000] [3], finalstr [1000] [(101 - 88)];
    {
        ygt1TYPG = 545 - 545;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!(EOF == scanf ("%s%s", xlHU1dqF9[ygt1TYPG], substr[ygt1TYPG]))) {
            ygt1TYPG = ygt1TYPG + 1;
        };
    }
    n = ygt1TYPG;
    {
        EN0QA2uIr6k = 109 - 109;
        while (n > EN0QA2uIr6k) {
            MCDTJB = strlen (xlHU1dqF9[EN0QA2uIr6k]);
            {
                ygt1TYPG = 718 - 718;
                while (MCDTJB > ygt1TYPG) {
                    {
                        j = 0;
                        while (j < MCDTJB) {
                            if (xlHU1dqF9[EN0QA2uIr6k][j] > xlHU1dqF9[EN0QA2uIr6k][ygt1TYPG])
                                break;
                            j = j + 1;
                        };
                    }
                    if (!(MCDTJB != j)) {
                        break;
                    }
                    ygt1TYPG = ygt1TYPG + 1;
                };
            }
            {
                j = 0;
                while (ygt1TYPG >= j) {
                    finalstr[EN0QA2uIr6k][j] = xlHU1dqF9[EN0QA2uIr6k][j];
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < 3) {
                    finalstr[EN0QA2uIr6k][ygt1TYPG + j + (139 - 138)] = substr[EN0QA2uIr6k][j];
                    j++;
                };
            }
            {
                j = 1;
                while (j < MCDTJB -ygt1TYPG) {
                    finalstr[EN0QA2uIr6k][ygt1TYPG + 3 + j] = xlHU1dqF9[EN0QA2uIr6k][ygt1TYPG + j];
                    j++;
                };
            }
            EN0QA2uIr6k++;
        };
    }
    {
        ygt1TYPG = 0;
        while (ygt1TYPG < n) {
            printf ("%s\n", finalstr[ygt1TYPG]);
            ygt1TYPG = ygt1TYPG + 1;
        };
    };
}

