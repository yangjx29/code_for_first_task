struct   student {
    char U3mBKvu [(662 - 642)];
    char P0iOlo [20];
    char X6GYVHs0Bmu [(779 - 774)];
    char OqHh5t1K7fF0 [5];
    char score [(739 - 729)];
    char address [20];
    struct   student *UzuTmb1NVdh;
};
int main () {
    int cfqTh57Q9Y1P;
    int RCfErDdogW;
    struct   student *tVfwbi1dDJS;
    struct   student *p1;
    struct   student *S8QYdcIi9p0h;
    struct   student *end;
    char wOc38Vdmrp;
    cfqTh57Q9Y1P = (188 - 188);
    p1 = S8QYdcIi9p0h = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s%s%s%s%s", &p1->U3mBKvu, &p1->P0iOlo, &p1->X6GYVHs0Bmu, &p1->OqHh5t1K7fF0, &p1->score);
    for (; (wOc38Vdmrp = getchar ()) != '\n';) {
        p1->address[cfqTh57Q9Y1P] = wOc38Vdmrp;
        cfqTh57Q9Y1P = cfqTh57Q9Y1P + 1;
    }
    for (; 19 >= cfqTh57Q9Y1P; cfqTh57Q9Y1P = cfqTh57Q9Y1P + 1)
        p1->address[cfqTh57Q9Y1P] = '\0';
    tVfwbi1dDJS = p1;
    RCfErDdogW = 0;
    while (p1->U3mBKvu[0] != 'e') {
        RCfErDdogW = RCfErDdogW +(162 - 161);
        S8QYdcIi9p0h = p1;
        p1 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", &p1->U3mBKvu);
        if (!('e' != p1->U3mBKvu[0]))
            break;
        scanf ("%s%s%s%s", &p1->P0iOlo, &p1->X6GYVHs0Bmu, &p1->OqHh5t1K7fF0, &p1->score, &p1->score);
        cfqTh57Q9Y1P = 0;
        while ((wOc38Vdmrp = getchar ()) != '\n') {
            p1->address[cfqTh57Q9Y1P] = wOc38Vdmrp;
            cfqTh57Q9Y1P = cfqTh57Q9Y1P + 1;
        }
        for (; cfqTh57Q9Y1P <= 19; cfqTh57Q9Y1P = cfqTh57Q9Y1P + 1)
            p1->address[cfqTh57Q9Y1P] = '\0';
        if (RCfErDdogW == 1)
            p1->UzuTmb1NVdh = tVfwbi1dDJS;
        else
            p1->UzuTmb1NVdh = S8QYdcIi9p0h;
    }
    end = S8QYdcIi9p0h;
    p1 = end;
    cfqTh57Q9Y1P = 0;
    for (; p1 != tVfwbi1dDJS;) {
        printf ("%s %s %s %s %s%s\n", p1->U3mBKvu, p1->P0iOlo, p1->X6GYVHs0Bmu, p1->OqHh5t1K7fF0, p1->score, p1->address);
        p1 = p1->UzuTmb1NVdh;
    }
    printf ("%s %s %s %s %s%s", p1->U3mBKvu, p1->P0iOlo, p1->X6GYVHs0Bmu, p1->OqHh5t1K7fF0, p1->score, p1->address);
}

