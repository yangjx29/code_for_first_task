int main () {
    int TOocP10Jfz, QmEut6fVKJo, XVpiO9qzUZ4h, pVPfvn, Po2MxCGt, lO6dI54ln, mEeHwm03, BjiOZepVMJU;
    int Dw9vMUb [100] [100];
    scanf ("%d%d", &XVpiO9qzUZ4h, &pVPfvn);
    {
        TOocP10Jfz = (494 - 493);
        while (XVpiO9qzUZ4h >= TOocP10Jfz) {
            {
                QmEut6fVKJo = (215 - 214);
                while (pVPfvn >= QmEut6fVKJo) {
                    scanf ("%d", &Dw9vMUb[TOocP10Jfz][QmEut6fVKJo]);
                    QmEut6fVKJo = QmEut6fVKJo +1;
                }
            }
            TOocP10Jfz = TOocP10Jfz +1;
        }
    }
    lO6dI54ln = XVpiO9qzUZ4h;
    Po2MxCGt = 1;
    BjiOZepVMJU = pVPfvn;
    mEeHwm03 = 1;
    while (1) {
        if (Po2MxCGt > lO6dI54ln || mEeHwm03 > BjiOZepVMJU) {
            break;
        }
        else {
            if (!(Po2MxCGt != lO6dI54ln)) {
                QmEut6fVKJo = mEeHwm03;
                while (BjiOZepVMJU >= QmEut6fVKJo) {
                    printf ("%d\n", Dw9vMUb[Po2MxCGt][QmEut6fVKJo]);
                    QmEut6fVKJo++;
                }
            }
            else {
                if (!(mEeHwm03 != BjiOZepVMJU)) {
                    TOocP10Jfz = Po2MxCGt;
                    while (TOocP10Jfz <= lO6dI54ln) {
                        printf ("%d\n", Dw9vMUb[TOocP10Jfz][mEeHwm03]);
                        TOocP10Jfz = TOocP10Jfz +1;
                    }
                }
                else {
                    {
                        QmEut6fVKJo = mEeHwm03;
                        while (QmEut6fVKJo <= BjiOZepVMJU) {
                            printf ("%d\n", Dw9vMUb[Po2MxCGt][QmEut6fVKJo]);
                            QmEut6fVKJo++;
                        }
                    }
                    {
                        TOocP10Jfz = Po2MxCGt +1;
                        while (TOocP10Jfz <= lO6dI54ln) {
                            printf ("%d\n", Dw9vMUb[TOocP10Jfz][BjiOZepVMJU]);
                            TOocP10Jfz++;
                        }
                    }
                    {
                        QmEut6fVKJo = BjiOZepVMJU -1;
                        while (QmEut6fVKJo >= mEeHwm03) {
                            printf ("%d\n", Dw9vMUb[lO6dI54ln][QmEut6fVKJo]);
                            QmEut6fVKJo--;
                        }
                    }
                    {
                        TOocP10Jfz = lO6dI54ln - 1;
                        while (TOocP10Jfz > Po2MxCGt) {
                            printf ("%d\n", Dw9vMUb[TOocP10Jfz][mEeHwm03]);
                            TOocP10Jfz--;
                        }
                    }
                }
            }
        }
        lO6dI54ln = lO6dI54ln - 1;
        Po2MxCGt += 1;
        BjiOZepVMJU = BjiOZepVMJU -1;
        mEeHwm03 = mEeHwm03 + 1;
    }
    return 0;
}

