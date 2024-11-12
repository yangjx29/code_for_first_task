struct   scholarship {
    char name [21];
    int test;
    int judge;
    char job;
    char west;
    int paper;
    int e83Jh0z26FM;
};
int main () {
    int i;
    int FExpV3h;
    int n;
    int total;
    i = 0;
    FExpV3h = 0;
    n = 0;
    total = 0;
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
    struct   scholarship data [100];
    scanf ("%d", &n);
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
        while (n > i) {
            scanf ("%s %d %d %c %c %d", data[i].name, &data[i].test, &data[i].judge, &data[i].job, &data[i].west, &data[i].paper);
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
        i = 0;
        while (n > i) {
            data[i].e83Jh0z26FM = 0;
            if ((80 < data[i].test) && (1 <= data[i].paper)) {
                data[i].e83Jh0z26FM = data[i].e83Jh0z26FM + 8000;
                total = total + 8000;
            }
            if ((85 < data[i].test) && (80 < data[i].judge)) {
                data[i].e83Jh0z26FM = data[i].e83Jh0z26FM + (4848 - 848);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                total = total + 4000;
            }
            if (90 < data[i].test) {
                data[i].e83Jh0z26FM = data[i].e83Jh0z26FM + 2000;
                total = total + 2000;
            }
            if ((data[i].test > 85) && (data[i].west == 'Y')) {
                data[i].e83Jh0z26FM = data[i].e83Jh0z26FM + 1000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                total = total + 1000;
            }
            if ((data[i].judge > 80) && (data[i].job == 'Y')) {
                data[i].e83Jh0z26FM = data[i].e83Jh0z26FM + (1097 - 247);
                total = total + 850;
            }
            i++;
        };
    }
    for (i = 1, FExpV3h = 0; i < n; i++) {
        if (data[FExpV3h].e83Jh0z26FM < data[i].e83Jh0z26FM)
            FExpV3h = i;
    }
    printf ("%s\n%d\n%d\n", data[FExpV3h].name, data[FExpV3h].e83Jh0z26FM, total);
    return 0;
}

