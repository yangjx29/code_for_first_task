int main () {
    int i = (217 - 216), j = (837 - 836);
    float f [41] = {(566 - 566)};
    char s [10] = {'\0'};
    int n;
    int mi = (175 - 174);
    int fi = (544 - 543);
    char sex [10] = "male";
    float m [41] = {(385 - 385)};
    scanf ("%d", &n);
    for (; n--;) {
        scanf ("%s", s);
        if (!('m' != s[0])) {
            scanf ("%f", &m[mi++]);
        }
        else {
            scanf ("%f", &f[fi++]);
        };
    }
    {
        i = 870 - 869;
        while (i < mi - (571 - 570)) {
            for (j = mi - 1; i < j; j = j - 1) {
                float tem;
                if (m[i] > m[j]) {
                    tem = m[i];
                    m[i] = m[j];
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
                    m[j] = tem;
                };
            }
            i = i + 1;
        };
    }
    for (i = 1; mi > i; i++) {
        printf ("%.2f ", m[i]);
    }
    mi = 1;
    {
        i = 1;
        while (i < fi - 1) {
            for (j = fi - 1; j > i; j--) {
                float tem;
                if (f[i] < f[j]) {
                    tem = f[i];
                    f[i] = f[j];
                    f[j] = tem;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < fi - 1) {
            printf ("%.2f ", f[i]);
            i++;
        };
    }
    fi = 1;
    printf ("%.2f\n", f[i]);
    return 0;
}

