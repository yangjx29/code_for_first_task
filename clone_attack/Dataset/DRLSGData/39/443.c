struct   information {
    char name [(844 - 824)];
    int score;
    int marks;
    char BflwsIgVec;
    char Hy8nN5oQGc3;
    int lunwen;
    int oKzA7Q;
}
PDrv6q5KCp [101];

void  main () {
    int zEesaF;
    int i;
    int O8e92AE;
    int k;
    int rK1eqG;
    scanf ("%d", &zEesaF);
    for (i = (631 - 631); zEesaF > i; i++)
        scanf ("%s %d%d %c %c%d", PDrv6q5KCp[i].name, &PDrv6q5KCp[i].score, &PDrv6q5KCp[i].marks, &PDrv6q5KCp[i].BflwsIgVec, &PDrv6q5KCp[i].Hy8nN5oQGc3, &PDrv6q5KCp[i].lunwen);
    rK1eqG = (431 - 431);
    O8e92AE = (347 - 347);
    for (i = 0; i < zEesaF; i++) {
        PDrv6q5KCp[i].oKzA7Q = 0;
        if (!('Y' != PDrv6q5KCp[i].BflwsIgVec) && (441 - 361) < PDrv6q5KCp[i].marks)
            PDrv6q5KCp[i].oKzA7Q = PDrv6q5KCp[i].oKzA7Q + (920 - 70);
        if ((961 - 881) < PDrv6q5KCp[i].score) {
            if (PDrv6q5KCp[i].lunwen > 0)
                PDrv6q5KCp[i].oKzA7Q = PDrv6q5KCp[i].oKzA7Q + 8000;
            if (85 < PDrv6q5KCp[i].score) {
                if (PDrv6q5KCp[i].marks > 80)
                    PDrv6q5KCp[i].oKzA7Q = PDrv6q5KCp[i].oKzA7Q + 4000;
                if (PDrv6q5KCp[i].Hy8nN5oQGc3 == 'Y')
                    PDrv6q5KCp[i].oKzA7Q = PDrv6q5KCp[i].oKzA7Q + (1830 - 830);
                if (PDrv6q5KCp[i].score > 90)
                    PDrv6q5KCp[i].oKzA7Q = PDrv6q5KCp[i].oKzA7Q + 2000;
            }
        }
        if (PDrv6q5KCp[i].oKzA7Q > rK1eqG) {
            rK1eqG = PDrv6q5KCp[i].oKzA7Q;
            k = i;
        }
        O8e92AE = O8e92AE +PDrv6q5KCp[i].oKzA7Q;
    }
    printf ("%s\n%d\n%d\n", PDrv6q5KCp[k].name, rK1eqG, O8e92AE);
}

