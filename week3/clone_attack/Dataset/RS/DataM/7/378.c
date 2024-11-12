int j4QLb5Xzg (int i, char s [800], char ZYmGa3x [800]) {
    int ONvZgExD1;
    int k;
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
        ONvZgExD1 = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i + strlen (ZYmGa3x) - (353 - 352) >= ONvZgExD1) {
            if (s[ONvZgExD1] != ZYmGa3x[ONvZgExD1 -i])
                break;
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
            ONvZgExD1 = ONvZgExD1 +1;
        };
    }
    if (ONvZgExD1 == i + strlen (ZYmGa3x))
        return 1;
    else
        return 0;
}

void  change (int i, char s [800], char ZYmGa3x [800], char RfQwZImDi [800]) {
    int l;
    int sYC2OL;
    int lr;
    int ONvZgExD1;
    int k;
    l = strlen (s);
    sYC2OL = strlen (ZYmGa3x);
    lr = (strlen (RfQwZImDi));
    if (lr >= sYC2OL) {
        k = lr - sYC2OL;
        {
            ONvZgExD1 = l + k + 1;
            while (ONvZgExD1 >= i + lr) {
                s[ONvZgExD1] = s[ONvZgExD1 -k];
                ONvZgExD1 = ONvZgExD1 -1;
            };
        }
        for (ONvZgExD1 = i; ONvZgExD1 <= i + lr - 1; ONvZgExD1 = ONvZgExD1 +1)
            s[ONvZgExD1] = RfQwZImDi[ONvZgExD1 -i];
    }
    else {
        k = sYC2OL - lr;
        for (ONvZgExD1 = i + lr; ONvZgExD1 <= l - k + 1; ONvZgExD1 = ONvZgExD1 +1)
            s[ONvZgExD1] = s[ONvZgExD1 +k];
        for (ONvZgExD1 = i; ONvZgExD1 <= i + lr - 1; ONvZgExD1 = ONvZgExD1 +1)
            s[ONvZgExD1] = RfQwZImDi[ONvZgExD1 -i];
    };
}

main () {
    char s [800];
    char ZYmGa3x [800];
    char RfQwZImDi [800];
    int l;
    int i;
    puts (s);
    scanf ("%s", s);
    l = strlen (s);
    scanf ("%s", ZYmGa3x);
    scanf ("%s", RfQwZImDi);
    for (i = 0; i < l; i = i + 1)
        if ((s[i] == ZYmGa3x[0]) && (j4QLb5Xzg (i, s, ZYmGa3x) > 0)) {
            change (i, s, ZYmGa3x, RfQwZImDi);
            break;
        };
}

