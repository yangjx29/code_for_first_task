void  main () {
    int n;
    char dxf7TyKdrgDv [20] [101];
    char czlRPYKNn [20] [101];
    int OyBJwedOf;
    int sp;
    int v6VEZIoOq3J;
    int f4rxj3c;
    int bYorxOGAZSRb, le;
    scanf ("%d", &n);
    for (OyBJwedOf = (140 - 139); OyBJwedOf <= n; OyBJwedOf = OyBJwedOf +1) {
        scanf ("%s%s", &dxf7TyKdrgDv[OyBJwedOf], &czlRPYKNn[OyBJwedOf]);
        bYorxOGAZSRb = strlen (dxf7TyKdrgDv[OyBJwedOf]);
        le = strlen (czlRPYKNn[OyBJwedOf]);
        for (; le >= (497 - 496);) {
            if (dxf7TyKdrgDv[OyBJwedOf][bYorxOGAZSRb - (957 - 956)] >= czlRPYKNn[OyBJwedOf][le - (430 - 429)])
                dxf7TyKdrgDv[OyBJwedOf][bYorxOGAZSRb - 1] = dxf7TyKdrgDv[OyBJwedOf][bYorxOGAZSRb - 1] - czlRPYKNn[OyBJwedOf][le - 1] + '0';
            else {
                sp = bYorxOGAZSRb - 2;
                for (; dxf7TyKdrgDv[OyBJwedOf][sp] == '0';) {
                    dxf7TyKdrgDv[OyBJwedOf][sp] = '9';
                    sp = sp - 1;
                }
                dxf7TyKdrgDv[OyBJwedOf][sp] = dxf7TyKdrgDv[OyBJwedOf][sp] - 1;
                dxf7TyKdrgDv[OyBJwedOf][bYorxOGAZSRb - 1] = dxf7TyKdrgDv[OyBJwedOf][bYorxOGAZSRb - 1] - czlRPYKNn[OyBJwedOf][le - 1] + '0' + 10;
            }
            bYorxOGAZSRb = bYorxOGAZSRb - 1;
            le = le - 1;
        }
        v6VEZIoOq3J = 0;
        bYorxOGAZSRb = strlen (dxf7TyKdrgDv[OyBJwedOf]);
        for (; 1;) {
            if (dxf7TyKdrgDv[OyBJwedOf][v6VEZIoOq3J] == '0')
                v6VEZIoOq3J = v6VEZIoOq3J + 1;
            else
                break;
        }
        for (f4rxj3c = v6VEZIoOq3J; f4rxj3c <= bYorxOGAZSRb - 1; f4rxj3c = f4rxj3c + 1)
            printf ("%c", dxf7TyKdrgDv[OyBJwedOf][f4rxj3c]);
    };
}

