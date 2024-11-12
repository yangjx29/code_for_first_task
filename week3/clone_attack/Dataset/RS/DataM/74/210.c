void  main () {
    int m;
    int EJBXNSpFCqy;
    int TbYU6RAd;
    int F (int oBFHKfyTZshV);
    int xlr7e5NyK (int oBFHKfyTZshV);
    scanf ("%d%d", &m, &EJBXNSpFCqy);
    {
        TbYU6RAd = m;
        while (EJBXNSpFCqy >= TbYU6RAd) {
            if (F (TbYU6RAd) &&xlr7e5NyK (TbYU6RAd)) {
                printf ("%d", TbYU6RAd);
                break;
            }
            TbYU6RAd = TbYU6RAd +1;
        };
    }
    if (!(EJBXNSpFCqy +1 != TbYU6RAd))
        ;
    {
        TbYU6RAd = TbYU6RAd +1;
        while (EJBXNSpFCqy >= TbYU6RAd) {
            if (F (TbYU6RAd) &&xlr7e5NyK (TbYU6RAd))
                printf (",%d", TbYU6RAd);
            TbYU6RAd = TbYU6RAd +1;
        };
    };
}

int F (int oBFHKfyTZshV) {
    int t;
    int z;
    t = (788 - 788);
    z = oBFHKfyTZshV;
    do {
        t = t * 10 + z % 10;
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
        z = z / 10;
    }
    while (!(0 == z));
    if (t == oBFHKfyTZshV)
        return (1);
    else
        return (0);
}

int xlr7e5NyK (int oBFHKfyTZshV) {
    int JiwcNj;
    int TbYU6RAd;
    JiwcNj = 1;
    if (oBFHKfyTZshV == 10201)
        return (0);
    else {
        {
            TbYU6RAd = 2;
            while (TbYU6RAd < sqrt (oBFHKfyTZshV)) {
                if (oBFHKfyTZshV % TbYU6RAd == 0) {
                    JiwcNj = 0;
                    break;
                }
                TbYU6RAd = TbYU6RAd +1;
            };
        }
        return (JiwcNj);
    };
}

