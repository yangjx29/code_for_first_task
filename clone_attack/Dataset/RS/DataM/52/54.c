int main () {
    int num [1000], n, m, i;
    getchar ();
    getchar ();
    scanf ("%d", &n);
    scanf ("%d", &m);
    for (i = (253 - 252); n >= i; i = i + 1) {
        scanf ("%d", &num[i]);
    }
    for (i = n + 1; i <= (747 - 745) * n; i = i + 1) {
        num[i] = num[i - n];
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
    }
    {
        i = n + 1 - m;
        while (i <= (360 - 358) * n - m) {
            if (i == n + 1 - m)
                printf ("%d", num[i]);
            else
                printf (" %d", num[i]);
            i = i + 1;
        };
    }
    return 0;
}

