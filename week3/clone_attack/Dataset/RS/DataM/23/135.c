void  main () {
    char c [100];
    void  inv (char rzOCTaEb []);
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
    gets (c);
    inv (c);
}

void  inv (char rzOCTaEb []) {
    char *p;
    char *q;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    k = strlen (rzOCTaEb);
    for (p = rzOCTaEb + k - (524 - 523); p >= rzOCTaEb; p = p - 1)
        if (*p == ' ') {
            for (q = p + 1; *q != ' ' && *q != '\0'; q = q + 1)
                printf ("%c", *q);
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
            printf (" ");
        }
    for (p = rzOCTaEb; *p != ' ' && *p != '\0'; p = p + 1)
        printf ("%c", *p);
}

