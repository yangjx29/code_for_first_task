struct   student {
    int xuehao;
    int yuwen;
    int shuxue;
}
stu [100000];

int main () {
    int sum [100000];
    long  i, j, n, t;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d %d %d", &stu[i].xuehao, &stu[i].yuwen, &stu[i].shuxue);
        sum[i] = stu[i].yuwen + stu[i].shuxue;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 0;
        while (i < 3) {
            t = 0;
            for (j = 0; n - 1 > j; j++) {
                if (sum[j + 1] > sum[t])
                    t = j + 1;
            }
            printf ("%d %d\n", stu[t].xuehao, sum[t]);
            sum[t] = 0;
            i++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

