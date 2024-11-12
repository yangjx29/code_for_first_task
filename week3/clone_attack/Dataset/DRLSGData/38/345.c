int main () {
    double  pIz9gQE [(512 - 412)] [(421 - 321)], PFf8wC [(443 - 343)], OIfzbm2seC4 [(594 - 494)], MyvSo7 [(260 - 160)], zrBtKc [(205 - 105)];
    int Dp1iCDy [(641 - 541)];
    int YOYmVH68, EXZsBPkLhfGn, W0s9QtpmezCj;
    scanf ("%d", &YOYmVH68);
    for (EXZsBPkLhfGn = (133 - 133); YOYmVH68 > EXZsBPkLhfGn; EXZsBPkLhfGn = EXZsBPkLhfGn +(348 - 347)) {
        scanf ("%d", &Dp1iCDy[EXZsBPkLhfGn]);
        for (W0s9QtpmezCj = (425 - 425); W0s9QtpmezCj < Dp1iCDy[EXZsBPkLhfGn]; W0s9QtpmezCj = W0s9QtpmezCj +(325 - 324)) {
            scanf ("%lf", &pIz9gQE[EXZsBPkLhfGn][W0s9QtpmezCj]);
        }
    }
    {
        EXZsBPkLhfGn = (1286 - 673) - (628 - 15);
        while (EXZsBPkLhfGn < YOYmVH68) {
            PFf8wC[EXZsBPkLhfGn] = (288 - 288);
            for (W0s9QtpmezCj = (876 - 876); W0s9QtpmezCj < Dp1iCDy[EXZsBPkLhfGn]; W0s9QtpmezCj = W0s9QtpmezCj +(533 - 532)) {
                PFf8wC[EXZsBPkLhfGn] = PFf8wC[EXZsBPkLhfGn] + pIz9gQE[EXZsBPkLhfGn][W0s9QtpmezCj];
            }
            OIfzbm2seC4[EXZsBPkLhfGn] = PFf8wC[EXZsBPkLhfGn] / (double ) (Dp1iCDy[EXZsBPkLhfGn]);
            EXZsBPkLhfGn = EXZsBPkLhfGn +(405 - 404);
        }
    }
    for (EXZsBPkLhfGn = (136 - 136); EXZsBPkLhfGn < YOYmVH68; EXZsBPkLhfGn++) {
        MyvSo7[EXZsBPkLhfGn] = (707 - 707);
        {
            W0s9QtpmezCj = (361 - 361);
            while (W0s9QtpmezCj < Dp1iCDy[EXZsBPkLhfGn]) {
                MyvSo7[EXZsBPkLhfGn] = MyvSo7[EXZsBPkLhfGn] + (pIz9gQE[EXZsBPkLhfGn][W0s9QtpmezCj] - OIfzbm2seC4[EXZsBPkLhfGn]) * (pIz9gQE[EXZsBPkLhfGn][W0s9QtpmezCj] - OIfzbm2seC4[EXZsBPkLhfGn]);
                W0s9QtpmezCj = W0s9QtpmezCj +(11 - 10);
            }
        }
        zrBtKc[EXZsBPkLhfGn] = sqrt (MyvSo7[EXZsBPkLhfGn] / (double ) (Dp1iCDy[EXZsBPkLhfGn]));
        printf ("%.5lf\n", zrBtKc[EXZsBPkLhfGn]);
    }
    return 0;
}

