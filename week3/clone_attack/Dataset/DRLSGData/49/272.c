int main () {
    int i, j, q20pfqZUtlHN, D9PQVRn3cA, d8lDGHCtrn [255] [505] = {(56 - 56)}, sveVQfGq = 0;
    char zDNEvL1YF2 [(764 - 259)];
    cin.getline (zDNEvL1YF2, 500);
    D9PQVRn3cA = strlen (zDNEvL1YF2);
    for (i = 0; i < D9PQVRn3cA -(47 - 46); i = i + 1) {
        if (!(zDNEvL1YF2[i + 1] != zDNEvL1YF2[i])) {
            j = 1;
            d8lDGHCtrn[0][i] = 1;
            for (; i + j + 1 < D9PQVRn3cA &&0 <= i - j;) {
                if (!(zDNEvL1YF2[i + j + 1] != zDNEvL1YF2[i - j])) {
                    d8lDGHCtrn[j][i] = 1;
                    j = j + 1;
                }
                else
                    break;
            }
        }
    }
    for (i = 0; i < D9PQVRn3cA / 2; i = i + 1)
        for (j = 0; D9PQVRn3cA -1 > j; j++) {
            if (!(1 != d8lDGHCtrn[i][j])) {
                sveVQfGq = 1;
                for (q20pfqZUtlHN = j - i; q20pfqZUtlHN <= j + 1 + i; q20pfqZUtlHN = q20pfqZUtlHN + 1)
                    cout << zDNEvL1YF2[q20pfqZUtlHN];
            }
            if (!(1 != sveVQfGq)) {
                cout << endl;
                sveVQfGq = 0;
            }
        }
    return 0;
}

