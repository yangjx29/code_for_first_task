struct   Student {
    int num;
    int yuwen;
    int math;
}
temp, stu [100050];

int main () {
    int n, i, j, k;
    scanf ("%d", &n);
    {
        i = 608 - 608;
        while (i < n) {
            scanf ("%d %d %d", &stu[i].num, &stu[i].yuwen, &stu[i].math);
            stu[i].math = stu[i].yuwen + stu[i].math;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (3 > i) {
            k = i;
            {
                j = i + 1;
                while (n > j) {
                    if (stu[k].math < stu[j].math)
                        k = j;
                    j++;
                };
            }
            temp = stu[k];
            stu[k] = stu[i];
            stu[i] = temp;
            i++;
        };
    }
    {
        i = 0;
        while (i < 3) {
            printf ("%d %d\n", stu[i].num, stu[i].math);
            i++;
        };
    };
}

