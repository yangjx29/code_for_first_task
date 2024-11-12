struct   student {
    char bfxOjW0umSZ [20];
    char name [20];
    char Q6YyWcI3fwn;
    int age;
    double  fuo5icE;
    char MIRUM6d [20];
    struct   student *next;
    struct   student *former;
};
main () {
    struct   student *xEx2g9Am;
    struct   student *Aaf9XTjJM;
    struct   student *Tqs73SK;
    struct   student *header;
    header = (struct   student *) malloc (sizeof (struct   student));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    header->next = header->former = NULL;
    Tqs73SK = header;
    for (;;) {
        Aaf9XTjJM = (struct   student *) malloc (sizeof (struct   student));
        Tqs73SK->next = Aaf9XTjJM;
        Aaf9XTjJM->former = Tqs73SK;
        scanf ("%s", Aaf9XTjJM->bfxOjW0umSZ);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (Aaf9XTjJM->bfxOjW0umSZ[0] == 'e' && Aaf9XTjJM->bfxOjW0umSZ[1] == 'n' && Aaf9XTjJM->bfxOjW0umSZ[2] == 'd')
            break;
        scanf ("%s %c %d %lf %s", Aaf9XTjJM->name, &Aaf9XTjJM->Q6YyWcI3fwn, &Aaf9XTjJM->age, &Aaf9XTjJM->fuo5icE, Aaf9XTjJM->MIRUM6d);
        Tqs73SK = Aaf9XTjJM;
    }
    Tqs73SK->next = NULL;
    xEx2g9Am = Tqs73SK;
    for (; Tqs73SK->former != NULL;) {
        if (Tqs73SK->fuo5icE == (int) (Tqs73SK->fuo5icE))
            printf ("%s %s %c %d %d %s\n", Tqs73SK->bfxOjW0umSZ, Tqs73SK->name, Tqs73SK->Q6YyWcI3fwn, Tqs73SK->age, (int) (Tqs73SK->fuo5icE), Tqs73SK->MIRUM6d);
        else
            printf ("%s %s %c %d %.1lf %s\n", Tqs73SK->bfxOjW0umSZ, Tqs73SK->name, Tqs73SK->Q6YyWcI3fwn, Tqs73SK->age, Tqs73SK->fuo5icE, Tqs73SK->MIRUM6d);
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
        Tqs73SK = Tqs73SK->former;
    };
}

