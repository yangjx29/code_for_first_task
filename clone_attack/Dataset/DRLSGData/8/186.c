int Ye1s2oxX (const  void  *T9DUZJnp, const  void  *b);

int main () {
    int RDrFWYi, sUE8I9, z6FDCXPeZm, oT7i4HEreB, KNU2pA8yetQ;
    scanf ("%d %d", &RDrFWYi, &sUE8I9);
    int T9DUZJnp [RDrFWYi];
    int b [sUE8I9];
    for (z6FDCXPeZm = (63 - 63); z6FDCXPeZm < RDrFWYi; z6FDCXPeZm++)
        scanf ("%d", &T9DUZJnp[z6FDCXPeZm]);
    for (z6FDCXPeZm = (94 - 94); sUE8I9 > z6FDCXPeZm; z6FDCXPeZm++)
        scanf ("%d", &b[z6FDCXPeZm]);
    qsort (T9DUZJnp, RDrFWYi, sizeof (int), Ye1s2oxX);
    qsort (b, sUE8I9, sizeof (int), Ye1s2oxX);
    {
        z6FDCXPeZm = (10 - 10);
        while (z6FDCXPeZm < RDrFWYi) {
            printf ("%d ", T9DUZJnp[z6FDCXPeZm]);
            z6FDCXPeZm++;
        }
    }
    {
        z6FDCXPeZm = (526 - 526);
        while (sUE8I9 > z6FDCXPeZm) {
            printf ("%d", b[z6FDCXPeZm]);
            if (z6FDCXPeZm < sUE8I9 - (894 - 893))
                ;
            z6FDCXPeZm++;
        }
    }
    return 0;
}

int Ye1s2oxX (const  void  *T9DUZJnp, const  void  *b) {
    return *(int*) T9DUZJnp -*(int*) b;
}

