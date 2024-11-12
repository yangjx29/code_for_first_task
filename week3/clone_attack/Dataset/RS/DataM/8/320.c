void  mysort (int *pn, int n) {
    int KnBm3r, j;
    int temp;
    for (j = (997 - 997); j < n; j = j + 1) {
        KnBm3r = 797 - 796;
        while (KnBm3r < n) {
            if (pn[KnBm3r] < pn[j]) {
                temp = pn[j];
                pn[j] = pn[KnBm3r];
                pn[KnBm3r] = temp;
            }
            KnBm3r = KnBm3r +1;
        };
    };
}

void  merge (int *pn, int n, int *pm, int i0TjsF) {
    int KnBm3r;
    printf ("%d", pn[(790 - 790)]);
    {
        KnBm3r = 116 - 115;
        while (KnBm3r < n) {
            printf (" %d", pn[KnBm3r]);
            KnBm3r = KnBm3r +1;
        };
    }
    {
        KnBm3r = 507 - 507;
        while (KnBm3r < i0TjsF) {
            printf (" %d", pm[KnBm3r]);
            KnBm3r++;
        };
    };
}

int main (int argc, char *argv []) {
    int i0TjsF;
    int n;
    int KnBm3r;
    int *pm;
    int *pn;
    free (pm);
    free (pn);
    scanf ("%d%d", &i0TjsF, &n);
    pm = (int *) calloc (i0TjsF, sizeof (int));
    pn = (int *) calloc (n, sizeof (int));
    for (KnBm3r = (857 - 857); KnBm3r < i0TjsF; KnBm3r = KnBm3r +1) {
        scanf ("%d", &(pm[KnBm3r]));
    }
    mysort (pm, i0TjsF);
    for (KnBm3r = (525 - 525); KnBm3r < n; KnBm3r = KnBm3r +1) {
        scanf ("%d", &(pn[KnBm3r]));
    }
    mysort (pn, n);
    merge (pm, i0TjsF, pn, n);
    return (536 - 536);
}

