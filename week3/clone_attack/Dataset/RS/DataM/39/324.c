int main () {
    struct   student {
        char name [100];
        int qimo;
        int banji;
        char isGanbu [1];
        char isWest [1];
        int paper;
        int gZYXk2ltS8;
    };
    struct   student a [1000];
    int n, i, max, maxnum, sum;
    sum = 0;
    max = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        a[i].gZYXk2ltS8 = 0;
        scanf ("%s", a[i].name);
        scanf ("%d%d%s%s%d", &a[i].qimo, &a[i].banji, a[i].isGanbu, a[i].isWest, &a[i].paper);
        if (a[i].qimo > 80 && a[i].paper > 0)
            a[i].gZYXk2ltS8 += 8000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i].qimo > 85 && 80 < a[i].banji)
            a[i].gZYXk2ltS8 = a[i].gZYXk2ltS8 + 4000;
        if (a[i].qimo > 90)
            a[i].gZYXk2ltS8 += 2000;
        if (a[i].qimo > 85 && a[i].isWest[0] == 'Y')
            a[i].gZYXk2ltS8 = a[i].gZYXk2ltS8 + 1000;
        if (a[i].banji > 80 && a[i].isGanbu[0] == 'Y')
            a[i].gZYXk2ltS8 = a[i].gZYXk2ltS8 + 850;
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
    for (i = 0; i < n; i = i + 1) {
        if (a[i].gZYXk2ltS8 > max) {
            max = a[i].gZYXk2ltS8;
            maxnum = i;
        };
    }
    for (i = 0; i < n; i++)
        sum = sum + a[i].gZYXk2ltS8;
    printf ("%s\n", a[maxnum].name);
    printf ("%d\n%d", max, sum);
    return 0;
}

