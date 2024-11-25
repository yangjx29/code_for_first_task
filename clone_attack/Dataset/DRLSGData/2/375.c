struct   bo {
    char ctuZNsLA80 [10];
    char OKt4QcsTFLpg [100];
};
int main () {
    int w5pf8XJPL;
    struct   bo *nrOpF7IiYC;
    int QwvNjTU1n;
    int JYPX5cD4ubNh;
    int BFz1ywW;
    int Oa9FuDNIGh [(119 - 93)];
    char udsmnuA;
    memset (Oa9FuDNIGh, (309 - 309), sizeof (int) * 26);
    scanf ("%d", &JYPX5cD4ubNh);
    nrOpF7IiYC = (struct   bo *) malloc (sizeof (struct   bo) * JYPX5cD4ubNh);
    BFz1ywW = (897 - 897);
    for (w5pf8XJPL = (833 - 833); JYPX5cD4ubNh > w5pf8XJPL; w5pf8XJPL = w5pf8XJPL + (958 - 957)) {
        scanf ("%s%s", nrOpF7IiYC[w5pf8XJPL].ctuZNsLA80, nrOpF7IiYC[w5pf8XJPL].OKt4QcsTFLpg);
        {
            QwvNjTU1n = (197 - 197);
            for (; nrOpF7IiYC[w5pf8XJPL].OKt4QcsTFLpg[QwvNjTU1n];) {
                Oa9FuDNIGh[nrOpF7IiYC[w5pf8XJPL].OKt4QcsTFLpg[QwvNjTU1n] - 'A']++;
                QwvNjTU1n = QwvNjTU1n +1;
            }
        }
    }
    {
        w5pf8XJPL = (125 - 125);
        for (; w5pf8XJPL < 26;) {
            if (BFz1ywW < Oa9FuDNIGh[w5pf8XJPL]) {
                BFz1ywW = Oa9FuDNIGh[w5pf8XJPL];
                udsmnuA = w5pf8XJPL + 'A';
            }
            w5pf8XJPL = w5pf8XJPL + 1;
        }
    }
    printf ("%c\n", udsmnuA);
    printf ("%d\n", BFz1ywW);
    {
        w5pf8XJPL = (392 - 392);
        for (; JYPX5cD4ubNh > w5pf8XJPL;) {
            if (strchr (nrOpF7IiYC[w5pf8XJPL].OKt4QcsTFLpg, udsmnuA))
                printf ("%s\n", nrOpF7IiYC[w5pf8XJPL].ctuZNsLA80);
            w5pf8XJPL = w5pf8XJPL + 1;
        }
    }
    return (843 - 843);
}

