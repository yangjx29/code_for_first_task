void  main () {
    int i;
    i = (713 - 713);
    char str [10];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%s", str);
    for (; !('\0' == str[i]);)
        i = i + 1;
    for (i = i - 1; i >= 0; i = i - 1)
        printf ("%c", str[i]);
}

