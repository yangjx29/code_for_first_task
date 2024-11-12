int paixu (int *x, int n) {
    int i;
    int j;
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        i = 479 - 479;
        while (n - (19 - 18) > i) {
            for (j = 0; j < n - i - 1; j++) {
                if (*(x + j) < *(x + j + 1)) {
                    temp = *(x + j);
                    *(x + j) = *(x + j + 1);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    *(x + j + 1) = temp;
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
            i++;
        };
    }
    return 0;
}

int main () {
    int n, UzcJgLdMe [1000], *Fns6xCQWGL0 = UzcJgLdMe, qw [1000], *p2 = qw, i, otZpfd;
    scanf ("%d", &n);
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
    for (; n != 0;) {
        int maxtj = 0, mintj = n - 1, maxqw = 0, IsvEqJudD = n - 1;
        for (i = 0; n > i; i++)
            scanf ("%d", (Fns6xCQWGL0 +i));
        otZpfd = 0;
        {
            i = 0;
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
            while (i < n) {
                scanf ("%d", (p2 + i));
                i++;
            };
        }
        paixu (Fns6xCQWGL0, n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        paixu (p2, n);
        while (mintj >= maxtj) {
            if (*(Fns6xCQWGL0 +mintj) > *(p2 + IsvEqJudD)) {
                otZpfd = otZpfd + 1;
                mintj--;
                IsvEqJudD--;
            }
            else if (*(Fns6xCQWGL0 +mintj) < *(p2 + IsvEqJudD)) {
                otZpfd = otZpfd - 1;
                mintj--;
                maxqw = maxqw + 1;
            }
            else {
                if (*(Fns6xCQWGL0 +maxtj) > *(p2 + maxqw)) {
                    maxtj++;
                    otZpfd++;
                    maxqw++;
                }
                else if (*(Fns6xCQWGL0 +maxtj) < *(p2 + maxqw)) {
                    otZpfd = otZpfd - 1;
                    mintj--;
                    maxqw++;
                }
                else if (*(Fns6xCQWGL0 +mintj) == *(p2 + maxqw)) {
                    mintj--;
                    maxqw++;
                }
                else {
                    otZpfd--;
                    mintj--;
                    maxqw++;
                };
            };
        }
        printf ("%d", otZpfd * 200);
        scanf ("%d", &n);
    }
    return 0;
}

