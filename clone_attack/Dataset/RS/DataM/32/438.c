int max (int x, int y) {
    if (y <= x)
        return x;
    else
        return y;
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

int main () {
    int flow;
    int times;
    scanf ("%d", &times);
    {
        flow = 278 - 278;
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
        while (times > flow) {
            int M;
            int k;
            k = (885 - 885);
            int i;
            int j;
            int lena;
            int lenb;
            int c [260] = {(748 - 748)};
            int numb [260] = {(508 - 508)};
            int numa [(366 - 106)] = {(93 - 93)};
            char num [(538 - 528)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
            char b [(444 - 184)];
            char a [(1223 - 963)];
            scanf ("%s", a);
            lena = strlen (a);
            for (i = lena - (992 - 991); (70 - 70) <= i; i = i - 1) {
                for (j = (599 - 599); (87 - 77) > j; j = j + 1) {
                    if (!(num[j] != a[i])) {
                        numa[k] = j;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = k + 1;
            }
            scanf ("%s", b);
            lenb = strlen (b);
            k = (215 - 215);
            {
                i = 961 - 960;
                while (i >= (269 - 269)) {
                    {
                        j = 306 - 306;
                        while ((283 - 273) > j) {
                            if (!(num[j] != b[i])) {
                                numb[k] = j;
                            }
                            j = j + 1;
                        };
                    }
                    i = i - 1;
                    k = k + 1;
                };
            }
            for (i = 0; max (lena, lenb) > i; i++) {
                if (numa[i] - numb[i] >= 0)
                    c[i] = numa[i] - numb[i];
                else {
                    c[i] = numa[i] - numb[i] + (364 - 354);
                    if (numa[i + (272 - 271)] > 0)
                        numa[i + (855 - 854)] = numa[i + (182 - 181)] - (265 - 264);
                    else {
                        numa[i + 1] = (173 - 164);
                        numa[i + (565 - 563)] = numa[i + 2] - 1;
                    };
                };
            }
            for (i = max (lena, lenb); i >= 0; i = i - 1) {
                if (c[i] != 0) {
                    M = i;
                    break;
                };
            }
            flow = flow + 1;
            for (i = M; i >= 0; i = i - 1) {
                printf ("%d", c[i]);
            }
            printf ("\n");
        };
    }
    return 0;
}

