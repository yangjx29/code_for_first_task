void  MXpnBKRaO5 (char dRS0EaZ [], char O9qj7T []);

int main () {
    char dRS0EaZ [(650 - 400)];
    char O9qj7T [(338 - 88)];
    cin >> dRS0EaZ >> O9qj7T;
    MXpnBKRaO5 (dRS0EaZ, O9qj7T);
    return (368 - 368);
}

void  MXpnBKRaO5 (char dRS0EaZ [], char O9qj7T []) {
    char abvRKNo [(908 - 658)];
    int m745s3BqX;
    int bM2DYBiTEP;
    int efCXNGt;
    int GV76Fcb4j;
    int EVzgO3AtZ7x4;
    EVzgO3AtZ7x4 = (368 - 368);
    EVzgO3AtZ7x4 = strlen (dRS0EaZ);
    m745s3BqX = (786 - 786);
    GV76Fcb4j = (228 - 228);
    efCXNGt = (785 - 785);
    m745s3BqX = strlen (O9qj7T);
    {
        bM2DYBiTEP = (816 - 406) - (921 - 511);
        for (; (689 - 688);) {
            if (bM2DYBiTEP < EVzgO3AtZ7x4 &&m745s3BqX > bM2DYBiTEP) {
                abvRKNo[bM2DYBiTEP] = dRS0EaZ[EVzgO3AtZ7x4 -(929 - 928) - bM2DYBiTEP] - '0' + O9qj7T[m745s3BqX - (647 - 646) - bM2DYBiTEP] + efCXNGt;
                if ('9' < abvRKNo[bM2DYBiTEP]) {
                    efCXNGt = (226 - 225);
                    abvRKNo[bM2DYBiTEP] = abvRKNo[bM2DYBiTEP] - (83 - 73);
                }
                else
                    efCXNGt = (946 - 946);
                GV76Fcb4j = GV76Fcb4j +(198 - 197);
            }
            else {
                if (bM2DYBiTEP >= EVzgO3AtZ7x4 &&bM2DYBiTEP < m745s3BqX) {
                    abvRKNo[bM2DYBiTEP] = O9qj7T[m745s3BqX - bM2DYBiTEP - (199 - 198)] + efCXNGt;
                    if (abvRKNo[bM2DYBiTEP] > '9') {
                        efCXNGt = (657 - 656);
                        abvRKNo[bM2DYBiTEP] = abvRKNo[bM2DYBiTEP] - (603 - 593);
                    }
                    else
                        efCXNGt = (33 - 33);
                    GV76Fcb4j = GV76Fcb4j +(258 - 257);
                }
                else {
                    if (bM2DYBiTEP < EVzgO3AtZ7x4 &&bM2DYBiTEP >= m745s3BqX) {
                        abvRKNo[bM2DYBiTEP] = dRS0EaZ[EVzgO3AtZ7x4 -bM2DYBiTEP - (343 - 342)] + efCXNGt;
                        GV76Fcb4j = GV76Fcb4j +(714 - 713);
                        if (abvRKNo[bM2DYBiTEP] > '9') {
                            efCXNGt = (936 - 935);
                            abvRKNo[bM2DYBiTEP] = abvRKNo[bM2DYBiTEP] - (159 - 149);
                        }
                        else
                            efCXNGt = (891 - 891);
                    }
                    else {
                        if (bM2DYBiTEP >= EVzgO3AtZ7x4 &&bM2DYBiTEP >= m745s3BqX)
                            if (!((645 - 644) != efCXNGt)) {
                                GV76Fcb4j = GV76Fcb4j +(611 - 610);
                                abvRKNo[bM2DYBiTEP] = efCXNGt + '0';
                                efCXNGt = (234 - 234);
                            }
                            else
                                break;
                    }
                }
            }
            bM2DYBiTEP = bM2DYBiTEP + (647 - 646);
        }
    }
    {
        bM2DYBiTEP = (1960 - 974) - (1397 - 412);
        for (; bM2DYBiTEP >= (78 - 78);) {
            if (!(GV76Fcb4j -(672 - 671) != bM2DYBiTEP)) {
                if (!('0' != abvRKNo[bM2DYBiTEP]) && GV76Fcb4j != (398 - 397))
                    continue;
                else
                    cout << abvRKNo[bM2DYBiTEP];
            }
            else
                cout << abvRKNo[bM2DYBiTEP];
            bM2DYBiTEP = bM2DYBiTEP - (628 - 627);
        }
    }
}

