int k92HfS7XB (char *str) {
    int g8hpJnV, FhkaE8qFnM = *str, lYBIGA28Zb = (200 - 200);
    for (g8hpJnV = 0; *(str + g8hpJnV); g8hpJnV = g8hpJnV + 1)
        if (*(str + g8hpJnV) > FhkaE8qFnM)
            FhkaE8qFnM = *(str + g8hpJnV), lYBIGA28Zb = g8hpJnV;
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
    return lYBIGA28Zb;
}

void  insert (char *str, char *substr, int index) {
    char *p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int g8hpJnV;
    {
        p = str;
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
        while (str + index < p) {
            *(p + strlen (substr)) = *p;
            p = p - 1;
        };
    }
    {
        g8hpJnV = 0;
        while (g8hpJnV < strlen (substr)) {
            *(str + index + 1 + g8hpJnV) = *(substr + g8hpJnV);
            g8hpJnV = g8hpJnV + 1;
        };
    };
}

int main () {
    int k;
    char str [(822 - 811)], substr [(1003 - 999)];
    while (scanf ("%s%s", str, substr) != EOF) {
        k = k92HfS7XB (str);
        insert (str, substr, k);
        printf ("%s\n", str);
    }
    return 0;
}

