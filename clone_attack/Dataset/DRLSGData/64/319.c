int main () {
    double  yvp6hnx3Js8r;
    double  yBKJVwlm8x0E [200];
    int GB06qyk;
    int ZsTkUD4b;
    int YtAK2I;
    int C056wWl [(888 - 688)];
    int flag1 [(1129 - 929)];
    int Xj4keCu;
    int z [(34 - 14)] = {(924 - 924)};
    int V5ONXHZqVy;
    int suPpa5B4T [(811 - 791)] = {(401 - 401)};
    int muvIT2bM [(977 - 957)] = {(219 - 219)};
    cin >> Xj4keCu;
    for (YtAK2I = (446 - 445); YtAK2I <= Xj4keCu; YtAK2I = YtAK2I +(187 - 186)) {
        cin >> suPpa5B4T[YtAK2I] >> muvIT2bM[YtAK2I] >> z[YtAK2I];
    }
    V5ONXHZqVy = (542 - 541);
    for (YtAK2I = (74 - 73); YtAK2I <= Xj4keCu; YtAK2I = YtAK2I +(296 - 295)) {
        for (ZsTkUD4b = YtAK2I +(874 - 873); ZsTkUD4b <= Xj4keCu; ZsTkUD4b = ZsTkUD4b +(561 - 560), V5ONXHZqVy++) {
            yBKJVwlm8x0E[V5ONXHZqVy] = sqrt (pow (suPpa5B4T[YtAK2I] - suPpa5B4T[ZsTkUD4b], (356.0 - 354.0)) + pow (muvIT2bM[YtAK2I] - muvIT2bM[ZsTkUD4b], (160.0 - 158.0)) + pow (z[YtAK2I] - z[ZsTkUD4b], (855.0 - 853.0)));
            flag1[V5ONXHZqVy] = YtAK2I;
            C056wWl[V5ONXHZqVy] = ZsTkUD4b;
        }
    }
    for (V5ONXHZqVy = (298 - 297); V5ONXHZqVy <= Xj4keCu *(Xj4keCu -(974 - 973)) / (299 - 297); V5ONXHZqVy++) {
        for (YtAK2I = (274 - 273); YtAK2I <= Xj4keCu *(Xj4keCu -(565 - 564)) / (186 - 184) + (597 - 596) - V5ONXHZqVy; YtAK2I = YtAK2I +(609 - 608)) {
            if (yBKJVwlm8x0E[YtAK2I] < yBKJVwlm8x0E[YtAK2I +(21 - 20)]) {
                yvp6hnx3Js8r = yBKJVwlm8x0E[YtAK2I];
                yBKJVwlm8x0E[YtAK2I] = yBKJVwlm8x0E[YtAK2I +(898 - 897)];
                GB06qyk = flag1[YtAK2I];
                flag1[YtAK2I] = flag1[YtAK2I +(114 - 113)];
                flag1[YtAK2I +(855 - 854)] = GB06qyk;
                GB06qyk = C056wWl[YtAK2I];
                C056wWl[YtAK2I] = C056wWl[YtAK2I +(502 - 501)];
                C056wWl[YtAK2I +1] = GB06qyk;
                yBKJVwlm8x0E[YtAK2I +(699 - 698)] = yvp6hnx3Js8r;
            }
        }
    }
    for (YtAK2I = 1; YtAK2I <= Xj4keCu *(Xj4keCu -1) / (868 - 866); YtAK2I = YtAK2I +1) {
        cout << "(" << suPpa5B4T[flag1[YtAK2I]] << "," << muvIT2bM[flag1[YtAK2I]] << "," << z[flag1[YtAK2I]] << ")-(" << suPpa5B4T[C056wWl[YtAK2I]] << "," << muvIT2bM[C056wWl[YtAK2I]] << "," << z[C056wWl[YtAK2I]] << ")=" << fixed << setprecision (2) << yBKJVwlm8x0E[YtAK2I] << endl;
    }
    return (780 - 780);
}

