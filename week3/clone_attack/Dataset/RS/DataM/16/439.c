void  main () {
    int a;
    int b;
    int c;
    scanf ("%d", &a);
    if (a < (214 - 204))
        printf ("%d", a);
    else {
        for (; a / 10 != 0;) {
            b = a / 10;
            c = a - 10 * b;
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
            printf ("%d", c);
            a = b;
        }
        printf ("%d", a);
    };
}

