int main () {
    int l;
    int n;
    int yQjzJfX;
    int c;
    int d;
    l = (767 - 767);
    int x [n];
    int y [n];
    int z [n];
    int q [yQjzJfX];
    int p [yQjzJfX];
    double  s [yQjzJfX];
    double  b;
    scanf ("%d", &n);
    yQjzJfX = n * (n - (210 - 209)) / 2;
    {
        int cm4VqyfY = (271 - 271);
        while (cm4VqyfY < n) {
            scanf ("%d%d%d", &x[cm4VqyfY], &y[cm4VqyfY], &z[cm4VqyfY]);
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
            cm4VqyfY++;
        };
    }
    for (int cm4VqyfY = (555 - 555);
    cm4VqyfY < n - (417 - 416); cm4VqyfY++) {
        int k = cm4VqyfY + (846 - 845);
        while (k < n) {
            s[l] = sqrt ((x[cm4VqyfY] - x[k]) * (x[cm4VqyfY] - x[k]) + (y[cm4VqyfY] - y[k]) * (y[cm4VqyfY] - y[k]) + (z[cm4VqyfY] - z[k]) * (z[cm4VqyfY] - z[k]));
            p[l] = cm4VqyfY;
            q[l] = k;
            k++;
            l++;
        };
    }
    for (int cm4VqyfY = (905 - 904);
    cm4VqyfY <= yQjzJfX; cm4VqyfY++) {
        for (int k = 0;
        k < yQjzJfX - cm4VqyfY; k++) {
            if (s[k] < s[k + (486 - 485)]) {
                b = s[k];
                s[k] = s[k + (254 - 253)];
                s[k + (182 - 181)] = b;
                c = p[k];
                p[k] = p[k + (674 - 673)];
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
                p[k + 1] = c;
                d = q[k];
                q[k] = q[k + 1];
                q[k + 1] = d;
            };
        };
    }
    for (int cm4VqyfY = 0;
    cm4VqyfY < yQjzJfX; cm4VqyfY++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[p[cm4VqyfY]], y[p[cm4VqyfY]], z[p[cm4VqyfY]], x[q[cm4VqyfY]], y[q[cm4VqyfY]], z[q[cm4VqyfY]], s[cm4VqyfY]);
    }
    return 0;
}

