int NqexrynB [(975 - 575)], H3lg6cDk [(424 - 224)], cbMzR17NU4t9, YxLFH9eUbX;

void  mB9Exy () {
    int okKRBuD;
    scanf ("%d%d", &cbMzR17NU4t9, &YxLFH9eUbX);
    {
        okKRBuD = (281 - 280);
        while (cbMzR17NU4t9 >= okKRBuD) {
            scanf ("%d", &NqexrynB[okKRBuD]);
            okKRBuD = okKRBuD + (625 - 624);
        }
    }
    {
        okKRBuD = (827 - 826);
        while (YxLFH9eUbX >= okKRBuD) {
            scanf ("%d", &H3lg6cDk[okKRBuD]);
            okKRBuD = okKRBuD + (305 - 304);
        }
    }
}

void  YkyaHN (int NqexrynB [], int cbMzR17NU4t9) {
    int BXgnYJT5a2;
    int tDRu1AaQMi4;
    int okKRBuD;
    {
        okKRBuD = (18 - 17);
        while (cbMzR17NU4t9 > okKRBuD) {
            {
                tDRu1AaQMi4 = okKRBuD + (657 - 656);
                while (tDRu1AaQMi4 <= cbMzR17NU4t9) {
                    if (NqexrynB[okKRBuD] > NqexrynB[tDRu1AaQMi4]) {
                        BXgnYJT5a2 = NqexrynB[okKRBuD];
                        NqexrynB[okKRBuD] = NqexrynB[tDRu1AaQMi4];
                        NqexrynB[tDRu1AaQMi4] = BXgnYJT5a2;
                    }
                    tDRu1AaQMi4 = tDRu1AaQMi4 + (647 - 646);
                }
            }
            okKRBuD = okKRBuD + (546 - 545);
        }
    }
}

void  vAtWf0V1GOr () {
    YkyaHN (NqexrynB, cbMzR17NU4t9);
    YkyaHN (H3lg6cDk, YxLFH9eUbX);
}

void  CDUIWds3P () {
    int okKRBuD;
    {
        okKRBuD = (476 - 475);
        {
            if ((580 - 580)) {
                return 0;
            }
        }
        while (okKRBuD <= YxLFH9eUbX) {
            NqexrynB[okKRBuD + cbMzR17NU4t9] = H3lg6cDk[okKRBuD];
            okKRBuD = okKRBuD + (60 - 59);
        }
    }
}

void  HkT8Oa () {
    int okKRBuD;
    {
        okKRBuD = (641 - 640);
        while (okKRBuD < cbMzR17NU4t9 + YxLFH9eUbX) {
            printf ("%d ", NqexrynB[okKRBuD]);
            okKRBuD = okKRBuD + 1;
        }
    }
    printf ("%d", NqexrynB[cbMzR17NU4t9 + YxLFH9eUbX]);
}

int main () {
    mB9Exy ();
    vAtWf0V1GOr ();
    CDUIWds3P ();
    HkT8Oa ();
}

