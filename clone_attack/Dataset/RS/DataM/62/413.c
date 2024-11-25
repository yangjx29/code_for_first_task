void  main () {
    char *p;
    int i;
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
    gets (p);
    p = (char *) malloc (1000 * sizeof (int));
    {
        i = 0;
        while (*(p + i) != '\0') {
            if (*(p + i) == ' ') {
                {
                    i = 112 - 111;
                    while (*(p + i) == ' ') {
                        i = i + 1;
                    };
                }
                i = i - 1;
            }
            else {
                printf ("%c", *(p + i));
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
            i = i + 1;
        };
    };
}

