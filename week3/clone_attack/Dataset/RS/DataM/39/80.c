int main () {
    int sum;
    int max;
    int n;
    int a;
    int b;
    int c;
    int prAzFjZ;
    int m [(634 - 534)] = {0};
    int result [100];
    sum = 0;
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
    max = 0;
    char lu86sk;
    char q;
    char name [20];
    char s [20];
    scanf ("%d\n", &n);
    {
        prAzFjZ = 0;
        while (prAzFjZ < n) {
            result[prAzFjZ] = scanf ("%s %d %d %c %c %d\n", s, &a, &b, &lu86sk, &q, &c);
            if (a > 80 && c > 0)
                m[prAzFjZ] = m[prAzFjZ] + 8000;
            if (a > 85 && 80 < b)
                m[prAzFjZ] += 4000;
            if (a > 90)
                m[prAzFjZ] = m[prAzFjZ] + 2000;
            if (a > 85 && q == 'Y')
                m[prAzFjZ] = m[prAzFjZ] + 1000;
            if (b > 80 && lu86sk == 'Y')
                m[prAzFjZ] = m[prAzFjZ] + 850;
            if (m[prAzFjZ] > max) {
                max = m[prAzFjZ];
                strcpy (name, s);
            }
            sum = sum + m[prAzFjZ];
            prAzFjZ++;
        };
    }
    printf ("%s\n%d\n%d\n", name, max, sum);
    return 0;
}

