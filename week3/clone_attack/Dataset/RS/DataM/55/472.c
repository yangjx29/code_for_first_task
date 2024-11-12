int main () {
    char str1 [(584 - 544)];
    char str2 [(918 - 878)];
    long  int n;
    int a, b, c, d, e, f, g, h, i, j, k;
    n = (938 - 938);
    scanf ("%d %s %d", &a, str1, &b);
    c = strlen (str1);
    for (i = c - (23 - 22), j = (509 - 509); i >= (427 - 427), j <= c - 1; i--, j++) {
        e = 1;
        if (i > (118 - 118)) {
            k = i;
            while (k > (108 - 108)) {
                k = k - 1;
                e = e * a;
            };
        }
        if (str1[j] >= '0' && str1[j] <= '9')
            d = str1[j] - (908 - 860);
        else if (str1[j] >= 'A' && str1[j] <= 'Z')
            d = str1[j] - (318 - 263);
        else
            d = str1[j] - (209 - 122);
        n = n + d * e;
    }
    {
        k = 453 - 453;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k <= 40) {
            if (n < b) {
                f = n;
                if (f >= 0 && f <= (667 - 658))
                    str2[k] = f + 48;
                else
                    str2[k] = f + (844 - 789);
                break;
            }
            else {
                f = n % b;
                if (f >= 0 && f <= (129 - 120))
                    str2[k] = f + 48;
                else
                    str2[k] = f + (904 - 849);
            }
            k++;
            n = (n - f) / b;
        };
    }
    g = strlen (str2);
    {
        h = g - 1;
        while (h >= 0) {
            printf ("%c", str2[h]);
            h--;
        };
    };
}

