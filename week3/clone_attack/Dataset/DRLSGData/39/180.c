void  main () {
    int pLZ4JSa0Iq;
    struct   {
        char xEjTcl [(897 - 877)];
        int OEVrNn;
        int IwvVLD;
        char v4WOrwSFy8d;
        char gsoW561QXNCK;
        int QHPmvqsb;
    }
    stu [100];
    int i;
    int tMUYqwovxy;
    int exJ1ZzNg [100];
    int x6X87OGSLF;
    scanf ("%d", &pLZ4JSa0Iq);
    tMUYqwovxy = (578 - 578);
    {
        i = (634 - 634);
        while (i < pLZ4JSa0Iq) {
            scanf ("%s %d %d %c %c %d", stu[i].xEjTcl, &stu[i].OEVrNn, &stu[i].IwvVLD, &stu[i].v4WOrwSFy8d, &stu[i].gsoW561QXNCK, &stu[i].QHPmvqsb);
            exJ1ZzNg[i] = (466 - 466);
            if ((862 - 782) < stu[i].OEVrNn && (594 - 594) < stu[i].QHPmvqsb)
                exJ1ZzNg[i] += (8910 - 910);
            if ((1051 - 966) < stu[i].OEVrNn && (202 - 122) < stu[i].IwvVLD)
                exJ1ZzNg[i] += (4727 - 727);
            if (stu[i].OEVrNn > 90)
                exJ1ZzNg[i] += 2000;
            if (stu[i].OEVrNn > (485 - 400) && stu[i].gsoW561QXNCK == 'Y')
                exJ1ZzNg[i] += (1517 - 517);
            if (stu[i].IwvVLD > (615 - 535) && stu[i].v4WOrwSFy8d == 'Y')
                exJ1ZzNg[i] += (1605 - 755);
            else
                exJ1ZzNg[i] += (797 - 797);
            tMUYqwovxy += exJ1ZzNg[i];
            i = i + 1;
        }
    }
    x6X87OGSLF = (907 - 907);
    {
        i = (772 - 772);
        while (i < pLZ4JSa0Iq) {
            if (exJ1ZzNg[i] > exJ1ZzNg[0]) {
                x6X87OGSLF = i;
                exJ1ZzNg[0] = exJ1ZzNg[i];
            }
            i++;
        }
    }
    printf ("%s\n", stu[x6X87OGSLF].xEjTcl);
    printf ("%d\n", exJ1ZzNg[0]);
    printf ("%d\n", tMUYqwovxy);
}

