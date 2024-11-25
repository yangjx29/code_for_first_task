main () {
    int SOLbHkZqK;
    int oa8P57pO0f;
    int OLS0wi;
    int hNvVx42P6eyJ;
    int rbcLKHvG;
    int z1tGBlJeRu;
    int IofcCVJ;
    int y1;
    int R54wWq7DCzvs;
    int WcAkyPvzJuV2 [(876 - 776)] [(903 - 803)];
    int pD8EHt2Q [(348 - 248)] [(333 - 233)];
    int xb47coF [(505 - 405)] [(500 - 400)];
    scanf ("%d%d", &z1tGBlJeRu, &y1);
    for (SOLbHkZqK = (175 - 175); z1tGBlJeRu > SOLbHkZqK; SOLbHkZqK++) {
        oa8P57pO0f = (168 - 168);
        while (y1 > oa8P57pO0f) {
            scanf ("%d", &WcAkyPvzJuV2[SOLbHkZqK][oa8P57pO0f]);
            oa8P57pO0f++;
        }
    }
    scanf ("%d%d", &IofcCVJ, &R54wWq7DCzvs);
    for (SOLbHkZqK = (264 - 264); IofcCVJ > SOLbHkZqK; SOLbHkZqK++) {
        for (oa8P57pO0f = (204 - 204); R54wWq7DCzvs > oa8P57pO0f; oa8P57pO0f++)
            scanf ("%d", &pD8EHt2Q[SOLbHkZqK][oa8P57pO0f]);
    }
    rbcLKHvG = IofcCVJ > y1 ? y1 : IofcCVJ;
    for (SOLbHkZqK = (95 - 95); z1tGBlJeRu > SOLbHkZqK; SOLbHkZqK++) {
        oa8P57pO0f = 0;
        while (R54wWq7DCzvs > oa8P57pO0f) {
            {
                OLS0wi = 0;
                while (rbcLKHvG > OLS0wi) {
                    xb47coF[SOLbHkZqK][oa8P57pO0f] = xb47coF[SOLbHkZqK][oa8P57pO0f] + WcAkyPvzJuV2[SOLbHkZqK][OLS0wi] * pD8EHt2Q[OLS0wi][oa8P57pO0f];
                    OLS0wi++;
                }
            }
            oa8P57pO0f++;
        }
    }
    for (SOLbHkZqK = 0; z1tGBlJeRu > SOLbHkZqK; SOLbHkZqK++) {
        for (oa8P57pO0f = 0; oa8P57pO0f < R54wWq7DCzvs; oa8P57pO0f++) {
            if (oa8P57pO0f == 0)
                printf ("%d", xb47coF[SOLbHkZqK][oa8P57pO0f]);
            else
                printf (" %d", xb47coF[SOLbHkZqK][oa8P57pO0f]);
        }
    }
}

