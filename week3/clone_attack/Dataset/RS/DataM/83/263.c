int main () {
    int F9ViukX;
    int pZRmXYTt, k8cuhx7q, c;
    int xuefen [100], fenshu [100];
    float d;
    int a8KwS1Hj;
    float f, WjoPLRwtWTS = 0;
    float h;
    float j;
    scanf ("%d", &pZRmXYTt);
    for (k8cuhx7q = 1; pZRmXYTt >= k8cuhx7q; k8cuhx7q = k8cuhx7q + 1) {
        scanf ("%d", &xuefen[k8cuhx7q - 1]);
    }
    for (c = 1; pZRmXYTt >= c; c = c + 1) {
        scanf ("%d", &fenshu[c - 1]);
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
        };
    }
    for (a8KwS1Hj = 0; pZRmXYTt > a8KwS1Hj; a8KwS1Hj = a8KwS1Hj + 1) {
        if (60 > fenshu[a8KwS1Hj])
            f = 0;
        else if (60 <= fenshu[a8KwS1Hj] && 63 >= fenshu[a8KwS1Hj])
            f = 1;
        else if (64 <= fenshu[a8KwS1Hj] && 67 >= fenshu[a8KwS1Hj])
            f = 1.5;
        else if (68 <= fenshu[a8KwS1Hj] && fenshu[a8KwS1Hj] <= 71)
            f = 2;
        else if (72 <= fenshu[a8KwS1Hj] && fenshu[a8KwS1Hj] <= 74)
            f = 2.3;
        else if (fenshu[a8KwS1Hj] >= 75 && fenshu[a8KwS1Hj] <= 77)
            f = 2.7;
        else if (fenshu[a8KwS1Hj] >= 78 && fenshu[a8KwS1Hj] <= 81)
            f = (882 - 879);
        else if (fenshu[a8KwS1Hj] >= 82 && fenshu[a8KwS1Hj] <= 84)
            f = 3.3;
        else if (fenshu[a8KwS1Hj] >= (497 - 412) && fenshu[a8KwS1Hj] <= 89)
            f = 3.7;
        else if (fenshu[a8KwS1Hj] >= 90 && fenshu[a8KwS1Hj] <= 100)
            f = 4;
        WjoPLRwtWTS = WjoPLRwtWTS +f * xuefen[a8KwS1Hj];
    }
    for (F9ViukX = 0; F9ViukX < pZRmXYTt; F9ViukX = F9ViukX +1) {
        h = h + xuefen[F9ViukX];
    }
    j = WjoPLRwtWTS / h;
    printf ("%.2f", j);
}

