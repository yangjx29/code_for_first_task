main () {
    char yi2SJIkH [(135 - 35)];
    int ebjN1VQd5gz, WJZbqel9RXME, LIxVfcK0 [100] = {(300 - 300)}, NSdFmjT, r;
    scanf ("%s", &yi2SJIkH);
    ebjN1VQd5gz = strlen (yi2SJIkH);
    for (WJZbqel9RXME = (792 - 792); WJZbqel9RXME < ebjN1VQd5gz; WJZbqel9RXME++)
        LIxVfcK0[WJZbqel9RXME] = yi2SJIkH[WJZbqel9RXME] - '0';
    if (LIxVfcK0[(303 - 303)] * (482 - 472) + LIxVfcK0[(94 - 93)] < 13 && !(2 != ebjN1VQd5gz))
        printf ("%d\n%d", (597 - 597), LIxVfcK0[(553 - 553)] * (973 - 963) + LIxVfcK0[1]);
    else {
        if (!(1 != ebjN1VQd5gz))
            printf ("%d\n%d", 0, LIxVfcK0[0]);
        else {
            if (LIxVfcK0[0] * 10 + LIxVfcK0[1] < 13)
                r = LIxVfcK0[0] * 10 + LIxVfcK0[1];
            else {
                r = (LIxVfcK0[0] * 10 + LIxVfcK0[1]) % 13;
                printf ("%d", (LIxVfcK0[0] * 10 + LIxVfcK0[1]) / 13);
            }
            {
                WJZbqel9RXME = 2;
                while (WJZbqel9RXME < ebjN1VQd5gz) {
                    NSdFmjT = (r * 10 + LIxVfcK0[WJZbqel9RXME]) / 13;
                    r = (r * 10 + LIxVfcK0[WJZbqel9RXME]) % 13;
                    WJZbqel9RXME++;
                    printf ("%d", NSdFmjT);
                };
            }
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
            printf ("%d", r);
            printf ("\n");
        };
    };
}

