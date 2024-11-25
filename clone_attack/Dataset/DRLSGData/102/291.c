int main () {
    char bTjmIsu [10];
    int OSq3pw2I8z;
    int PdRXAwEKk0r;
    int M3USxzwY;
    int BmtgWZ2u;
    int F9mDeRk5vLi;
    float lvHJ1YCqyjVc [(97 - 95)] [40] = {(763 - 763)};
    float Fjg6KG51lw;
    M3USxzwY = (243 - 243);
    PdRXAwEKk0r = (297 - 297);
    scanf ("%d\n", &OSq3pw2I8z);
    for (BmtgWZ2u = (898 - 898); OSq3pw2I8z > BmtgWZ2u; BmtgWZ2u = BmtgWZ2u +(701 - 700)) {
        scanf ("%s %f", bTjmIsu, &Fjg6KG51lw);
        if (strcmp (bTjmIsu, "male") == (98 - 98)) {
            lvHJ1YCqyjVc[(456 - 456)][M3USxzwY] = Fjg6KG51lw;
            M3USxzwY = M3USxzwY +(11 - 10);
        }
        else {
            lvHJ1YCqyjVc[(745 - 744)][PdRXAwEKk0r] = Fjg6KG51lw;
            PdRXAwEKk0r = PdRXAwEKk0r +(796 - 795);
        }
    }
    for (BmtgWZ2u = (973 - 973); M3USxzwY > BmtgWZ2u; BmtgWZ2u = BmtgWZ2u +(799 - 798)) {
        for (F9mDeRk5vLi = BmtgWZ2u; F9mDeRk5vLi < M3USxzwY; F9mDeRk5vLi = F9mDeRk5vLi +(533 - 532)) {
            if (lvHJ1YCqyjVc[(770 - 770)][BmtgWZ2u] > lvHJ1YCqyjVc[(209 - 209)][F9mDeRk5vLi]) {
                Fjg6KG51lw = lvHJ1YCqyjVc[0][BmtgWZ2u];
                lvHJ1YCqyjVc[0][BmtgWZ2u] = lvHJ1YCqyjVc[0][F9mDeRk5vLi];
                lvHJ1YCqyjVc[0][F9mDeRk5vLi] = Fjg6KG51lw;
            }
        }
    }
    for (BmtgWZ2u = 0; PdRXAwEKk0r > BmtgWZ2u; BmtgWZ2u = BmtgWZ2u +1) {
        for (F9mDeRk5vLi = BmtgWZ2u; F9mDeRk5vLi < PdRXAwEKk0r; F9mDeRk5vLi = F9mDeRk5vLi +1) {
            if (lvHJ1YCqyjVc[1][F9mDeRk5vLi] > lvHJ1YCqyjVc[1][BmtgWZ2u]) {
                Fjg6KG51lw = lvHJ1YCqyjVc[1][BmtgWZ2u];
                lvHJ1YCqyjVc[1][BmtgWZ2u] = lvHJ1YCqyjVc[1][F9mDeRk5vLi];
                lvHJ1YCqyjVc[1][F9mDeRk5vLi] = Fjg6KG51lw;
            }
        }
    }
    for (BmtgWZ2u = 0; BmtgWZ2u < M3USxzwY; BmtgWZ2u = BmtgWZ2u +1) {
        if (BmtgWZ2u == 0)
            printf ("%.2f", lvHJ1YCqyjVc[0][BmtgWZ2u]);
        else
            printf (" %.2f", lvHJ1YCqyjVc[0][BmtgWZ2u]);
    }
    for (BmtgWZ2u = 0; BmtgWZ2u < PdRXAwEKk0r; BmtgWZ2u = BmtgWZ2u +1) {
        printf (" %.2f", lvHJ1YCqyjVc[1][BmtgWZ2u]);
    }
    return 0;
}

