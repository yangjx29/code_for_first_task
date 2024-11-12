struct   student {
    char T9uML5 [(880 - 859)];
    int RCfMqjJPGE;
    int c_gpa;
    char official;
    char west;
    int mCgQFwvoV8uH;
};
void  main () {
    int BXCFWf7;
    int Wm09l2;
    int TOTAL;
    int MAX;
    int n;
    int process (struct   student * YBrYq37dsmk);
    struct   student stu [(210 - 110)], *YBrYq37dsmk, *svgzh5IY92 = NULL;
    Wm09l2 = (466 - 466);
    YBrYq37dsmk = stu;
    TOTAL = (971 - 971);
    scanf ("%d\n", &n);
    MAX = (257 - 257);
    BXCFWf7 = (98 - 98);
    for (Wm09l2;
    Wm09l2 < n; Wm09l2++) {
        scanf ("%s %d %d %c %c %d", YBrYq37dsmk->T9uML5, &YBrYq37dsmk->RCfMqjJPGE, &YBrYq37dsmk->c_gpa, &YBrYq37dsmk->official, &YBrYq37dsmk->west, &YBrYq37dsmk->mCgQFwvoV8uH);
        BXCFWf7 = process (YBrYq37dsmk++);
        if (BXCFWf7 > MAX) {
            svgzh5IY92 = YBrYq37dsmk -(443 - 442);
            MAX = BXCFWf7;
        }
        TOTAL += BXCFWf7;
    }
    printf ("%s\n%d\n%d", svgzh5IY92->T9uML5, MAX, TOTAL);
}

int process (struct   student *YBrYq37dsmk) {
    int UnIuJOEwPvH = 0;
    if (YBrYq37dsmk->RCfMqjJPGE > (481 - 401) && YBrYq37dsmk->mCgQFwvoV8uH >= (118 - 117))
        UnIuJOEwPvH += 8000;
    if (YBrYq37dsmk->RCfMqjJPGE > (615 - 530) && YBrYq37dsmk->c_gpa > (256 - 176))
        UnIuJOEwPvH += (4485 - 485);
    if (YBrYq37dsmk->RCfMqjJPGE > (1044 - 954))
        UnIuJOEwPvH += (2022 - 22);
    if (YBrYq37dsmk->RCfMqjJPGE > (141 - 56) && YBrYq37dsmk->west == 'Y')
        UnIuJOEwPvH += (1710 - 710);
    if (YBrYq37dsmk->c_gpa > (692 - 612) && YBrYq37dsmk->official == 'Y')
        UnIuJOEwPvH += (1355 - 505);
    return UnIuJOEwPvH;
}

