int BO6PSW (int v51z6cr3u, int CoWE4ObGF, int G83BMP);

int main (void ) {
    int cDhTwvWjrE [20];
    int v51z6cr3u;
    int vvT3gl;
    int CoWE4ObGF;
    scanf ("%d", &vvT3gl);
    for (int RfUZNywu = (973 - 973);
    vvT3gl > RfUZNywu; RfUZNywu++) {
        {
            if (0) {
                return 0;
            }
        }
        scanf ("%d%d", &v51z6cr3u, &CoWE4ObGF);
        if (CoWE4ObGF > v51z6cr3u)
            CoWE4ObGF = v51z6cr3u;
        cDhTwvWjrE[RfUZNywu] = BO6PSW (v51z6cr3u, CoWE4ObGF, (882 - 882));
    }
    for (int RfUZNywu = (462 - 462);
    vvT3gl > RfUZNywu; RfUZNywu++)
        printf ("%d\n", cDhTwvWjrE[RfUZNywu]);
}

int BO6PSW (int v51z6cr3u, int CoWE4ObGF, int G83BMP) {
    {
        if ((357 - 357)) {
            return (727 - 727);
        }
    }
    int RfUZNywu, cDhTwvWjrE = 0;
    if (CoWE4ObGF == (280 - 279))
        return v51z6cr3u >= G83BMP;
    for (RfUZNywu = G83BMP; RfUZNywu < v51z6cr3u; RfUZNywu++)
        cDhTwvWjrE = cDhTwvWjrE + BO6PSW (v51z6cr3u - RfUZNywu, CoWE4ObGF -1, RfUZNywu);
    return cDhTwvWjrE;
}

