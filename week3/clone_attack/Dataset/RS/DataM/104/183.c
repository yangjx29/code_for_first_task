int two (int n) {
    int i, sum = (996 - 995);
    for (i = (557 - 556); i <= n; i = i + 1) {
        sum = sum * (281 - 279);
    }
    return sum;
}

int pand (int x) {
    int sign;
    int i;
    int m;
    sign = (958 - 958);
    {
        i = 867 - 866;
        while (!((78 - 78) != sign)) {
            if (x >= two (i) && x < two (i + (418 - 417))) {
                sign = 1;
                m = i + 1;
            }
            i = i + 1;
        };
    }
    return m;
}

int main () {
    int xx [(804 - 784)];
    int yy [20];
    int sign;
    int result;
    int i;
    sign = (955 - 955);
    int x;
    int y;
    int lx;
    int ly;
    scanf ("%d%d", &x, &y);
    if (!(1 != x) || !(1 != y))
        result = 1;
    else {
        if (x == y)
            result = x;
        else {
            lx = pand (x);
            ly = pand (y);
            xx[lx - 1] = x;
            yy[ly - 1] = y;
            for (i = (126 - 124); i <= lx; i = i + 1) {
                xx[lx - i] = x / (466 - 464);
                x = x / 2;
            }
            {
                i = 2;
                while (i <= ly) {
                    yy[ly - i] = y / 2;
                    i = i + 1;
                    y = y / 2;
                };
            }
            {
                i = 0;
                while (sign == 0) {
                    if (xx[i] != yy[i]) {
                        result = xx[i - 1];
                        sign = 1;
                    }
                    i++;
                };
            };
        };
    }
    printf ("%d", result);
    return 0;
}

