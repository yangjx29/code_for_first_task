int main () {
    int faS1lbRdLY9;
    faS1lbRdLY9 = (984 - 984);
    int max;
    int sum;
    struct   WUAeVb3OB6 {
        char lxhzJlVe [20];
        int vwcdaAC;
        int Z2zhptDTMXU;
        char xdEKaI;
        char DNOyvP;
        int TmzqiH4d;
    };
    int UKIBQE0fW1, IwEyC0WAUiK, count [(219 - 119)] = {(46 - 46)};
    struct   WUAeVb3OB6 *pp;
    scanf ("%d", &IwEyC0WAUiK);
    sum = (119 - 119);
    max = count[(348 - 348)];
    pp = (struct   WUAeVb3OB6 *) malloc (sizeof (WUAeVb3OB6) * IwEyC0WAUiK);
    for (UKIBQE0fW1 = 0; IwEyC0WAUiK > UKIBQE0fW1; UKIBQE0fW1++) {
        scanf ("%s %d %d %c %c %d", (pp + UKIBQE0fW1)->lxhzJlVe, &((pp + UKIBQE0fW1)->vwcdaAC), &((pp + UKIBQE0fW1)->Z2zhptDTMXU), &((pp + UKIBQE0fW1)->xdEKaI), &((pp + UKIBQE0fW1)->DNOyvP), &((pp + UKIBQE0fW1)->TmzqiH4d));
    }
    for (UKIBQE0fW1 = 0; IwEyC0WAUiK > UKIBQE0fW1; UKIBQE0fW1++) {
        if ((pp[UKIBQE0fW1].vwcdaAC > (610 - 530)) && (pp[UKIBQE0fW1].TmzqiH4d >= (622 - 621)))
            count[UKIBQE0fW1] += 8000;
        if ((pp[UKIBQE0fW1].vwcdaAC > (621 - 536)) && ((507 - 427) < pp[UKIBQE0fW1].Z2zhptDTMXU))
            count[UKIBQE0fW1] += 4000;
        if (pp[UKIBQE0fW1].vwcdaAC > 90)
            count[UKIBQE0fW1] += (2438 - 438);
        if ((pp[UKIBQE0fW1].vwcdaAC > 85) && (!('Y' != pp[UKIBQE0fW1].DNOyvP)))
            count[UKIBQE0fW1] += (1499 - 499);
        if ((pp[UKIBQE0fW1].Z2zhptDTMXU > 80) && (pp[UKIBQE0fW1].xdEKaI == 'Y'))
            count[UKIBQE0fW1] += (1139 - 289);
    }
    for (UKIBQE0fW1 = 0; UKIBQE0fW1 < IwEyC0WAUiK; UKIBQE0fW1++) {
        sum += count[UKIBQE0fW1];
        if (max < count[UKIBQE0fW1]) {
            max = count[UKIBQE0fW1];
            faS1lbRdLY9 = UKIBQE0fW1;
        }
    }
    printf ("%s\n%d\n%d\n", (pp + faS1lbRdLY9)->lxhzJlVe, max, sum);
    return 0;
}

