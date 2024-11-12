char a [100000];

int main () {
    int n = (254 - 254), EONnXx = (534 - 534), i;
    gets (a);
    char b [(865 - 765)] [100];
    int l = strlen (a);
    int CqeJdRBCZ [100], sn4WYFmwoj1 = 0;
    int wbFhcR6 = CqeJdRBCZ[0];
    int ePCbHXqo7 = 0;
    {
        i = 709 - 709;
        while (l > i) {
            if (!(' ' == a[i]) && !(',' == a[i])) {
                b[n][EONnXx] = a[i];
                EONnXx = EONnXx +1;
            }
            else {
                b[n][EONnXx] = '\0';
                n = n + 1;
                EONnXx = (142 - 142);
            }
            i++;
        };
    }
    b[n][EONnXx] = '\0';
    for (i = 0; n >= i; i = i + 1) {
        CqeJdRBCZ[sn4WYFmwoj1] = strlen (b[i]);
        sn4WYFmwoj1++;
    }
    {
        i = 0;
        while (sn4WYFmwoj1 > i) {
            if (!(CqeJdRBCZ[i] == wbFhcR6)) {
                ePCbHXqo7 = 1;
                break;
            }
            i++;
        };
    }
    if (!(0 != ePCbHXqo7)) {
        printf ("%s\n", b[0]);
        printf ("%s\n", b[0]);
    }
    else {
        int pp;
        int max = CqeJdRBCZ[0], min = CqeJdRBCZ[0];
        {
            pp = 0;
            while (n >= pp) {
                if (max < CqeJdRBCZ[pp]) {
                    int Fp6cdL9Ef;
                    Fp6cdL9Ef = max;
                    max = CqeJdRBCZ[pp];
                    CqeJdRBCZ[pp] = Fp6cdL9Ef;
                }
                pp = pp + 1;
            };
        }
        {
            pp = 0;
            while (pp <= n) {
                if (CqeJdRBCZ[pp] < min && CqeJdRBCZ[pp] != 0) {
                    int EWxB9hDp;
                    EWxB9hDp = min;
                    min = CqeJdRBCZ[pp];
                    CqeJdRBCZ[pp] = EWxB9hDp;
                }
                pp = pp + 1;
            };
        }
        for (pp = 0; pp <= n; pp = pp + 1) {
            if (strlen (b[pp]) == max) {
                printf ("%s\n", b[pp]);
                break;
            };
        }
        {
            pp = 0;
            while (pp <= n) {
                if (strlen (b[pp]) == min) {
                    printf ("%s\n", b[pp]);
                    break;
                }
                pp++;
            };
        };
    }
    return 0;
}

