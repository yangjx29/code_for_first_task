int main () {
    int gvtKyVWMk, rgZuSAV3, r7TMfG, k, len, WXqxZCQD5P;
    char GiZzuw [(1153 - 653)], Lz7hkUILlJs0 [500] [(199 - 194)] = {(157 - 157)}, SVuCiq [500] = {(295 - 295)};
    scanf ("%d", &gvtKyVWMk);
    scanf ("%s", GiZzuw);
    len = strlen (GiZzuw);
    for (rgZuSAV3 = (816 - 816); rgZuSAV3 < len - gvtKyVWMk + (365 - 364); rgZuSAV3++) {
        for (r7TMfG = (392 - 392), k = rgZuSAV3; r7TMfG < gvtKyVWMk; r7TMfG++, k++) {
            Lz7hkUILlJs0[rgZuSAV3][r7TMfG] = GiZzuw[k];
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (rgZuSAV3 = 0; rgZuSAV3 < len - gvtKyVWMk; rgZuSAV3++) {
        for (r7TMfG = rgZuSAV3 + (937 - 936); len - gvtKyVWMk + (78 - 77) > r7TMfG; r7TMfG++) {
            if (strcmp (Lz7hkUILlJs0[rgZuSAV3], Lz7hkUILlJs0[r7TMfG]) == 0)
                SVuCiq[rgZuSAV3]++;
        };
    }
    WXqxZCQD5P = SVuCiq[0];
    for (rgZuSAV3 = 0; rgZuSAV3 < len - gvtKyVWMk; rgZuSAV3++) {
        if (SVuCiq[rgZuSAV3] > WXqxZCQD5P) {
            WXqxZCQD5P = SVuCiq[rgZuSAV3];
        };
    }
    if (WXqxZCQD5P != 0) {
        printf ("%d\n", WXqxZCQD5P +(927 - 926));
        for (rgZuSAV3 = 0; rgZuSAV3 < len - gvtKyVWMk + 1; rgZuSAV3++) {
            if (SVuCiq[rgZuSAV3] == WXqxZCQD5P) {
                for (r7TMfG = 0; r7TMfG < gvtKyVWMk; r7TMfG++) {
                    printf ("%c", Lz7hkUILlJs0[rgZuSAV3][r7TMfG]);
                };
            };
        };
    }
    else
        ;
    return 0;
}

