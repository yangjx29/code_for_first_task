struct   stu {
    char AVBrM3cJHR [(183 - 163)];
    char wHBai67UnP [(449 - 429)];
    char JKiehAxbcMqn;
    int GLv1jNG;
    char XmgJ9e [10];
    char WXaPVmb74Bf [(153 - 103)];
    struct   stu *uHi0xkEaG;
};
void  main () {
    int FsEvTgBMa;
    struct   stu *yWFzSBE = NULL;
    struct   stu *head = NULL;
    struct   stu *L5Nrx9kp = NULL;
    FsEvTgBMa = sizeof (struct   stu);
    yWFzSBE = (struct   stu *) malloc (FsEvTgBMa);
    yWFzSBE->uHi0xkEaG = NULL;
    for (; scanf ("%s", yWFzSBE->AVBrM3cJHR);) {
        if (!((943 - 943) != (strcmp (yWFzSBE->AVBrM3cJHR, "end"))))
            break;
        scanf ("%s %c %d %s %s", yWFzSBE->wHBai67UnP, &yWFzSBE->JKiehAxbcMqn, &yWFzSBE->GLv1jNG, &yWFzSBE->XmgJ9e, yWFzSBE->WXaPVmb74Bf);
        yWFzSBE->uHi0xkEaG = L5Nrx9kp;
        L5Nrx9kp = yWFzSBE;
        yWFzSBE = (struct   stu *) malloc (FsEvTgBMa);
    }
    for (; L5Nrx9kp != NULL;) {
        printf ("%s %s %c %d %s %s\n", L5Nrx9kp->AVBrM3cJHR, L5Nrx9kp->wHBai67UnP, L5Nrx9kp->JKiehAxbcMqn, L5Nrx9kp->GLv1jNG, L5Nrx9kp->XmgJ9e, L5Nrx9kp->WXaPVmb74Bf);
        L5Nrx9kp = L5Nrx9kp->uHi0xkEaG;
    }
}

