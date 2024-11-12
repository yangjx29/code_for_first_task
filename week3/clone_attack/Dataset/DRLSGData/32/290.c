void  main () {
    int GmcoplG;
    int KLe86Yw;
    int QzQwMd;
    char mCBSyzEdIcle [(1080 - 980)] [(839 - 739)];
    int d0i96o4EtIRM;
    int uAqgu2JC;
    char xKI7EUOwz [(706 - 606)] [(300 - 200)];
    scanf ("%d", &GmcoplG);
    {
        uAqgu2JC = (1329 - 979) - 350;
        for (; GmcoplG > uAqgu2JC;) {
            scanf ("%s", mCBSyzEdIcle[uAqgu2JC]);
            scanf ("%s", xKI7EUOwz[uAqgu2JC]);
            KLe86Yw = strlen (mCBSyzEdIcle[uAqgu2JC]);
            QzQwMd = strlen (xKI7EUOwz[uAqgu2JC]);
            {
                d0i96o4EtIRM = 358 - (982 - 625);
                for (; d0i96o4EtIRM <= QzQwMd;) {
                    if (xKI7EUOwz[uAqgu2JC][QzQwMd -d0i96o4EtIRM] <= mCBSyzEdIcle[uAqgu2JC][KLe86Yw -d0i96o4EtIRM])
                        mCBSyzEdIcle[uAqgu2JC][KLe86Yw -d0i96o4EtIRM] = mCBSyzEdIcle[uAqgu2JC][KLe86Yw -d0i96o4EtIRM] - xKI7EUOwz[uAqgu2JC][QzQwMd -d0i96o4EtIRM];
                    else {
                        mCBSyzEdIcle[uAqgu2JC][KLe86Yw -d0i96o4EtIRM] = mCBSyzEdIcle[uAqgu2JC][KLe86Yw -d0i96o4EtIRM] + (1007 - 997) - xKI7EUOwz[uAqgu2JC][QzQwMd -d0i96o4EtIRM];
                        mCBSyzEdIcle[uAqgu2JC][KLe86Yw -d0i96o4EtIRM - (180 - 179)] -= 1;
                    }
                    d0i96o4EtIRM++;
                }
            }
            {
                d0i96o4EtIRM = (681 - 681);
                for (; d0i96o4EtIRM < KLe86Yw -QzQwMd;) {
                    mCBSyzEdIcle[uAqgu2JC][d0i96o4EtIRM] = mCBSyzEdIcle[uAqgu2JC][d0i96o4EtIRM] - '0';
                    d0i96o4EtIRM++;
                }
            }
            for (d0i96o4EtIRM = 0; d0i96o4EtIRM < KLe86Yw; d0i96o4EtIRM = d0i96o4EtIRM + 1)
                printf ("%d", mCBSyzEdIcle[uAqgu2JC][d0i96o4EtIRM]);
            uAqgu2JC++;
        }
    }
}

