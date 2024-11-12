struct   student {
    int id;
    int cs;
    int wTyFhB;
    int jzWSqLYd80ej;
    struct   student *eSjP73l;
};
void  main () {
    int zqZgEm;
    int dA0V4mFxucR;
    int i;
    zqZgEm = 0;
    struct   student *RX8HslBTx, *R1IUuPkRoJwT, *p2;
    RX8HslBTx = NULL;
    scanf ("%d", &dA0V4mFxucR);
    R1IUuPkRoJwT = p2 = (struct   student *) malloc (LEN);
    scanf ("%d %d %d", &R1IUuPkRoJwT->id, &R1IUuPkRoJwT->cs, &R1IUuPkRoJwT->wTyFhB);
    R1IUuPkRoJwT->jzWSqLYd80ej = R1IUuPkRoJwT->cs + R1IUuPkRoJwT->wTyFhB;
    while (!(dA0V4mFxucR == R1IUuPkRoJwT->id)) {
        zqZgEm = zqZgEm + 1;
        if (zqZgEm == 1)
            RX8HslBTx = R1IUuPkRoJwT;
        else
            p2->eSjP73l = R1IUuPkRoJwT;
        p2 = R1IUuPkRoJwT;
        R1IUuPkRoJwT = (struct   student *) malloc (LEN);
        scanf ("%d %d %d", &R1IUuPkRoJwT->id, &R1IUuPkRoJwT->cs, &R1IUuPkRoJwT->wTyFhB);
        R1IUuPkRoJwT->jzWSqLYd80ej = R1IUuPkRoJwT->cs + R1IUuPkRoJwT->wTyFhB;
    }
    p2->eSjP73l = R1IUuPkRoJwT;
    p2 = R1IUuPkRoJwT;
    p2->eSjP73l = NULL;
    {
        i = 0;
        while (i < 3) {
            i = i + 1;
            R1IUuPkRoJwT = p2 = RX8HslBTx;
            do {
                p2 = p2->eSjP73l;
                if (R1IUuPkRoJwT->jzWSqLYd80ej < p2->jzWSqLYd80ej)
                    R1IUuPkRoJwT = p2;
            }
            while (p2->eSjP73l != NULL);
            printf ("%d %d\n", R1IUuPkRoJwT->id, R1IUuPkRoJwT->jzWSqLYd80ej);
            R1IUuPkRoJwT->jzWSqLYd80ej = -1;
        };
    };
}

