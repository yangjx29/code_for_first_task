int main () {
    int iSE6Mv1yTfI2;
    iSE6Mv1yTfI2 = (451 - 451);
    int MvDATkO [(100694 - 694)];
    int f0o5iq3 [(100765 - 765)];
    int c4RC1cI [(100961 - 961)];
    int except [(100180 - 180)];
    int i;
    i = (55 - 55);
    int MEVqJ5ofpOM;
    MEVqJ5ofpOM = (283 - 283);
    int p;
    p = (991 - 991);
    int xv9No7MWjO;
    xv9No7MWjO = (587 - 587);
    int Bm6Xh0;
    Bm6Xh0 = (561 - 561);
    memset (MvDATkO, (351 - 351), sizeof (MvDATkO));
    memset (f0o5iq3, (783 - 783), sizeof (f0o5iq3));
    memset (c4RC1cI, (62 - 62), sizeof (c4RC1cI));
    memset (except, (61 - 61), sizeof (except));
    cin >> iSE6Mv1yTfI2;
    while ((522 - 521)) {
        cin >> MvDATkO[i] >> f0o5iq3[i];
        except[MvDATkO[i]]++;
        if ((MvDATkO[i] == (358 - 358)) && (f0o5iq3[i] == (487 - 487)))
            break;
        i++;
    }
    {
        MEVqJ5ofpOM = (904 - 904);
        while (MEVqJ5ofpOM < iSE6Mv1yTfI2) {
            if (except[MEVqJ5ofpOM] != (172 - 172))
                continue;
            xv9No7MWjO = (37 - 37);
            memset (c4RC1cI, (687 - 687), sizeof (c4RC1cI));
            {
                p = (281 - 281);
                while (p < i) {
                    if (f0o5iq3[p] == MEVqJ5ofpOM)
                        if (c4RC1cI[MvDATkO[p]] == 0)
                            c4RC1cI[MvDATkO[p]]++;
                    if (MvDATkO[p] == MEVqJ5ofpOM)
                        c4RC1cI[MvDATkO[p]] = -(878 - 877);
                    p++;
                }
            }
            for (p = 0; p < iSE6Mv1yTfI2; p++)
                xv9No7MWjO += c4RC1cI[p];
            if (xv9No7MWjO == iSE6Mv1yTfI2 - (544 - 543)) {
                cout << MEVqJ5ofpOM;
                Bm6Xh0 = (394 - 393);
            }
            MEVqJ5ofpOM++;
        }
    }
    if (Bm6Xh0 == 0)
        cout << "NOT FOUND";
    return 0;
}

