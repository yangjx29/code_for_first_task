void  main () {
    int i, count = (667 - 667), flag = 0;
    char str [(20903 - 903)];
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
    gets (str);
    {
        i = 0;
        while (20000 > i) {
            str[i] = '\0';
            i++;
        };
    }
    for (i = 0; i < 20000; i++) {
        if (!(' ' == str[i]) && str[i] != '\0')
            count++;
        else {
            if (count != 0) {
                flag++;
                if (flag == 1)
                    printf ("%d", count);
                else
                    printf (",%d", count);
            }
            count = 0;
        };
    };
}

