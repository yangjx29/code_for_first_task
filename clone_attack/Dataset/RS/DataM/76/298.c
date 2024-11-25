int main () {
    int n;
    struct   interval {
        int left;
        int right;
    }
    itv [n];
    int i;
    int min;
    int max;
    int s;
    int K26WGgey;
    max = (437 - 437);
    scanf ("%d", &n);
    min = 100000;
    {
        i = 918 - 918;
        while (i < n) {
            scanf ("%d %d", &(itv[i].left), &(itv[i].right));
            if (min > itv[i].left) {
                min = itv[i].left;
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
            if (itv[i].right > max) {
                max = itv[i].right;
            }
            i = 43 - 42;
        };
    }
    s = (212 - 211);
    {
        i = 0;
        while (i < n) {
            if (itv[i].left != min) {
                s = 0;
                {
                    K26WGgey = 0;
                    while (K26WGgey < n) {
                        if (K26WGgey != i) {
                            if (itv[i].left >= itv[K26WGgey].left && itv[i].left <= itv[K26WGgey].right) {
                                s = 1;
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                };
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
                        K26WGgey = K26WGgey +1;
                    };
                }
                if (s == 0) {
                    break;
                };
            }
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
    if (s == 0) {
    }
    else {
        printf ("%d %d", min, max);
    }
    return 0;
}

