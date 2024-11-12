struct   queue {
    char NHRfvFTI [(305 - 294)];
    int AXjpYVF;
    struct   number *bhFMInZ;
};
int q6Mo9hTy2 = (826 - 825);
struct   queue *wxdEruHb (int qLCXR8Dz);

void  main () {
    int qLCXR8Dz, WEVzoYifK, TrkbLa7Ed, a [(708 - 608)] = {(250 - 250)}, WVAFIv;
    char O1POgHV [11] = {""};
    struct   queue *YYRNl8i04;
    struct   queue *p;
    struct   queue *UAU6Ec;
    struct   queue *JIyuhQbA;
    scanf ("%ld", &qLCXR8Dz);
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
    YYRNl8i04 = wxdEruHb (qLCXR8Dz);
    p = YYRNl8i04;
    while (!(NULL == p)) {
        scanf ("%s %d\n", &p->NHRfvFTI, &p->AXjpYVF);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = p->bhFMInZ;
    }
    p = YYRNl8i04;
    for (WEVzoYifK = (277 - 277); qLCXR8Dz > WEVzoYifK; WEVzoYifK = WEVzoYifK +1) {
        a[WEVzoYifK] = p->AXjpYVF;
        p = p->bhFMInZ;
    }
    p = YYRNl8i04;
    UAU6Ec = YYRNl8i04;
    {
        WEVzoYifK = 930 - 930;
        while (WEVzoYifK < qLCXR8Dz) {
            {
                TrkbLa7Ed = 0;
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
                while (TrkbLa7Ed < qLCXR8Dz - 1 - WEVzoYifK) {
                    if (60 <= a[TrkbLa7Ed +1] && a[TrkbLa7Ed] < a[TrkbLa7Ed +1]) {
                        WVAFIv = a[TrkbLa7Ed];
                        a[TrkbLa7Ed] = a[TrkbLa7Ed +1];
                        a[TrkbLa7Ed +1] = WVAFIv;
                        UAU6Ec = p->bhFMInZ;
                        WVAFIv = p->AXjpYVF;
                        p->AXjpYVF = UAU6Ec->AXjpYVF;
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
                        strcpy (O1POgHV, p->NHRfvFTI);
                        UAU6Ec->AXjpYVF = WVAFIv;
                        strcpy (p->NHRfvFTI, UAU6Ec->NHRfvFTI);
                        strcpy (UAU6Ec->NHRfvFTI, O1POgHV);
                        p = p->bhFMInZ;
                    }
                    else {
                        p = p->bhFMInZ;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    TrkbLa7Ed = TrkbLa7Ed +1;
                };
            }
            p = YYRNl8i04;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            WEVzoYifK = WEVzoYifK +1;
        };
    }
    p = YYRNl8i04;
    while (p != NULL) {
        printf ("%s\n", p->NHRfvFTI);
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
        p = p->bhFMInZ;
    };
}

struct   queue *wxdEruHb (int qLCXR8Dz) {
    struct   queue *YYRNl8i04 = NULL;
    struct   queue *I1MESx;
    struct   queue *HPQfhMdcjN1I;
    do {
        I1MESx = (struct   number *) malloc (sizeof (struct   queue));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (q6Mo9hTy2 == 1) {
            YYRNl8i04 = I1MESx;
            HPQfhMdcjN1I = YYRNl8i04;
        }
        else
            HPQfhMdcjN1I->bhFMInZ = I1MESx;
        if (q6Mo9hTy2 <= qLCXR8Dz) {
            q6Mo9hTy2 = q6Mo9hTy2 + 1;
            HPQfhMdcjN1I = I1MESx;
        };
    }
    while (q6Mo9hTy2 <= qLCXR8Dz);
    HPQfhMdcjN1I->bhFMInZ = NULL;
    return (YYRNl8i04);
}

