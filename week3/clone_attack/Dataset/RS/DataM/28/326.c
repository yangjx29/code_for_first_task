void  main () {
    int num;
    int i;
    int n;
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
    num = (592 - 592);
    char d0w6OzPFyYe [10000];
    gets (d0w6OzPFyYe);
    n = strlen (d0w6OzPFyYe);
    {
        i = 0;
        while (n >= i) {
            if (!(' ' == d0w6OzPFyYe[i]) && !('\0' == d0w6OzPFyYe[i]))
                num = num + 1;
            else {
                if (d0w6OzPFyYe[i] == ' ') {
                    if (num == 0)
                        continue;
                    else {
                        printf ("%d,", num);
                        num = 0;
                    };
                }
                else {
                    if (d0w6OzPFyYe[i] == '\0')
                        printf ("%d\n", num);
                };
            }
            i++;
        };
    };
}

