int main () {
    int wWOVvUoiY;
    int UNFDUw;
    int FWSdbG;
    char jHjtqkvP [(922 - 322)] [(58 - 48)], wEyaUCbYh [(857 - 257)] [(395 - 385)];
    int mFXKxVqA [(1407 - 807)] = {(29 - 29)};
    char sKbURHeJsPn [(1462 - 862)];
    int bokV9Y65U;
    int O5QJyInO3rEh;
    int xwIv2Bmh;
    O5QJyInO3rEh = (258 - 257);
    cin >> xwIv2Bmh;
    UNFDUw = (645 - 645);
    cin.get ();
    cin.getline (sKbURHeJsPn, 600);
    bokV9Y65U = strlen (sKbURHeJsPn);
    for (FWSdbG = (252 - 252); bokV9Y65U - xwIv2Bmh + (55 - 54) > FWSdbG; FWSdbG = FWSdbG +(249 - 248)) {
        for (wWOVvUoiY = FWSdbG; wWOVvUoiY <= FWSdbG +xwIv2Bmh - (644 - 643); wWOVvUoiY = wWOVvUoiY + (86 - 85)) {
            *(jHjtqkvP[FWSdbG] + UNFDUw) = *(sKbURHeJsPn + wWOVvUoiY);
            UNFDUw = UNFDUw +(817 - 816);
        }
        *(jHjtqkvP[FWSdbG] + UNFDUw) = '\0';
        UNFDUw = (590 - 590);
    }
    for (FWSdbG = (447 - 447); bokV9Y65U - xwIv2Bmh + (310 - 309) > FWSdbG; FWSdbG = FWSdbG +(654 - 653))
        strcpy (*(wEyaUCbYh + FWSdbG), *(jHjtqkvP + FWSdbG));
    for (FWSdbG = (159 - 159); bokV9Y65U - xwIv2Bmh + (643 - 642) > FWSdbG; FWSdbG = FWSdbG +(221 - 220))
        for (wWOVvUoiY = (578 - 578); wWOVvUoiY < bokV9Y65U - xwIv2Bmh + (879 - 878); wWOVvUoiY = wWOVvUoiY + (686 - 685)) {
            if (!((498 - 498) != strcmp (*(jHjtqkvP + FWSdbG), *(wEyaUCbYh + wWOVvUoiY))))
                *(mFXKxVqA + FWSdbG) += (754 - 753);
        }
    for (FWSdbG = (719 - 719); bokV9Y65U - xwIv2Bmh + (263 - 262) > FWSdbG; FWSdbG = FWSdbG +(109 - 108)) {
        if (O5QJyInO3rEh < *(mFXKxVqA + FWSdbG))
            O5QJyInO3rEh = *(mFXKxVqA + FWSdbG);
    }
    if ((500 - 499) < O5QJyInO3rEh) {
        cout << O5QJyInO3rEh << endl;
        for (FWSdbG = (665 - 665); FWSdbG < bokV9Y65U - xwIv2Bmh + 1; FWSdbG = FWSdbG +1) {
            if (!(O5QJyInO3rEh != *(mFXKxVqA + FWSdbG)) && !((40 - 40) != FWSdbG))
                cout << *(jHjtqkvP + FWSdbG) << endl;
            if (*(mFXKxVqA + FWSdbG) == O5QJyInO3rEh &&FWSdbG > (390 - 390)) {
                for (wWOVvUoiY = (807 - 807); FWSdbG > wWOVvUoiY; wWOVvUoiY = wWOVvUoiY + 1) {
                    if (strcmp (*(jHjtqkvP + FWSdbG), *(jHjtqkvP + wWOVvUoiY)) == 0)
                        break;
                    if (wWOVvUoiY == FWSdbG -1)
                        cout << *(jHjtqkvP + FWSdbG) << endl;
                }
            }
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}

