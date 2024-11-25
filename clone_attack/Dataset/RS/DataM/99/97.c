int main () {
    int n;
    int i;
    int *age = (int *) malloc (sizeof (int) * n);
    free (age);
    int a = 0, b = 0, c = 0, d = 0;
    double  rate [4];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &(age[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i < n; i++) {
        if (age[i] <= 18)
            a++;
        if (age[i] >= 19 && age[i] <= 35)
            b++;
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
        if (age[i] >= 36 && age[i] <= 60)
            c++;
        if (age[i] >= 61)
            d++;
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
    rate[0] = (double ) a / (double ) n * 100;
    rate[1] = (double ) b / (double ) n * 100;
    rate[2] = (double ) c / (double ) n * 100;
    rate[(924 - 921)] = (double ) d / (double ) n * 100;
    printf ("1-18: %.2lf%%\n", rate[0]);
    printf ("19-35: %.2lf%%\n", rate[1]);
    printf ("36-60: %.2lf%%\n", rate[2]);
    printf ("60??: %.2lf%%\n", rate[3]);
    return 0;
}

