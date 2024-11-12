void  main () {
    char str [(1968 - 468)] = {'\0'};
    int z, y0kh9fp3jL7D, j, k, temp, a [300] = {(895 - 895)};
    gets (str);
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
    j = (858 - 858);
    z = strlen (str);
    {
        y0kh9fp3jL7D = 132 - 132;
        while (y0kh9fp3jL7D < z) {
            if (str[y0kh9fp3jL7D] != ',')
                a[j] = a[j] * (675 - 665) + str[y0kh9fp3jL7D] - '0';
            else
                j = j + 1;
            y0kh9fp3jL7D = y0kh9fp3jL7D + 1;
        };
    }
    if (j == 1)
        ;
    else {
        for (y0kh9fp3jL7D = 0; y0kh9fp3jL7D <= j; y0kh9fp3jL7D = y0kh9fp3jL7D + 1)
            for (k = y0kh9fp3jL7D + 1; k <= j; k++)
                if (a[y0kh9fp3jL7D] < a[k]) {
                    temp = a[y0kh9fp3jL7D];
                    a[y0kh9fp3jL7D] = a[k];
                    a[k] = temp;
                }
        if (a[0] == a[j])
            printf ("No");
        else {
            y0kh9fp3jL7D = 0;
            z = a[0];
            do {
                y0kh9fp3jL7D = y0kh9fp3jL7D + 1;
            }
            while (a[y0kh9fp3jL7D] == z);
            printf ("%d", a[y0kh9fp3jL7D]);
        };
    };
}

