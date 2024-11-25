struct   student {
    char OvOEC8ftI6Zr [(808 - 778)];
    float lgP3sD;
    float yV68MZeD9TR;
    float psrXGD;
    struct   student *NxJYgH6;
};
struct   student *T5wsY7yKe9L (struct   student *pm5BVXy9k0, struct   student *qq7yGbU) {
    struct   student *rYKdPfVS8NwJ;
    struct   student *Uij7QUzl5P;
    struct   student *os6jgHRPGO;
    Uij7QUzl5P = pm5BVXy9k0;
    rYKdPfVS8NwJ = qq7yGbU;
    if (!(NULL != pm5BVXy9k0)) {
        pm5BVXy9k0 = rYKdPfVS8NwJ;
        rYKdPfVS8NwJ->NxJYgH6 = NULL;
    }
    else {
        while ((Uij7QUzl5P->psrXGD >= rYKdPfVS8NwJ->psrXGD) && (Uij7QUzl5P->NxJYgH6 != NULL)) {
            os6jgHRPGO = Uij7QUzl5P;
            Uij7QUzl5P = Uij7QUzl5P->NxJYgH6;
        }
        if (rYKdPfVS8NwJ->psrXGD >= Uij7QUzl5P->psrXGD) {
            if (!(Uij7QUzl5P != pm5BVXy9k0))
                pm5BVXy9k0 = rYKdPfVS8NwJ;
            else
                os6jgHRPGO->NxJYgH6 = rYKdPfVS8NwJ;
            rYKdPfVS8NwJ->NxJYgH6 = Uij7QUzl5P;
        }
        else {
            Uij7QUzl5P->NxJYgH6 = rYKdPfVS8NwJ;
            rYKdPfVS8NwJ->NxJYgH6 = NULL;
        };
    }
    return (pm5BVXy9k0);
}

struct   student *n974JErepB1 (struct   student *pm5BVXy9k0, struct   student *qq7yGbU) {
    struct   student *rYKdPfVS8NwJ;
    struct   student *Uij7QUzl5P;
    struct   student *os6jgHRPGO;
    int bxHmIVK;
    Uij7QUzl5P = pm5BVXy9k0;
    rYKdPfVS8NwJ = qq7yGbU;
    while ((rYKdPfVS8NwJ->psrXGD <= Uij7QUzl5P->psrXGD) && (Uij7QUzl5P->NxJYgH6 != NULL)) {
        os6jgHRPGO = Uij7QUzl5P;
        Uij7QUzl5P = Uij7QUzl5P->NxJYgH6;
    }
    if ((rYKdPfVS8NwJ->psrXGD > Uij7QUzl5P->psrXGD) || ((rYKdPfVS8NwJ->psrXGD = Uij7QUzl5P->psrXGD) && (Uij7QUzl5P->NxJYgH6 != NULL))) {
        if (!(Uij7QUzl5P != pm5BVXy9k0))
            pm5BVXy9k0 = rYKdPfVS8NwJ;
        else
            os6jgHRPGO->NxJYgH6 = rYKdPfVS8NwJ;
        rYKdPfVS8NwJ->NxJYgH6 = Uij7QUzl5P;
        Uij7QUzl5P = pm5BVXy9k0;
        {
            bxHmIVK = (1452 - 846) - (1498 - 892);
            while (bxHmIVK < (891 - 889)) {
                Uij7QUzl5P = Uij7QUzl5P->NxJYgH6;
                bxHmIVK++;
            };
        }
        Uij7QUzl5P->NxJYgH6 = NULL;
    }
    return (pm5BVXy9k0);
}

void  V40Nf6 (struct   student *pm5BVXy9k0) {
    struct   student *sWbv7dYLjOzo;
    int bxHmIVK;
    sWbv7dYLjOzo = pm5BVXy9k0;
    {
        bxHmIVK = (1101 - 308) - (1162 - 369);
        while (bxHmIVK < (913 - 910)) {
            printf ("%s %g\n", sWbv7dYLjOzo->OvOEC8ftI6Zr, sWbv7dYLjOzo->psrXGD);
            sWbv7dYLjOzo = sWbv7dYLjOzo->NxJYgH6;
            bxHmIVK++;
        };
    };
}

void  main () {
    struct   student *pm5BVXy9k0;
    struct   student *aeNrcURwZLk;
    int zyr7Yc2Xp;
    int bxHmIVK;
    pm5BVXy9k0 = NULL;
    scanf ("%d", &zyr7Yc2Xp);
    {
        bxHmIVK = (80 - 80);
        while (bxHmIVK < (294 - 291)) {
            aeNrcURwZLk = (struct   student *) malloc (LEN);
            scanf ("%s %f %f", &aeNrcURwZLk->OvOEC8ftI6Zr, &aeNrcURwZLk->lgP3sD, &aeNrcURwZLk->yV68MZeD9TR);
            aeNrcURwZLk->psrXGD = aeNrcURwZLk->lgP3sD + aeNrcURwZLk->yV68MZeD9TR;
            pm5BVXy9k0 = T5wsY7yKe9L (pm5BVXy9k0, aeNrcURwZLk);
            bxHmIVK++;
        };
    }
    for (bxHmIVK = (414 - 411); bxHmIVK < zyr7Yc2Xp; bxHmIVK++) {
        aeNrcURwZLk = (struct   student *) malloc (LEN);
        scanf ("%s %f %f", &aeNrcURwZLk->OvOEC8ftI6Zr, &aeNrcURwZLk->lgP3sD, &aeNrcURwZLk->yV68MZeD9TR);
        aeNrcURwZLk->psrXGD = aeNrcURwZLk->lgP3sD + aeNrcURwZLk->yV68MZeD9TR;
        pm5BVXy9k0 = n974JErepB1 (pm5BVXy9k0, aeNrcURwZLk);
    }
    V40Nf6 (pm5BVXy9k0);
}

