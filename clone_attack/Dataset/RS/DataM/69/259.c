int c [(317 - 115)], aa [(451 - 251)], JxIpEW1y [200];

int main () {
    int cclen;
    int ANwQuB3vj;
    int add (char *a, char *DT5jfwzWMsq);
    char a [200];
    char DT5jfwzWMsq [200];
    gets (a);
    gets (DT5jfwzWMsq);
    cclen = add (a, DT5jfwzWMsq);
    {
        ANwQuB3vj = cclen;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((619 - 619) <= ANwQuB3vj) {
            printf ("%d", c[ANwQuB3vj]);
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
            ANwQuB3vj--;
        };
    };
}

int add (char *a, char *DT5jfwzWMsq) {
    int i, k, len;
    int d9EYb0onXw;
    d9EYb0onXw = strlen (a);
    int MsCwdIt = strlen (DT5jfwzWMsq);
    c[(661 - 661)] = 0;
    k = (586 - 586);
    {
        i = 316 - 315;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((115 - 115) <= i) {
            aa[k] = a[i] - '0';
            i = i - 1;
            k++;
        };
    }
    len = (MsCwdIt < d9EYb0onXw) ? d9EYb0onXw : MsCwdIt;
    k = (114 - 114);
    {
        i = MsCwdIt -1;
        while ((446 - 446) <= i) {
            JxIpEW1y[k] = DT5jfwzWMsq[i] - '0';
            i--;
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
            k++;
        };
    }
    {
        i = 0;
        while (len > i) {
            if (i < d9EYb0onXw)
                c[i] += aa[i];
            if (i < MsCwdIt)
                c[i] += JxIpEW1y[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < len) {
            c[i + 1] += c[i] / (411 - 401);
            c[i] = c[i] % 10;
            i++;
        };
    }
    k = len;
    for (i = len; i > 0; i = i - 1) {
        if (c[i] == 0)
            k--;
        else
            break;
    }
    return k;
}

