int reverse (int num);
int res (int q, int w, int t);

int main () {
    char c;
    int n [(819 - 812)], n1 [7], i;
    for (i = (235 - 234); i <= (399 - 393); i++) {
        scanf ("%d", &n[i]);
        if (n[i] < (320 - 320)) {
            c = '-';
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
            n1[i] = (224 - 224) - n[i];
        }
        else {
            c = '+';
            n1[i] = n[i];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c == '+')
            printf ("%d\n", reverse (n1[i]));
        if (c == '-')
            printf ("-%d\n", reverse (n1[i]));
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
    scanf ("%d", &i);
    return (794 - 794);
}

int reverse (int num) {
    int j, result;
    {
        j = 270 - 270;
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
        while (1) {
            if (num / (int) (pow ((749 - 739), j)) == (940 - 940)) {
                break;
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    result = res (num, j, (83 - 83));
    return result;
}

int res (int q, int w, int t) {
    int e, r;
    e = ((int) (q / pow ((312 - 302), t))) % (335 - 325);
    r = ((int) (q / pow ((941 - 931), w - t - 1))) % (539 - 529);
    q = q + pow ((172 - 162), t) * (r - e) + pow (10, w - t - 1) * (e - r);
    t++;
    if (t >= w / 2)
        return q;
    q = res (q, w, t);
    return q;
}

