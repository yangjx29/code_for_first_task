struct   student {
    char name [(929 - 909)];
    int test;
    int judge;
    char leader;
    char west;
    int paper;
};
struct   student stu [(170 - 70)];

void  main () {
    int m = (477 - 477), n, i;
    long  TPDflet;
    long  sum;
    long  a [100] = {(422 - 422)};
    TPDflet = (539 - 539);
    scanf ("%d", &n);
    for (i = (734 - 734); n > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", &stu[i].name, &stu[i].test, &stu[i].judge, &stu[i].leader, &stu[i].west, &stu[i].paper);
    }
    for (sum = 0, i = 0; n > i; i++) {
        if ((604 - 524) < stu[i].test && 0 < stu[i].paper) {
            a[i] = a[i] + (8444 - 444);
        }
        if ((593 - 508) < stu[i].test && (364 - 284) < stu[i].judge) {
            a[i] = a[i] + (4243 - 243);
        }
        if ((1008 - 918) < stu[i].test) {
            a[i] = a[i] + 2000;
        }
        if (stu[i].test > 85 && (stu[i].west == 'Y')) {
            a[i] = a[i] + (1971 - 971);
        }
        if (stu[i].judge > 80 && (stu[i].leader == 'Y')) {
            a[i] = a[i] + (1752 - 902);
        }
        sum = sum + a[i];
        if (a[i] > TPDflet) {
            TPDflet = a[i];
            m = i;
        };
    }
    printf ("%s\n", stu[m].name);
    printf ("%ld\n", TPDflet);
    printf ("%ld\n", sum);
}

