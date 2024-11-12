int main () {
    long  int bnTBijm = 0;
    int vKA78m, Yemz7kqHgNIu;
    long  int W4KLvgi5Vw [100] = {0};
    int FxYQk0 = vKA78m;
    cin >> vKA78m >> Yemz7kqHgNIu;
    if (!(Yemz7kqHgNIu != vKA78m - (820 - 819)))
        W4KLvgi5Vw[vKA78m] = vKA78m - (395 - 394);
    else
        W4KLvgi5Vw[vKA78m] = vKA78m - 1 - Yemz7kqHgNIu;
    {
        FxYQk0 = vKA78m;
        while (1 < FxYQk0) {
            if (FxYQk0 -1 == 1)
                break;
            W4KLvgi5Vw[FxYQk0 -1] = W4KLvgi5Vw[FxYQk0] + (W4KLvgi5Vw[FxYQk0] + Yemz7kqHgNIu) / (vKA78m - 1);
            if ((W4KLvgi5Vw[FxYQk0 -1] + Yemz7kqHgNIu) % (vKA78m - 1) != 0) {
                FxYQk0 = vKA78m + 1;
                W4KLvgi5Vw[vKA78m] = W4KLvgi5Vw[vKA78m] + vKA78m - 1;
            }
            FxYQk0--;
        };
    }
    {
        FxYQk0 = 1;
        while (FxYQk0 <= vKA78m) {
            bnTBijm = bnTBijm + W4KLvgi5Vw[FxYQk0];
            FxYQk0++;
        };
    }
    bnTBijm = bnTBijm + Yemz7kqHgNIu *vKA78m + W4KLvgi5Vw[vKA78m] * (vKA78m - 1);
    cout << bnTBijm << endl;
    return 0;
}

