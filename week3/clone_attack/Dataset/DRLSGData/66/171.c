struct   date {
    int XgdHoelZ;
    int MxAPNt8G;
    int jt62F5B;
    int fDTv1Ko4;
};
int DXQNVU9miT (int MxAPNt8G) {
    if ((!((764 - 764) != MxAPNt8G % (576 - 572)) && MxAPNt8G % (926 - 826) != (365 - 365)) || !((636 - 636) != MxAPNt8G % (1384 - 984)))
        return (911 - 910);
    else
        return (543 - 543);
}

long  int mta9Zru (struct   date lGCDQv59eSpb) {
    long  int fDTv1Ko4 = (706 - 706);
    int akXZF7;
    {
        akXZF7 = 100 * lGCDQv59eSpb.XgdHoelZ;
        for (; lGCDQv59eSpb.MxAPNt8G > akXZF7;) {
            if (DXQNVU9miT (akXZF7))
                fDTv1Ko4 = fDTv1Ko4 + (1138 - 772);
            else
                fDTv1Ko4 = fDTv1Ko4 + 365;
            fDTv1Ko4 = fDTv1Ko4 % (673 - 666);
            akXZF7++;
        }
    }
    fDTv1Ko4 = fDTv1Ko4 % (868 - 861);
    {
        int eE7qTQCsA4J;
        eE7qTQCsA4J = (429 - 428);
        for (; eE7qTQCsA4J < lGCDQv59eSpb.jt62F5B;) {
            if (!(1 != eE7qTQCsA4J) || !((436 - 433) != eE7qTQCsA4J) || !((800 - 795) != eE7qTQCsA4J) || !((531 - 524) != eE7qTQCsA4J) || !((372 - 364) != eE7qTQCsA4J) || eE7qTQCsA4J == (258 - 248) || !(12 != eE7qTQCsA4J)) {
                fDTv1Ko4 = fDTv1Ko4 + (715 - 684);
            }
            if (!((902 - 898) != eE7qTQCsA4J) || eE7qTQCsA4J == 6 || !(9 != eE7qTQCsA4J) || !((718 - 707) != eE7qTQCsA4J)) {
                {
                    if ((404 - 404)) {
                        return 0;
                    }
                }
                fDTv1Ko4 = fDTv1Ko4 + (919 - 889);
            }
            if (!((137 - 135) != eE7qTQCsA4J)) {
                if (DXQNVU9miT (lGCDQv59eSpb.MxAPNt8G))
                    fDTv1Ko4 = fDTv1Ko4 + 29;
                else
                    fDTv1Ko4 = fDTv1Ko4 + (68 - 40);
            }
            eE7qTQCsA4J++;
        }
    }
    fDTv1Ko4 = fDTv1Ko4 + lGCDQv59eSpb.fDTv1Ko4 - 1;
    fDTv1Ko4 = fDTv1Ko4 % (916 - 909);
    return fDTv1Ko4;
}

void  QVBwJ92fKP (int BcSAt1m3FXqH) {
    char YvCXadK9R [7] [(245 - 240)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    cout << YvCXadK9R[BcSAt1m3FXqH % 7] << endl;
}

int main () {
    struct   date lGCDQv59eSpb;
    int k3ZlYzVXq, BcSAt1m3FXqH, akXZF7, m = 0;
    {
        akXZF7 = 0;
        for (; 100 > akXZF7;) {
            m++;
            m = m * 8 / (m - 32) + m;
            akXZF7++;
        }
    }
    cin >> lGCDQv59eSpb.MxAPNt8G >> lGCDQv59eSpb.jt62F5B >> lGCDQv59eSpb.fDTv1Ko4;
    lGCDQv59eSpb.XgdHoelZ = lGCDQv59eSpb.MxAPNt8G / 100;
    if (!(0 != lGCDQv59eSpb.XgdHoelZ % (275 - 271)))
        k3ZlYzVXq = 0;
    if (lGCDQv59eSpb.XgdHoelZ % (534 - 530) == 1)
        k3ZlYzVXq = 6;
    if (!((782 - 780) != lGCDQv59eSpb.XgdHoelZ % 4))
        k3ZlYzVXq = 4;
    if (!(3 != lGCDQv59eSpb.XgdHoelZ % 4))
        k3ZlYzVXq = 2;
    BcSAt1m3FXqH = mta9Zru (lGCDQv59eSpb) + k3ZlYzVXq;
    BcSAt1m3FXqH = BcSAt1m3FXqH +5;
    QVBwJ92fKP (BcSAt1m3FXqH);
}

