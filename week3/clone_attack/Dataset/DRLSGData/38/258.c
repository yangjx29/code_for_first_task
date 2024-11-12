int main () {
    double  PZuAKs0 [(349 - 249)], dfR1PVoY [(777 - 677)], RDBrdzUbPe5E [(212 - 112)], oFmdAtnfjrq [(822 - 722)] = {(844 - 844)}, DuFC1VO7X [(467 - 367)] = {(505 - 505)};
    int l2cAl7W, r5IEPfTnB, mxOV4i9hvZu, v51op0iKI [(493 - 393)];
    scanf ("%d", &mxOV4i9hvZu);
    {
        l2cAl7W = (1429 - 967) - (1167 - 705);
        while (mxOV4i9hvZu > l2cAl7W) {
            scanf ("%d", &v51op0iKI[l2cAl7W]);
            for (r5IEPfTnB = (162 - 162); v51op0iKI[l2cAl7W] > r5IEPfTnB; r5IEPfTnB++) {
                scanf ("%lf", &PZuAKs0[r5IEPfTnB]);
                oFmdAtnfjrq[l2cAl7W] = oFmdAtnfjrq[l2cAl7W] + PZuAKs0[r5IEPfTnB];
            }
            RDBrdzUbPe5E[l2cAl7W] = oFmdAtnfjrq[l2cAl7W] / v51op0iKI[l2cAl7W];
            for (r5IEPfTnB = (752 - 752); r5IEPfTnB < v51op0iKI[l2cAl7W]; r5IEPfTnB++) {
                DuFC1VO7X[l2cAl7W] = DuFC1VO7X[l2cAl7W] + (PZuAKs0[r5IEPfTnB] - RDBrdzUbPe5E[l2cAl7W]) * (PZuAKs0[r5IEPfTnB] - RDBrdzUbPe5E[l2cAl7W]);
            }
            dfR1PVoY[l2cAl7W] = sqrt (DuFC1VO7X[l2cAl7W] / v51op0iKI[l2cAl7W]);
            l2cAl7W++;
        }
    }
    {
        l2cAl7W = (716 - 473) - (1087 - 844);
        while (l2cAl7W < mxOV4i9hvZu) {
            printf ("%.5f\n", dfR1PVoY[l2cAl7W]);
            l2cAl7W++;
        }
    }
    return (326 - 326);
}

