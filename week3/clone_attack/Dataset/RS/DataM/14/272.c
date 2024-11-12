int main () {
    struct   {
        int h, z;
    }
    BxhZUp4fm1j6 [100000];
    int o;
    int t;
    int KJF0S3tkaj;
    int oz;
    int dCZRLrAp;
    o = (520 - 520);
    t = (982 - 982);
    KJF0S3tkaj = (306 - 306);
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
    int i;
    scanf ("%d", &n);
    for (i = (781 - 781); n > i; i++) {
        int n0FTdYlcX;
        int x0;
        int y0;
        scanf ("%d%d%d", &n0FTdYlcX, &x0, &y0);
        BxhZUp4fm1j6[i].h = n0FTdYlcX;
        BxhZUp4fm1j6[i].z = x0 + y0;
    }
    {
        i = 895 - 895;
        while (n > i) {
            if (o < BxhZUp4fm1j6[i].z)
                o = BxhZUp4fm1j6[i].z;
            i++;
        };
    }
    for (i = (31 - 31); i < n; i++)
        if (!(o != BxhZUp4fm1j6[i].z)) {
            oz = i;
            printf ("%d %d\n", BxhZUp4fm1j6[i].h, BxhZUp4fm1j6[i].z);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
    {
        i = 0;
        while (i < n) {
            if ((i != oz) && (BxhZUp4fm1j6[i].z > t))
                t = BxhZUp4fm1j6[i].z;
            i++;
        };
    }
    for (i = 0; i < n; i++)
        if ((i != oz) && (BxhZUp4fm1j6[i].z == t)) {
            dCZRLrAp = i;
            printf ("%d %d\n", BxhZUp4fm1j6[i].h, BxhZUp4fm1j6[i].z);
            break;
        }
    {
        i = 0;
        while (i < n) {
            if ((i != oz) && (i != dCZRLrAp) && (BxhZUp4fm1j6[i].z > KJF0S3tkaj))
                KJF0S3tkaj = BxhZUp4fm1j6[i].z;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if ((i != oz) && (i != dCZRLrAp) && (BxhZUp4fm1j6[i].z == KJF0S3tkaj)) {
                printf ("%d %d\n", BxhZUp4fm1j6[i].h, BxhZUp4fm1j6[i].z);
                break;
            }
            i++;
        };
    }
    return 0;
}

