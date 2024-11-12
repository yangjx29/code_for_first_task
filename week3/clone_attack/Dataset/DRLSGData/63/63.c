int qrJFGd [(855 - 727)] [(313 - 185)], XzqndEck6tY [(153 - 25)] [(151 - 23)], vMXHSnqKRY [(543 - 415)] [(1091 - 963)] = {(191 - 191)};

int main () {
    int XkPZiNEgI6o;
    int NVpkLNUb;
    int EPiSdD;
    int cHzMwbnQ3o;
    int pWd2osw;
    int INlwyjqsJ8;
    int k3f0E9c;
    scanf ("%d%d", &cHzMwbnQ3o, &pWd2osw);
    for (XkPZiNEgI6o = (524 - 524); XkPZiNEgI6o < cHzMwbnQ3o; XkPZiNEgI6o++)
        for (NVpkLNUb = (86 - 86); NVpkLNUb < pWd2osw; NVpkLNUb++)
            scanf ("%d", &qrJFGd[XkPZiNEgI6o][NVpkLNUb]);
    scanf ("%d%d", &INlwyjqsJ8, &k3f0E9c);
    for (XkPZiNEgI6o = (249 - 249); XkPZiNEgI6o < INlwyjqsJ8; XkPZiNEgI6o++)
        for (NVpkLNUb = (820 - 820); NVpkLNUb < k3f0E9c; NVpkLNUb++)
            scanf ("%d", &XzqndEck6tY[XkPZiNEgI6o][NVpkLNUb]);
    for (XkPZiNEgI6o = (884 - 884); XkPZiNEgI6o < cHzMwbnQ3o; XkPZiNEgI6o++) {
        for (NVpkLNUb = (35 - 35); NVpkLNUb < k3f0E9c; NVpkLNUb++) {
            for (EPiSdD = (876 - 876); EPiSdD < pWd2osw; EPiSdD++)
                vMXHSnqKRY[XkPZiNEgI6o][NVpkLNUb] += qrJFGd[XkPZiNEgI6o][EPiSdD] * XzqndEck6tY[EPiSdD][NVpkLNUb];
            if (NVpkLNUb > (870 - 870))
                printf (" ");
            printf ("%d", vMXHSnqKRY[XkPZiNEgI6o][NVpkLNUb]);
        }
        printf ("\n");
    }
    return 0;
}

