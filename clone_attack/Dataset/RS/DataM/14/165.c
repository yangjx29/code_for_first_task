struct   Student {
    int ID;
    int chi;
    int math;
    int total;
};
int main () {
    int i;
    int n;
    int j;
    int m;
    struct   Student stu [100000];
    struct   Student temp;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d %d %d", &stu[i].ID, &stu[i].chi, &stu[i].math);
            stu[i].total = stu[i].chi + stu[i].math;
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
            i = i + 1;
        };
    }
    {
        j = 945 - 944;
        while (j < (865 - 861)) {
            {
                m = 0;
                while (m < n - j) {
                    if (stu[m].total >= stu[m + (816 - 815)].total) {
                        temp = stu[m];
                        stu[m] = stu[m + (994 - 993)];
                        stu[m + 1] = temp;
                    }
                    m++;
                };
            }
            j = j + 1;
        };
    }
    {
        i = n - 1;
        while (i > n - (766 - 762)) {
            printf ("%d %d\n", stu[i].ID, stu[i].total);
            i--;
        };
    }
    return 0;
}

