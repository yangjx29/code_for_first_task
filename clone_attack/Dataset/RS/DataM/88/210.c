char c [30];

void  main () {
    gets (c);
    char *p;
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
    p = c;
    for (; !('\0' == *p);) {
        while ('0' > *p || *p > '9') {
            p = p + 1;
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
            if (*p == '\0')
                break;
        }
        printf ("%c", *p);
        p += 1;
        if (*p < '0' || *p > '9')
            printf ("\n");
    };
}

