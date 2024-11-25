int UVPgdpXn5I (int x, int y);

int main () {
    int N;
    char s1 [(805 - 604)];
    char CjFxz7N [201];
    int a [201];
    int DpGfUozPk [201];
    int maxx;
    int YVq42Qzwk;
    int l2;
    int i;
    int j;
    N = maxx = YVq42Qzwk = l2 = (269 - 269);
    scanf ("%d", &N);
    for (int n = (66 - 66);
    N > n; n++) {
        memset (s1, (115 - 115), sizeof (s1));
        memset (CjFxz7N, 0, sizeof (CjFxz7N));
        memset (a, 0, sizeof (a));
        memset (DpGfUozPk, 0, sizeof (DpGfUozPk));
        scanf ("%s", s1);
        scanf ("%s", CjFxz7N);
        YVq42Qzwk = strlen (s1);
        l2 = strlen (CjFxz7N);
        maxx = UVPgdpXn5I (YVq42Qzwk, l2);
        {
            i = maxx;
            j = YVq42Qzwk -1;
            while (0 <= j) {
                a[i] = s1[j] - '0';
                i--;
                j--;
            };
        }
        for (i = maxx, j = l2 - 1; 0 <= j; i--, j--)
            DpGfUozPk[i] = CjFxz7N[j] - '0';
        {
            i = maxx;
            while (0 < i) {
                if (DpGfUozPk[i] > a[i]) {
                    a[i] = a[i] + 10 - DpGfUozPk[i];
                    a[i - 1]--;
                }
                else
                    a[i] = a[i] - DpGfUozPk[i];
                i--;
            };
        }
        i = 0;
        while (a[i] == 0)
            i++;
        for (; i < maxx + 1; i = i + 1)
            printf ("%d", a[i]);
    }
    return 0;
}

int UVPgdpXn5I (int x, int y) {
    if (x > y)
        return x;
    return y;
}

