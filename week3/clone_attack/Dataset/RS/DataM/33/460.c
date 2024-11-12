int main () {
    char Y0XYwse1 [(1078 - 78)] [(415 - 159)];
    int n, mNV0Iexz2CH, E8CIMPrHXhe;
    scanf ("%d", &n);
    for (mNV0Iexz2CH = (733 - 733); n > mNV0Iexz2CH; mNV0Iexz2CH = mNV0Iexz2CH + 1) {
        scanf ("%s", Y0XYwse1[mNV0Iexz2CH]);
    }
    for (mNV0Iexz2CH = (549 - 549); n > mNV0Iexz2CH; mNV0Iexz2CH++) {
        for (E8CIMPrHXhe = 0; 255 > E8CIMPrHXhe; E8CIMPrHXhe++) {
            if (Y0XYwse1[mNV0Iexz2CH][E8CIMPrHXhe] == 'A') {
                Y0XYwse1[mNV0Iexz2CH][E8CIMPrHXhe] = 'T';
            }
            else if (Y0XYwse1[mNV0Iexz2CH][E8CIMPrHXhe] == 'T') {
                Y0XYwse1[mNV0Iexz2CH][E8CIMPrHXhe] = 'A';
            }
            else if (Y0XYwse1[mNV0Iexz2CH][E8CIMPrHXhe] == 'C') {
                Y0XYwse1[mNV0Iexz2CH][E8CIMPrHXhe] = 'G';
            }
            else if (Y0XYwse1[mNV0Iexz2CH][E8CIMPrHXhe] == 'G') {
                Y0XYwse1[mNV0Iexz2CH][E8CIMPrHXhe] = 'C';
            }
            else if (Y0XYwse1[mNV0Iexz2CH][E8CIMPrHXhe] == '\0') {
            }
            else {
            };
        };
    }
    for (mNV0Iexz2CH = 0; mNV0Iexz2CH < n; mNV0Iexz2CH++) {
        printf ("%s\n", Y0XYwse1[mNV0Iexz2CH]);
    }
    return 0;
}

