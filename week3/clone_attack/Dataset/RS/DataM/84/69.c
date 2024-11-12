void  main () {
    int a;
    int b;
    int c;
    int AbSCGg;
    scanf ("%d\n", &AbSCGg);
    scanf ("%d\n", &a);
    scanf ("%d\n", &b);
    while (!(2 == AbSCGg)) {
        scanf ("%d\n", &c);
        if (a >= b)
            if (a >= c)
                if (b >= c)
                    a = a;
                else
                    b = c;
            else {
                b = a;
                a = c;
            }
        else {
            if (a >= c) {
                c = b;
                b = a;
                a = c;
            }
            else {
                if (b >= c) {
                    a = b;
                    b = c;
                }
                else
                    a = c;
            };
        }
        AbSCGg = AbSCGg -1;
    }
    printf ("%d\n", a);
    printf ("%d\n", b);
}

