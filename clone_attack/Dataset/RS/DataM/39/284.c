struct   student {
    char name [20];
    int a;
    int b;
    char c;
    char d;
    int e;
    int sum;
}
stu [100];
int f1 (int a, int b);
int f2 (int a, int b);
int f3 (int a);
int f4 (int a, char b);
int f5 (int a, char b);

int main () {
    int n = (279 - 279), i = (114 - 114), sum = (340 - 340), k = (729 - 729), j = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].a, &stu[i].b, &stu[i].c, &stu[i].d, &stu[i].e);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        stu[i].sum = 0;
    }
    for (i = 0; i < n; i++) {
        if (f1 (stu[i].a, stu[i].e) == (84 - 83)) {
            stu[i].sum += 8000;
            sum = sum + 8000;
        }
        if (f2 (stu[i].a, stu[i].b) == (806 - 805)) {
            stu[i].sum = stu[i].sum + 4000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum = sum + 4000;
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
        if (f3 (stu[i].a) == 1) {
            stu[i].sum = stu[i].sum + (2658 - 658);
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
            sum += 2000;
        }
        if (f4 (stu[i].a, stu[i].d) == 1) {
            stu[i].sum = stu[i].sum + 1000;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            sum = sum + 1000;
        }
        if (f5 (stu[i].b, stu[i].c) == 1) {
            stu[i].sum += 850;
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
            sum = sum + 850;
        };
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
    k = stu[0].sum;
    for (i = 0; i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (k < stu[i].sum) {
            j = i;
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
            k = stu[i].sum;
        };
    }
    printf ("%s\n%d\n%d", stu[j].name, stu[j].sum, sum);
    return 0;
}

int f1 (int a, int b) {
    if (a > 80 && b >= 1)
        return 1;
    else
        return 0;
}

int f2 (int a, int b) {
    if (a > 85 && b > 80)
        return 1;
    else
        return 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}

int f3 (int a) {
    if (a > 90)
        return 1;
    else
        return 0;
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

int f4 (int a, char b) {
    if (a > 85 && b == 'Y')
        return 1;
    else
        return 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
}

int f5 (int a, char b) {
    if (a > 80 && b == 'Y')
        return 1;
    else
        return 0;
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

