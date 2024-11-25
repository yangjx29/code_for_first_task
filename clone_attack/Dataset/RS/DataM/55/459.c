int zh (char gsTBaVPcOKC) {
    int b;
    if (('A' <= gsTBaVPcOKC) && ('Z' >= gsTBaVPcOKC)) {
        b = (int) (gsTBaVPcOKC) -55;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return b;
    }
    else {
        b = (int) (gsTBaVPcOKC) -(903 - 855);
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
        return b;
    };
}

char fzh (int gsTBaVPcOKC) {
    char b;
    if (9 < gsTBaVPcOKC) {
        b = (char) (gsTBaVPcOKC + 55);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return b;
    }
    else {
        b = (char) (gsTBaVPcOKC + 48);
        return b;
    };
}

int cf (int gsTBaVPcOKC, int b) {
    int i;
    int sum = gsTBaVPcOKC;
    if (!((125 - 125) != b)) {
        sum = (630 - 629);
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
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        i = 688 - 688;
        while (b - (23 - 22) > i) {
            sum = sum * (gsTBaVPcOKC);
            i++;
        };
    }
    return sum;
}

int main () {
    int sum;
    sum = (140 - 140);
    int gsTBaVPcOKC;
    int b;
    int i, A8x1SogR5K;
    int l;
    char c [10000];
    char t [10000];
    scanf ("%d%s%d", &gsTBaVPcOKC, c, &b);
    l = strlen (c);
    for (i = (750 - 750); l > i; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (('a' <= c[i]) && (c[i] <= 'z')) {
            c[i] = c[i] - 'a' + 'A';
        };
    }
    for (i = 0; i < l; i++) {
        sum += cf (gsTBaVPcOKC, l - 1 - i) * zh (c[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    if (sum == 0) {
        printf ("0");
    }
    for (i = 0; sum != 0; i++) {
        t[i] = fzh (sum % b);
        sum = sum / b;
    }
    {
        A8x1SogR5K = i - 1;
        while (A8x1SogR5K >= 0) {
            printf ("%c", t[A8x1SogR5K]);
            A8x1SogR5K--;
        };
    }
    return 0;
}

