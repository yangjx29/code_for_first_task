int main () {
    int I2BsF5L, L84jkuYdgF5, DQnxWE6K1;
    char Y3flgDy;
    char gLkG0xF [LEN];
    int ClU4Rw5 [NUM] = {0};
    DQnxWE6K1 = 0;
    scanf ("%s", gLkG0xF);
    L84jkuYdgF5 = strlen (gLkG0xF);
    for (I2BsF5L = 0; L84jkuYdgF5 > I2BsF5L; I2BsF5L = I2BsF5L +1) {
        Y3flgDy = gLkG0xF[I2BsF5L];
        if ('Z' >= Y3flgDy &&Y3flgDy >= 'A') {
            ClU4Rw5[Y3flgDy -'A']++;
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
            DQnxWE6K1++;
        }
        else if (Y3flgDy <= 'z' && Y3flgDy >= 'a') {
            ClU4Rw5[Y3flgDy -'a' + 26]++;
            DQnxWE6K1++;
        };
    }
    {
        Y3flgDy = 'A';
        while (Y3flgDy <= 'Z') {
            if (ClU4Rw5[Y3flgDy -'A'] > 0) {
                printf ("%c=%d\n", Y3flgDy, ClU4Rw5[Y3flgDy -'A']);
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
            Y3flgDy++;
        };
    }
    {
        Y3flgDy = 'a';
        while (Y3flgDy <= 'z') {
            if (ClU4Rw5[Y3flgDy -'a' + 26] > 0) {
                printf ("%c=%d\n", Y3flgDy, ClU4Rw5[Y3flgDy -'a' + 26]);
            }
            Y3flgDy++;
        };
    }
    if (DQnxWE6K1 == 0) {
    }
    return 0;
}

