struct   people {
    char name [30];
    int qimo;
    int pingyi;
    char gan;
    char xi;
    int lunwen;
    int jiang;
}
line [100], temp;

int main () {
    int sum;
    sum = 0;
    int n;
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d\n", &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%s %d %d %c %c %d", &line[i].name, &line[i].qimo, &line[i].pingyi, &line[i].gan, &line[i].xi, &line[i].lunwen);
            line[i].jiang = 0;
            if (line[i].qimo > 80 && !(0 == line[i].lunwen)) {
                line[i].jiang += 8000;
            }
            if (85 < line[i].qimo && line[i].pingyi > 80) {
                line[i].jiang += 4000;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (line[i].qimo > 90) {
                line[i].jiang = line[i].jiang + 2000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
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
            if (line[i].qimo > 85 && (int) line[i].xi == (int) 'Y') {
                line[i].jiang = line[i].jiang + 1000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (line[i].pingyi > 80 && (int) line[i].gan == (int) 'Y') {
                line[i].jiang = line[i].jiang + 850;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            sum += line[i].jiang;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < n) {
            {
                j = 1;
                while (j <= n - i) {
                    if (line[j].jiang < line[j + 1].jiang) {
                        temp = line[j];
                        line[j] = line[j + 1];
                        line[j + 1] = temp;
                    }
                    j = j + 1;
                };
            }
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
    printf ("%s\n%d\n%d", line[1].name, line[1].jiang, sum);
    return 0;
}

