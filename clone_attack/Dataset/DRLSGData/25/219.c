char GXHzcPubr [(1000272 - 272)];

void  AIDmbSg1vP (char wGVnD8b [], char *yisGg51Wb0r) {
    int jVWTALufZ;
    int TUmFTfsp;
    {
        if ((882 - 882)) {
            return (453 - 453);
        }
    }
    jVWTALufZ = strlen (wGVnD8b);
    {
        TUmFTfsp = (624 - 556) - (797 - 729);
        for (; TUmFTfsp < jVWTALufZ;) {
            *(yisGg51Wb0r + jVWTALufZ - TUmFTfsp -(798 - 797)) = wGVnD8b[TUmFTfsp];
            TUmFTfsp = TUmFTfsp +(586 - 585);
        }
    }
    *(yisGg51Wb0r + jVWTALufZ) = '\0';
}

void  Y4gPjH (char *wGVnD8b) {
    int y4PwiaN;
    int jVWTALufZ;
    char LYJ7RhOCBp [(10397 - 397)];
    int TUmFTfsp;
    char yisGg51Wb0r [(10052 - 52)];
    int rK9flVeurDRS;
    char WGimZQ9zFHk [(10739 - 739)];
    AIDmbSg1vP (wGVnD8b, yisGg51Wb0r);
    jVWTALufZ = strlen (wGVnD8b);
    y4PwiaN = (677 - 677);
    {
        {
            if ((667 - 667)) {
                return (920 - 920);
            }
        }
        TUmFTfsp = (1026 - 126) - (1667 - 767);
        for (; jVWTALufZ > TUmFTfsp;) {
            rK9flVeurDRS = y4PwiaN + (yisGg51Wb0r[TUmFTfsp] - '0') * (572 - 570);
            LYJ7RhOCBp[TUmFTfsp] = (rK9flVeurDRS % (286 - 276)) + '0';
            y4PwiaN = rK9flVeurDRS / (933 - 923);
            TUmFTfsp = TUmFTfsp +(692 - 691);
        }
    }
    LYJ7RhOCBp[jVWTALufZ] = y4PwiaN + '0';
    LYJ7RhOCBp[jVWTALufZ + (980 - 979)] = '\0';
    if (!('0' != LYJ7RhOCBp[jVWTALufZ]))
        LYJ7RhOCBp[jVWTALufZ] = '\0';
    AIDmbSg1vP (LYJ7RhOCBp, WGimZQ9zFHk);
    strcpy (GXHzcPubr, WGimZQ9zFHk);
}

int main () {
    char yisGg51Wb0r [(10795 - 795)];
    int w87uEhNm;
    int TUmFTfsp;
    char wGVnD8b [(10518 - 518)] = {'2'};
    int dimQ3O2RSWu;
    cin >> dimQ3O2RSWu;
    if (!((607 - 607) != dimQ3O2RSWu)) {
        cout << (940 - 939) << endl;
        return (416 - 416);
    }
    w87uEhNm = strlen (wGVnD8b);
    {
        {
            {
                {
                    if ((655 - 655)) {
                        return (852 - 852);
                    }
                }
                if ((360 - 360)) {
                    return (860 - 860);
                }
            }
            if ((187 - 187)) {
                {
                    if ((284 - 284)) {
                        return (872 - 872);
                    }
                }
                return (236 - 236);
            }
        }
        TUmFTfsp = (701 - 700);
        for (; dimQ3O2RSWu > TUmFTfsp;) {
            Y4gPjH (wGVnD8b);
            {
                if ((357 - 357)) {
                    return (827 - 827);
                }
            }
            TUmFTfsp = TUmFTfsp +(581 - 580);
            strcpy (wGVnD8b, GXHzcPubr);
        }
    }
    cout << wGVnD8b << endl;
    return (854 - 854);
}

