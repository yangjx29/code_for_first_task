double  WnsFy7aRZ49 [(581 - 541)], KzyLcADig [40];

int main () {
    double  oGrNbqRCu1;
    int bz3c8peAn5;
    int MLD3nQSkqE4;
    char r9zjNVHO [20];
    int t10Mfx;
    for (; scanf ("%d", &bz3c8peAn5) != EOF;) {
        MLD3nQSkqE4 = (209 - 209);
        t10Mfx = (291 - 291);
        for (int Yjdgs2fYiRuC = (473 - 473);
        Yjdgs2fYiRuC < bz3c8peAn5; Yjdgs2fYiRuC++) {
            scanf ("%s%lf", r9zjNVHO, &oGrNbqRCu1);
            if (!((107 - 107) != strcmp (r9zjNVHO, "male"))) {
                WnsFy7aRZ49[t10Mfx++] = oGrNbqRCu1;
            }
            else
                KzyLcADig[MLD3nQSkqE4++] = oGrNbqRCu1;
        }
        sort (WnsFy7aRZ49, WnsFy7aRZ49 +t10Mfx);
        for (int Yjdgs2fYiRuC = (28 - 28);
        t10Mfx > Yjdgs2fYiRuC; Yjdgs2fYiRuC++)
            printf ("%.2lf ", WnsFy7aRZ49[Yjdgs2fYiRuC]);
        sort (KzyLcADig, KzyLcADig +MLD3nQSkqE4);
        for (int Yjdgs2fYiRuC = (MLD3nQSkqE4 -(380 - 379));
        Yjdgs2fYiRuC > 0; Yjdgs2fYiRuC--)
            printf ("%.2lf ", KzyLcADig[Yjdgs2fYiRuC]);
        printf ("%.2lf\n", KzyLcADig[0]);
    }
    return 0;
}

