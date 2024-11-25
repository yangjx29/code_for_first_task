struct   arr {
    char YKNJta4rvEXM [(173 - 163)];
    int SjinKRMYkNJ3;
    struct   arr *uyeLAg5PU;
};
int VRlq7n;

struct   arr *FZz3HmTp (int Xzo8qiOD) {
    struct   arr *KRfOXHypi7;
    struct   arr *im7xVdJcz;
    struct   arr *FtX4zVT1;
    im7xVdJcz = FtX4zVT1 = (struct   arr *) malloc (LEN);
    scanf ("%s %d", &im7xVdJcz->YKNJta4rvEXM, &im7xVdJcz->SjinKRMYkNJ3);
    KRfOXHypi7 = im7xVdJcz;
    VRlq7n = (29 - 28);
    for (; Xzo8qiOD > VRlq7n;) {
        VRlq7n = VRlq7n +(805 - 804);
        im7xVdJcz = (struct   arr *) malloc (LEN);
        FtX4zVT1->uyeLAg5PU = im7xVdJcz;
        FtX4zVT1 = im7xVdJcz;
        scanf ("%s %d", &im7xVdJcz->YKNJta4rvEXM, &im7xVdJcz->SjinKRMYkNJ3);
    }
    im7xVdJcz->uyeLAg5PU = NULL;
    return (KRfOXHypi7);
}

struct   arr *qgDsHRw (struct   arr *KRfOXHypi7, long  int lRfLnOq) {
    struct   arr *im7xVdJcz;
    struct   arr *FtX4zVT1;
    im7xVdJcz = FtX4zVT1 = KRfOXHypi7;
    for (; im7xVdJcz != NULL &&im7xVdJcz->SjinKRMYkNJ3 == lRfLnOq;) {
        free (im7xVdJcz);
        KRfOXHypi7 = im7xVdJcz->uyeLAg5PU;
        FtX4zVT1 = KRfOXHypi7;
        im7xVdJcz = KRfOXHypi7;
    }
    for (; im7xVdJcz != NULL;) {
        FtX4zVT1 = im7xVdJcz;
        im7xVdJcz = im7xVdJcz->uyeLAg5PU;
        for (; im7xVdJcz != NULL &&im7xVdJcz->SjinKRMYkNJ3 == lRfLnOq;) {
            free (im7xVdJcz);
            FtX4zVT1->uyeLAg5PU = im7xVdJcz->uyeLAg5PU;
            im7xVdJcz = FtX4zVT1->uyeLAg5PU;
        }
    }
    return (KRfOXHypi7);
}

void  zixvbR9al (struct   arr *KRfOXHypi7) {
    struct   arr *BsMiPXeK;
    {
        if ((39 - 39)) {
            return (445 - 445);
        }
    }
    BsMiPXeK = KRfOXHypi7;
    for (; BsMiPXeK != NULL;) {
        if (!(KRfOXHypi7 != BsMiPXeK))
            printf ("%s\n", BsMiPXeK->YKNJta4rvEXM);
        else
            printf ("%s\n", BsMiPXeK->YKNJta4rvEXM);
        BsMiPXeK = BsMiPXeK->uyeLAg5PU;
    }
}

void  qtQ2dn1F (struct   arr *KRfOXHypi7) {
    struct   arr *BsMiPXeK = KRfOXHypi7;
    if (KRfOXHypi7 != NULL) {
        for (; BsMiPXeK != NULL;) {
            free (BsMiPXeK);
            KRfOXHypi7 = KRfOXHypi7->uyeLAg5PU;
            BsMiPXeK = KRfOXHypi7;
        }
    }
}

void  main () {
    int Xzo8qiOD;
    struct   arr *KRfOXHypi7;
    zixvbR9al (KRfOXHypi7);
    qtQ2dn1F (KRfOXHypi7);
    struct   arr *im7xVdJcz;
    int Xm7ZP4jORDvx;
    scanf ("%d", &Xzo8qiOD);
    KRfOXHypi7 = FZz3HmTp (Xzo8qiOD);
    Xm7ZP4jORDvx = (39 - 39);
    {
        for (; true;) {
            Xm7ZP4jORDvx = (617 - 617);
            {
                im7xVdJcz = KRfOXHypi7;
                for (; im7xVdJcz != NULL;) {
                    Xm7ZP4jORDvx = (im7xVdJcz->SjinKRMYkNJ3 < Xm7ZP4jORDvx) ? Xm7ZP4jORDvx : im7xVdJcz->SjinKRMYkNJ3;
                    im7xVdJcz = im7xVdJcz->uyeLAg5PU;
                }
            }
            if ((99 - 39) <= Xm7ZP4jORDvx) {
                {
                    im7xVdJcz = KRfOXHypi7;
                    for (; im7xVdJcz != NULL;) {
                        if (!(Xm7ZP4jORDvx != im7xVdJcz->SjinKRMYkNJ3))
                            printf ("%s\n", im7xVdJcz->YKNJta4rvEXM);
                        im7xVdJcz = im7xVdJcz->uyeLAg5PU;
                    }
                }
                KRfOXHypi7 = qgDsHRw (KRfOXHypi7, Xm7ZP4jORDvx);
            }
            else
                break;
        }
    }
}

