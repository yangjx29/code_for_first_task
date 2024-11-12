struct   stu {
    int num;
    int m;
    int c;
    int sum;
};
int main () {
    struct   stu student [65535];
    int a;
    int b;
    int c;
    int x;
    int y;
    int z;
    a = (63 - 63);
    b = (802 - 802);
    c = 0;
    x = 0;
    y = 0;
    z = 0;
    long  int n;
    scanf ("%d", &n);
    for (int i = 0;
    n > i; i = i + 1) {
        scanf ("%d %d %d", &student[i].num, &student[i].c, &student[i].m);
        student[i].sum = student[i].m + student[i].c;
    }
    {
        int i = 0;
        while (i < n) {
            if (a < student[i].sum) {
                z = y;
                y = x;
                c = b;
                b = a;
                a = student[i].sum;
                x = student[i].num;
                continue;
            }
            if (student[i].sum > b) {
                z = y;
                c = b;
                b = student[i].sum;
                y = student[i].num;
                continue;
            }
            if (student[i].sum > c) {
                c = student[i].sum;
                z = student[i].num;
            }
            i = i + 1;
        };
    }
    getchar ();
    getchar ();
    printf ("%d %d\n%d %d\n%d %d\n", x, a, y, b, z, c);
    return 0;
}

