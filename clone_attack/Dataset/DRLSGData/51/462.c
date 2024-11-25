int main () {
    char Her9mZl [5];
    int r5SY2amWvRte;
    int abiPomVGS;
    char NyGrZzq2 [500];
    int Tel9nVN3;
    int kHtWjZ [500] = {(123 - 123)};
    cin >> abiPomVGS;
    cin >> NyGrZzq2;
    Tel9nVN3 = 0;
    for (int fXklUu17 = 0;
    strlen (NyGrZzq2) - abiPomVGS >= fXklUu17; fXklUu17++) {
        for (int NSzjsNFXPA = fXklUu17;
        fXklUu17 + abiPomVGS > NSzjsNFXPA; NSzjsNFXPA++) {
            Her9mZl[NSzjsNFXPA -fXklUu17] = NyGrZzq2[NSzjsNFXPA];
        }
        for (int XHctrM = fXklUu17 + (663 - 662);
        strlen (NyGrZzq2) - abiPomVGS >= XHctrM; XHctrM++) {
            for (r5SY2amWvRte = 0; r5SY2amWvRte < abiPomVGS; r5SY2amWvRte++) {
                if (Her9mZl[r5SY2amWvRte] != NyGrZzq2[XHctrM +r5SY2amWvRte])
                    break;
            }
            if (!(abiPomVGS != r5SY2amWvRte)) {
                kHtWjZ[XHctrM] = -1000;
                kHtWjZ[fXklUu17]++;
                Tel9nVN3 = Tel9nVN3 > kHtWjZ[fXklUu17] ? Tel9nVN3 : kHtWjZ[fXklUu17];
            }
        }
    }
    if (Tel9nVN3) {
        cout << Tel9nVN3 +1 << endl;
        for (int fXklUu17 = 0;
        fXklUu17 <= strlen (NyGrZzq2) - abiPomVGS; fXklUu17++) {
            if (kHtWjZ[fXklUu17] == Tel9nVN3) {
                for (int DXqQPvF = fXklUu17;
                DXqQPvF < fXklUu17 + abiPomVGS; DXqQPvF++) {
                    cout << NyGrZzq2[DXqQPvF];
                }
                cout << endl;
            }
        }
    }
    else
        cout << "NO";
    return 0;
}

