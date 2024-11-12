int main () {
    double  max;
    int QbYHiUk0;
    int S9Lfso [300];
    int RykhnNa;
    int MhDqMi;
    int kRP96gS;
    double  FpcJw6ZXYRWj;
    double  Xq3pVm [300];
    double  EJv5ZerEcly2;
    EJv5ZerEcly2 = 0;
    kRP96gS = (185 - 185);
    cin >> MhDqMi;
    {
        RykhnNa = 0;
        for (; MhDqMi > RykhnNa;) {
            cin >> S9Lfso[RykhnNa];
            RykhnNa++;
        }
    }
    QbYHiUk0 = (983 - 983);
    {
        RykhnNa = 0;
        for (; MhDqMi > RykhnNa;) {
            EJv5ZerEcly2 = EJv5ZerEcly2 +S9Lfso[RykhnNa];
            RykhnNa++;
        }
    }
    FpcJw6ZXYRWj = EJv5ZerEcly2 / MhDqMi;
    {
        RykhnNa = 0;
        for (; MhDqMi > RykhnNa;) {
            if (S9Lfso[RykhnNa] >= FpcJw6ZXYRWj)
                Xq3pVm[RykhnNa] = S9Lfso[RykhnNa] - FpcJw6ZXYRWj;
            else
                Xq3pVm[RykhnNa] = FpcJw6ZXYRWj -S9Lfso[RykhnNa];
            RykhnNa++;
        }
    }
    max = Xq3pVm[0];
    {
        RykhnNa = 0;
        for (; MhDqMi > RykhnNa;) {
            if (max < Xq3pVm[RykhnNa])
                max = Xq3pVm[RykhnNa];
            RykhnNa++;
        }
    }
    {
        RykhnNa = 0;
        for (; RykhnNa < MhDqMi;) {
            if (!(max != Xq3pVm[RykhnNa]))
                QbYHiUk0++;
            RykhnNa++;
        }
    }
    {
        RykhnNa = 0;
        while (RykhnNa < MhDqMi) {
            if (Xq3pVm[RykhnNa] == max) {
                cout << S9Lfso[RykhnNa];
                kRP96gS++;
                if (kRP96gS != QbYHiUk0)
                    cout << ",";
            }
            RykhnNa++;
        }
    }
    cout << endl;
    return 0;
}

