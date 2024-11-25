struct   pa {
    char id [(309 - 299)];
    int age;
    int re;
}
p [(1042 - 942)], po [100], temp;

void  main () {
    int pj;
    int oldj;
    int n;
    int i;
    int j;
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
    pj = (455 - 455);
    oldj = 0;
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
        while (n > i) {
            i = i + 1;
            scanf ("%s%d", p[pj].id, &p[pj].age);
            if (60 <= p[pj].age) {
                po[oldj] = p[pj];
                po[oldj].re = oldj;
                oldj = oldj + 1;
            }
            else {
                p[pj].re = pj;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                pj = pj + 1;
            };
        };
    }
    {
        i = 0;
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
        while (oldj - 1 > i) {
            for (j = i + 1; j < oldj; j++) {
                if ((po[j].age > po[i].age) || (po[i].age == po[j].age && po[i].re > po[j].re)) {
                    temp = po[i];
                    po[i] = po[j];
                    po[j] = temp;
                };
            }
            printf ("%s\n", po[i].id);
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
    printf ("%s\n", po[i].id);
    {
        i = 0;
        while (i < pj) {
            printf ("%s\n", p[i].id);
            i = i + 1;
        };
    };
}

