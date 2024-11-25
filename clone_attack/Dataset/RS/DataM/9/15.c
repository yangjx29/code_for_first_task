struct   mouse {
    char CZHgMlo [10];
    int dBrNad;
    struct   mouse *YaSLrsI3J4;
};
struct   mouse *fNt5a8 (int mLhPUBzf) {
    struct   mouse *nBvEydH2;
    struct   mouse *gphXUzg;
    struct   mouse *Nldks7CLq5jM;
    int EkVqFUwWi;
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
    {
        EkVqFUwWi = 0;
        while (mLhPUBzf > EkVqFUwWi) {
            if (!(1 != EkVqFUwWi))
                nBvEydH2 = gphXUzg;
            if (1 < EkVqFUwWi)
                Nldks7CLq5jM->YaSLrsI3J4 = gphXUzg;
            EkVqFUwWi++;
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
            Nldks7CLq5jM = gphXUzg;
            gphXUzg = (struct   mouse *) malloc (sizeof (struct   mouse));
            scanf ("%s %d", gphXUzg->CZHgMlo, &gphXUzg->dBrNad);
        };
    }
    Nldks7CLq5jM->YaSLrsI3J4 = gphXUzg;
    gphXUzg->YaSLrsI3J4 = NULL;
    return (nBvEydH2);
}

struct   mouse *tCis98fAYkw (struct   mouse *nBvEydH2, int mLhPUBzf) {
    char h45NTPM [10];
    struct   mouse *gphXUzg;
    struct   mouse *Nldks7CLq5jM;
    int EkVqFUwWi;
    int DrNsCn0X1;
    int k4gqj9Pu;
    for (EkVqFUwWi = 1; mLhPUBzf > EkVqFUwWi; EkVqFUwWi++) {
        Nldks7CLq5jM = nBvEydH2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        gphXUzg = Nldks7CLq5jM->YaSLrsI3J4;
        {
            DrNsCn0X1 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (DrNsCn0X1 < mLhPUBzf - EkVqFUwWi) {
                DrNsCn0X1++;
                if (Nldks7CLq5jM->dBrNad < gphXUzg->dBrNad && gphXUzg->dBrNad >= 60) {
                    k4gqj9Pu = Nldks7CLq5jM->dBrNad;
                    Nldks7CLq5jM->dBrNad = gphXUzg->dBrNad;
                    strcpy (h45NTPM, Nldks7CLq5jM->CZHgMlo);
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
                    gphXUzg->dBrNad = k4gqj9Pu;
                    strcpy (Nldks7CLq5jM->CZHgMlo, gphXUzg->CZHgMlo);
                    strcpy (gphXUzg->CZHgMlo, h45NTPM);
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                Nldks7CLq5jM = gphXUzg;
                gphXUzg = gphXUzg->YaSLrsI3J4;
            };
        };
    }
    return (nBvEydH2);
}

main () {
    int EkVqFUwWi;
    int mLhPUBzf;
    struct   mouse *nBvEydH2;
    struct   mouse *mguviqDnIEa;
    scanf ("%d", &mLhPUBzf);
    nBvEydH2 = fNt5a8 (mLhPUBzf);
    nBvEydH2 = tCis98fAYkw (nBvEydH2, mLhPUBzf);
    mguviqDnIEa = nBvEydH2;
    {
        EkVqFUwWi = 0;
        while (EkVqFUwWi < mLhPUBzf) {
            EkVqFUwWi++;
            printf ("%s\n", mguviqDnIEa->CZHgMlo);
            mguviqDnIEa = mguviqDnIEa->YaSLrsI3J4;
        };
    };
}

