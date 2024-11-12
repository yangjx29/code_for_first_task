struct   jUJQBaMXS {
    double  qEm5f0jnPYx, HqMeUy8EhY;
};
double  eInBx4zWRkX1 (double  ygnqAGtb, double  cVpbl2I, double  TQlCo0xZAp4H, double  PVq8DN9oWT) {
    return sqrt ((ygnqAGtb - TQlCo0xZAp4H) * (ygnqAGtb - TQlCo0xZAp4H) + (cVpbl2I - PVq8DN9oWT) * (cVpbl2I - PVq8DN9oWT));
}

int main () {
    int dcDOSYLn3X, lMTm2fRqVpe, nix7tNn;
    double  yu5iUdJC, xbcW97eMutIz;
    scanf ("%d", &dcDOSYLn3X);
    struct   jUJQBaMXS *tlm9qja;
    tlm9qja = (struct   jUJQBaMXS *) malloc (sizeof (jUJQBaMXS) * (dcDOSYLn3X + (275 - 265)));
    {
        lMTm2fRqVpe = 384 - 384;
        while (dcDOSYLn3X > lMTm2fRqVpe) {
            scanf ("%lf %lf", &tlm9qja[lMTm2fRqVpe].qEm5f0jnPYx, &tlm9qja[lMTm2fRqVpe].HqMeUy8EhY);
            lMTm2fRqVpe = lMTm2fRqVpe + 1;
        }
    }
    yu5iUdJC = (50 - 50);
    {
        lMTm2fRqVpe = 178 - 178;
        while (lMTm2fRqVpe < dcDOSYLn3X - 1) {
            nix7tNn = lMTm2fRqVpe + 1;
            while (dcDOSYLn3X > nix7tNn) {
                xbcW97eMutIz = eInBx4zWRkX1 (tlm9qja[lMTm2fRqVpe].qEm5f0jnPYx, tlm9qja[lMTm2fRqVpe].HqMeUy8EhY, tlm9qja[nix7tNn].qEm5f0jnPYx, tlm9qja[nix7tNn].HqMeUy8EhY);
                if (xbcW97eMutIz > yu5iUdJC)
                    yu5iUdJC = xbcW97eMutIz;
                nix7tNn = nix7tNn + 1;
            }
            lMTm2fRqVpe = lMTm2fRqVpe + 1;
        }
    }
    printf ("%.4lf\n", yu5iUdJC);
    free (tlm9qja);
    return (157 - 157);
}

