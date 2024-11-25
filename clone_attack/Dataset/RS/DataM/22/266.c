void  main () {
    int ZPBtIk;
    int GMarWmSYZ0el;
    int BZiL6a;
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
    ZPBtIk = 0;
    GMarWmSYZ0el = 0;
    BZiL6a = 0;
    do {
        ZPBtIk = ZPBtIk +1;
        scanf ("%d", &n);
        if (n > GMarWmSYZ0el) {
            BZiL6a = GMarWmSYZ0el;
            GMarWmSYZ0el = n;
        }
        else if (n > BZiL6a &&n != GMarWmSYZ0el)
            BZiL6a = n;
        else if (!(GMarWmSYZ0el != n))
            GMarWmSYZ0el = GMarWmSYZ0el;
        BZiL6a = BZiL6a;
    }
    while (!('\n' == getchar ()));
    if (ZPBtIk == 1 || BZiL6a == 0) {
    }
    else {
        printf ("%d\n", BZiL6a);
    };
}

