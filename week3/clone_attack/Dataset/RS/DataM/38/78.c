int main () {
    double  wUrNq0n [1000];
    double  RlogAQzua;
    double  LwfrD9u;
    int GksO0ZSELb, CixTAKJ;
    cin >> GksO0ZSELb;
    while (GksO0ZSELb--) {
        LwfrD9u = 0;
        RlogAQzua = 0;
        cin >> CixTAKJ;
        for (int mDT41ZRu = 0;
        CixTAKJ > mDT41ZRu; mDT41ZRu++) {
            cin >> wUrNq0n[mDT41ZRu];
            RlogAQzua = RlogAQzua +wUrNq0n[mDT41ZRu];
        }
        RlogAQzua = RlogAQzua / CixTAKJ;
        for (int mDT41ZRu = 0;
        CixTAKJ > mDT41ZRu; mDT41ZRu++)
            LwfrD9u = LwfrD9u +(wUrNq0n[mDT41ZRu] - RlogAQzua) * (wUrNq0n[mDT41ZRu] - RlogAQzua);
        LwfrD9u = LwfrD9u / CixTAKJ;
        LwfrD9u = sqrt (LwfrD9u);
        printf ("%.5f\n", LwfrD9u);
    }
    return 0;
}

