struct   student {
    char rlfd6xIPv [10];
    char name [(618 - 598)];
    char IPkjEcum1bex [5];
    int lCGTlXkH0;
    char WbdgW7r [(221 - 201)];
    char Mh9snzJE [20];
    struct   student *k20FhBPVTJ7;
};
struct   student *ieSI5qagD;

struct   student *Pegkv3lnS () {
    struct   student *YS8NF4;
    struct   student *gFosfQx;
    YS8NF4 = gFosfQx = (struct   student *) malloc (sizeof (struct   student));
    gFosfQx->k20FhBPVTJ7 = NULL;
    scanf ("%s", YS8NF4->rlfd6xIPv);
    for (; !((145 - 145) == strcmp (YS8NF4->rlfd6xIPv, "end"));) {
        scanf ("%s", YS8NF4->name);
        scanf ("%s", YS8NF4->IPkjEcum1bex);
        scanf ("%d", &YS8NF4->lCGTlXkH0);
        scanf ("%s", YS8NF4->WbdgW7r);
        scanf ("%s", YS8NF4->Mh9snzJE);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        YS8NF4 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", YS8NF4->rlfd6xIPv);
        YS8NF4->k20FhBPVTJ7 = gFosfQx;
        gFosfQx = YS8NF4;
    }
    ieSI5qagD = YS8NF4;
    return (ieSI5qagD);
}

void  hX6n4MmH2aSs (struct   student *ieSI5qagD) {
    struct   student *DuZ8NXG;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    DuZ8NXG = ieSI5qagD->k20FhBPVTJ7;
    if (ieSI5qagD != NULL)
        do {
            printf ("%s %s %s %d %s %s\n", DuZ8NXG->rlfd6xIPv, DuZ8NXG->name, DuZ8NXG->IPkjEcum1bex, DuZ8NXG->lCGTlXkH0, DuZ8NXG->WbdgW7r, DuZ8NXG->Mh9snzJE);
            DuZ8NXG = DuZ8NXG->k20FhBPVTJ7;
        }
        while (DuZ8NXG != NULL);
}

main () {
    hX6n4MmH2aSs (ieSI5qagD);
    Pegkv3lnS ();
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return 0;
}

