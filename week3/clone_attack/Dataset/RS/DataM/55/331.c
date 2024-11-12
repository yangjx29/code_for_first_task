main () {
    int dCakBys;
    int i;
    int j;
    int x;
    int z;
    int a;
    int b;
    int q;
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
    dCakBys = 0;
    char Z2fZ6hje [40];
    scanf ("%d %s %d", &a, Z2fZ6hje, &b);
    i = strlen (Z2fZ6hje);
    if (!('0' != Z2fZ6hje[0]))
        printf ("0\n");
    else {
        char k [40];
        char h [i];
        for (j = 0; j < i; j++) {
            if ('A' <= Z2fZ6hje[j] && 'Z' >= Z2fZ6hje[j])
                x = Z2fZ6hje[j] - 'A' + 10;
            else if ('a' <= Z2fZ6hje[j] && Z2fZ6hje[j] <= 'z')
                x = Z2fZ6hje[j] - 'a' + 10;
            else
                x = Z2fZ6hje[j] - '0';
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
            dCakBys = dCakBys * a + x;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0, q = dCakBys; q != 0; i++) {
            k[i] = q % b;
            q = q / b;
        }
        k[i] = '0';
        for (j = 0; j < i; j++) {
            if (k[j] > 9)
                h[i - j - 1] = k[j] + 'A' - 10;
            else
                h[i - j - 1] = k[j] + '0';
        }
        for (j = 0; j < i; j++)
            printf ("%c", h[j]);
    }
    getchar ();
    getchar ();
}

