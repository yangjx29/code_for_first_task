int main (void ) {
    int m;
    scanf ("%d", &m);
    for (; m = m - 1;) {
        double  temp1;
        double  temp2;
        temp1 = 1.0;
        temp2 = 2.0;
        int n;
        int i;
        double  res = (452 - 452);
        scanf ("%d", &n);
        {
            i = 0;
            while (n > i) {
                ++i;
                res = res + temp2 / temp1;
                temp2 += temp1;
                temp1 = temp2 - temp1;
            };
        }
        printf ("%.3lf\n", res);
    };
}

