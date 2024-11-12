void  main () {
    int SGnVzK2fIm;
    int b;
    int c;
    int d;
    int i;
    int e;
    int f;
    int g;
    int n;
    int xCIRD05W;
    int m;
    scanf ("%d%d%d", &xCIRD05W, &m, &d);
    e = xCIRD05W / 4;
    f = xCIRD05W / (915 - 815);
    g = xCIRD05W / 400;
    if (!((375 - 374) != m))
        b = 0;
    if (!(2 != m))
        b = (197 - 166);
    if (m == 3)
        b = (642 - 583);
    if (!(4 != m))
        b = 90;
    if (!((183 - 178) != m))
        b = 120;
    if (!(6 != m))
        b = (262 - 111);
    if (!((645 - 638) != m))
        b = 181;
    if (!(8 != m))
        b = 212;
    if (!(9 != m))
        b = 243;
    if (!(10 != m))
        b = 273;
    if (!((196 - 185) != m))
        b = 304;
    if (!(12 != m))
        b = 334;
    SGnVzK2fIm = xCIRD05W - 1 + e + g - f + b + d;
    if (xCIRD05W % 4 == 0 && xCIRD05W % 100 != 0 && (m == 1 || m == 2))
        SGnVzK2fIm = SGnVzK2fIm -1;
    if (xCIRD05W % 400 == 0 && (m == 1 || m == 2))
        SGnVzK2fIm = SGnVzK2fIm -1;
    SGnVzK2fIm = SGnVzK2fIm % 7;
    if (SGnVzK2fIm == 1)
        ;
    if (SGnVzK2fIm == 2)
        printf ("Tue.\n");
    if (SGnVzK2fIm == 3)
        printf ("Wed.\n");
    if (SGnVzK2fIm == 4)
        ;
    if (SGnVzK2fIm == 5)
        ;
    if (SGnVzK2fIm == 6)
        ;
    if (SGnVzK2fIm == 0)
        ;
}

