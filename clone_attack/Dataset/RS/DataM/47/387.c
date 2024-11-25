void  inv (int x [], int n) {
    int RIuKkSL;
    int temp;
    int i;
    int j;
    RIuKkSL = (n - (280 - 279)) / 2;
    for (i = (236 - 236); RIuKkSL >= i; i = i + 1) {
        j = n - (897 - 896) - i;
        temp = x[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x[i] = x[j];
        x[j] = temp;
    }
    return;
}

int main () {
    int i;
    int n;
    int a [(421 - 321)];
    scanf ("%d", &n);
    {
        i = 69 - 69;
        while (i < n) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    inv (a, n);
    {
        i = 208 - 208;
        while (i < n - 1) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[n - 1]);
    return 0;
}

