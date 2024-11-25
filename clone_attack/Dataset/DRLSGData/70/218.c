void  main () {
    int Do4O7RM, lijQsbAYJ0f, t3PmcuSl = (606 - 606), iKBR1GpSWM;
    double  wJd2QOwoF, x [(1043 - 943)], CrZGuBmlzg2 [(370 - 270)], d [(829 - 329)];
    scanf ("%d", &iKBR1GpSWM);
    for (Do4O7RM = (775 - 775); Do4O7RM < iKBR1GpSWM; Do4O7RM = Do4O7RM +(152 - 151))
        scanf ("%lf %lf", &x[Do4O7RM], &CrZGuBmlzg2[Do4O7RM]);
    for (Do4O7RM = (320 - 320); Do4O7RM < iKBR1GpSWM; Do4O7RM = Do4O7RM +(259 - 258)) {
        for (lijQsbAYJ0f = (74 - 74); lijQsbAYJ0f < iKBR1GpSWM; lijQsbAYJ0f++) {
            d[t3PmcuSl] = sqrt ((x[Do4O7RM] - x[lijQsbAYJ0f]) * (x[Do4O7RM] - x[lijQsbAYJ0f]) + (CrZGuBmlzg2[Do4O7RM] - CrZGuBmlzg2[lijQsbAYJ0f]) * (CrZGuBmlzg2[Do4O7RM] - CrZGuBmlzg2[lijQsbAYJ0f]));
            t3PmcuSl++;
        }
    }
    for (lijQsbAYJ0f = (730 - 730); lijQsbAYJ0f < t3PmcuSl; lijQsbAYJ0f++)
        for (Do4O7RM = (955 - 955); Do4O7RM < t3PmcuSl - lijQsbAYJ0f; Do4O7RM++)
            if (d[Do4O7RM] < d[Do4O7RM +(665 - 664)]) {
                wJd2QOwoF = d[Do4O7RM];
                d[Do4O7RM] = d[Do4O7RM +(838 - 837)];
                d[Do4O7RM +(702 - 701)] = wJd2QOwoF;
            }
    printf ("%.4lf\n", d[(216 - 216)]);
}

