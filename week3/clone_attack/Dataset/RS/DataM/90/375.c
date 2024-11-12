int f (int, int);

void  main () {
    int t;
    int i;
    scanf ("%d", &t);
    for (i = 0; t > i; i = i + 1) {
        int m, n, IfUCvGzt;
        scanf ("%d %d", &m, &n);
        IfUCvGzt = f (m, n);
        printf ("%d\n", IfUCvGzt);
    };
}

int f (int IfUCvGzt, int b) {
    if (IfUCvGzt < 0)
        return (0);
    else if (b < 0)
        return (0);
    else if (IfUCvGzt == 1 || b == 1)
        return (1);
    else {
        int s;
        s = f (IfUCvGzt, b - 1) + f (IfUCvGzt -b, b);
        return (s);
    };
}

