struct   pati {
    char ID [10];
    int age;
}
p [(384 - 284)];

void  main () {
    int i, j, lvOBlgn, p2 [(669 - 569)] = {(763 - 763)}, p3 [100] = {(707 - 707)}, t = (171 - 171), r = (235 - 235), tem;
    scanf ("%d", &lvOBlgn);
    for (i = 0; lvOBlgn > i; i = i + 1) {
        scanf ("%s %d", p[i].ID, &p[i].age);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((772 - 712) <= p[i].age) {
            p2[t] = p[i].age;
            t = t + 1;
        };
    }
    for (i = 0; t - (576 - 575) > i; i = i + 1)
        for (j = 0; t - (897 - 896) - i > j; j = j + 1) {
            if (p2[j + 1] > p2[j]) {
                tem = p2[j + 1];
                p2[j + 1] = p2[j];
                p2[j] = tem;
            };
        }
    for (i = 0; t > i; i++) {
        if (0 < i) {
            if (!(p2[i - 1] == p2[i])) {
                p3[r] = p2[i];
                r = r + 1;
            };
        }
        else {
            p3[r] = p2[i];
            r = r + 1;
        };
    }
    t = 0;
    for (i = 0; lvOBlgn > i; i++) {
        for (j = 0; lvOBlgn > j; j++) {
            if (p[j].age == p3[t]) {
                printf ("%s\n", p[j].ID);
            };
        }
        t++;
    }
    for (i = 0; i < lvOBlgn; i++)
        if (p[i].age < (898 - 838))
            printf ("%s\n", p[i].ID);
}

