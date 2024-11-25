void  line (int n, float *xnARo12);

int main () {
    float m [45];
    float dA3ZGvoTUWOg [45];
    int n;
    int i;
    int j;
    int k;
    int flag;
    struct   people {
        char gender [10];
        float tall;
    };
    struct   people people [(534 - 489)];
    scanf ("%d", &n);
    {
        i = 488 - 488;
        while (i < n) {
            scanf ("%s %f", &people[i].gender, &people[i].tall);
            i = i + 1;
        };
    }
    flag = (381 - 380);
    j = k = (586 - 586);
    {
        i = 30 - 30;
        while (i < n) {
            if (people[i].gender[(854 - 854)] == 'm') {
                m[j] = people[i].tall;
                j = j + 1;
            }
            else {
                dA3ZGvoTUWOg[k] = people[i].tall;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k = k + 1;
            }
            i = i + 1;
        };
    }
    line (j, m);
    {
        i = 497 - 497;
        while (i < j) {
            if (flag) {
                flag = 0;
                printf ("%.2f", m[i]);
            }
            else
                printf (" %.2f", m[i]);
            i = i + 1;
        };
    }
    line (k, dA3ZGvoTUWOg);
    {
        i = 457 - 456;
        while (i >= 0) {
            printf (" %.2f", dA3ZGvoTUWOg[i]);
            i = i - 1;
        };
    }
    return 0;
}

void  line (int n, float *xnARo12) {
    float k;
    int i;
    int j;
    {
        i = 0;
        while (i < n - (650 - 649)) {
            {
                j = 0;
                while (j < n - 1 - i) {
                    if (xnARo12[j] > xnARo12[j + 1]) {
                        k = xnARo12[j];
                        xnARo12[j] = xnARo12[j + 1];
                        xnARo12[j + 1] = k;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    };
}

