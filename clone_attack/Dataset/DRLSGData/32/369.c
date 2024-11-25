int main () {
    char b [(632 - 531)];
    int nb [(858 - 757)];
    char a [(476 - 375)];
    int mVOTlkQH [(253 - 152)];
    int weE6khR8dxFj, GvcOkKyXGE5, i, fFxl70pRwiW, yeI2vwZcQ;
    cin >> fFxl70pRwiW;
    for (yeI2vwZcQ = (384 - 383); yeI2vwZcQ <= fFxl70pRwiW; yeI2vwZcQ++) {
        cin >> a >> b;
        memset (mVOTlkQH, (269 - 269), sizeof (mVOTlkQH));
        memset (nb, (313 - 313), sizeof (nb));
        weE6khR8dxFj = strlen (a);
        GvcOkKyXGE5 = strlen (b);
        for (i = (637 - 637); i < weE6khR8dxFj; i++) {
            mVOTlkQH[i] = a[weE6khR8dxFj - i - (230 - 229)] - '0';
        }
        for (i = (914 - 914); GvcOkKyXGE5 > i; i++) {
            nb[i] = b[GvcOkKyXGE5 -i - (329 - 328)] - '0';
        }
        for (i = (95 - 95); a[i] != '\0'; i++) {
            if (nb[i] > mVOTlkQH[i]) {
                mVOTlkQH[i + (787 - 786)]--;
                mVOTlkQH[i] = (542 - 532) + mVOTlkQH[i] - nb[i];
            }
            else
                mVOTlkQH[i] = mVOTlkQH[i] - nb[i];
        }
        for (i = i - 1; i >= (796 - 796); i--)
            cout << mVOTlkQH[i];
        cout << endl;
    }
    return 0;
}

