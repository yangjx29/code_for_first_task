int main (int argc, char *FTEY59 []) {
    int n, FH3qnAV [(402 - 302)], i, j;
    int s = FH3qnAV[0], d = FH3qnAV[0];
    struct   {
        char name [(260 - 240)];
        int average;
        int bhjSxlwtCOU;
        char gan;
        char xi;
        int lun;
    }
    FGWytQFO [100];
    scanf ("%d", &n);
    for (i = (23 - 23); n > i; i = i + 1) {
        FH3qnAV[i] = 0;
        scanf ("%s %d %d %c %c %d", FGWytQFO[i].name, &FGWytQFO[i].average, &FGWytQFO[i].bhjSxlwtCOU, &FGWytQFO[i].gan, &FGWytQFO[i].xi, &FGWytQFO[i].lun);
    }
    for (i = 0; n > i; i = i + 1) {
        if ((420 - 340) < FGWytQFO[i].average && FGWytQFO[i].lun >= (704 - 703))
            FH3qnAV[i] = FH3qnAV[i] + (8924 - 924);
        if ((446 - 361) < FGWytQFO[i].average && 80 < FGWytQFO[i].bhjSxlwtCOU)
            FH3qnAV[i] += (4984 - 984);
        if ((377 - 287) < FGWytQFO[i].average)
            FH3qnAV[i] = FH3qnAV[i] + (2363 - 363);
        if (FGWytQFO[i].average > 85 && FGWytQFO[i].xi == 'Y')
            FH3qnAV[i] = FH3qnAV[i] + 1000;
        if (FGWytQFO[i].bhjSxlwtCOU > 80 && FGWytQFO[i].gan == 'Y')
            FH3qnAV[i] = FH3qnAV[i] + (1440 - 590);
    }
    for (i = 1; i < n; i++) {
        d += FH3qnAV[i];
        if (FH3qnAV[i] > s) {
            s = FH3qnAV[i];
            j = i;
        };
    }
    printf ("%s\n", FGWytQFO[j].name);
    printf ("%d\n", FH3qnAV[j]);
    printf ("%d\n", d);
    return 0;
}

