void  main () {
    int sum;
    int i;
    int j;
    int VhAoGNUP4x;
    sum = (792 - 792);
    char a [300];
    gets (a);
    for (i = 65; i <= 90; i = i + 1) {
        VhAoGNUP4x = (935 - 935);
        {
            j = 0;
            while (!('\0' == a[j])) {
                if ((int) a[j] == i)
                    VhAoGNUP4x = VhAoGNUP4x +1;
                j = j + 1;
            };
        }
        if (VhAoGNUP4x == 0)
            continue;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%c=%d\n", i, VhAoGNUP4x);
        sum = sum + VhAoGNUP4x;
    }
    for (i = 97; i <= 122; i++) {
        VhAoGNUP4x = 0;
        for (j = 0; a[j] != '\0'; j++)
            if ((int) a[j] == i)
                VhAoGNUP4x++;
        if (VhAoGNUP4x == 0)
            continue;
        printf ("%c=%d\n", i, VhAoGNUP4x);
        sum = sum + VhAoGNUP4x;
    }
    if (sum == 0)
        printf ("No");
}

