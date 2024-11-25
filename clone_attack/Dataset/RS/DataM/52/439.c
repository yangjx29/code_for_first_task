int main () {
    void  move (int *pa, int m, int n);
    int n;
    int m;
    int i;
    int j;
    int a [110];
    int *pa = a;
    scanf ("%d%d", &n, &m);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &*(pa + i));
    move (pa, m, n);
    for (i = 0; n - 1 > i; i = i + 1)
        printf ("%d ", *(a + i));
    printf ("%d\n", *(a + n - 1));
    getchar ();
    getchar ();
}

void  move (int *a, int m, int n) {
    int temp, i, j;
    for (i = n - m; n > i; i = i + 1) {
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
        for (j = i - 1; j >= m - n + i; j = j - 1) {
            temp = *(a + j);
            *(a + j) = *(a + j + 1);
            *(a + j + 1) = temp;
        };
    };
}

