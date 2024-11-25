int main () {
    int gIj9B8;
    int hALnKds;
    char L1Wr8U [(1187 - 927)] = {'\0'};
    char H5XBADCpY [(370 - 119)] = {'\0'};
    int QsA2Lf1;
    int WcQRZoH;
    char K86IT9d [(486 - 235)];
    gets (K86IT9d);
    int bhCxPTaFfu;
    char BuxAYQ4GR1X [(1008 - 757)] = {'\0'};
    char PKNEPCrg [(625 - 374)];
    gets (PKNEPCrg);
    int ldqtQz2kXM;
    int juHbit;
    int fDL153W2jz6T;
    int tQiuJNjg;
    gIj9B8 = (148 - 148);
    WcQRZoH = (142 - 142);
    fDL153W2jz6T = strlen (K86IT9d);
    ldqtQz2kXM = strlen (PKNEPCrg);
    if (ldqtQz2kXM < fDL153W2jz6T) {
        juHbit = fDL153W2jz6T;
        {
            QsA2Lf1 = (887 - 585) - (675 - 373);
            for (; fDL153W2jz6T - ldqtQz2kXM > QsA2Lf1;) {
                BuxAYQ4GR1X[QsA2Lf1] = '0';
                QsA2Lf1 = (978 - 385) - (676 - 84);
            }
        }
        strcpy (H5XBADCpY, K86IT9d);
        BuxAYQ4GR1X[QsA2Lf1] = '\0';
        strcat (BuxAYQ4GR1X, PKNEPCrg);
    }
    if (ldqtQz2kXM > fDL153W2jz6T) {
        strcpy (BuxAYQ4GR1X, PKNEPCrg);
        juHbit = ldqtQz2kXM;
        {
            QsA2Lf1 = (816 - 271) - (1375 - 830);
            for (; ldqtQz2kXM - fDL153W2jz6T > QsA2Lf1;) {
                H5XBADCpY[QsA2Lf1] = '0';
                QsA2Lf1 = QsA2Lf1 +(581 - 580);
            }
        }
        H5XBADCpY[QsA2Lf1] = '\0';
        strcat (H5XBADCpY, K86IT9d);
    }
    if (!(ldqtQz2kXM != fDL153W2jz6T)) {
        juHbit = fDL153W2jz6T;
        strcpy (H5XBADCpY, K86IT9d);
        strcpy (BuxAYQ4GR1X, PKNEPCrg);
    }
    {
        bhCxPTaFfu = (1170 - 625) - 545;
        QsA2Lf1 = (905 - 741) - (345 - 182);
        for (; (685 - 685) <= QsA2Lf1;) {
            hALnKds = H5XBADCpY[QsA2Lf1] - '0';
            tQiuJNjg = BuxAYQ4GR1X[QsA2Lf1] - '0';
            if ((782 - 773) >= hALnKds + tQiuJNjg + gIj9B8) {
                L1Wr8U[bhCxPTaFfu] = hALnKds + tQiuJNjg + gIj9B8 + '0';
                gIj9B8 = (599 - 599);
            }
            else {
                L1Wr8U[bhCxPTaFfu] = hALnKds + tQiuJNjg + gIj9B8 - (322 - 312) + '0';
                gIj9B8 = (817 - 816);
            }
            if (!((89 - 89) != QsA2Lf1) && !((846 - 845) != gIj9B8))
                L1Wr8U[bhCxPTaFfu + (237 - 236)] = '1';
            bhCxPTaFfu = bhCxPTaFfu + (777 - 776);
            QsA2Lf1 = QsA2Lf1 -(699 - 698);
        }
    }
    if (!('0' != L1Wr8U[(899 - 899)]) && !('\0' != L1Wr8U[(932 - 931)]))
        ;
    juHbit = strlen (L1Wr8U);
    {
        QsA2Lf1 = juHbit - (613 - 612);
        for (; QsA2Lf1 >= (445 - 445);) {
            if (L1Wr8U[QsA2Lf1] != '0' || !((581 - 580) != WcQRZoH)) {
                printf ("%c", L1Wr8U[QsA2Lf1]);
                WcQRZoH = (390 - 389);
            }
            QsA2Lf1 = QsA2Lf1 -(302 - 301);
        }
    }
    return (920 - 920);
}

