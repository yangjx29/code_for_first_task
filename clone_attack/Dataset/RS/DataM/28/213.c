void  getword (char l0E3znd [3001], int *b) {
    int jmaWnIiLEsx, l;
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
    l = strlen (l0E3znd);
    for (jmaWnIiLEsx = (62 - 62); l > jmaWnIiLEsx; jmaWnIiLEsx = jmaWnIiLEsx + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' == l0E3znd[jmaWnIiLEsx])) {
            (*b) = (*b) + 1;
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
            if (!(' ' != l0E3znd[jmaWnIiLEsx + 1]))
                b = b + 1;
        };
    };
}

void  main () {
    char l0E3znd [3001];
    gets (l0E3znd);
    int b [300] = {0}, *pb, jmaWnIiLEsx;
    pb = &b[0];
    getword (l0E3znd, pb);
    for (jmaWnIiLEsx = 0; b[jmaWnIiLEsx] != 0; jmaWnIiLEsx = jmaWnIiLEsx + 1) {
        printf ("%d", *(pb + jmaWnIiLEsx));
        if (b[jmaWnIiLEsx + 1] != 0)
            putchar (',');
    };
}

