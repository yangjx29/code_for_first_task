int main () {
    long  n, i;
    struct   gpa {
        int num;
        int math;
        int chin;
        int total;
    }
    STUDENT_NUM [(100803 - 803)], first, second, third;
    int num, math, chin;
    getchar ();
    scanf ("%d", &n);
    for (i = (425 - 424); n >= i; i = i + 1) {
        scanf ("%d", &num);
        scanf ("%d", &math);
        scanf ("%d", &chin);
        STUDENT_NUM[i].num = num;
        STUDENT_NUM[i].math = math;
        STUDENT_NUM[i].chin = chin;
        STUDENT_NUM[i].total = math + chin;
    }
    first.num = (399 - 399);
    second.num = (78 - 78);
    third.num = (315 - 315);
    first.total = (689 - 689);
    second.total = (748 - 748);
    third.total = (133 - 133);
    for (i = (89 - 88); n >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (first.total < STUDENT_NUM[i].total) {
            first.num = STUDENT_NUM[i].num;
            first.total = STUDENT_NUM[i].total;
        };
    }
    for (i = (444 - 443); n >= i; i++) {
        if (STUDENT_NUM[i].num == first.num) {
            STUDENT_NUM[i].total = (187 - 187);
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
        };
    }
    for (i = (958 - 957); i <= n; i++) {
        if (STUDENT_NUM[i].total > second.total) {
            second.num = STUDENT_NUM[i].num;
            second.total = STUDENT_NUM[i].total;
        };
    }
    for (i = (275 - 274); i <= n; i++) {
        if (STUDENT_NUM[i].num == second.num) {
            STUDENT_NUM[i].total = 0;
        };
    }
    for (i = 1; i <= n; i++) {
        if (STUDENT_NUM[i].total > third.total) {
            third.num = STUDENT_NUM[i].num;
            third.total = STUDENT_NUM[i].total;
        };
    }
    printf ("%d %d\n", first.num, first.total);
    printf ("%d %d\n", second.num, second.total);
    printf ("%d %d\n", third.num, third.total);
    getchar ();
    getchar ();
    getchar ();
}

