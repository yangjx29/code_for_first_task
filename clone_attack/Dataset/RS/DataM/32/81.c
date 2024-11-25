void  main () {
    char TUBqezgYrx [100] [100], Pl4iOB2SPmb [100] [100], slXLt5 [100] [100];
    int JI7KRrZA;
    int j7om4bcLK;
    int j;
    int v81f6EMPR;
    int h4iAYhqpRkx;
    int xLAswK3kYtMq [100];
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
    int c250iV [100];
    scanf ("%d\n", &JI7KRrZA);
    for (j7om4bcLK = 0; JI7KRrZA > j7om4bcLK; j7om4bcLK++) {
        scanf ("%s", TUBqezgYrx[j7om4bcLK]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", Pl4iOB2SPmb[j7om4bcLK]);
    }
    for (j7om4bcLK = 0; j7om4bcLK < JI7KRrZA; j7om4bcLK++) {
        xLAswK3kYtMq[j7om4bcLK] = strlen (TUBqezgYrx[j7om4bcLK]);
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
        c250iV[j7om4bcLK] = strlen (Pl4iOB2SPmb[j7om4bcLK]);
    }
    for (j7om4bcLK = 0; j7om4bcLK < JI7KRrZA; j7om4bcLK++) {
        for (j = xLAswK3kYtMq[j7om4bcLK] - 1, v81f6EMPR = c250iV[j7om4bcLK] - 1; j > (xLAswK3kYtMq[j7om4bcLK] - c250iV[j7om4bcLK]), 0 <= v81f6EMPR; j--, v81f6EMPR--) {
            if (TUBqezgYrx[j7om4bcLK][j] < Pl4iOB2SPmb[j7om4bcLK][v81f6EMPR]) {
                slXLt5[j7om4bcLK][j] = 58 + TUBqezgYrx[j7om4bcLK][j] - Pl4iOB2SPmb[j7om4bcLK][v81f6EMPR];
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
                TUBqezgYrx[j7om4bcLK][j - 1] = TUBqezgYrx[j7om4bcLK][j - 1] - 1;
            }
            else
                slXLt5[j7om4bcLK][j] = TUBqezgYrx[j7om4bcLK][j] - Pl4iOB2SPmb[j7om4bcLK][v81f6EMPR] + 48;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (j = 0; j < xLAswK3kYtMq[j7om4bcLK] - c250iV[j7om4bcLK]; j++)
            slXLt5[j7om4bcLK][j] = TUBqezgYrx[j7om4bcLK][j];
    }
    for (h4iAYhqpRkx = 0; h4iAYhqpRkx < JI7KRrZA; h4iAYhqpRkx++)
        printf ("%s\n", slXLt5[h4iAYhqpRkx]);
}

