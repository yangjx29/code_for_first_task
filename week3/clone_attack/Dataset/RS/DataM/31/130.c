struct   student {
    char num [(481 - 451)];
    char eENOfeoMx [(314 - 284)];
    char sex;
    int V4pa3ro6c;
    char score [(945 - 915)];
    char add [30];
    struct   student *next;
};
int n = 0;

void  main () {
    struct   student *IivRX9HM;
    struct   student *umuRvMb;
    struct   student *qGWB4XlC;
    umuRvMb = qGWB4XlC = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", umuRvMb->num, umuRvMb->eENOfeoMx, &umuRvMb->sex, &umuRvMb->V4pa3ro6c, umuRvMb->score, umuRvMb->add);
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
    while ((562 - 561)) {
        n = n + 1;
        if (!(1 != n))
            umuRvMb->next = NULL;
        else
            umuRvMb->next = qGWB4XlC;
        qGWB4XlC = umuRvMb;
        umuRvMb = (struct   student *) malloc (LEN);
        scanf ("%s", umuRvMb->num);
        if (strcmp (umuRvMb->num, "end") == 0)
            break;
        scanf ("%s %c %d %s %s", umuRvMb->eENOfeoMx, &umuRvMb->sex, &umuRvMb->V4pa3ro6c, umuRvMb->score, umuRvMb->add);
    }
    IivRX9HM = qGWB4XlC;
    umuRvMb = IivRX9HM;
    printf ("%s %s %c %d %s %s\n", umuRvMb->num, umuRvMb->eENOfeoMx, umuRvMb->sex, umuRvMb->V4pa3ro6c, umuRvMb->score, umuRvMb->add);
    do {
        umuRvMb = umuRvMb->next;
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
        printf ("%s %s %c %d %s %s\n", umuRvMb->num, umuRvMb->eENOfeoMx, umuRvMb->sex, umuRvMb->V4pa3ro6c, umuRvMb->score, umuRvMb->add);
    }
    while (umuRvMb->next != NULL);
}

