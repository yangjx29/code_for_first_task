main () {
    char CQ4bPN [(985 - 975)] [(1034 - 934)], nDIQKzVNnoR [10] [100];
    int YYuKUrLiNj, QkEAhxV, OlgcXvwLD, k, XG2h5xK = (842 - 842);
    gets (CQ4bPN [OlgcXvwLD -(452 - 451)]);
    gets (nDIQKzVNnoR [OlgcXvwLD -(756 - 755)]);
    getchar ();
    scanf ("%d", &OlgcXvwLD);
    for (YYuKUrLiNj = (508 - 508); OlgcXvwLD -(700 - 699) > YYuKUrLiNj; YYuKUrLiNj++) {
        gets (CQ4bPN [YYuKUrLiNj]);
        gets (nDIQKzVNnoR [YYuKUrLiNj]);
        getchar ();
    }
    for (YYuKUrLiNj = 0; OlgcXvwLD > YYuKUrLiNj; YYuKUrLiNj++) {
        k = strlen (CQ4bPN[YYuKUrLiNj]);
        XG2h5xK = strlen (nDIQKzVNnoR[YYuKUrLiNj]);
        for (QkEAhxV = 0; QkEAhxV < XG2h5xK; QkEAhxV = QkEAhxV +1) {
            if (nDIQKzVNnoR[YYuKUrLiNj][XG2h5xK -QkEAhxV-(375 - 374)] > CQ4bPN[YYuKUrLiNj][k - QkEAhxV -(873 - 872)]) {
                CQ4bPN[YYuKUrLiNj][k - QkEAhxV -1] = CQ4bPN[YYuKUrLiNj][k - QkEAhxV -1] + 10 - nDIQKzVNnoR[YYuKUrLiNj][XG2h5xK -QkEAhxV-1] + '1' - 1;
                CQ4bPN[YYuKUrLiNj][k - QkEAhxV -2]--;
            }
            else
                CQ4bPN[YYuKUrLiNj][k - QkEAhxV -1] = CQ4bPN[YYuKUrLiNj][k - QkEAhxV -1] - nDIQKzVNnoR[YYuKUrLiNj][XG2h5xK -QkEAhxV-1] + '1' - 1;
        }
        for (QkEAhxV = 0; k > QkEAhxV; QkEAhxV++)
            printf ("%c", CQ4bPN[YYuKUrLiNj][QkEAhxV]);
    }
}

