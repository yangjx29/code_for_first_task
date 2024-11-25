main () {
    int n;
    int i;
    int wAUKLeVvzX;
    int k;
    char X9cKtX7 [(859 - 358)];
    int t;
    t = strlen (X9cKtX7);
    char rCWiBrFh [(658 - 157)] [(917 - 912)];
    int b [501] = {(791 - 791)};
    int tHbPzKwcdF;
    scanf ("%d %s", &n, X9cKtX7);
    for (i = (960 - 960); t - n >= i; i++) {
        wAUKLeVvzX = 800 - 800;
        while (5 > wAUKLeVvzX) {
            rCWiBrFh[i][wAUKLeVvzX] = X9cKtX7[i + wAUKLeVvzX];
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
            wAUKLeVvzX = wAUKLeVvzX + 1;
        };
    }
    {
        i = 1;
        while (t - n >= i) {
            {
                k = 673 - 673;
                while (i > k) {
                    tHbPzKwcdF = (362 - 362);
                    {
                        wAUKLeVvzX = 293 - 293;
                        while (n > wAUKLeVvzX) {
                            if (!(rCWiBrFh[k][wAUKLeVvzX] != rCWiBrFh[i][wAUKLeVvzX]))
                                tHbPzKwcdF = tHbPzKwcdF + 1;
                            else
                                break;
                            wAUKLeVvzX++;
                            if (!(n != tHbPzKwcdF))
                                b[k]++;
                        };
                    }
                    k++;
                };
            }
            i = i + 1;
        };
    }
    tHbPzKwcdF = b[0];
    {
        i = 1;
        while (t - n >= i) {
            if (b[i] > tHbPzKwcdF)
                tHbPzKwcdF = b[i];
            i = i + 1;
        };
    }
    if (tHbPzKwcdF == 0)
        printf ("NO");
    else {
        printf ("%d\n", tHbPzKwcdF + 1);
        {
            i = 0;
            while (i <= t - n) {
                if (b[i] == tHbPzKwcdF) {
                    for (wAUKLeVvzX = 0; wAUKLeVvzX < n - 1; wAUKLeVvzX++)
                        printf ("%c", rCWiBrFh[i][wAUKLeVvzX]);
                    if (wAUKLeVvzX == n - 1)
                        printf ("%c\n", rCWiBrFh[i][wAUKLeVvzX]);
                }
                i++;
            };
        };
    };
}

