struct   arr {
    char KxkSaF [(811 - 791)];
    char VyY12u5q [(1041 - 991)];
    char cYSFOMqB3flz;
    int z51x9X;
    float wsUpnJA4b;
    char s8JSKjtNUL6 [(291 - 241)];
    struct   arr *DkzQ7AYRhOas;
};
int p0Y2nD8r;

struct   arr *amzAYNLC41 (void ) {
    struct   arr *eJyESbYNDXBI;
    struct   arr *e3rzMLuVD71;
    struct   arr *PRmvH2;
    eJyESbYNDXBI = NULL;
    e3rzMLuVD71 = PRmvH2 = (struct   arr *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", &e3rzMLuVD71->KxkSaF, &e3rzMLuVD71->VyY12u5q, &e3rzMLuVD71->cYSFOMqB3flz, &e3rzMLuVD71->z51x9X, &e3rzMLuVD71->wsUpnJA4b, &e3rzMLuVD71->s8JSKjtNUL6);
    p0Y2nD8r = (566 - 566);
    for (; strcmp (e3rzMLuVD71->KxkSaF, "end") != (662 - 662);) {
        p0Y2nD8r = p0Y2nD8r + (597 - 596);
        if (!((489 - 488) != p0Y2nD8r))
            eJyESbYNDXBI = e3rzMLuVD71;
        else
            PRmvH2->DkzQ7AYRhOas = e3rzMLuVD71;
        PRmvH2 = e3rzMLuVD71;
        e3rzMLuVD71 = (struct   arr *) malloc (LEN);
        scanf ("%s", &e3rzMLuVD71->KxkSaF);
        if (!((875 - 875) != strcmp (e3rzMLuVD71->KxkSaF, "end")))
            break;
        scanf ("%s %c %d %f %s", &e3rzMLuVD71->VyY12u5q, &e3rzMLuVD71->cYSFOMqB3flz, &e3rzMLuVD71->z51x9X, &e3rzMLuVD71->wsUpnJA4b, &e3rzMLuVD71->s8JSKjtNUL6);
    }
    PRmvH2->DkzQ7AYRhOas = NULL;
    return (eJyESbYNDXBI);
}

struct   arr *GDvHUig (struct   arr *eJyESbYNDXBI) {
    struct   arr *e3rzMLuVD71;
    struct   arr *PRmvH2;
    struct   arr *YkJIMUdbxL;
    e3rzMLuVD71 = PRmvH2 = eJyESbYNDXBI;
    if (e3rzMLuVD71 != NULL &&e3rzMLuVD71->DkzQ7AYRhOas != NULL) {
        e3rzMLuVD71 = e3rzMLuVD71->DkzQ7AYRhOas;
        PRmvH2->DkzQ7AYRhOas = NULL;
        for (; e3rzMLuVD71 != NULL &&e3rzMLuVD71->DkzQ7AYRhOas != NULL;) {
            YkJIMUdbxL = e3rzMLuVD71;
            e3rzMLuVD71 = e3rzMLuVD71->DkzQ7AYRhOas;
            YkJIMUdbxL->DkzQ7AYRhOas = PRmvH2;
            PRmvH2 = YkJIMUdbxL;
        }
        eJyESbYNDXBI = e3rzMLuVD71;
        e3rzMLuVD71->DkzQ7AYRhOas = PRmvH2;
    }
    return (eJyESbYNDXBI);
}

void  uX9MzTjB (struct   arr *eJyESbYNDXBI) {
    int rfJcvSedFjN;
    struct   arr *e3rzMLuVD71;
    e3rzMLuVD71 = eJyESbYNDXBI;
    for (; e3rzMLuVD71 != NULL;) {
        rfJcvSedFjN = (int) e3rzMLuVD71->wsUpnJA4b;
        if (!((935.0 - 935.0) != e3rzMLuVD71->wsUpnJA4b - rfJcvSedFjN))
            printf ("%s %s %c %d %d %s\n", e3rzMLuVD71->KxkSaF, e3rzMLuVD71->VyY12u5q, e3rzMLuVD71->cYSFOMqB3flz, e3rzMLuVD71->z51x9X, rfJcvSedFjN, e3rzMLuVD71->s8JSKjtNUL6);
        else
            printf ("%s %s %c %d %.1f %s\n", e3rzMLuVD71->KxkSaF, e3rzMLuVD71->VyY12u5q, e3rzMLuVD71->cYSFOMqB3flz, e3rzMLuVD71->z51x9X, e3rzMLuVD71->wsUpnJA4b, e3rzMLuVD71->s8JSKjtNUL6);
        e3rzMLuVD71 = e3rzMLuVD71->DkzQ7AYRhOas;
    }
}

void  tVBXhtwkG (struct   arr *eJyESbYNDXBI) {
    struct   arr *mA7Flc5SsxZv = eJyESbYNDXBI;
    for (; mA7Flc5SsxZv != NULL;) {
        free (mA7Flc5SsxZv);
        eJyESbYNDXBI = eJyESbYNDXBI->DkzQ7AYRhOas;
        mA7Flc5SsxZv = eJyESbYNDXBI;
    }
}

void  main () {
    struct   arr *eJyESbYNDXBI;
    uX9MzTjB (eJyESbYNDXBI);
    tVBXhtwkG (eJyESbYNDXBI);
    eJyESbYNDXBI = amzAYNLC41 ();
    eJyESbYNDXBI = GDvHUig (eJyESbYNDXBI);
}

