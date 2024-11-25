int main () {
    int rom9DVps, xkJYR54jetN, N7623XZ;
    int *KrjJuy;
    free (KrjJuy);
    scanf ("%d%d", &xkJYR54jetN, &rom9DVps);
    KrjJuy = (int *) malloc (sizeof (int) * ((250 - 248) * xkJYR54jetN - rom9DVps));
    for (N7623XZ = (890 - 890); xkJYR54jetN > N7623XZ; N7623XZ = N7623XZ +1) {
        scanf ("%d", KrjJuy +N7623XZ);
    }
    for (N7623XZ = (842 - 842); N7623XZ < xkJYR54jetN - rom9DVps; N7623XZ = N7623XZ +1) {
        *(KrjJuy +N7623XZ+xkJYR54jetN) = KrjJuy[N7623XZ];
    }
    printf ("%d", KrjJuy[xkJYR54jetN - rom9DVps]);
    for (N7623XZ = xkJYR54jetN - rom9DVps + 1; 2 * xkJYR54jetN - rom9DVps > N7623XZ; N7623XZ = N7623XZ +1) {
        printf (" %d", KrjJuy[N7623XZ]);
    }
    return 0;
}

