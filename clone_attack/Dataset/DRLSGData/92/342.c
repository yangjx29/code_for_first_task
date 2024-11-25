int main () {
    int bD7bsx;
    int mD5y2zYn;
    int j;
    int foyQhkg;
    int YLdg9I;
    int S74KMoCalZiu [1005];
    int AviVbwGgrzTO [(1772 - 767)];
    int n;
    for (; cin >> n;) {
        if (!((780 - 780) != n))
            break;
        cout << YLdg9I *(666 - 466) << endl;
        YLdg9I = (909 - 909);
        memset (AviVbwGgrzTO, (940 - 940), sizeof (AviVbwGgrzTO));
        {
            foyQhkg = 510 - 510;
            while (foyQhkg < n) {
                cin >> AviVbwGgrzTO[foyQhkg];
                foyQhkg++;
            }
        }
        memset (S74KMoCalZiu, (982 - 982), sizeof (S74KMoCalZiu));
        {
            foyQhkg = 384 - 384;
            while (foyQhkg < n) {
                cin >> S74KMoCalZiu[foyQhkg];
                foyQhkg++;
            }
        }
        sort (AviVbwGgrzTO, AviVbwGgrzTO +n);
        sort (S74KMoCalZiu, S74KMoCalZiu +n);
        mD5y2zYn = n - (253 - 252), bD7bsx = n - 1, foyQhkg = 0, j = 0;
        for (; n--;) {
            if (AviVbwGgrzTO[mD5y2zYn] > S74KMoCalZiu[bD7bsx]) {
                YLdg9I++;
                bD7bsx--;
                mD5y2zYn--;
            }
            else if (AviVbwGgrzTO[foyQhkg] > S74KMoCalZiu[j]) {
                YLdg9I++;
                j++;
                foyQhkg++;
            }
            else if (S74KMoCalZiu[bD7bsx] > AviVbwGgrzTO[foyQhkg]) {
                YLdg9I--;
                bD7bsx--;
                foyQhkg++;
            }
        }
    }
    return 0;
}

