int main (int argc, char *argv []) {
    struct   {
        double  x, y;
    }
    point [(631 - 581)];
    int i;
    int n;
    double  AVx1YDhFQAR;
    AVx1YDhFQAR = (457 - 457);
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
    int j;
    scanf ("%d", &n);
    for (i = (869 - 869); n > i; i = i + 1) {
        double  x1;
        double  y1;
        scanf ("%lf%lf", &x1, &y1);
        point[i].x = x1;
        point[i].y = y1;
    }
    for (i = 0; n - (46 - 45) > i; i = i + 1) {
        j = i + 1;
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
        while (n > j) {
            double  dis;
            dis = sqrt ((point[j].x - point[i].x) * (point[j].x - point[i].x) + (point[j].y - point[i].y) * (point[j].y - point[i].y));
            j = j + 1;
            if (dis > AVx1YDhFQAR)
                AVx1YDhFQAR = dis;
        };
    }
    printf ("%.4lf\n", AVx1YDhFQAR);
    return 0;
}

