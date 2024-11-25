struct   student {
    char K7B86W [(878 - 778)];
    char wERkvjTPI [(192 - 92)];
    char KwrfYS4Lk;
    int scU6Zk3FN4S;
    char i7oa5Ut [(41 - 21)];
    char GxMe6RYp [(979 - 879)];
    struct   student *cm6veUkD;
    struct   student *wKzVLs;
};
void  main () {
    int OSElmkDXNF;
    struct   student *Ula9Jgp7DcZq;
    struct   student *adMrGBAi;
    Ula9Jgp7DcZq = adMrGBAi = (struct   student *) malloc (LEN);
    OSElmkDXNF = (932 - 932);
    Ula9Jgp7DcZq->wKzVLs = NULL;
    scanf ("%s", &Ula9Jgp7DcZq->K7B86W);
    for (; Ula9Jgp7DcZq->K7B86W[(536 - 536)] != 'e' || Ula9Jgp7DcZq->K7B86W[(778 - 777)] != 'n' || Ula9Jgp7DcZq->K7B86W[(180 - 178)] != 'd';) {
        scanf ("%s %c%d%s%s", &Ula9Jgp7DcZq->wERkvjTPI, &Ula9Jgp7DcZq->KwrfYS4Lk, &Ula9Jgp7DcZq->scU6Zk3FN4S, &Ula9Jgp7DcZq->i7oa5Ut, &Ula9Jgp7DcZq->GxMe6RYp);
        OSElmkDXNF = OSElmkDXNF +(164 - 163);
        adMrGBAi->cm6veUkD = Ula9Jgp7DcZq;
        adMrGBAi = Ula9Jgp7DcZq;
        Ula9Jgp7DcZq = (struct   student *) malloc (LEN);
        Ula9Jgp7DcZq->wKzVLs = adMrGBAi;
        scanf ("%s", &Ula9Jgp7DcZq->K7B86W);
    }
    adMrGBAi->cm6veUkD = NULL;
    for (; adMrGBAi != NULL;) {
        printf ("%s %s %c %d %s %s\n", adMrGBAi->K7B86W, adMrGBAi->wERkvjTPI, adMrGBAi->KwrfYS4Lk, adMrGBAi->scU6Zk3FN4S, adMrGBAi->i7oa5Ut, adMrGBAi->GxMe6RYp);
        adMrGBAi = adMrGBAi->wKzVLs;
    }
}

