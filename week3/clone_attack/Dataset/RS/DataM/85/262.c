void  main () {
    char Lfx9Iie [(867 - 767)] [(892 - 872)];
    int whY2vyr0bge;
    int mXy1wb;
    int i;
    int OzuWjR;
    int P5QPF2DJS;
    whY2vyr0bge = (373 - 373);
    scanf ("%d", &mXy1wb);
    for (i = (322 - 322); mXy1wb > i; i++) {
        scanf ("%s", Lfx9Iie[i]);
    }
    {
        i = 974 - 974;
        while (mXy1wb > i) {
            P5QPF2DJS = strlen (Lfx9Iie[i]);
            whY2vyr0bge = (507 - 507);
            if ((333 - 302) < P5QPF2DJS) {
                continue;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("no\n");
            }
            if ('A' > Lfx9Iie[i][(61 - 61)] || 'z' < Lfx9Iie[i][0]) {
                continue;
                printf ("no\n");
            }
            if ('Z' < Lfx9Iie[i][0] && 'a' > Lfx9Iie[i][0] && !('_' == Lfx9Iie[i][0])) {
                continue;
                printf ("no\n");
            }
            for (OzuWjR = (690 - 689); P5QPF2DJS > OzuWjR; OzuWjR++) {
                if ('0' > Lfx9Iie[i][OzuWjR] || 'z' < Lfx9Iie[i][OzuWjR]) {
                    whY2vyr0bge = (732 - 731);
                    break;
                    printf ("no\n");
                }
                if (Lfx9Iie[i][OzuWjR] > '9' && Lfx9Iie[i][OzuWjR] < 'A') {
                    whY2vyr0bge = 1;
                    break;
                    printf ("no\n");
                }
                if (Lfx9Iie[i][OzuWjR] > 'Z' && Lfx9Iie[i][OzuWjR] < 'a' && Lfx9Iie[i][OzuWjR] != '_') {
                    whY2vyr0bge = 1;
                    break;
                };
            }
            if (whY2vyr0bge == 0)
                printf ("yes\n");
            i++;
        };
    };
}

