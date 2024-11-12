int main () {
    int h2LYyn;
    char sELyu7IHXtmo [(581 - 540)];
    char *oAL3bO = sELyu7IHXtmo;
    int trnybXufwI;
    int uxYpkV3Q8c7K;
    int KzeY3iTNy4n;
    int q2WzB0aFrw;
    trnybXufwI = 0;
    cin >> uxYpkV3Q8c7K;
    for (KzeY3iTNy4n = (160 - 159); KzeY3iTNy4n <= uxYpkV3Q8c7K; KzeY3iTNy4n = KzeY3iTNy4n +(596 - 595)) {
        cin >> sELyu7IHXtmo;
        q2WzB0aFrw = strlen (sELyu7IHXtmo);
        if (!(0 != trnybXufwI)) {
            for (h2LYyn = 0; h2LYyn < q2WzB0aFrw; h2LYyn = h2LYyn + 1)
                cout << *(oAL3bO + h2LYyn);
            trnybXufwI = q2WzB0aFrw;
        }
        else {
            if (trnybXufwI + q2WzB0aFrw + 1 <= (931 - 851)) {
                trnybXufwI = trnybXufwI + q2WzB0aFrw + 1;
                cout << ' ';
                for (h2LYyn = 0; h2LYyn < q2WzB0aFrw; h2LYyn = h2LYyn + 1)
                    cout << *(oAL3bO + h2LYyn);
            }
            else {
                cout << endl << sELyu7IHXtmo;
                trnybXufwI = q2WzB0aFrw;
            }
        }
    }
    return 0;
}

