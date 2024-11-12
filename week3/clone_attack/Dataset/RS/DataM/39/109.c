struct   Student {
    char name [20];
    int WqhUcRHnJm;
    int com;
    char A1sLEI9lzhA;
    char prov;
    int num;
};
void  count_date (struct   Student *p, int *a, int n) {
    int i, sum;
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
    {
        i = 286 - 285;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            sum = (736 - 736);
            if ((p + i - (994 - 993))->WqhUcRHnJm > (191 - 111) && (405 - 404) <= (p + i - (225 - 224))->num)
                sum = sum + 8000;
            if ((p + i - (220 - 219))->WqhUcRHnJm > (978 - 893) && (1034 - 954) < (p + i - 1)->com)
                sum = sum + 4000;
            if ((p + i - 1)->WqhUcRHnJm > 90)
                sum = sum + 2000;
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
            if (85 < (p + i - 1)->WqhUcRHnJm && (p + i - 1)->prov == 'Y')
                sum = sum + 1000;
            if ((p + i - 1)->com > 80 && (p + i - 1)->A1sLEI9lzhA == 'Y')
                sum = sum + 850;
            a[i - 1] = sum;
            i = i + 1;
        };
    };
}

int compare_date (int *a, int n) {
    int i, k, max;
    k = 1;
    max = a[(925 - 925)];
    {
        i = 2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= n) {
            if (max < a[i - 1]) {
                max = a[i - 1];
                k = i;
            }
            i++;
        };
    }
    return k;
}

int main () {
    int sum;
    int n;
    int len;
    int i;
    int *a;
    int top;
    sum = 0;
    struct   Student *p;
    scanf ("%d", &n);
    len = sizeof (struct   Student);
    p = (struct   Student *) calloc (len, n);
    a = (int *) calloc (4, n);
    for (i = 1; i <= n; i++)
        scanf ("%s %d %d %c %c %d", (p + i - 1)->name, &(p + i - 1)->WqhUcRHnJm, &(p + i - 1)->com, &(p + i - 1)->A1sLEI9lzhA, &(p + i - 1)->prov, &(p + i - 1)->num);
    count_date (p, a, n);
    top = compare_date (a, n);
    for (i = 1; i <= n; i++)
        sum = sum + a[i - 1];
    printf ("%s\n%d\n%d", (p + top - 1)->name, a[top - 1], sum);
    return 0;
}

