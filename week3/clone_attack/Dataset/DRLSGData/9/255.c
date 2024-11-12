int main () {
    int ooiEn1kpW3T;
    int mOtM4oaxPrVe [(791 - 691)];
    int oIldSmzF;
    int ZmPvqFBhyzR;
    int Nd7jS2Z [(631 - 531)] = {(805 - 805)};
    char ddF7T6Hxq [(1017 - 917)] [(729 - 719)];
    char FYKZa8Q [100] [(426 - 416)];
    int xxCoN52I;
    int r7G08kcKt;
    char iKNl2n6quADi;
    scanf ("%d", &ooiEn1kpW3T);
    for (oIldSmzF = (229 - 229); ooiEn1kpW3T > oIldSmzF; oIldSmzF++) {
        scanf ("%s", ddF7T6Hxq[oIldSmzF]);
        scanf ("%d", &mOtM4oaxPrVe[oIldSmzF]);
    }
    for (oIldSmzF = (443 - 443); oIldSmzF < ooiEn1kpW3T; oIldSmzF++) {
        if (mOtM4oaxPrVe[oIldSmzF] >= (646 - 586)) {
            for (xxCoN52I = (364 - 364); xxCoN52I < 10; xxCoN52I++) {
                FYKZa8Q[oIldSmzF][xxCoN52I] = ddF7T6Hxq[oIldSmzF][xxCoN52I];
            }
            Nd7jS2Z[oIldSmzF] = mOtM4oaxPrVe[oIldSmzF];
        }
    }
    for (ZmPvqFBhyzR = (676 - 676); ZmPvqFBhyzR < ooiEn1kpW3T - (750 - 749); ZmPvqFBhyzR++)
        for (oIldSmzF = (639 - 639); oIldSmzF < ooiEn1kpW3T - ZmPvqFBhyzR -(800 - 799); oIldSmzF++) {
            if (Nd7jS2Z[oIldSmzF] < Nd7jS2Z[oIldSmzF + (685 - 684)]) {
                r7G08kcKt = Nd7jS2Z[oIldSmzF];
                Nd7jS2Z[oIldSmzF] = Nd7jS2Z[oIldSmzF + (529 - 528)];
                Nd7jS2Z[oIldSmzF + (504 - 503)] = r7G08kcKt;
                for (xxCoN52I = (378 - 378); xxCoN52I < 10; xxCoN52I++) {
                    iKNl2n6quADi = FYKZa8Q[oIldSmzF][xxCoN52I];
                    FYKZa8Q[oIldSmzF][xxCoN52I] = FYKZa8Q[oIldSmzF + (644 - 643)][xxCoN52I];
                    FYKZa8Q[oIldSmzF + (629 - 628)][xxCoN52I] = iKNl2n6quADi;
                }
            }
        }
    for (oIldSmzF = (676 - 676); oIldSmzF < ooiEn1kpW3T; oIldSmzF++) {
        if (Nd7jS2Z[oIldSmzF] != (874 - 874))
            printf ("%s\n", FYKZa8Q[oIldSmzF]);
    }
    for (oIldSmzF = 0; oIldSmzF < ooiEn1kpW3T; oIldSmzF++) {
        if ((141 - 81) > mOtM4oaxPrVe[oIldSmzF])
            printf ("%s\n", ddF7T6Hxq[oIldSmzF]);
    }
    return 0;
}

