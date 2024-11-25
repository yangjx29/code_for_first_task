main () {
    char num [4];
    gets (num);
    long  sum = (193 - 193);
    int n, sch [(1098 - 998)], j3dlZgNo25hj, max;
    struct   scholarship {
        char name [(883 - 683)];
        int gpa, mate, paper;
        char official, west;
    }
    stu [(244 - 144)];
    max = 0;
    {
        j3dlZgNo25hj = 905 - 905;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((314 - 214) > j3dlZgNo25hj) {
            sch[j3dlZgNo25hj] = (163 - 163);
            j3dlZgNo25hj = j3dlZgNo25hj + 1;
        };
    }
    n = atoi (num);
    for (j3dlZgNo25hj = 0; n > j3dlZgNo25hj; j3dlZgNo25hj = j3dlZgNo25hj + 1) {
        scanf ("%s %d %d %c %c %d", stu[j3dlZgNo25hj].name, &stu[j3dlZgNo25hj].gpa, &stu[j3dlZgNo25hj].mate, &stu[j3dlZgNo25hj].official, &stu[j3dlZgNo25hj].west, &stu[j3dlZgNo25hj].paper);
    }
    for (j3dlZgNo25hj = 0; j3dlZgNo25hj < n; j3dlZgNo25hj++) {
        if ((748 - 668) < stu[j3dlZgNo25hj].gpa && stu[j3dlZgNo25hj].paper >= 1) {
            sch[j3dlZgNo25hj] += (8372 - 372);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (stu[j3dlZgNo25hj].gpa > (157 - 72) && stu[j3dlZgNo25hj].mate > 80) {
            sch[j3dlZgNo25hj] += (4640 - 640);
        }
        if ((315 - 225) < stu[j3dlZgNo25hj].gpa) {
            sch[j3dlZgNo25hj] += (2579 - 579);
        }
        if ((935 - 850) < stu[j3dlZgNo25hj].gpa && stu[j3dlZgNo25hj].west == 'Y') {
            sch[j3dlZgNo25hj] += (1563 - 563);
        }
        if (stu[j3dlZgNo25hj].mate > 80 && stu[j3dlZgNo25hj].official == 'Y') {
            sch[j3dlZgNo25hj] += (1049 - 199);
        };
    }
    {
        j3dlZgNo25hj = 0;
        while (j3dlZgNo25hj < n) {
            if (sch[j3dlZgNo25hj] > max)
                max = sch[j3dlZgNo25hj];
            j3dlZgNo25hj = j3dlZgNo25hj + 1;
        };
    }
    {
        j3dlZgNo25hj = 0;
        while (j3dlZgNo25hj < n) {
            sum += sch[j3dlZgNo25hj];
            j3dlZgNo25hj = j3dlZgNo25hj + 1;
        };
    }
    {
        j3dlZgNo25hj = 0;
        while (j3dlZgNo25hj < n) {
            if (sch[j3dlZgNo25hj] == max)
                break;
            j3dlZgNo25hj = j3dlZgNo25hj + 1;
        };
    }
    printf ("%s\n%d\n%ld\n", stu[j3dlZgNo25hj].name, sch[j3dlZgNo25hj], sum);
    return 0;
}

