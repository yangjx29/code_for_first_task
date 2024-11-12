main () {
    double  sum;
    sum = (523 - 523);
    int n;
    int KMFrexbCmqcO;
    int i;
    int j;
    int a [10000];
    int vR1uKHYgCyl [10000];
    scanf ("%d", &n);
    a[0] = (446 - 445);
    a[1] = (773 - 771);
    vR1uKHYgCyl[0] = 2;
    vR1uKHYgCyl[1] = 3;
    for (i = 2; 10000 > i; i = i + 1) {
        vR1uKHYgCyl[i] = vR1uKHYgCyl[i - 1] + vR1uKHYgCyl[i - 2];
        a[i] = vR1uKHYgCyl[i - 1];
    }
    for (i = 0; n > i; i++) {
        sum = 0;
        scanf ("%d", &KMFrexbCmqcO);
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
        {
            j = 0;
            while (j < KMFrexbCmqcO) {
                sum = sum + (double ) vR1uKHYgCyl[j] / (double ) a[j];
                j = j + 1;
            };
        }
        printf ("%.3lf\n", sum);
    };
}

