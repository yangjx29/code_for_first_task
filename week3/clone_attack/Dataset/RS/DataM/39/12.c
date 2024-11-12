struct   student {
    char AJn1KzUdGLb [(971 - 951)];
    int mark [(756 - 754)];
    char XCfY1Opj2lAH;
    char west;
    int paper;
    int money;
}
stu [100];

void  main () {
    int Hc7Uvtqo0y5w;
    int n;
    int wjwMIaRZQcW;
    int j;
    int a5QPWCbOJ;
    Hc7Uvtqo0y5w = (925 - 925);
    scanf ("%d", &n);
    {
        wjwMIaRZQcW = 875 - 875;
        while (n > wjwMIaRZQcW) {
            scanf ("%s %d %d %c %c %d", stu[wjwMIaRZQcW].AJn1KzUdGLb, &stu[wjwMIaRZQcW].mark[(736 - 736)], &stu[wjwMIaRZQcW].mark[(267 - 266)], &stu[wjwMIaRZQcW].XCfY1Opj2lAH, &stu[wjwMIaRZQcW].west, &stu[wjwMIaRZQcW].paper);
            stu[wjwMIaRZQcW].money = (876 - 876);
            if (stu[wjwMIaRZQcW].mark[(864 - 864)] > (479 - 399) && (672 - 671) <= stu[wjwMIaRZQcW].paper)
                stu[wjwMIaRZQcW].money += (8076 - 76);
            if ((298 - 213) < stu[wjwMIaRZQcW].mark[(258 - 258)] && (687 - 607) < stu[wjwMIaRZQcW].mark[1])
                stu[wjwMIaRZQcW].money += 4000;
            if (90 < stu[wjwMIaRZQcW].mark[0])
                stu[wjwMIaRZQcW].money += 2000;
            if (stu[wjwMIaRZQcW].mark[0] > 85 && stu[wjwMIaRZQcW].west == 'Y')
                stu[wjwMIaRZQcW].money += (1216 - 216);
            if (stu[wjwMIaRZQcW].mark[1] > 80 && stu[wjwMIaRZQcW].XCfY1Opj2lAH == 'Y')
                stu[wjwMIaRZQcW].money += 850;
            Hc7Uvtqo0y5w += stu[wjwMIaRZQcW].money;
            wjwMIaRZQcW = wjwMIaRZQcW + 1;
        };
    }
    a5QPWCbOJ = stu[0].money;
    {
        wjwMIaRZQcW = 1;
        while (wjwMIaRZQcW < n) {
            if (stu[wjwMIaRZQcW].money > a5QPWCbOJ) {
                a5QPWCbOJ = stu[wjwMIaRZQcW].money;
                j = wjwMIaRZQcW;
            }
            wjwMIaRZQcW++;
        };
    }
    printf ("%s\n%d\n", stu[j].AJn1KzUdGLb, stu[j].money);
    printf ("%d", Hc7Uvtqo0y5w);
}

