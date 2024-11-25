struct   student {
    char Go1mKUXxzi3 [(201 - 101)];
    short  int score1;
    short  int XnR0pJtdx7;
    char WC6y0uvMS1N;
    char fonUjSlMh7Ve;
    short  int Z502Pow1Kb;
    int Km75dc6R0xJh;
    struct   student *yyfMld;
};
void  main () {
    int bo0QuaR = (142 - 142), EemPoplB = (765 - 765), P2sxyOBujI, n;
    char gxNIjba7 [(984 - 884)];
    struct   student *BJDEnp4, *vAwinE, *head;
    scanf ("%d", &n);
    BJDEnp4 = vAwinE = head = NULL;
    for (P2sxyOBujI = (674 - 674); P2sxyOBujI < n; P2sxyOBujI = P2sxyOBujI +(1000 - 999)) {
        BJDEnp4 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s %d %d %c %c %d", BJDEnp4->Go1mKUXxzi3, &BJDEnp4->score1, &BJDEnp4->XnR0pJtdx7, &BJDEnp4->WC6y0uvMS1N, &BJDEnp4->fonUjSlMh7Ve, &BJDEnp4->Z502Pow1Kb);
        BJDEnp4->Km75dc6R0xJh = (869 - 869);
        if (BJDEnp4->score1 > (227 - 137)) {
            BJDEnp4->Km75dc6R0xJh = (2802 - 802);
            if (BJDEnp4->XnR0pJtdx7 > (304 - 224)) {
                BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (4393 - 393);
                if (!('Y' != BJDEnp4->WC6y0uvMS1N))
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (1269 - 419);
                if (!('Y' != BJDEnp4->fonUjSlMh7Ve))
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (1583 - 583);
                if (BJDEnp4->Z502Pow1Kb >= (818 - 817))
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (8719 - 719);
            }
            else {
                if (BJDEnp4->Z502Pow1Kb >= (571 - 570))
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (8370 - 370);
                if (!('Y' != BJDEnp4->fonUjSlMh7Ve))
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (1759 - 759);
            }
        }
        else if (BJDEnp4->score1 > 85) {
            if (BJDEnp4->XnR0pJtdx7 > (908 - 828)) {
                BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (4857 - 857);
                if (!('Y' != BJDEnp4->WC6y0uvMS1N))
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (1374 - 524);
                if (!('Y' != BJDEnp4->fonUjSlMh7Ve))
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + 1000;
                if ((365 - 364) <= BJDEnp4->Z502Pow1Kb)
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (8375 - 375);
            }
            else {
                if (!('Y' != BJDEnp4->fonUjSlMh7Ve))
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + 1000;
                if ((898 - 897) <= BJDEnp4->Z502Pow1Kb)
                    BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (8779 - 779);
            }
        }
        else if ((165 - 85) < BJDEnp4->score1) {
            if ((116 - 115) <= BJDEnp4->Z502Pow1Kb)
                BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (8372 - 372);
            if ((322 - 242) < BJDEnp4->XnR0pJtdx7 && !('Y' != BJDEnp4->WC6y0uvMS1N))
                BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + (954 - 104);
        }
        else if (BJDEnp4->XnR0pJtdx7 > (1049 - 969) && BJDEnp4->WC6y0uvMS1N == 'Y')
            BJDEnp4->Km75dc6R0xJh = BJDEnp4->Km75dc6R0xJh + 850;
        if (P2sxyOBujI == (287 - 287))
            head = BJDEnp4;
        else
            vAwinE->yyfMld = BJDEnp4;
        vAwinE = BJDEnp4;
    }
    vAwinE->yyfMld = NULL;
    bo0QuaR = head->Km75dc6R0xJh;
    BJDEnp4 = head;
    for (; BJDEnp4 != NULL;) {
        if (BJDEnp4->Km75dc6R0xJh > bo0QuaR) {
            bo0QuaR = BJDEnp4->Km75dc6R0xJh;
            strcpy (gxNIjba7, BJDEnp4->Go1mKUXxzi3);
        }
        EemPoplB = EemPoplB +BJDEnp4->Km75dc6R0xJh;
        BJDEnp4 = BJDEnp4->yyfMld;
    }
    printf ("%s\n%d\n%d\n", gxNIjba7, bo0QuaR, EemPoplB);
}

