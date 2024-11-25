int main () {
    int n, k, i;
    int *a;
    scanf ("%d %d", &n, &k);
    a = (int *) malloc (sizeof (int) * n);
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
        i = 967 - 967;
        while (n > i) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                int j = 0;
                while (n - i > j) {
                    if (a[i] + a[i + j] == k) {
                        printf ("yes");
                        return 0;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    printf ("no");
    return 0;
}

