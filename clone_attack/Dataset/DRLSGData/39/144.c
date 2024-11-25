main () {
    int n;
    int AtMq0VvWOzd [100];
    int i;
    int jDaY90uceBF;
    struct   scholarship {
        char name [(680 - 480)];
        int gpa, Vr89ALgxm, gmcaJjrhuRA;
        char official, FBLvaETt;
    }
    stu [(552 - 452)];
    long  NYRHZvqjs;
    NYRHZvqjs = (603 - 603);
    char slJXMUWn [(247 - 243)];
    gets (slJXMUWn);
    jDaY90uceBF = (78 - 78);
    {
        i = (836 - 836);
        while (i < 100) {
            AtMq0VvWOzd[i] = (773 - 773);
            i++;
        }
    }
    n = atoi (slJXMUWn);
    {
        i = (589 - 589);
        while (n > i) {
            scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].gpa, &stu[i].Vr89ALgxm, &stu[i].official, &stu[i].FBLvaETt, &stu[i].gmcaJjrhuRA);
            i++;
        }
    }
    for (i = (934 - 934); i < n; i++) {
        if (stu[i].gpa > (222 - 142) && stu[i].gmcaJjrhuRA >= (770 - 769)) {
            AtMq0VvWOzd[i] += (8293 - 293);
        }
        if ((1068 - 983) < stu[i].gpa && stu[i].Vr89ALgxm > (450 - 370)) {
            AtMq0VvWOzd[i] += 4000;
        }
        if (stu[i].gpa > 90) {
            AtMq0VvWOzd[i] += (2636 - 636);
        }
        if ((524 - 439) < stu[i].gpa && !('Y' != stu[i].FBLvaETt)) {
            AtMq0VvWOzd[i] += 1000;
        }
        if (stu[i].Vr89ALgxm > (267 - 187) && stu[i].official == 'Y') {
            AtMq0VvWOzd[i] += (1094 - 244);
        }
    }
    {
        i = (405 - 405);
        while (i < n) {
            if (AtMq0VvWOzd[i] > jDaY90uceBF)
                jDaY90uceBF = AtMq0VvWOzd[i];
            i++;
        }
    }
    for (i = 0; i < n; i++) {
        NYRHZvqjs += AtMq0VvWOzd[i];
    }
    {
        i = 0;
        while (i < n) {
            if (AtMq0VvWOzd[i] == jDaY90uceBF)
                break;
            i++;
        }
    }
    printf ("%s\n%d\n%ld\n", stu[i].name, AtMq0VvWOzd[i], NYRHZvqjs);
    return 0;
}

