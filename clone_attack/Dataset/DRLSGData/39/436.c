struct   Student {
    char iFr7R9pI6onJ [20];
    int mark;
    int rvHFgISo916;
    char Yk38R0g7cL;
    char NURBfN;
    int OhuA9FPlw;
    int KE6YmqeDb;
};
void  main () {
    int R0BJEk59z;
    struct   Student xK47iMr [(132 - 32)] = {(975 - 975)};
    int kQZrn5Aolmi;
    int JBUIKu;
    int tot;
    kQZrn5Aolmi = (60 - 60);
    scanf ("%d", &JBUIKu);
    for (R0BJEk59z = (278 - 278); R0BJEk59z < JBUIKu; R0BJEk59z++) {
        scanf ("%s %d %d %c %c %d", xK47iMr[R0BJEk59z].iFr7R9pI6onJ, &xK47iMr[R0BJEk59z].mark, &xK47iMr[R0BJEk59z].rvHFgISo916, &xK47iMr[R0BJEk59z].Yk38R0g7cL, &xK47iMr[R0BJEk59z].NURBfN, &xK47iMr[R0BJEk59z].OhuA9FPlw);
    }
    for (R0BJEk59z = 0; R0BJEk59z < JBUIKu; R0BJEk59z++) {
        if (xK47iMr[R0BJEk59z].mark > (200 - 120) && xK47iMr[R0BJEk59z].OhuA9FPlw > 0)
            xK47iMr[R0BJEk59z].KE6YmqeDb = xK47iMr[R0BJEk59z].KE6YmqeDb + 8000;
        if (xK47iMr[R0BJEk59z].mark > (334 - 249) && xK47iMr[R0BJEk59z].rvHFgISo916 > (437 - 357))
            xK47iMr[R0BJEk59z].KE6YmqeDb = xK47iMr[R0BJEk59z].KE6YmqeDb + (4506 - 506);
        if (90 < xK47iMr[R0BJEk59z].mark)
            xK47iMr[R0BJEk59z].KE6YmqeDb = xK47iMr[R0BJEk59z].KE6YmqeDb + (2788 - 788);
        if (xK47iMr[R0BJEk59z].mark > (1060 - 975) && (!('Y' != xK47iMr[R0BJEk59z].NURBfN)))
            xK47iMr[R0BJEk59z].KE6YmqeDb = xK47iMr[R0BJEk59z].KE6YmqeDb + (1680 - 680);
        if (xK47iMr[R0BJEk59z].Yk38R0g7cL == 'Y' && (xK47iMr[R0BJEk59z].rvHFgISo916 > 80))
            xK47iMr[R0BJEk59z].KE6YmqeDb = xK47iMr[R0BJEk59z].KE6YmqeDb + (1559 - 709);
    }
    for (R0BJEk59z = 1; R0BJEk59z < JBUIKu; R0BJEk59z++)
        if (xK47iMr[kQZrn5Aolmi].KE6YmqeDb < xK47iMr[R0BJEk59z].KE6YmqeDb)
            kQZrn5Aolmi = R0BJEk59z;
    tot = 0;
    for (R0BJEk59z = 0; R0BJEk59z < JBUIKu; R0BJEk59z++)
        tot = tot + xK47iMr[R0BJEk59z].KE6YmqeDb;
    printf ("%s\n%d\n%d", xK47iMr[kQZrn5Aolmi].iFr7R9pI6onJ, xK47iMr[kQZrn5Aolmi].KE6YmqeDb, tot);
}

