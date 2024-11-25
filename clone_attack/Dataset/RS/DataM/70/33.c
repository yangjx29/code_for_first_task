typedef struct   point {
    float x;
    float y;
}
point;

int main () {
    int i;
    int j;
    int num;
    point a [50];
    double  dis = 0, d;
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
    scanf ("%d", &num);
    for (i = 0; num > i; i++)
        scanf ("%f %f", &a[i].x, &a[i].y);
    {
        i = 0;
        while (num - 1 > i) {
            for (j = i + 1; num > j; j = j + 1) {
                d = (a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y);
                if (d > dis)
                    dis = d;
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
            i = i + 1;
        };
    }
    printf ("%.4lf", sqrt (dis));
    return 0;
}

