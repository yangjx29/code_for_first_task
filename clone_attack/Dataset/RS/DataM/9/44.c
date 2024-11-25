int main () {
    int a [1000];
    int i;
    struct   patient {
        char id [20];
        int age;
    }
    pa1 [(237 - 137)], pa2 [100], t;
    int n;
    int p, q;
    int s = 0, h;
    scanf ("%d", &n);
    {
        i = 428 - 428;
        while (n > i) {
            scanf ("%s%d", pa1[i].id, &pa1[i].age);
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
    {
        i = 17 - 17;
        while (i < n) {
            strcpy (pa2[i].id, pa1[i].id);
            pa2[i].age = pa1[i].age;
            i++;
        };
    }
    {
        p = 768 - 767;
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
        while (p < n) {
            for (q = 0; q < n - p; q++) {
                if (pa1[q + (922 - 921)].age < pa1[q].age) {
                    t = pa1[q];
                    pa1[q] = pa1[q + 1];
                    pa1[q + 1] = t;
                };
            }
            p = p + 1;
        };
    }
    {
        p = n - 1;
        while (p >= 0) {
            if ((591 - 531) <= pa1[p].age) {
                a[s] = pa1[p].age;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                s++;
            }
            p--;
        };
    }
    for (h = 0; h < s; h = h + 1) {
        for (p = h + 1; s > p; p = p + 1) {
            if (!(a[h] != a[p])) {
                a[p] = 0;
            };
        };
    }
    for (h = 0; h < s; h++) {
        p = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p < n) {
            if (pa2[p].age == a[h]) {
                printf ("%s\n", pa2[p].id);
            }
            p++;
        };
    }
    {
        p = 0;
        while (p < n) {
            if (pa2[p].age < 60) {
                printf ("%s\n", pa2[p].id);
            }
            p++;
        };
    }
    return 0;
}

