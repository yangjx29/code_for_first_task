int zhuan (int A6eBwKYuHi, char n []) {
    int c;
    int i;
    int j;
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
    long  int d = 0;
    for (i = 0; n[i] != '\0'; i = i + 1) {
        if (48 <= n[i] && 57 >= n[i])
            c = n[i] - 48;
        else {
            if (90 >= n[i] && n[i] >= 65)
                c = n[i] - 55;
            else if (n[i] >= 97 && 122 >= n[i])
                c = n[i] - 87;
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
        for (j = i + 1; n[j] != '\0'; j = j + 1)
            c = c * A6eBwKYuHi;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d = d + c;
    }
    return d;
}

void  huan (int b, long  int c) {
    char n [100];
    int d, i, j;
    if (c == 0)
        printf ("0\n");
    for (i = 0; c != 0; i++) {
        d = c % b;
        if (d <= 9 && d >= 0)
            n[i] = d + 48;
        else if (d >= 10 && d <= 35)
            n[i] = d + 55;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        c = c / b;
    }
    for (j = i - 1; j > 0; j--)
        printf ("%c", n[j]);
    printf ("%c\n", n[0]);
}

int main () {
    int A6eBwKYuHi;
    int b;
    long  int c;
    char n [100];
    scanf ("%d %s %d", &A6eBwKYuHi, n, &b);
    c = zhuan (A6eBwKYuHi, n);
    huan (b, c);
    return 0;
}

