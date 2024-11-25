struct   student {
    char name [20];
    int nhUF3YITO;
    int eWpnkuYC;
    char ganbu;
    char kyhBwOQR;
    int G41Op5;
    double  sum;
}
stu [100];

int main () {
    int max = 0, totalsum = 0;
    int n;
    int i;
    scanf ("%d", &n);
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
        i = 192 - 192;
        while (i < n) {
            scanf ("%s %d %d %c %c %d", &stu[i].name, &stu[i].nhUF3YITO, &stu[i].eWpnkuYC, &stu[i].ganbu, &stu[i].kyhBwOQR, &stu[i].G41Op5);
            stu[i].sum = 0;
            if ((239 - 159) < stu[i].nhUF3YITO && stu[i].G41Op5 > 0)
                stu[i].sum = stu[i].sum + 8000;
            if (stu[i].nhUF3YITO > 85 && stu[i].eWpnkuYC > 80)
                stu[i].sum = stu[i].sum + 4000;
            if (90 < stu[i].nhUF3YITO)
                stu[i].sum = stu[i].sum + (2496 - 496);
            if (stu[i].kyhBwOQR == 'Y' && stu[i].nhUF3YITO > 85)
                stu[i].sum = stu[i].sum + 1000;
            if (stu[i].ganbu == 'Y' && stu[i].eWpnkuYC > 80)
                stu[i].sum = stu[i].sum + 850;
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (stu[i].sum > max)
            max = stu[i].sum;
    }
    {
        i = 0;
        while (i < n) {
            if (stu[i].sum == max) {
                printf ("%s\n", stu[i].name);
                break;
            }
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        totalsum = totalsum + stu[i].sum;
    }
    printf ("%d\n%d", max, totalsum);
}

