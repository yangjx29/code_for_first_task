int panduan (char *a, int n) {
    int k;
    int i;
    int j;
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
    k = 0;
    for (i = 0; i < n / 2; i = i + 1) {
        if (!(*(a + n - 1 - i) == *(a + i)))
            k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (k == 1)
        return 0;
    else
        return 1;
}

int main () {
    int i;
    int j;
    int k;
    int l;
    char a [200] [200] = {'\0'};
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
    };
    char LpANDKiS [200] = {'\0'};
    scanf ("%s", LpANDKiS);
    for (i = 2; i < strlen (LpANDKiS); i++) {
        l = strlen (LpANDKiS) - i + 1;
        for (j = 0; j < l; j++) {
            for (k = 0; k < i; k++) {
                *(*(a + j) + k) = *(LpANDKiS +j + k);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (panduan (*(a + j), strlen (*(a + j))) == 1)
                printf ("%s\n", *(a + j));
        };
    }
    return 0;
}

