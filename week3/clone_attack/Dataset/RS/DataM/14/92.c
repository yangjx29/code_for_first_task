struct   student {
    char num [10];
    int grade [2];
};
struct   student stu [100000];

int main () {
    int n;
    int sum [100000];
    int i;
    int count;
    int max;
    int j;
    count = 1;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            sum[i] = 0;
            scanf ("%s %d %d", stu[i].num, &stu[i].grade[0], &stu[i].grade[1]);
            sum[i] = stu[i].grade[0] + stu[i].grade[1];
            i = i + 1;
        };
    }
    while (2 >= count) {
        max = 0;
        {
            i = 0;
            while (n > i) {
                if (max < sum[i]) {
                    max = sum[i];
                    j = i;
                }
                i++;
            };
        }
        printf ("%s %d\n", stu[j].num, sum[j]);
        count = count + 1;
        sum[j] = 0;
    }
    max = 0;
    {
        i = 0;
        while (i < n) {
            if (sum[i] > max) {
                max = sum[i];
                j = i;
            }
            i++;
        };
    }
    printf ("%s %d", stu[j].num, sum[j]);
    getchar ();
    getchar ();
}

