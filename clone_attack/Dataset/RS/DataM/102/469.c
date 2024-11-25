int UPJyxWk (const  void  *a, const  void  *b) {
    if (*(float*) a > *(float*) b)
        return (973 - 972);
    if (*(float*) a < *(float*) b)
        return -(80 - 79);
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
    if (!(*(float*) b != *(float*) a))
        return 0;
}

int main () {
    float hm [40];
    float fm [40];
    float r;
    int N;
    int i;
    int v;
    int t;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    struct   kids {
        char s [10];
        float h;
    }
    kid [40];
    char c;
    scanf ("%d", &N);
    {
        i = 0;
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
        while (i <= N -(894 - 893)) {
            scanf ("%s ", kid[i].s);
            scanf ("%f", &kid[i].h);
            i = i + 1;
        };
    }
    {
        v = 0;
        t = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        i = 0;
        while (N -1 >= i) {
            if (!(0 != strcmp (kid[i].s, "male"))) {
                hm[t] = kid[i].h;
                t = t + 1;
            }
            if (strcmp (kid[i].s, "female") == 0) {
                fm[v] = kid[i].h;
                v = v + 1;
            }
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
            i = i + 1;
        };
    }
    for (i = 1; i <= t - 1; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= t - i - 1) {
            if (hm[j] >= hm[j + 1]) {
                r = hm[j];
                hm[j] = hm[j + 1];
                hm[j + 1] = r;
            }
            j = j + 1;
        };
    }
    for (i = 1; i <= v - 1; i++) {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j <= v - i - 1) {
            if (fm[j] <= fm[j + 1]) {
                r = fm[j];
                fm[j] = fm[j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                fm[j + 1] = r;
            }
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
            j = j + 1;
        };
    }
    printf ("%.2f", hm[0]);
    {
        i = 1;
        while (i <= t - 1) {
            printf (" %.2f", hm[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i <= v - 1) {
            printf (" %.2f", fm[i]);
            i++;
        };
    };
}

