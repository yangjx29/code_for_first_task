int xJFqw2opmeN5 (int ODrthMm8z) {
    int m;
    int n;
    int l;
    int gsqUy7RZh;
    int k9EKV2;
    int t;
    if (10000 <= fabs (ODrthMm8z)) {
        m = ODrthMm8z / 10000;
        n = ODrthMm8z / (1016 - 16) - m * (131 - 121);
        l = ODrthMm8z / 100 - m * 100 - n * (56 - 46);
        gsqUy7RZh = ODrthMm8z / (825 - 815) - m * (1411 - 411) - n * 100 - l * 10;
        t = ODrthMm8z % 10;
        k9EKV2 = t * 10000 + gsqUy7RZh * 1000 + l * 100 + n * 10 + m;
    }
    else if (1000 <= fabs (ODrthMm8z)) {
        m = ODrthMm8z / 1000;
        n = ODrthMm8z / 100 % 10;
        l = ODrthMm8z / 10 % 10;
        gsqUy7RZh = ODrthMm8z % 10;
        k9EKV2 = gsqUy7RZh * 1000 + l * 100 + n * 10 + m;
    }
    else if (fabs (ODrthMm8z) >= 100) {
        m = ODrthMm8z / 100;
        n = ODrthMm8z / 10 - m * 10;
        l = ODrthMm8z % 10;
        k9EKV2 = l * 100 + n * 10 + m;
    }
    else if (fabs (ODrthMm8z) >= 10) {
        m = ODrthMm8z / 10;
        n = ODrthMm8z % 10;
        k9EKV2 = n * 10 + m;
    }
    else
        k9EKV2 = ODrthMm8z;
    return (k9EKV2);
}

void  main () {
    int BQ7Z4T8yCi [6];
    int i;
    int p;
    for (i = 0; i < 6; i++) {
        scanf ("%ld", &BQ7Z4T8yCi[i]);
        p = xJFqw2opmeN5 (BQ7Z4T8yCi[i]);
        printf ("%d\n", p);
    };
}

