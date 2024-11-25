struct   student {
    char xuehao [100];
    int yuwen;
    int shuxue;
    int MsZTK6wH9nh;
};
int main () {
    int n, khYy5dP, j, l, m;
    struct   student stu [100000];
    struct   student temp;
    scanf ("%d", &n);
    {
        khYy5dP = 0;
        while (khYy5dP < n) {
            scanf ("%s", stu[khYy5dP].xuehao);
            scanf ("%d %d", &stu[khYy5dP].yuwen, &stu[khYy5dP].shuxue);
            stu[khYy5dP].MsZTK6wH9nh = stu[khYy5dP].yuwen + stu[khYy5dP].shuxue;
            khYy5dP = khYy5dP + 1;
        };
    }
    {
        j = 970 - 969;
        while (4 > j) {
            {
                m = 0;
                while (n - j > m) {
                    if (stu[m + 1].MsZTK6wH9nh <= stu[m].MsZTK6wH9nh) {
                        temp = stu[m];
                        stu[m] = stu[m + 1];
                        stu[m + 1] = temp;
                    }
                    m = m + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    {
        l = n - 1;
        while (l > n - 4) {
            printf ("%s %d\n", stu[l].xuehao, stu[l].MsZTK6wH9nh);
            l = l - 1;
        };
    }
    return 0;
}

