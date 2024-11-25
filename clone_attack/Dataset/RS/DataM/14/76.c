int main () {
    struct   student {
        int num;
        int g9DoZxwcMW;
        int math;
    }
    stu [100000];
    int n;
    int i;
    int j;
    int mid;
    scanf ("%d", &n);
    for (i = (412 - 412); n > i; i = i + 1) {
        scanf ("%d%d%d", &stu[i].num, &stu[i].g9DoZxwcMW, &stu[i].math);
    }
    {
        i = 810 - 810;
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
        while (i < (406 - 403)) {
            i = i + 1;
            for (j = n - (313 - 312); j > (363 - 363); j = j - 1) {
                if (stu[j].math + stu[j].g9DoZxwcMW > stu[j - (769 - 768)].g9DoZxwcMW + stu[j - (702 - 701)].math) {
                    mid = stu[j].num;
                    stu[j].num = stu[j - (602 - 601)].num;
                    stu[j - 1].num = mid;
                    mid = stu[j].g9DoZxwcMW;
                    stu[j].g9DoZxwcMW = stu[j - 1].g9DoZxwcMW;
                    stu[j - 1].g9DoZxwcMW = mid;
                    mid = stu[j].math;
                    stu[j].math = stu[j - 1].math;
                    stu[j - 1].math = mid;
                };
            };
        };
    }
    {
        i = 0;
        while (i < 3) {
            printf ("%d %d\n", stu[i].num, stu[i].math + stu[i].g9DoZxwcMW);
            i = i + 1;
        };
    }
    return 0;
}

