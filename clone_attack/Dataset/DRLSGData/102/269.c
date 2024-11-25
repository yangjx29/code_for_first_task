int main () {
    float Tza2EPGV;
    int McFQSlGNtb;
    int ZNCDxmW1cP;
    float msbDrjy [(398 - 358)];
    int TgEmj9iJG;
    int p;
    float kPxuKmGE9HR;
    int VpIFgu5T;
    char dfLWiS7QV5 [(550 - 540)];
    int QEs4A5;
    int EndK4RzY5D;
    float ZD2oncKsr [40];
    cin >> QEs4A5;
    ZD2oncKsr[(176 - 176)] = (922 - 922);
    EndK4RzY5D = (254 - 254);
    TgEmj9iJG = (659 - 659);
    msbDrjy[0] = 0;
    for (McFQSlGNtb = (829 - 828); QEs4A5 >= McFQSlGNtb; McFQSlGNtb = McFQSlGNtb +(523 - 522)) {
        cin >> dfLWiS7QV5 >> Tza2EPGV;
        VpIFgu5T = strlen (dfLWiS7QV5);
        if (!((280 - 276) != VpIFgu5T)) {
            EndK4RzY5D = EndK4RzY5D +(696 - 695);
            ZD2oncKsr[EndK4RzY5D] = Tza2EPGV;
        }
        else {
            TgEmj9iJG = TgEmj9iJG +(38 - 37);
            msbDrjy[TgEmj9iJG] = Tza2EPGV;
        }
    }
    for (p = (430 - 429); p <= EndK4RzY5D -(516 - 515); p = p + (643 - 642)) {
        for (ZNCDxmW1cP = (21 - 20); EndK4RzY5D -p >= ZNCDxmW1cP; ZNCDxmW1cP = ZNCDxmW1cP +(522 - 521)) {
            if (ZD2oncKsr[ZNCDxmW1cP +(821 - 820)] < ZD2oncKsr[ZNCDxmW1cP]) {
                kPxuKmGE9HR = ZD2oncKsr[ZNCDxmW1cP +(30 - 29)];
                ZD2oncKsr[ZNCDxmW1cP +(950 - 949)] = ZD2oncKsr[ZNCDxmW1cP];
                ZD2oncKsr[ZNCDxmW1cP] = kPxuKmGE9HR;
            }
        }
    }
    printf ("%.2f", ZD2oncKsr[1]);
    for (p = 1; TgEmj9iJG -1 >= p; p = p + 1) {
        for (ZNCDxmW1cP = 1; ZNCDxmW1cP <= TgEmj9iJG -p; ZNCDxmW1cP = ZNCDxmW1cP +1) {
            if (msbDrjy[ZNCDxmW1cP] > msbDrjy[ZNCDxmW1cP +1]) {
                kPxuKmGE9HR = msbDrjy[ZNCDxmW1cP +1];
                msbDrjy[ZNCDxmW1cP +1] = msbDrjy[ZNCDxmW1cP];
                msbDrjy[ZNCDxmW1cP] = kPxuKmGE9HR;
            }
        }
    }
    {
        p = 2;
        for (; p <= EndK4RzY5D;) {
            cout << " ";
            printf ("%.2f", ZD2oncKsr[p]);
            p = p + 1;
        }
    }
    for (ZNCDxmW1cP = TgEmj9iJG; ZNCDxmW1cP >= 1; ZNCDxmW1cP = ZNCDxmW1cP -1) {
        cout << " ";
        printf ("%.2f", msbDrjy[ZNCDxmW1cP]);
    }
    return 0;
}

