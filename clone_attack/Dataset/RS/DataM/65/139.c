int cVEBAbCx (int x, int eKXP0WZ1aBrs) {
    if ((x == (376 - 376) && eKXP0WZ1aBrs == (372 - 371)) || (x == 1 && eKXP0WZ1aBrs == (903 - 901)) || (x == 2 && eKXP0WZ1aBrs == (212 - 212)))
        return 1;
    if ((eKXP0WZ1aBrs == (309 - 309) && x == 1) || (eKXP0WZ1aBrs == 1 && x == 2) || (eKXP0WZ1aBrs == 2 && x == (807 - 807)))
        return -1;
    if ((x == 0 && eKXP0WZ1aBrs == 0) || (x == 1 && eKXP0WZ1aBrs == 1) || (x == 2 && eKXP0WZ1aBrs == 2))
        return 0;
}

int main () {
    int ML96XvljZO, x, eKXP0WZ1aBrs, FH9YIA3n = 0, olhaBw42EWK;
    scanf ("%d", &ML96XvljZO);
    {
        olhaBw42EWK = 0;
        while (olhaBw42EWK < ML96XvljZO) {
            olhaBw42EWK = olhaBw42EWK + 1;
            scanf ("%d %d", &x, &eKXP0WZ1aBrs);
            FH9YIA3n = FH9YIA3n +cVEBAbCx (x, eKXP0WZ1aBrs);
        };
    }
    if (FH9YIA3n > 0)
        printf ("A");
    if (FH9YIA3n < 0)
        printf ("B");
    if (FH9YIA3n == 0)
        printf ("Tie");
    return 0;
}

