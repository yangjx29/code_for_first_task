struct   student {
    char Js2lj8bB5t [(300 - 280)];
    char cUsmIe3 [(107 - 87)];
    char JdpV7wqa;
    int wOz0xH;
    double  U045M8XPbHe;
    char HqLJHIcPfe [(316 - 296)];
    struct   student *CAuqYnQxy;
    struct   student *former;
};
main () {
    struct   student *sUGT2xFV1I, *V06EQcU, *C81x3VjfN, *header;
    free (V06EQcU);
    free (V06EQcU);
    header = (struct   student *) malloc (sizeof (struct   student));
    header->CAuqYnQxy = header->former = NULL;
    C81x3VjfN = header;
    for (;;) {
        V06EQcU = (struct   student *) malloc (sizeof (struct   student));
        C81x3VjfN->CAuqYnQxy = V06EQcU;
        V06EQcU->former = C81x3VjfN;
        scanf ("%s", V06EQcU->Js2lj8bB5t);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (V06EQcU->Js2lj8bB5t[(426 - 426)] == 'e' && V06EQcU->Js2lj8bB5t[1] == 'n' && V06EQcU->Js2lj8bB5t[(283 - 281)] == 'd')
            break;
        scanf ("%s %c %d %lf %s", V06EQcU->cUsmIe3, &V06EQcU->JdpV7wqa, &V06EQcU->wOz0xH, &V06EQcU->U045M8XPbHe, V06EQcU->HqLJHIcPfe);
        C81x3VjfN = V06EQcU;
    }
    C81x3VjfN->CAuqYnQxy = NULL;
    sUGT2xFV1I = C81x3VjfN;
    V06EQcU = C81x3VjfN;
    for (; sUGT2xFV1I->former != NULL;) {
        if (sUGT2xFV1I->U045M8XPbHe == (int) (sUGT2xFV1I->U045M8XPbHe))
            printf ("%s %s %c %d %d %s\n", sUGT2xFV1I->Js2lj8bB5t, sUGT2xFV1I->cUsmIe3, sUGT2xFV1I->JdpV7wqa, sUGT2xFV1I->wOz0xH, (int) (sUGT2xFV1I->U045M8XPbHe), sUGT2xFV1I->HqLJHIcPfe);
        else
            printf ("%s %s %c %d %.1lf %s\n", sUGT2xFV1I->Js2lj8bB5t, sUGT2xFV1I->cUsmIe3, sUGT2xFV1I->JdpV7wqa, sUGT2xFV1I->wOz0xH, sUGT2xFV1I->U045M8XPbHe, sUGT2xFV1I->HqLJHIcPfe);
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
        sUGT2xFV1I = sUGT2xFV1I->former;
    }
    for (; V06EQcU->former != NULL;) {
        free (C81x3VjfN);
        C81x3VjfN = V06EQcU;
        V06EQcU = C81x3VjfN->former;
    };
}

