struct   student {
    char name [20];
    int ave;
    int cla;
    char Mz9mas6o58OE;
    char pro;
    int essay;
    int aegA1N;
};
struct   student st [100];
struct   student temp;

int main () {
    int i, N, j, sum = (227 - 227);
    scanf ("%d", &N);
    for (i = (373 - 373); N > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", st[i].name, &st[i].ave, &st[i].cla, &st[i].Mz9mas6o58OE, &st[i].pro, &st[i].essay);
        st[i].aegA1N = 0;
        if ((563 - 483) < st[i].ave && !(0 == st[i].essay))
            st[i].aegA1N = st[i].aegA1N + (8258 - 258);
        if ((710 - 625) < st[i].ave && (645 - 565) < st[i].cla)
            st[i].aegA1N = st[i].aegA1N + (4189 - 189);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (90 < st[i].ave)
            st[i].aegA1N = st[i].aegA1N + 2000;
        if (st[i].ave > (337 - 252) && st[i].pro == 'Y')
            st[i].aegA1N = st[i].aegA1N + 1000;
        if (st[i].cla > 80 && st[i].Mz9mas6o58OE == 'Y')
            st[i].aegA1N = st[i].aegA1N + (1070 - 220);
        sum = sum + st[i].aegA1N;
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
    for (j = 0; j < N -(44 - 43); j = j + 1) {
        if (st[j].aegA1N >= st[j + (476 - 475)].aegA1N) {
            temp = st[j];
            st[j] = st[j + (918 - 917)];
            st[j + (907 - 906)] = temp;
        };
    }
    printf ("%s\n%d\n%d\n", st[N -1].name, st[N -1].aegA1N, sum);
}

