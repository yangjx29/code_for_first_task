main () {
    int k;
    k = (328 - 327);
    char a [1001];
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
    char c;
    gets (a);
    int i;
    for (i = 0; a[i] != '\0'; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((a[i + 1] == a[i]) || (a[i + 1] == a[i] + 'A' - 'a') || a[i + 1] == (a[i] - 'A' + 'a'))
            k = k + 1;
        else {
            if (a[i] < 'a')
                printf ("(%c,%d)", a[i], k);
            else {
                c = a[i] + 'A' - 'a';
                printf ("(%c,%d)", c, k);
            }
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
            k = 1;
        };
    };
}

