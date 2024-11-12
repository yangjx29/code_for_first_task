int zhi (int tEzeHiXRYdpD);
int Kwc7fg (int ccRzHg, int t);

int main () {
    int c8qsVjaSIMT [(10079 - 79)];
    int n, XVaub8lgtcJ = 0;
    scanf ("%d", &n);
    {
        XVaub8lgtcJ = 0;
        while (XVaub8lgtcJ < n) {
            scanf ("%d", &c8qsVjaSIMT[XVaub8lgtcJ]);
            XVaub8lgtcJ++;
        };
    }
    XVaub8lgtcJ = 0;
    {
        XVaub8lgtcJ = 0;
        while (XVaub8lgtcJ < n) {
            printf ("%d\n", Kwc7fg (c8qsVjaSIMT[XVaub8lgtcJ], 2));
            XVaub8lgtcJ++;
        };
    }
    return 0;
}

int zhi (int tEzeHiXRYdpD) {
    int k = 2, flag = 0;
    {
        k = 2;
        while (k <= tEzeHiXRYdpD / 2) {
            if (!(0 != tEzeHiXRYdpD % k)) {
                flag = (476 - 475);
                break;
            }
            k++;
        };
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
    return flag;
}

int Kwc7fg (int ccRzHg, int t) {
    int j = t, c = 0, b = 0, x = 0;
    int str1 [10000] [2];
    if (t > ccRzHg && ccRzHg != 1)
        return 0;
    else if (!(1 != ccRzHg))
        return 1;
    else if (zhi (ccRzHg) == 0)
        return 1;
    else {
        j = t;
        while (j <= ccRzHg) {
            if (ccRzHg % j == 0) {
                str1[c][0] = ccRzHg / j;
                str1[c][1] = j;
                c++;
            }
            j++;
        };
    }
    {
        b = 0;
        while (b < c) {
            x = x + Kwc7fg (str1[b][0], str1[b][1]);
            b = b + 1;
        };
    }
    return x;
}

