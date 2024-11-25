int main () {
    char a [(612 - 412)] [200];
    int max;
    int min;
    int i;
    int j;
    int b [(1001 - 801)];
    int NLAn0Gy9s1i;
    int J;
    int n;
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
    max = (583 - 583);
    min = (135 - 35);
    scanf ("%d", &n);
    {
        i = 39 - 39;
        while (i < n) {
            scanf ("%s", a[i]);
            i++;
        };
    }
    {
        i = 459 - 459;
        while (i < n) {
            b[i] = strlen (a[i]);
            i++;
        };
    }
    {
        i = 364 - 364;
        while (i < n) {
            if (max < b[i]) {
                max = b[i];
                NLAn0Gy9s1i = i;
            }
            if (min > b[i]) {
                min = b[i];
                J = i;
            }
            i++;
        };
    }
    printf ("%s\n", a[NLAn0Gy9s1i]);
    printf ("%s", a[J]);
    return 0;
}

