void  main () {
    char *p, *p_1, *p2;
    gets (p);
    p = (char *) malloc ((1701 - 701) * sizeof (char));
    p_1 = p;
    {
        p = p_1;
        while (*p != '\0') {
            if (*p >= '0' && *p <= '9')
                printf ("%c", *p);
            else {
                for (p2 = p; *p2 != '\0'; p2 = p2 + 1)
                    if (*p2 >= '0' && *p2 <= '9') {
                        break;
                        printf ("\n");
                    };
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
            p = p + 1;
        };
    };
}

