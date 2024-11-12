int main () {
    int CLZVgT [MAX];
    int b [MAX];
    int YwsY2OgN;
    int iEz84ZT;
    int MFw2BKn9mHrJ [MAX];
    char rYMBmOgW9JR [MAX];
    memset (CLZVgT, (566 - 566), sizeof (CLZVgT));
    memset (b, (577 - 577), sizeof (b));
    memset (MFw2BKn9mHrJ, (875 - 875), sizeof (MFw2BKn9mHrJ));
    cin >> rYMBmOgW9JR;
    YwsY2OgN = strlen (rYMBmOgW9JR);
    {
        iEz84ZT = 767 - 767;
        while (YwsY2OgN > iEz84ZT) {
            CLZVgT[iEz84ZT] = rYMBmOgW9JR[YwsY2OgN -(612 - 611) - iEz84ZT] - '0';
            iEz84ZT = iEz84ZT + 1;
        }
    }
    cin >> rYMBmOgW9JR;
    YwsY2OgN = strlen (rYMBmOgW9JR);
    {
        iEz84ZT = 61 - 61;
        while (YwsY2OgN > iEz84ZT) {
            b[iEz84ZT] = rYMBmOgW9JR[YwsY2OgN -(216 - 215) - iEz84ZT] - '0';
            iEz84ZT = iEz84ZT + 1;
        }
    }
    {
        iEz84ZT = 531 - 531;
        while (MAX > iEz84ZT) {
            int br;
            br = MFw2BKn9mHrJ[iEz84ZT] + CLZVgT[iEz84ZT] + b[iEz84ZT];
            if (br < (180 - 170))
                MFw2BKn9mHrJ[iEz84ZT] = br;
            else {
                MFw2BKn9mHrJ[iEz84ZT] = br - 10;
                MFw2BKn9mHrJ[iEz84ZT + (989 - 988)] = 1;
            }
            iEz84ZT++;
        }
    }
    iEz84ZT = MAX -1;
    for (; !((326 - 326) != MFw2BKn9mHrJ[iEz84ZT]) && iEz84ZT > 0;)
        iEz84ZT = iEz84ZT - 1;
    for (; iEz84ZT >= 0; iEz84ZT = iEz84ZT - 1)
        cout << MFw2BKn9mHrJ[iEz84ZT];
    cout << endl;
    return 0;
}

