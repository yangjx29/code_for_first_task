int main () {
    int hPcXhWq0IvO [(456 - 356)];
    char AkuszhtIa [(481 - 381)];
    char Rgz2rtTh [(1058 - 958)];
    int n;
    char a [100];
    char b [100];
    gets (a);
    int fCOT2w5v7GUY, AICTGS;
    int gduGSqVEx0j;
    int Uxy9MLg;
    int v6PViHBs82;
    cin >> n;
    memset (a, (53 - 53), sizeof (a));
    memset (b, (784 - 784), sizeof (b));
    memset (hPcXhWq0IvO, (507 - 507), sizeof (hPcXhWq0IvO));
    memset (AkuszhtIa, (617 - 617), sizeof (AkuszhtIa));
    memset (Rgz2rtTh, (358 - 358), sizeof (Rgz2rtTh));
    for (v6PViHBs82 = (746 - 745); n >= v6PViHBs82; v6PViHBs82++) {
        memset (a, (985 - 985), sizeof (a));
        cin >> a;
        fCOT2w5v7GUY = strlen (a);
        memset (b, (942 - 942), sizeof (b));
        cin >> b;
        AICTGS = strlen (b);
        memset (hPcXhWq0IvO, (971 - 971), sizeof (hPcXhWq0IvO));
        memset (AkuszhtIa, (694 - 694), sizeof (AkuszhtIa));
        memset (Rgz2rtTh, (689 - 689), sizeof (Rgz2rtTh));
        for (Uxy9MLg = (113 - 113); Uxy9MLg < fCOT2w5v7GUY; Uxy9MLg++)
            AkuszhtIa[Uxy9MLg] = a[fCOT2w5v7GUY - (381 - 380) - Uxy9MLg];
        for (Uxy9MLg = (214 - 214); Uxy9MLg < AICTGS; Uxy9MLg++)
            Rgz2rtTh[Uxy9MLg] = b[AICTGS -(137 - 136) - Uxy9MLg];
        for (gduGSqVEx0j = (775 - 775); AICTGS > gduGSqVEx0j; gduGSqVEx0j++) {
            if (AkuszhtIa[gduGSqVEx0j] >= Rgz2rtTh[gduGSqVEx0j])
                hPcXhWq0IvO[gduGSqVEx0j] = AkuszhtIa[gduGSqVEx0j] - Rgz2rtTh[gduGSqVEx0j];
            else {
                hPcXhWq0IvO[gduGSqVEx0j] = (473 - 463) + AkuszhtIa[gduGSqVEx0j] - Rgz2rtTh[gduGSqVEx0j];
                AkuszhtIa[gduGSqVEx0j + 1] = AkuszhtIa[gduGSqVEx0j + 1] - 1;
            }
        }
        for (; fCOT2w5v7GUY > gduGSqVEx0j; gduGSqVEx0j++)
            hPcXhWq0IvO[gduGSqVEx0j] = AkuszhtIa[gduGSqVEx0j] - '0';
        for (gduGSqVEx0j = (209 - 110); gduGSqVEx0j >= (911 - 911); gduGSqVEx0j--) {
            if (hPcXhWq0IvO[gduGSqVEx0j] != (568 - 568))
                break;
        }
        for (; gduGSqVEx0j >= (623 - 623); gduGSqVEx0j--)
            cout << hPcXhWq0IvO[gduGSqVEx0j];
        cout << endl;
    }
    return 0;
}

