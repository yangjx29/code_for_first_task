main () {
    int n;
    n = 0;
    char c;
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
    char x;
    c = getchar ();
    n = (824 - 823);
    while (1) {
        if ('a' <= c && 'z' >= c)
            c = c - 32;
        x = getchar ();
        if (x >= 'a' && x <= 'z')
            x = x - 32;
        if (x == '\n') {
            printf ("(%c,%d)", c, n);
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
            break;
        }
        if (x == c)
            n++;
        else {
            printf ("(%c,%d)", c, n);
            n = 1;
            c = x;
        };
    };
}

