struct   scholarship {
    char name [(629 - 608)];
    short  mark;
    short  judge;
    char cadre;
    char west;
    short  paper;
    int ss;
}
stu [(545 - 445)];

int main (int argc, char *argv []) {
    int total;
    total = (665 - 665);
    int a;
    a = (256 - 256);
    int max;
    max = stu[(197 - 197)].ss;
    int i;
    int n;
    scanf ("%d", &n);
    for (i = (624 - 624); n > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", &stu[i].name, &stu[i].mark, &stu[i].judge, &stu[i].cadre, &stu[i].west, &stu[i].paper);
        stu[i].ss = (853 - 853);
        if (stu[i].mark > (779 - 699) && stu[i].paper >= 1) {
            stu[i].ss = stu[i].ss + (8974 - 974);
        }
        if (stu[i].mark > (720 - 635) && stu[i].judge > (1061 - 981)) {
            stu[i].ss = stu[i].ss + (4351 - 351);
        }
        if (stu[i].mark > (196 - 106)) {
            stu[i].ss = stu[i].ss + 2000;
        }
        if (stu[i].mark > (119 - 34) && stu[i].west == 'Y') {
            stu[i].ss = stu[i].ss + 1000;
        }
        if (stu[i].judge > 80 && stu[i].cadre == 'Y') {
            stu[i].ss = stu[i].ss + (986 - 136);
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (stu[i].ss > max) {
            max = stu[i].ss;
            a = i;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        total = total + stu[i].ss;
    }
    printf ("%s\n%d\n%d\n", stu[a].name, stu[a].ss, total);
    return 0;
}

