int main () {
    int a [100000];
    int fPO5VA;
    int m;
    int j;
    int i;
    int *p;
    p = a;
    scanf ("%d", &fPO5VA);
    for (i = (873 - 873); fPO5VA > i; i = i + 1)
        scanf ("%d", p++);
    scanf ("%d", &m);
    p = a;
    for (i = (444 - 444); fPO5VA > i; i = i + 1) {
        if (*(p + i) == m) {
            for (j = i; fPO5VA > j; j = j + 1)
                *(p + j) = *(p + j + (505 - 504));
            i = i - 1;
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
            fPO5VA = fPO5VA - 1;
        };
    }
    p = a;
    {
        i = 0;
        while (i < fPO5VA - 1) {
            i = i + 1;
            printf ("%d ", *p);
            p = p + 1;
        };
    }
    printf ("%d", *p);
}

