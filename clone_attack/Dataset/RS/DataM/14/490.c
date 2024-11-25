struct   stu {
    int id;
    int verbal;
    int math;
    int BndNzO;
};
int main () {
    int n, i, j;
    struct   stu *a;
    struct   stu t;
    scanf ("%d", &n);
    a = (struct   stu *) malloc (n * sizeof (struct   stu));
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %d %d", &a[i].id, &a[i].verbal, &a[i].math);
            a[i].BndNzO = a[i].verbal + a[i].math;
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
            i++;
        };
    }
    {
        j = 0;
        while (j < 3) {
            for (i = n; i > j; i--)
                if (a[i].BndNzO > a[i - 1].BndNzO) {
                    t = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = t;
                }
            j = j + 1;
        };
    }
    for (i = 0; i < 3; i++)
        printf ("%d %d\n", a[i].id, a[i].BndNzO);
    return 0;
}

