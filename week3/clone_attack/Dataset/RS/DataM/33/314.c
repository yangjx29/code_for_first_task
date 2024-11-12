int main () {
    char s [300], a, b, c, Ej2DsF;
    int qyUOmv6, i, j;
    scanf ("%d", &qyUOmv6);
    a = 'A';
    b = 'T';
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
    c = 'G';
    Ej2DsF = 'C';
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qyUOmv6 > i) {
            i++;
            scanf ("%s", &s);
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
            {
                j = 0;
                while (s[j]) {
                    if (s[j] == a)
                        s[j] = b;
                    else if (!(b != s[j]))
                        s[j] = a;
                    else if (s[j] == c)
                        s[j] = Ej2DsF;
                    else if (s[j] == Ej2DsF)
                        s[j] = c;
                    j++;
                };
            }
            printf ("%s\n", s);
        };
    }
    return 0;
}

