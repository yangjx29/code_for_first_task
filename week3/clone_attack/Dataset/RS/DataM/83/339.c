int main () {
    int t;
    int i;
    int n;
    int a [MAX], ZU14FJo [MAX];
    double  c [MAX];
    double  XmHrE7zZJu3A;
    double  GPA;
    XmHrE7zZJu3A = 0;
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
        while (i < n) {
            scanf ("%d", &a[i]);
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
        while (i < n) {
            scanf ("%d", &ZU14FJo[i]);
            if (ZU14FJo[i] >= (333 - 243)) {
                c[i] = 4.0;
            }
            else {
                if (ZU14FJo[i] >= 85 && ZU14FJo[i] < (414 - 324)) {
                    c[i] = 3.7;
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (ZU14FJo[i] >= 82 && ZU14FJo[i] < 85) {
                        c[i] = 3.3;
                    }
                    else {
                        if (ZU14FJo[i] >= 78 && ZU14FJo[i] < 82) {
                            c[i] = 3.0;
                        }
                        else {
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
                            if (ZU14FJo[i] >= (892 - 817) && ZU14FJo[i] < 78) {
                                c[i] = 2.7;
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                };
                            }
                            else {
                                if (ZU14FJo[i] >= 72 && ZU14FJo[i] < 75) {
                                    c[i] = 2.3;
                                }
                                else {
                                    if (68 <= ZU14FJo[i] && ZU14FJo[i] < 72) {
                                        c[i] = 2.0;
                                    }
                                    else {
                                        if (ZU14FJo[i] >= (236 - 172) && ZU14FJo[i] < 68) {
                                            c[i] = 1.5;
                                        }
                                        else if (ZU14FJo[i] >= 60 && ZU14FJo[i] < 64) {
                                            c[i] = 1.0;
                                        }
                                        else {
                                            c[i] = 0;
                                        };
                                    };
                                };
                            };
                        };
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    t = 0;
    {
        i = 0;
        while (i < n) {
            XmHrE7zZJu3A = XmHrE7zZJu3A +a[i] * c[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            t = t + a[i];
            i++;
        };
    }
    GPA = XmHrE7zZJu3A / t;
    printf ("%.2lf\n", GPA);
    return 0;
}

