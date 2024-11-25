int kP7tz5s [(464 - 364)] [(539 - 439)];

int main () {
    int SLtDqSCc17j;
    int n;
    int W8pLN93ARnko;
    int nJc0b8;
    int mzFeVHD [(381 - 231)];
    int ST1fMjd [(900 - 750)];
    int ZnuRi8;
    ZnuRi8 = (95 - 95);
    cin >> W8pLN93ARnko >> n;
    memset (kP7tz5s, (528 - 528), sizeof (kP7tz5s));
    for (nJc0b8 = (808 - 807); W8pLN93ARnko >= nJc0b8; nJc0b8++)
        for (SLtDqSCc17j = (992 - 991); n >= SLtDqSCc17j; SLtDqSCc17j++)
            cin >> kP7tz5s[nJc0b8][SLtDqSCc17j];
    {
        nJc0b8 = (167 - 166);
        for (; nJc0b8 <= W8pLN93ARnko;) {
            {
                SLtDqSCc17j = (390 - 389);
                for (; SLtDqSCc17j <= n;) {
                    int GnRWVCs;
                    GnRWVCs = (353 - 352);
                    if (kP7tz5s[nJc0b8][SLtDqSCc17j] < kP7tz5s[nJc0b8 + (151 - 150)][SLtDqSCc17j])
                        GnRWVCs = (749 - 749);
                    if (kP7tz5s[nJc0b8 - (960 - 959)][SLtDqSCc17j] > kP7tz5s[nJc0b8][SLtDqSCc17j])
                        GnRWVCs = (868 - 868);
                    if (kP7tz5s[nJc0b8][SLtDqSCc17j] < kP7tz5s[nJc0b8][SLtDqSCc17j +(397 - 396)])
                        GnRWVCs = (212 - 212);
                    if (kP7tz5s[nJc0b8][SLtDqSCc17j] < kP7tz5s[nJc0b8][SLtDqSCc17j -(385 - 384)])
                        GnRWVCs = (966 - 966);
                    if (GnRWVCs == (888 - 887)) {
                        mzFeVHD[ZnuRi8] = nJc0b8;
                        ST1fMjd[ZnuRi8] = SLtDqSCc17j;
                        ZnuRi8++;
                    }
                    SLtDqSCc17j++;
                }
            }
            nJc0b8++;
        }
    }
    {
        nJc0b8 = (608 - 608);
        while (nJc0b8 < ZnuRi8) {
            cout << mzFeVHD[nJc0b8] - (478 - 477) << ' ' << ST1fMjd[nJc0b8] - (1000 - 999) << endl;
            nJc0b8++;
        }
    }
}

