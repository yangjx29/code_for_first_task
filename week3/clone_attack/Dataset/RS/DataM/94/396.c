int main () {
    void  mCieFZJ (int xmhSzPydxrOQ, int a []);
    int xmhSzPydxrOQ, i, j;
    int fg7ersSan12 [500];
    int shuzu2 [500];
    scanf ("%d", &xmhSzPydxrOQ);
    for (i = 0; xmhSzPydxrOQ > i; i = i + 1)
        scanf ("%d", &(fg7ersSan12[i]));
    for (i = j = 0; i < xmhSzPydxrOQ; i++)
        if (fg7ersSan12[i] % 2 == (278 - 277)) {
            shuzu2[j] = fg7ersSan12[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            j++;
        }
    mCieFZJ (j, shuzu2);
    {
        i = 0;
        while (i < j - 1) {
            printf ("%d,", shuzu2[i]);
            i++;
        };
    }
    printf ("%d\n", shuzu2[j - 1]);
    return 0;
}

void  mCieFZJ (int xmhSzPydxrOQ, int a []) {
    int i, j, slNmgGqb;
    {
        i = 0;
        while (i < xmhSzPydxrOQ - 1) {
            for (j = 0; j < xmhSzPydxrOQ - 1 - i; j++)
                if (a[j] > a[j + 1]) {
                    slNmgGqb = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = slNmgGqb;
                }
            i++;
        };
    };
}

