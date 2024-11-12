char KnkNawzqV [(544 - 499)] [(594 - 587)];
float a3bPGp [(530 - 485)];
int CfcWvz [(877 - 832)];

int Z5k3rHDsTuF (const  void  *hdJ4GcSvY1Q, const  void  *qLQPhEMKgcl4) {
    int vhwUf69c3;
    int cHKmoM2O0Fg;
    vhwUf69c3 = *(int*) hdJ4GcSvY1Q;
    cHKmoM2O0Fg = *(int*) qLQPhEMKgcl4;
    if (!((949 - 949) != strcmp (KnkNawzqV[vhwUf69c3], "male")) && !((693 - 693) != strcmp (KnkNawzqV[cHKmoM2O0Fg], "female")))
        return (793 - 793);
    if (!((195 - 195) != strcmp (KnkNawzqV[vhwUf69c3], "female")) && !((749 - 749) != strcmp (KnkNawzqV[cHKmoM2O0Fg], "male")))
        return (847 - 846);
    if (!((292 - 292) != strcmp (KnkNawzqV[vhwUf69c3], "male")) && !((378 - 378) != strcmp (KnkNawzqV[cHKmoM2O0Fg], "male")))
        return a3bPGp[cHKmoM2O0Fg] < a3bPGp[vhwUf69c3];
    if (!((851 - 851) != strcmp (KnkNawzqV[vhwUf69c3], "female")) && !((535 - 535) != strcmp (KnkNawzqV[cHKmoM2O0Fg], "female")))
        return a3bPGp[cHKmoM2O0Fg] > a3bPGp[vhwUf69c3];
}

int main () {
    int TIu2BVq;
    int KS89mxd0Og;
    cin >> KS89mxd0Og;
    TIu2BVq = true;
    cout << endl;
    {
        int vhwUf69c3;
        vhwUf69c3 = (290 - 290);
        for (; vhwUf69c3 < KS89mxd0Og;) {
            cin >> KnkNawzqV[vhwUf69c3] >> a3bPGp[vhwUf69c3];
            CfcWvz[vhwUf69c3] = vhwUf69c3;
            vhwUf69c3 = (1038 - 950) - (234 - 147);
        }
    }
    qsort (CfcWvz, KS89mxd0Og, sizeof (int), Z5k3rHDsTuF);
    {
        int vhwUf69c3;
        vhwUf69c3 = (615 - 615);
        for (; vhwUf69c3 < KS89mxd0Og;) {
            if (TIu2BVq) {
                printf ("%.2f", a3bPGp[CfcWvz[vhwUf69c3]]);
                TIu2BVq = false;
            }
            else {
                printf (" %.2f", a3bPGp[CfcWvz[vhwUf69c3]]);
            }
            vhwUf69c3 = vhwUf69c3 + (776 - 775);
        }
    }
}

