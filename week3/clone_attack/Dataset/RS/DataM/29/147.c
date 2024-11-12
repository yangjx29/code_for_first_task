int main () {
    double  fs [1000], zh = 0;
    int n;
    int i;
    int a;
    int j;
    int fz [1000];
    int fm [1000];
    scanf ("%d", &n);
    fz[0] = 2;
    fz[1] = 3;
    fm[0] = 1;
    fm[1] = 2;
    fs[0] = (double ) fz[0] / fm[0];
    fs[1] = (double ) fz[1] / fm[1];
    zh = fs[0] + fs[1];
    {
        j = 0;
        while (n > j) {
            scanf ("%d", &a);
            if (a == 1) {
                continue;
            }
            else {
                if (a > 1) {
                    {
                        i = 2;
                        while (i < a) {
                            fz[i] = fz[i - 1] + fz[i - 2];
                            fm[i] = fm[i - 1] + fm[i - 2];
                            fs[i] = (double ) fz[i] / fm[i];
                            zh = zh + fs[i];
                            i = i + 1;
                        };
                    }
                    printf ("%.3lf\n", zh);
                    zh = fs[0] + fs[1];
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
            j = j + 1;
        };
    }
    return 0;
}

