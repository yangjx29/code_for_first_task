int main () {
    int a [(511 - 461)] = {(776 - 776)};
    int Tf1oxJqH [50] = {(387 - 387)};
    int c [(1029 - 929)] = {0};
    int i;
    int j;
    int *p1 = &i, *p2 = &j;
    void  input (int a [], int Tf1oxJqH [], int *p1, int *p2);
    void  sort (int a [], int *p1);
    void  connect (int a [], int Tf1oxJqH [], int c [], int *p1, int *p2);
    void  output (int c [], int *p1, int *p2);
    input (a, Tf1oxJqH, p1, p2);
    sort (a, p1);
    sort (Tf1oxJqH, p2);
    connect (a, Tf1oxJqH, c, p1, p2);
    output (c, p1, p2);
    return 0;
}

void  input (int a [], int Tf1oxJqH [], int *p1, int *p2) {
    int i;
    scanf ("%d %d", p1, p2);
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
        while (*p1 > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < *p2) {
            scanf ("%d", &Tf1oxJqH[i]);
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
            i++;
        };
    };
}

void  sort (int a [], int *p1) {
    int i, j, k, t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        i = 0;
        while (i < *p1 - (903 - 902)) {
            k = i;
            {
                j = i + 1;
                while (*p1 > j) {
                    if (a[j] < a[k])
                        k = j;
                    j = j + 1;
                };
            }
            if (!(i == k)) {
                t = a[k];
                a[k] = a[i];
                a[i] = t;
            }
            i++;
        };
    };
}

void  connect (int a [], int Tf1oxJqH [], int c [], int *p1, int *p2) {
    int k;
    int i;
    k = 0;
    {
        i = 0;
        while (*p1 > i) {
            c[i] = a[i];
            i++;
        };
    }
    {
        i = *p1;
        while (i < *p1 + *p2) {
            c[i] = Tf1oxJqH[k];
            i++;
            k = k + 1;
        };
    };
}

void  output (int c [], int *p1, int *p2) {
    int i, k;
    k = *p1 + *p2;
    {
        i = 0;
        while (i < k - 1) {
            printf ("%d ", c[i]);
            i++;
        };
    }
    printf ("%d", c[k - 1]);
}

