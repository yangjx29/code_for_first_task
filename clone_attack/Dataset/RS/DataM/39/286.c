struct   Student {
    char name [20];
    int XpmhzeRK;
    int b;
    char c;
    char d;
    int R4GY92J;
    int f;
};
int main () {
    struct   Student stu [200];
    int n, i, k, m, t;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].XpmhzeRK, &stu[i].b, &stu[i].c, &stu[i].d, &stu[i].R4GY92J);
            stu[i].f = 0;
            i = i + 1;
        };
    }
    {
        m = 0;
        i = 0;
        while (n > i) {
            if (stu[i].XpmhzeRK > 80 && 0 < stu[i].R4GY92J)
                stu[i].f = stu[i].f + 8000;
            if (stu[i].XpmhzeRK > 85 && 80 < stu[i].b)
                stu[i].f = stu[i].f + 4000;
            if (90 < stu[i].XpmhzeRK)
                stu[i].f = stu[i].f + 2000;
            if (stu[i].XpmhzeRK > 85 && stu[i].d == 'Y')
                stu[i].f = stu[i].f + 1000;
            if (stu[i].b > 80 && stu[i].c == 'Y')
                stu[i].f = stu[i].f + 850;
            if (stu[i].f > m) {
                m = stu[i].f;
                t = i;
            }
            i = i + 1;
        };
    }
    for (i = 0, k = 0; i < n; i = i + 1)
        k = k + stu[i].f;
    printf ("%s\n%d\n%d\n", stu[t].name, m, k);
    return 0;
}

