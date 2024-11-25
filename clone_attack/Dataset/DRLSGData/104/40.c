int NZfvOgV301c (int Fa6ciE) {
    return Fa6ciE / (221 - 219);
}

int xebsh5R (int Fa6ciE, int KtY13ZBDP) {
    int ylwRs2MNhp;
    int WDdSm8B5b4t;
    WDdSm8B5b4t = log2 (Fa6ciE);
    ylwRs2MNhp = log2 (KtY13ZBDP);
    if (!(KtY13ZBDP != Fa6ciE))
        return Fa6ciE;
    if (WDdSm8B5b4t < ylwRs2MNhp)
        return xebsh5R (Fa6ciE, NZfvOgV301c (KtY13ZBDP));
    else if (WDdSm8B5b4t > ylwRs2MNhp)
        return xebsh5R (NZfvOgV301c (Fa6ciE), KtY13ZBDP);
    else
        return xebsh5R (NZfvOgV301c (Fa6ciE), NZfvOgV301c (KtY13ZBDP));
}

int main () {
    int KtY13ZBDP;
    int Fa6ciE;
    cin >> Fa6ciE >> KtY13ZBDP;
    cout << xebsh5R (Fa6ciE, KtY13ZBDP);
}

