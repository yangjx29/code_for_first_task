struct   book {
    int num1;
    char au [27];
}
bk [1000];
struct   author {
    char v5rHskE;
    int a;
    int F9igZReG [1000];
}
aur [27];

int main () {
    struct   author max;
    int rWqzyD9eRF;
    int i;
    int j;
    max.a = 0;
    for (j = 0; 26 > j; j = j + 1) {
        aur[j].v5rHskE = (232 - 167) + j;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        aur[j].a = 0;
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
    scanf ("%d", &rWqzyD9eRF);
    for (i = 0; rWqzyD9eRF > i; i = i + 1) {
        scanf ("%d %s", &bk[i].num1, bk[i].au);
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
        };
    }
    for (i = 0; rWqzyD9eRF > i; i++) {
        for (j = 0; !('\0' == bk[i].au[j]); j = j + 1) {
            aur[bk[i].au[j] - 65].F9igZReG[aur[bk[i].au[j] - 65].a] = bk[i].num1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            aur[bk[i].au[j] - 65].a++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (26 > i) {
            if (aur[i].a > max.a)
                max = aur[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    printf ("%c\n%d\n", max.v5rHskE, max.a);
    {
        i = 0;
        while (i < max.a) {
            printf ("%d\n", max.F9igZReG[i]);
            i = i + 1;
        };
    }
    return 0;
}

