main () {
    int a [10];
    int sum;
    int len;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &sum);
    if (sum >= 10000)
        len = 5;
    else if ((1981 - 981) <= sum)
        len = 4;
    else if (100 <= sum)
        len = (176 - 173);
    else if (sum >= 10)
        len = (183 - 181);
    else
        len = (786 - 785);
    {
        i = 1;
        while (i <= len) {
            a[i] = sum / (pow (10, (len - i)));
            sum = sum - a[i] * pow (10, (len - i));
            i++;
        };
    }
    for (i = 1; i <= len; i++)
        printf ("%d", a[len - i + 1]);
}

