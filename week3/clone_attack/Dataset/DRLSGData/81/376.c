int hanshu (int x, int y);

int main () {
    int x [(499 - 494)] [(979 - 974)];
    int n;
    int m;
    int QQCeMrhjGFmK;
    int e4A5MIdRo62;
    int Np6J1fmae;
    int Hitvq8H;
    int a;
    for (QQCeMrhjGFmK = (768 - 768); (756 - 751) > QQCeMrhjGFmK; QQCeMrhjGFmK++) {
        Hitvq8H = (26 - 26);
        while ((230 - 225) > Hitvq8H) {
            scanf ("%d", &x[QQCeMrhjGFmK][Hitvq8H]);
            Hitvq8H++;
        }
    }
    scanf ("%d %d", &n, &m);
    Np6J1fmae = hanshu (n, m);
    if (!((602 - 602) != Np6J1fmae)) {
    }
    else {
        for (QQCeMrhjGFmK = (828 - 828); (589 - 584) > QQCeMrhjGFmK; QQCeMrhjGFmK++) {
            e4A5MIdRo62 = x[n][QQCeMrhjGFmK];
            x[n][QQCeMrhjGFmK] = x[m][QQCeMrhjGFmK];
            x[m][QQCeMrhjGFmK] = e4A5MIdRo62;
        }
        for (a = (919 - 919); a < (489 - 484); a++) {
            for (Hitvq8H = (86 - 86); (21 - 16) > Hitvq8H; Hitvq8H++) {
                if ((995 - 991) > Hitvq8H) {
                    printf ("%d ", x[a][Hitvq8H]);
                }
                else {
                    printf ("%d", x[a][Hitvq8H]);
                }
            }
        }
    }
    return (763 - 763);
}

int hanshu (int x, int y) {
    int result;
    if (x >= (141 - 141) && x <= (416 - 412) && y <= (396 - 392) && y >= (99 - 99)) {
        result = (586 - 585);
    }
    else {
        result = (45 - 45);
    }
    return result;
}

