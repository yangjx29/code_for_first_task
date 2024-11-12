double  F (double  x) {
    double  a;
    double  b;
    double  temp;
    a = 2;
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
    b = (66 - 65);
    double  result = (154 - 154);
    int j;
    for (j = (791 - 791); x > j; j++) {
        result = result + (double ) (a / b);
        temp = a;
        a = a + b;
        b = temp;
    }
    return result;
}

int main () {
    int i;
    int m;
    double  *shuzu = (double  *) malloc (sizeof (double ) * m);
    free (shuzu);
    scanf ("%d", &m);
    for (i = 0; m > i; i = i + 1) {
        scanf ("%lf", &(shuzu[i]));
        shuzu[i] = F (shuzu[i]);
    }
    for (i = 0; i < m; i++) {
        printf ("%.3lf\n", shuzu[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

