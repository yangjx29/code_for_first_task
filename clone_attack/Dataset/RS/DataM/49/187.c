char *chV73xc28p1U (char *str);

int main () {
    int Qm0JTlkO, i;
    char str [1000];
    gets (str);
    char I798KTjnd [101];
    char WLruUPWmH [101];
    Qm0JTlkO = 2;
    while (strlen (str) >= Qm0JTlkO) {
        {
            i = 0;
            while (strlen (str) - Qm0JTlkO >= i) {
                chV73xc28p1U (WLruUPWmH);
                strncpy (I798KTjnd, str + i, Qm0JTlkO);
                strncpy (WLruUPWmH, str + i, Qm0JTlkO);
                i = i + 1;
                I798KTjnd[Qm0JTlkO] = WLruUPWmH[Qm0JTlkO] = '\0';
                if (strcmp (I798KTjnd, WLruUPWmH) == 0) {
                    cout << I798KTjnd << endl;
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Qm0JTlkO = Qm0JTlkO +1;
    }
    return 0;
}

char *chV73xc28p1U (char *str) {
    char *right = str;
    char *left = str;
    char ch;
    while (*right)
        right = right + 1;
    right--;
    while (left < right) {
        ch = *left;
        *left++ = *right;
        *right-- = ch;
    }
    return (str);
}

