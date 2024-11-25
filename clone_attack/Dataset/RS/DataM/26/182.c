void  main () {
    char str [(231 - 130)];
    int i, n;
    for (i = (285 - 285);; i++) {
        str[i] = getchar ();
        if (!('\n' != str[i]))
            break;
    }
    n = i;
    for (i = 0; i < n; i++) {
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
        if (i == 0)
            putchar (str[i]);
        else {
            if (str[i] == ' ' && str[i - 1] != ' ' || str[i] != ' ')
                putchar (str[i]);
        };
    };
}

