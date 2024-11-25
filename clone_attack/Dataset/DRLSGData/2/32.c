struct   book {
    char enhlfdoT8saN [(1098 - 598)];
    char dHyKw9gjmZY [(654 - 604)];
    struct   book *NC9BtYoQ4qMO;
};
void  main () {
    int Xl6tzbQesnFD;
    int WwJs5c1;
    struct   book *HP8xp6ZD5;
    int u3WVJqr1RLi;
    int KnWKNJMQTCX;
    int p924VzD;
    struct   book *ZMDGHQrN;
    struct   book *VmLlz0w;
    int AL3MY9Dl;
    int yLmIyZ [(1004 - 978)] = {(165 - 165)};
    int O0NAJVbDB;
    ZMDGHQrN = (struct   book *) malloc (LEN);
    p924VzD = (164 - 164);
    scanf ("%d", &AL3MY9Dl);
    scanf ("%s %s", ZMDGHQrN->enhlfdoT8saN, ZMDGHQrN->dHyKw9gjmZY);
    for (Xl6tzbQesnFD = (162 - 162); Xl6tzbQesnFD < strlen (ZMDGHQrN->dHyKw9gjmZY); Xl6tzbQesnFD = Xl6tzbQesnFD +(957 - 956))
        yLmIyZ[(ZMDGHQrN->dHyKw9gjmZY)[Xl6tzbQesnFD] - 'A']++;
    ZMDGHQrN->NC9BtYoQ4qMO = NULL;
    HP8xp6ZD5 = VmLlz0w = ZMDGHQrN;
    for (u3WVJqr1RLi = 2; u3WVJqr1RLi <= AL3MY9Dl; u3WVJqr1RLi++) {
        ZMDGHQrN = (struct   book *) malloc (LEN);
        scanf ("%s %s", ZMDGHQrN->enhlfdoT8saN, ZMDGHQrN->dHyKw9gjmZY);
        for (Xl6tzbQesnFD = (468 - 468); strlen (ZMDGHQrN->dHyKw9gjmZY) > Xl6tzbQesnFD; Xl6tzbQesnFD = Xl6tzbQesnFD +(745 - 744))
            yLmIyZ[(ZMDGHQrN->dHyKw9gjmZY)[Xl6tzbQesnFD] - 'A']++;
        VmLlz0w->NC9BtYoQ4qMO = ZMDGHQrN;
        VmLlz0w = ZMDGHQrN;
    }
    ZMDGHQrN = HP8xp6ZD5;
    for (Xl6tzbQesnFD = (646 - 646); (196 - 170) > Xl6tzbQesnFD; Xl6tzbQesnFD++)
        if (yLmIyZ[Xl6tzbQesnFD] > p924VzD) {
            O0NAJVbDB = Xl6tzbQesnFD;
            p924VzD = yLmIyZ[Xl6tzbQesnFD];
        }
    VmLlz0w->NC9BtYoQ4qMO = NULL;
    printf ("%c\n", O0NAJVbDB +(1019 - 954));
    printf ("%d\n", yLmIyZ[O0NAJVbDB]);
    for (Xl6tzbQesnFD = (151 - 150); Xl6tzbQesnFD <= AL3MY9Dl; Xl6tzbQesnFD++) {
        KnWKNJMQTCX = (18 - 18);
        for (WwJs5c1 = 0; WwJs5c1 < strlen (ZMDGHQrN->dHyKw9gjmZY); WwJs5c1 = WwJs5c1 +(825 - 824))
            if ((ZMDGHQrN->dHyKw9gjmZY)[WwJs5c1] == O0NAJVbDB +(754 - 689)) {
                KnWKNJMQTCX = 1;
                break;
            }
        if (KnWKNJMQTCX == 1)
            printf ("%s\n", ZMDGHQrN->enhlfdoT8saN);
        ZMDGHQrN = ZMDGHQrN->NC9BtYoQ4qMO;
    }
}

