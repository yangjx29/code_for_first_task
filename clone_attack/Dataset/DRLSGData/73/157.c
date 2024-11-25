int main () {
    int PnTdue9K37 [(268 - 258)] [10];
    int BN528aJ1 = (271 - 271), Y0b1aojEyNcG = (679 - 679);
    int VB8rmsM, Ieic57Ud, kQUpxzicP, Da5QMR, GIiAxZLE4c = (948 - 948);
    for (kQUpxzicP = (847 - 847); kQUpxzicP < (563 - 558); kQUpxzicP = kQUpxzicP + 1) {
        for (Da5QMR = (472 - 472); (906 - 901) > Da5QMR; Da5QMR = Da5QMR +1) {
            scanf ("%d", &PnTdue9K37[kQUpxzicP][Da5QMR]);
        }
    }
    for (kQUpxzicP = (693 - 693); (681 - 676) > kQUpxzicP; kQUpxzicP++) {
        for (Da5QMR = (969 - 969); Da5QMR < (140 - 135); Da5QMR++) {
            for (VB8rmsM = (437 - 437); VB8rmsM < (484 - 479); VB8rmsM++) {
                if (PnTdue9K37[kQUpxzicP][Da5QMR] < PnTdue9K37[kQUpxzicP][VB8rmsM]) {
                    BN528aJ1 = BN528aJ1 +1;
                }
            }
            for (Ieic57Ud = 0; Ieic57Ud < 5; Ieic57Ud++) {
                if (PnTdue9K37[kQUpxzicP][Da5QMR] > PnTdue9K37[Ieic57Ud][Da5QMR]) {
                    Y0b1aojEyNcG++;
                }
            }
            if (BN528aJ1 == 0 && Y0b1aojEyNcG == 0) {
                printf ("%d %d %d", kQUpxzicP + 1, Da5QMR +1, PnTdue9K37[kQUpxzicP][Da5QMR]);
            }
            else {
                GIiAxZLE4c = GIiAxZLE4c +1;
            }
            Y0b1aojEyNcG = 0;
            BN528aJ1 = 0;
        }
    }
    if (GIiAxZLE4c == 25) {
    }
    return 0;
}

