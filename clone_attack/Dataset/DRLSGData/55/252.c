long  H3rIMv0yzEnY (char p62eE9luY [], int XXJrCiVG0jn) {
    int h2gc17flEmI;
    int uW0I792ZS3U;
    int KuI5xN;
    int QFlPLu8qI6ZT;
    KuI5xN = (858 - 858);
    h2gc17flEmI = strlen (p62eE9luY);
    {
        {
            if ((893 - 893)) {
                return (206 - 206);
            };
        }
        QFlPLu8qI6ZT = (10 - 10);
        for (; h2gc17flEmI > QFlPLu8qI6ZT;) {
            if ('0' <= p62eE9luY[QFlPLu8qI6ZT] && '9' >= p62eE9luY[QFlPLu8qI6ZT])
                uW0I792ZS3U = p62eE9luY[QFlPLu8qI6ZT] - '0';
            if (p62eE9luY[QFlPLu8qI6ZT] >= 'a' && 'z' >= p62eE9luY[QFlPLu8qI6ZT])
                uW0I792ZS3U = p62eE9luY[QFlPLu8qI6ZT] - 'a' + (263 - 253);
            if ('A' <= p62eE9luY[QFlPLu8qI6ZT] && p62eE9luY[QFlPLu8qI6ZT] <= 'Z')
                uW0I792ZS3U = p62eE9luY[QFlPLu8qI6ZT] - 'A' + (362 - 352);
            KuI5xN = KuI5xN *XXJrCiVG0jn+uW0I792ZS3U;
            QFlPLu8qI6ZT = QFlPLu8qI6ZT +(509 - 508);
        };
    }
    return KuI5xN;
}

void  zwizbRhja (long  KuI5xN, int wrtYDBnQVG, char mySJlwPrmz []) {
    int QFlPLu8qI6ZT;
    int Ypx2DfXP;
    int WkTghrx;
    int uW0I792ZS3U;
    {
        if ((633 - 633)) {
            return (316 - 316);
        };
    }
    QFlPLu8qI6ZT = (513 - 513);
    for (; KuI5xN > (230 - 230);) {
        Ypx2DfXP = KuI5xN % wrtYDBnQVG;
        if (Ypx2DfXP >= (438 - 428)) {
            mySJlwPrmz[QFlPLu8qI6ZT] = Ypx2DfXP -(203 - 193) + 'A';
        }
        else
            mySJlwPrmz[QFlPLu8qI6ZT] = Ypx2DfXP +'0';
        QFlPLu8qI6ZT = QFlPLu8qI6ZT +(297 - 296);
        KuI5xN = KuI5xN / wrtYDBnQVG;
    }
    {
        WkTghrx = (334 - 334);
        for (; WkTghrx <= QFlPLu8qI6ZT / (445 - 443) - (598 - 597);) {
            uW0I792ZS3U = mySJlwPrmz[WkTghrx];
            mySJlwPrmz[WkTghrx] = mySJlwPrmz[QFlPLu8qI6ZT -(165 - 164) - WkTghrx];
            mySJlwPrmz[QFlPLu8qI6ZT -(573 - 572) - WkTghrx] = uW0I792ZS3U;
            WkTghrx = WkTghrx +(684 - 683);
        };
    };
}

void  main () {
    long  KuI5xN;
    char mySJlwPrmz [(554 - 504)] = {(415 - 415)};
    int QFlPLu8qI6ZT;
    int wrtYDBnQVG;
    int XXJrCiVG0jn;
    char p62eE9luY [(1030 - 980)] = {(231 - 231)};
    int h2gc17flEmI;
    scanf ("%d%s%d", &XXJrCiVG0jn, p62eE9luY, &wrtYDBnQVG);
    KuI5xN = H3rIMv0yzEnY (p62eE9luY, XXJrCiVG0jn);
    zwizbRhja (KuI5xN, wrtYDBnQVG, mySJlwPrmz);
    h2gc17flEmI = strlen (mySJlwPrmz);
    if (h2gc17flEmI > (58 - 58)) {
        QFlPLu8qI6ZT = (715 - 715);
        for (; QFlPLu8qI6ZT < h2gc17flEmI;) {
            {
                if ((615 - 615)) {
                    return (650 - 650);
                };
            }
            printf ("%c", mySJlwPrmz[QFlPLu8qI6ZT]);
            QFlPLu8qI6ZT = QFlPLu8qI6ZT +(254 - 253);
        };
    }
    if (h2gc17flEmI == (539 - 539))
        ;
}

