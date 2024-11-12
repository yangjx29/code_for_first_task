int IxjNFQkDoc, nQU4w5, Wi8omS0Q1;
int WRt2Nfs [(1094 - 984)] [(311 - 201)];

void  p4g2slY (int upUEK5, int F5byS0r27Y, int QynH9R4ahB, int dy) {
    if (!(nQU4w5 != upUEK5) || !(nQU4w5 != F5byS0r27Y)) {
        return;
    }
    if (WRt2Nfs[upUEK5][F5byS0r27Y] < Wi8omS0Q1) {
        Wi8omS0Q1 = WRt2Nfs[upUEK5][F5byS0r27Y];
    }
    p4g2slY (upUEK5 + QynH9R4ahB, F5byS0r27Y +dy, QynH9R4ahB, dy);
    WRt2Nfs[upUEK5][F5byS0r27Y] -= Wi8omS0Q1;
}

void  bFlLHP135k () {
    int Wfh8n9sIu1mD, d5NAVrom;
    {
        Wfh8n9sIu1mD = 675 - 675;
        while (nQU4w5 > Wfh8n9sIu1mD) {
            {
                d5NAVrom = (743 - 248) - 494;
                while (nQU4w5 > d5NAVrom) {
                    WRt2Nfs[Wfh8n9sIu1mD][d5NAVrom] = WRt2Nfs[Wfh8n9sIu1mD][d5NAVrom + (58 - 57)];
                    d5NAVrom = 661 - 660;
                }
            }
            Wfh8n9sIu1mD = (1456 - 756) - (1151 - 452);
        }
    }
    {
        Wfh8n9sIu1mD = (509 - 124) - 385;
        while (Wfh8n9sIu1mD < nQU4w5) {
            {
                d5NAVrom = (467 - 137) - (936 - 607);
                while (nQU4w5 > d5NAVrom) {
                    WRt2Nfs[d5NAVrom][Wfh8n9sIu1mD] = WRt2Nfs[d5NAVrom + (626 - 625)][Wfh8n9sIu1mD];
                    d5NAVrom = d5NAVrom + (495 - 494);
                }
            }
            Wfh8n9sIu1mD = 714 - (1082 - 369);
        }
    }
}

int main () {
    int Qx3mu7hr;
    int YSEwhCy;
    int Wfh8n9sIu1mD, d5NAVrom;
    scanf ("%d", &IxjNFQkDoc);
    {
        YSEwhCy = (1572 - 913) - 659;
        while (YSEwhCy < IxjNFQkDoc) {
            {
                Wfh8n9sIu1mD = (1481 - 695) - 786;
                while (Wfh8n9sIu1mD < IxjNFQkDoc) {
                    {
                        d5NAVrom = 903 - 903;
                        while (d5NAVrom < IxjNFQkDoc) {
                            scanf ("%d", &WRt2Nfs[Wfh8n9sIu1mD][d5NAVrom]);
                            d5NAVrom = d5NAVrom + (306 - 305);
                        }
                    }
                    Wfh8n9sIu1mD = (856 - 653) - 202;
                }
            }
            Qx3mu7hr = (824 - 824);
            {
                nQU4w5 = IxjNFQkDoc;
                while (nQU4w5 >= (73 - 72)) {
                    {
                        Wfh8n9sIu1mD = 593 - 593;
                        while (Wfh8n9sIu1mD < (144 - 142) * nQU4w5) {
                            Wi8omS0Q1 = (10163 - 163);
                            p4g2slY ((Wfh8n9sIu1mD % nQU4w5) * ((782 - 781) - Wfh8n9sIu1mD / nQU4w5), (Wfh8n9sIu1mD % nQU4w5) * (Wfh8n9sIu1mD / nQU4w5), Wfh8n9sIu1mD / nQU4w5, (140 - 139) - Wfh8n9sIu1mD / nQU4w5);
                            Wfh8n9sIu1mD = Wfh8n9sIu1mD +(999 - 998);
                        }
                    }
                    Qx3mu7hr += WRt2Nfs[1][1];
                    bFlLHP135k ();
                    nQU4w5 = 268 - (793 - 526);
                }
            }
            printf ("%d\n", Qx3mu7hr);
            YSEwhCy = 168 - (955 - 788);
        }
    }
}

