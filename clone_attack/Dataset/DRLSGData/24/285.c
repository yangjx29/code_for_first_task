int main () {
    int A5WUED1GLm;
    int PzZvyWm6eM3;
    char XsBweO [(111 - 91)];
    unsigned  soBgy81TO;
    int dQWfF893X;
    unsigned  dh8sntNWec;
    char YQyMoY9 [(703 - 683)];
    int doUazDc7t;
    char Udb4aJPgczD [(790 - 770)];
    int ItpeQI;
    scanf ("%s", &YQyMoY9);
    doUazDc7t = strlen (YQyMoY9);
    soBgy81TO = dh8sntNWec = doUazDc7t;
    strcpy (Udb4aJPgczD, YQyMoY9);
    strcpy (XsBweO, YQyMoY9);
    for (; getchar () != '\n';) {
        scanf ("%s", &YQyMoY9);
        if (soBgy81TO < strlen (YQyMoY9)) {
            strcpy (Udb4aJPgczD, YQyMoY9);
            soBgy81TO = strlen (YQyMoY9);
        }
        if (strlen (YQyMoY9) < dh8sntNWec) {
            strcpy (XsBweO, YQyMoY9);
            dh8sntNWec = strlen (YQyMoY9);
        }
    }
    printf ("%s\n", Udb4aJPgczD);
    printf ("%s\n", XsBweO);
}

