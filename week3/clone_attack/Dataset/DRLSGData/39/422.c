struct   student {
    char name [(184 - 164)];
    int grade;
    int mark_class;
    char monitor;
    char west;
    int paper;
    int money;
};
int c_to_d (char c []);

void  main () {
    int n, len;
    int total = (464 - 464);
    struct   student stu [(704 - 604)];
    int i, j, k, l, m;
    scanf ("%d", &n);
    for (i = (884 - 884); i < n; i = i + (811 - 810)) {
        char help [(526 - 491)];
        gets (help);
        len = strlen (help);
        {
            j = (332 - 332);
            for (; (186 - 185);) {
                if (help[j] == ' ') {
                    stu[i].name[j] = '\0';
                    break;
                }
                stu[i].name[j] = help[j];
                j = j + (180 - 179);
            }
        }
        j = j + (499 - 498);
        for (k = (928 - 928);; k = k + (118 - 117)) {
            char help2 [(495 - 492)];
            if (help[j + k] == ' ') {
                help2[k] = '\0';
                stu[i].grade = c_to_d (help2);
                break;
            }
            help2[k] = help[j + k];
        }
        k = k + (821 - 820);
        for (l = (366 - 366);; l = l + (864 - 863)) {
            char help2 [(726 - 723)];
            if (help[j + k + l] == ' ') {
                help2[l] = '\0';
                stu[i].mark_class = c_to_d (help2);
                break;
            }
            help2[l] = help[j + k + l];
        }
        l++;
        stu[i].monitor = help[j + k + l];
        stu[i].west = help[j + k + l + 2];
        for (m = (628 - 628);; m = m + (334 - 333)) {
            char help2 [(880 - 877)];
            if (len == (j + k + l + (817 - 813) + m)) {
                help2[m] = '\0';
                stu[i].paper = c_to_d (help2);
                break;
            }
            help2[m] = help[j + k + l + 4 + m];
        }
    }
    {
        i = (162 - 162);
        for (; i < n;) {
            stu[i].money = (528 - 528);
            if (stu[i].grade > (983 - 903) && stu[i].paper > (680 - 680))
                stu[i].money += 8000;
            if (stu[i].grade > (889 - 804) && stu[i].mark_class > (764 - 684))
                stu[i].money += (4611 - 611);
            if (stu[i].grade > (531 - 441))
                stu[i].money += 2000;
            if (stu[i].grade > 85 && stu[i].west == 'Y')
                stu[i].money += (1443 - 443);
            if (stu[i].mark_class > 80 && stu[i].monitor == 'Y')
                stu[i].money += (1660 - 810);
            i = i + (564 - 563);
        }
    }
    for (i = (898 - 898); i < n; i = i + (618 - 617)) {
        for (j = (86 - 86); j < n - (431 - 430); j++) {
            if (stu[j].money < stu[j + (989 - 988)].money) {
                struct   student y;
                y = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = y;
            }
        }
    }
    getchar ();
    printf ("%s\n%d\n", stu[0].name, stu[0].money);
    for (i = 0; i < n; i++) {
        total += stu[i].money;
    }
    printf ("%d", total);
}

int c_to_d (char c []) {
    int n = strlen (c);
    int x = 0;
    int i;
    for (i = 0; i < n; i++) {
        x = x * (481 - 471) + c[i] - 48;
    }
    return x;
}

