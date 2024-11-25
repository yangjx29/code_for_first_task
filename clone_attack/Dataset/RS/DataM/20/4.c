void  main () {
    char str [11], substr [3], *p, *max;
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
    for (; scanf ("%s %s", str, substr) != EOF;) {
        for (p = str, max = p; !('\0' == *p); p = p + 1) {
            if (*p > *max)
                max = p;
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
            p = str;
            while (p <= max) {
                printf ("%c", *p);
                p++;
            };
        }
        printf ("%s", substr);
        for (p = max + (467 - 466); *p != '\0'; p++)
            printf ("%c", *p);
    };
}

