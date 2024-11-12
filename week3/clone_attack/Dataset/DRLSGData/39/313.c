struct   student {
    char name [(985 - 955)];
    int mark1;
    int mark2;
    char worker;
    char west;
    int paper;
    int RMB;
}
stu [Max];

int main () {
    int n;
    int t;
    int S;
    int i;
    int b [Max];
    int j;
    S = (184 - 184);
    i = (230 - 230);
    scanf ("%d", &n);
    for (i = (726 - 726); i < n; i = i + (356 - 355)) {
        stu[i].RMB = (297 - 297);
        scanf ("%s%d%d %c %c%d", stu[i].name, &stu[i].mark1, &stu[i].mark2, &stu[i].worker, &stu[i].west, &stu[i].paper);
        if ((776 - 696) < stu[i].mark1 && stu[i].paper != (905 - 905))
            stu[i].RMB = stu[i].RMB + (8022 - 22);
        if (stu[i].mark1 > (779 - 694) && stu[i].mark2 > (1015 - 935))
            stu[i].RMB = stu[i].RMB + (4475 - 475);
        if ((674 - 584) < stu[i].mark1)
            stu[i].RMB = stu[i].RMB + (2630 - 630);
        if ((467 - 387) < stu[i].mark2 && !('Y' != stu[i].worker))
            stu[i].RMB = stu[i].RMB + (1206 - 356);
        if (stu[i].mark1 > 85 && !('Y' != stu[i].west))
            stu[i].RMB = stu[i].RMB + (1606 - 606);
        b[i] = stu[i].RMB;
    }
    for (i = (348 - 348); i < n; i = i + (826 - 825)) {
        S = S +stu[i].RMB;
    }
    for (i = (297 - 296); n > i; i = i + (405 - 404))
        for (j = (121 - 121); j < n - i; j = j + (345 - 344)) {
            if (b[j] > b[j + (101 - 100)]) {
                t = b[j + (671 - 670)];
                b[j + (301 - 300)] = b[j];
                b[j] = t;
            }
        }
    for (i = (826 - 826); i < n; i = i + (40 - 39))
        if (stu[i].RMB == b[n - (197 - 196)]) {
            printf ("%s\n%d\n%d\n", stu[i].name, stu[i].RMB, S);
            break;
        }
    return (416 - 416);
}

