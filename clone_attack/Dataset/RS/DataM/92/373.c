void  init ();
void  b2OrV0j (long  int KvqCyrbARLwg [], int skdHaqiBjLe);
void  rqsort (long  int KvqCyrbARLwg [], int skdHaqiBjLe);
long  int KvqCyrbARLwg [1000], WGIKYDRe74iP [1000], t7fkCJBDh89 [1000] [1000];
long  int BZK4d6M13c0 [1000] [1000];
int m, y3rHxdcF, skdHaqiBjLe;
long  int EtC79IODxkE;

void  main () {
    long  int i, y3rHxdcF, EtC79IODxkE = 0;
    for (i = 0; 1000 > i; i = i + 1) {
        KvqCyrbARLwg[i] = 0;
        WGIKYDRe74iP[i] = 0;
    }
    for (; 1;) {
        scanf ("%d", &skdHaqiBjLe);
        if (!(0 != skdHaqiBjLe))
            break;
        EtC79IODxkE = EtC79IODxkE +1;
        {
            i = 0;
            while (skdHaqiBjLe > i) {
                scanf ("%d", &WGIKYDRe74iP[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
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
        {
            i = 0;
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
            while (skdHaqiBjLe > i) {
                scanf ("%d", &KvqCyrbARLwg[i]);
                i = i + 1;
            };
        }
        init ();
        {
            i = skdHaqiBjLe - 2;
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
            while (0 <= i) {
                for (y3rHxdcF = 1; y3rHxdcF < skdHaqiBjLe - i; y3rHxdcF = y3rHxdcF + 1)
                    if (WGIKYDRe74iP[y3rHxdcF] > KvqCyrbARLwg[i + y3rHxdcF])
                        t7fkCJBDh89[i][y3rHxdcF] = t7fkCJBDh89[i][y3rHxdcF - 1] + 1;
                    else {
                        if (WGIKYDRe74iP[y3rHxdcF] < KvqCyrbARLwg[i + y3rHxdcF])
                            t7fkCJBDh89[i][y3rHxdcF] = t7fkCJBDh89[i + 1][y3rHxdcF - 1] - 1;
                        else if (t7fkCJBDh89[i][y3rHxdcF - 1] < t7fkCJBDh89[i + 1][y3rHxdcF - 1] - 1)
                            t7fkCJBDh89[i][y3rHxdcF] = t7fkCJBDh89[i + 1][y3rHxdcF - 1] - 1;
                        else
                            t7fkCJBDh89[i][y3rHxdcF] = t7fkCJBDh89[i][y3rHxdcF - 1];
                    }
                i = i - 1;
            };
        }
        BZK4d6M13c0[0][EtC79IODxkE] = t7fkCJBDh89[0][skdHaqiBjLe - 1] * 200;
    }
    for (i = 1; EtC79IODxkE >= i; i = i + 1)
        printf ("%ld\n", BZK4d6M13c0[0][i]);
}

void  init () {
    int i;
    int y3rHxdcF;
    int IvwNJE;
    {
        i = 0;
        while (skdHaqiBjLe - 1 > i) {
            IvwNJE = i;
            for (y3rHxdcF = i + 1; skdHaqiBjLe > y3rHxdcF; y3rHxdcF = y3rHxdcF + 1)
                if (KvqCyrbARLwg[IvwNJE] < KvqCyrbARLwg[y3rHxdcF])
                    IvwNJE = y3rHxdcF;
            EtC79IODxkE = KvqCyrbARLwg[IvwNJE];
            KvqCyrbARLwg[IvwNJE] = KvqCyrbARLwg[i];
            KvqCyrbARLwg[i] = EtC79IODxkE;
            i++;
        };
    }
    for (i = 0; i < skdHaqiBjLe - 1; i = i + 1) {
        IvwNJE = i;
        for (y3rHxdcF = i + 1; skdHaqiBjLe > y3rHxdcF; y3rHxdcF = y3rHxdcF + 1)
            if (WGIKYDRe74iP[IvwNJE] < WGIKYDRe74iP[y3rHxdcF])
                IvwNJE = y3rHxdcF;
        EtC79IODxkE = WGIKYDRe74iP[IvwNJE];
        WGIKYDRe74iP[IvwNJE] = WGIKYDRe74iP[i];
        WGIKYDRe74iP[i] = EtC79IODxkE;
    }
    for (i = 0; skdHaqiBjLe > i; i = i + 1) {
        if (WGIKYDRe74iP[0] > KvqCyrbARLwg[i])
            t7fkCJBDh89[i][0] = 1;
        else {
            if (KvqCyrbARLwg[i] == WGIKYDRe74iP[0])
                t7fkCJBDh89[i][0] = 0;
            else
                t7fkCJBDh89[i][0] = -1;
        };
    };
}

void  b2OrV0j (long  int KvqCyrbARLwg [], int skdHaqiBjLe) {
    int y3rHxdcF, i, IvwNJE;
    long  int EtC79IODxkE;
    for (i = 0; i < skdHaqiBjLe - 1; i = i + 1) {
        IvwNJE = i;
        for (y3rHxdcF = i + 1; y3rHxdcF < skdHaqiBjLe; y3rHxdcF = y3rHxdcF + 1)
            if (KvqCyrbARLwg[y3rHxdcF] < KvqCyrbARLwg[IvwNJE])
                IvwNJE = y3rHxdcF;
        EtC79IODxkE = KvqCyrbARLwg[IvwNJE];
        KvqCyrbARLwg[IvwNJE] = KvqCyrbARLwg[i];
        KvqCyrbARLwg[i] = EtC79IODxkE;
    };
}

void  rqsort (long  int WGIKYDRe74iP [], int skdHaqiBjLe) {
    int y3rHxdcF;
    int i;
    int IvwNJE;
    long  int EtC79IODxkE;
    for (i = 0; i < skdHaqiBjLe - 1; i++) {
        IvwNJE = i;
        for (y3rHxdcF = i + 1; y3rHxdcF < skdHaqiBjLe; y3rHxdcF++)
            if (KvqCyrbARLwg[y3rHxdcF] > KvqCyrbARLwg[IvwNJE])
                IvwNJE = y3rHxdcF;
        EtC79IODxkE = KvqCyrbARLwg[IvwNJE];
        KvqCyrbARLwg[IvwNJE] = KvqCyrbARLwg[i];
        KvqCyrbARLwg[i] = EtC79IODxkE;
    };
}

