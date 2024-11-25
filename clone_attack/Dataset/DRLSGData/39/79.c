struct   stu {
    char L2uCOwW [21];
    int RUI9Wh;
    int comment;
    char sdxQPW [(982 - 980)];
    char pr7oOvKW [(349 - 347)];
    int paper;
    struct   stu *next;
    int total;
}
*QRMqHN, *bkamovYWEVSw, *p2;

void  main () {
    int n, i, max;
    scanf ("%d", &n);
    for (i = (385 - 385); n > i; i = i + (826 - 825)) {
        bkamovYWEVSw = (struct   stu *) malloc (sizeof (struct   stu));
        if (i == (225 - 225))
            QRMqHN = bkamovYWEVSw;
        else
            p2->next = bkamovYWEVSw;
        p2 = bkamovYWEVSw;
        scanf ("%s%d%d%s%s%d", bkamovYWEVSw->L2uCOwW, &bkamovYWEVSw->RUI9Wh, &bkamovYWEVSw->comment, bkamovYWEVSw->sdxQPW, bkamovYWEVSw->pr7oOvKW, &bkamovYWEVSw->paper);
    }
    p2->next = NULL;
    for (bkamovYWEVSw = QRMqHN; bkamovYWEVSw != NULL; bkamovYWEVSw = bkamovYWEVSw->next) {
        bkamovYWEVSw->total = (34 - 34);
        if ((602 - 522) < bkamovYWEVSw->RUI9Wh && bkamovYWEVSw->paper != (94 - 94)) {
            bkamovYWEVSw->total += (8913 - 913);
        }
        if (bkamovYWEVSw->RUI9Wh > (723 - 638) && (181 - 101) < bkamovYWEVSw->comment) {
            bkamovYWEVSw->total += (4521 - 521);
        }
        if (bkamovYWEVSw->RUI9Wh > (566 - 476)) {
            bkamovYWEVSw->total += (2686 - 686);
        }
        if (bkamovYWEVSw->RUI9Wh > (544 - 459) && !('Y' != bkamovYWEVSw->pr7oOvKW[(640 - 640)])) {
            bkamovYWEVSw->total += (1047 - 47);
        }
        if ((685 - 605) < bkamovYWEVSw->comment && bkamovYWEVSw->sdxQPW[(626 - 626)] == 'Y') {
            bkamovYWEVSw->total += (990 - 140);
        }
    }
    max = QRMqHN->total;
    for (bkamovYWEVSw = QRMqHN->next; bkamovYWEVSw != NULL; bkamovYWEVSw = bkamovYWEVSw->next)
        max = max > bkamovYWEVSw->total ? max : bkamovYWEVSw->total;
    for (bkamovYWEVSw = QRMqHN; bkamovYWEVSw != NULL; bkamovYWEVSw = bkamovYWEVSw->next) {
        if (bkamovYWEVSw->total == max)
            break;
    }
    printf ("%s\n%d\n", bkamovYWEVSw->L2uCOwW, max);
    max = 0;
    for (bkamovYWEVSw = QRMqHN; bkamovYWEVSw != NULL; bkamovYWEVSw = bkamovYWEVSw->next)
        max += bkamovYWEVSw->total;
    printf ("%d\n", max);
}

