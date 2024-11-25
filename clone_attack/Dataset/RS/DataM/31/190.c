struct   stu {
    char k27de4Ds8j [20];
    char a9gLwCa [20];
    char WGStdk;
    int YUumoaXhWdY7;
    char point [10];
    char websSDyN [50];
    struct   stu *EVfARC;
};
void  main () {
    struct   stu *gaDBg9X = NULL;
    int dUmyZMAxOE = sizeof (struct   stu);
    struct   stu *UkZv1uPUWtM = NULL, *a0UqOvj = NULL;
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
    gaDBg9X = (struct   stu *) malloc (dUmyZMAxOE);
    gaDBg9X->EVfARC = NULL;
    while (scanf ("%s", gaDBg9X->k27de4Ds8j)) {
        if (!(0 != (strcmp (gaDBg9X->k27de4Ds8j, "end"))))
            break;
        scanf ("%s %c %d %s %s", gaDBg9X->a9gLwCa, &gaDBg9X->WGStdk, &gaDBg9X->YUumoaXhWdY7, &gaDBg9X->point, gaDBg9X->websSDyN);
        gaDBg9X->EVfARC = a0UqOvj;
        a0UqOvj = gaDBg9X;
        gaDBg9X = (struct   stu *) malloc (dUmyZMAxOE);
    }
    while (a0UqOvj != NULL) {
        free (gaDBg9X);
        printf ("%s %s %c %d %s %s\n", a0UqOvj->k27de4Ds8j, a0UqOvj->a9gLwCa, a0UqOvj->WGStdk, a0UqOvj->YUumoaXhWdY7, a0UqOvj->point, a0UqOvj->websSDyN);
        gaDBg9X = a0UqOvj;
        a0UqOvj = a0UqOvj->EVfARC;
    };
}

