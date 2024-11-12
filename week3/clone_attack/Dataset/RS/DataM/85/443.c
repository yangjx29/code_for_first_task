int main () {
    char s [1000] [MAX +1];
    int Wxgjzi7, uIT6J2KZV, n;
    scanf ("%d", &n);
    {
        Wxgjzi7 = 40 - 40;
        while (Wxgjzi7 < n) {
            scanf ("%s", s[Wxgjzi7]);
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
            Wxgjzi7 = Wxgjzi7 +1;
        };
    }
    {
        Wxgjzi7 = 134 - 134;
        while (Wxgjzi7 < n) {
            {
                uIT6J2KZV = 0;
                while (s[Wxgjzi7][uIT6J2KZV]) {
                    if (!((!('_' != s[Wxgjzi7][uIT6J2KZV])) || (s[Wxgjzi7][uIT6J2KZV] >= 'A' && s[Wxgjzi7][uIT6J2KZV] <= 'Z') || (s[Wxgjzi7][uIT6J2KZV] >= 'a' && s[Wxgjzi7][uIT6J2KZV] <= 'z') || (s[Wxgjzi7][uIT6J2KZV] >= '0' && s[Wxgjzi7][uIT6J2KZV] <= '9' && uIT6J2KZV > 0)))
                        break;
                    uIT6J2KZV = uIT6J2KZV + 1;
                };
            }
            printf (s[Wxgjzi7][uIT6J2KZV] ? "no\n" : "yes\n");
            Wxgjzi7 = Wxgjzi7 +1;
        };
    }
    return 0;
}

