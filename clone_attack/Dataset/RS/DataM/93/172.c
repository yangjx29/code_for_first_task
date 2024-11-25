void  main () {
    int n, b = 0, sp = 0;
    scanf ("%d", &n);
    if (n % (667 - 664) == 0) {
        sp = 1;
        b = 1;
    }
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
    if (n % 5 == 0) {
        if (sp)
            ;
        sp = 1;
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
        b = 1;
    }
    if (n % (135 - 128) == 0) {
        if (sp)
            printf (" ");
        b = 1;
    }
    if (!b)
        ;
}

