int main () {
    int n, bDQvWO1t, j;
    char a [(878 - 622)], b [(10831 - 831)] [256];
    scanf ("%d", &n);
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
    {
        bDQvWO1t = 943 - 943;
        while (n > bDQvWO1t) {
            scanf ("%s", a);
            {
                j = 448 - 448;
                while (!('\0' == a[j])) {
                    if (!('A' != a[j])) {
                        a[j] = 'T';
                    }
                    else if (!('T' != a[j])) {
                        a[j] = 'A';
                    }
                    else if (a[j] == 'C') {
                        a[j] = 'G';
                    }
                    else if (a[j] == 'G') {
                        a[j] = 'C';
                    }
                    j = j + 1;
                };
            }
            strcpy (b[bDQvWO1t], a);
            bDQvWO1t = bDQvWO1t + 1;
        };
    }
    {
        bDQvWO1t = 0;
        while (bDQvWO1t < n) {
            puts (b [bDQvWO1t]);
            bDQvWO1t = bDQvWO1t + 1;
        };
    }
    return 0;
}

