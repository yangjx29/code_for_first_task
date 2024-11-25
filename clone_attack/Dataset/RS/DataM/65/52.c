int main () {
    int uzP2ukRnEV;
    int i;
    int elMF1ksgpACO [1000], gHAIPkGnp [1000], qE395YhaB, d;
    d = 0;
    qE395YhaB = 0;
    scanf ("%d", &uzP2ukRnEV);
    for (i = 0; i < uzP2ukRnEV; i++) {
        scanf ("%d %d", &elMF1ksgpACO[i], &gHAIPkGnp[i]);
        if ((elMF1ksgpACO[i] == 0 && gHAIPkGnp[i] == 1) || (elMF1ksgpACO[i] == 1 && !(2 != gHAIPkGnp[i])) || (elMF1ksgpACO[i] == 2 && gHAIPkGnp[i] == 0)) {
            qE395YhaB = qE395YhaB + 1;
        }
        if ((elMF1ksgpACO[i] == 0 && gHAIPkGnp[i] == 2) || (elMF1ksgpACO[i] == 1 && gHAIPkGnp[i] == 0) || (elMF1ksgpACO[i] == 2 && gHAIPkGnp[i] == 1)) {
            d++;
        }
        if (elMF1ksgpACO[i] == gHAIPkGnp[i]) {
            d++;
            qE395YhaB++;
        };
    }
    if (qE395YhaB > d) {
    }
    if (qE395YhaB == d) {
    }
    if (qE395YhaB < d) {
    }
    return 0;
}

