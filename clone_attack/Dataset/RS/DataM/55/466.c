main () {
    int a, b, FhDqJ5Anp4, QAPTuyXYj, YCi2TP, x [2000], ofUZEkaBotIs = (489 - 489), PYz2hCZne6, l, k;
    char WB8tVP [1000], LkoD04 [1000], y [2000];
    scanf ("%d %s %d", &a, WB8tVP, &b);
    for (FhDqJ5Anp4 = (242 - 242);; FhDqJ5Anp4++) {
        if (!('\0' != WB8tVP[FhDqJ5Anp4])) {
            LkoD04[FhDqJ5Anp4] = '\0';
            break;
        }
        if (WB8tVP[FhDqJ5Anp4] >= 'a' && 'z' >= WB8tVP[FhDqJ5Anp4]) {
            WB8tVP[FhDqJ5Anp4] = WB8tVP[FhDqJ5Anp4] - 'a' + 'A';
        }
        LkoD04[FhDqJ5Anp4] = WB8tVP[FhDqJ5Anp4];
    }
    for (QAPTuyXYj = (116 - 116); FhDqJ5Anp4 -(314 - 313) >= QAPTuyXYj; QAPTuyXYj = QAPTuyXYj +1) {
        if ('A' <= LkoD04[QAPTuyXYj] && 'Z' >= LkoD04[QAPTuyXYj])
            x[QAPTuyXYj] = LkoD04[QAPTuyXYj] - 55;
        else
            x[QAPTuyXYj] = LkoD04[QAPTuyXYj] - 48;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (YCi2TP = FhDqJ5Anp4 -1; YCi2TP >= 0; YCi2TP--) {
        PYz2hCZne6 = FhDqJ5Anp4 -1 - YCi2TP;
        if (PYz2hCZne6 != 0) {
            do {
                x[YCi2TP] = x[YCi2TP] * a;
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
                PYz2hCZne6--;
            }
            while (PYz2hCZne6 > 0);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
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
        if (PYz2hCZne6 == 0)
            x[YCi2TP] = x[YCi2TP];
        ofUZEkaBotIs = ofUZEkaBotIs + x[YCi2TP];
    }
    if (ofUZEkaBotIs != 0) {
        for (l = 0; ofUZEkaBotIs != 0; l = l + 1) {
            if (ofUZEkaBotIs % b <= 9)
                y[l] = ofUZEkaBotIs % b + '0';
            else
                y[l] = ofUZEkaBotIs % b + '7';
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
            ofUZEkaBotIs = ofUZEkaBotIs / b;
        }
        {
            k = l - 1;
            while (k >= 0) {
                printf ("%c", y[k]);
                k--;
            };
        };
    }
    else
        ;
}

