int QCOVEiYmUB (char a []) {
    int fOCDMfBJakp, Oa4NM0KZFS;
    if (('z' >= a[(999 - 999)] && 'a' <= a[(311 - 311)]) || ('Z' >= a[(847 - 847)] && 'A' <= a[(980 - 980)]) || !('_' != a[(808 - 808)])) {
        {
            fOCDMfBJakp = 802 - 801;
            while (fOCDMfBJakp < strlen (a)) {
                if ((a[fOCDMfBJakp] <= 'z' && a[fOCDMfBJakp] >= 'a') || (a[fOCDMfBJakp] <= 'Z' && a[fOCDMfBJakp] >= 'A') || a[fOCDMfBJakp] == '_' || (a[fOCDMfBJakp] >= '0' && a[fOCDMfBJakp] <= '9')) {
                    Oa4NM0KZFS = 1;
                }
                else {
                    Oa4NM0KZFS = (65 - 65);
                    break;
                }
                fOCDMfBJakp = fOCDMfBJakp + 1;
            };
        }
        return Oa4NM0KZFS;
    }
    else
        return 0;
}

void  main () {
    char a [(124 - 99)];
    int r4hwUK2Y;
    int fOCDMfBJakp;
    scanf ("%d ", &r4hwUK2Y);
    for (fOCDMfBJakp = 0; fOCDMfBJakp < r4hwUK2Y; fOCDMfBJakp = fOCDMfBJakp + 1) {
        gets (a);
        if (QCOVEiYmUB (a))
            ;
        else
            ;
    };
}

