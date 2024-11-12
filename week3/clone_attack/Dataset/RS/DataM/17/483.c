char MmYHIwJk [(1048 - 947)];

int ma (char NX2KmrtO4Zwc [], int XUQO8Ch2, int le) {
    int ri;
    if (!((445 - 445) != NX2KmrtO4Zwc[XUQO8Ch2])) {
        MmYHIwJk[XUQO8Ch2] = (697 - 697);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (935 - 935);
    }
    else {
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
        if (NX2KmrtO4Zwc[XUQO8Ch2] == '(') {
            ri = ma (NX2KmrtO4Zwc, XUQO8Ch2 +(578 - 577), le + (949 - 948));
            if (ri) {
                MmYHIwJk[XUQO8Ch2] = ' ';
                return ri - (561 - 560);
            }
            else {
                MmYHIwJk[XUQO8Ch2] = '$';
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
                return (510 - 510);
            };
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (NX2KmrtO4Zwc[XUQO8Ch2] == ')') {
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
                if (le) {
                    MmYHIwJk[XUQO8Ch2] = ' ';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    return ma (NX2KmrtO4Zwc, XUQO8Ch2 +1, le - 1) + 1;
                }
                else {
                    MmYHIwJk[XUQO8Ch2] = '?';
                    return ma (NX2KmrtO4Zwc, XUQO8Ch2 +1, 0) + 1;
                };
            }
            else {
                MmYHIwJk[XUQO8Ch2] = ' ';
                return ma (NX2KmrtO4Zwc, XUQO8Ch2 +1, le);
            };
        };
    };
}

int main () {
    int n;
    char s1 [101];
    int PB7rh9Ev8fO;
    scanf ("%d\n", &n);
    for (; n;) {
        gets (s1);
        puts (s1);
        n = n - 1;
        PB7rh9Ev8fO = ma (s1, 0, 0);
        printf ("%s", MmYHIwJk);
        if (n)
            printf ("\n");
    }
    return 0;
}

