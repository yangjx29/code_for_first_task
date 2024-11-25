struct   qP0OpmkMQ {
    int wZ1QGSiBN;
    int yyVX7o5f6HP;
    int b2VyirR03bZ;
    int sum;
    struct   qP0OpmkMQ *MKxU8Ymf;
};
int N;
int n;

struct   qP0OpmkMQ *WbdtsHAfp (void ) {
    struct   qP0OpmkMQ *Ah6rzHwkRcF;
    struct   qP0OpmkMQ *GqoOGjgLmcJ7, *p2;
    GqoOGjgLmcJ7 = p2 = (struct   qP0OpmkMQ *) malloc (LEN);
    scanf ("%d %d %d", &GqoOGjgLmcJ7->wZ1QGSiBN, &GqoOGjgLmcJ7->yyVX7o5f6HP, &GqoOGjgLmcJ7->b2VyirR03bZ);
    GqoOGjgLmcJ7->sum = GqoOGjgLmcJ7->yyVX7o5f6HP + GqoOGjgLmcJ7->b2VyirR03bZ;
    n = (626 - 626);
    Ah6rzHwkRcF = null;
    for (; n < N -(611 - 610);) {
        n = n + (606 - 605);
        if (n == 1)
            Ah6rzHwkRcF = GqoOGjgLmcJ7;
        else
            p2->MKxU8Ymf = GqoOGjgLmcJ7;
        p2 = GqoOGjgLmcJ7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        GqoOGjgLmcJ7 = (struct   qP0OpmkMQ *) malloc (LEN);
        scanf ("%d %d %d", &GqoOGjgLmcJ7->wZ1QGSiBN, &GqoOGjgLmcJ7->yyVX7o5f6HP, &GqoOGjgLmcJ7->b2VyirR03bZ);
        GqoOGjgLmcJ7->sum = GqoOGjgLmcJ7->yyVX7o5f6HP + GqoOGjgLmcJ7->b2VyirR03bZ;
    }
    p2->MKxU8Ymf = null;
    return (Ah6rzHwkRcF);
}

void  main () {
    struct   qP0OpmkMQ *Ah6rzHwkRcF, *GqoOGjgLmcJ7, *p2;
    void  D1jrCp (struct   qP0OpmkMQ *p3, struct   qP0OpmkMQ *B4Ftr2EdpPV8);
    Ah6rzHwkRcF = WbdtsHAfp ();
    GqoOGjgLmcJ7 = Ah6rzHwkRcF->MKxU8Ymf;
    scanf ("%d", &N);
    p2 = GqoOGjgLmcJ7->MKxU8Ymf;
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
    D1jrCp (Ah6rzHwkRcF, GqoOGjgLmcJ7);
    D1jrCp (GqoOGjgLmcJ7, p2);
    D1jrCp (p2, p2->MKxU8Ymf);
    p2->MKxU8Ymf = null;
    GqoOGjgLmcJ7 = Ah6rzHwkRcF;
    while (GqoOGjgLmcJ7 != null) {
        printf ("%d %d\n", GqoOGjgLmcJ7->wZ1QGSiBN, GqoOGjgLmcJ7->sum);
        GqoOGjgLmcJ7 = GqoOGjgLmcJ7->MKxU8Ymf;
    };
}

void  D1jrCp (struct   qP0OpmkMQ *p3, struct   qP0OpmkMQ *B4Ftr2EdpPV8) {
    int qqHIdogCP;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    while (B4Ftr2EdpPV8 != null) {
        if (p3->sum < B4Ftr2EdpPV8->sum) {
            qqHIdogCP = p3->wZ1QGSiBN;
            p3->wZ1QGSiBN = B4Ftr2EdpPV8->wZ1QGSiBN;
            B4Ftr2EdpPV8->wZ1QGSiBN = qqHIdogCP;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            qqHIdogCP = p3->sum;
            p3->sum = B4Ftr2EdpPV8->sum;
            B4Ftr2EdpPV8->sum = qqHIdogCP;
        }
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
        B4Ftr2EdpPV8 = B4Ftr2EdpPV8->MKxU8Ymf;
    };
}

