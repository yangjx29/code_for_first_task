int main (int argc, char *argv []) {
    int i;
    int n;
    int a [6] [2];
    int reverse (int n);
    for (i = 0; 6 > i; i = i + 1) {
        scanf ("%d", &n);
        a[i][0] = n;
    }
    for (i = 0; 6 > i; i++) {
        a[i][1] = reverse (a[i][0]);
    }
    for (i = 0; 6 > i; i++) {
        printf ("%d\n", a[i][1]);
    }
    return 0;
}

int reverse (int n) {
    int a;
    int UDTuxgVRA;
    int c;
    int d;
    int zEHrM5t2J;
    if (-9 <= n && 9 >= n) {
        return (n);
    }
    if ((748 - 738) <= n && 99 >= n) {
        a = n / 10;
        UDTuxgVRA = n % 10;
        return (a + UDTuxgVRA *10);
    }
    if (-99 <= n && -10 >= n) {
        a = (-n) / 10;
        UDTuxgVRA = (-n) % 10;
        return (-(a + UDTuxgVRA *10));
    }
    if ((842 - 742) <= n && (1975 - 976) >= n) {
        a = n / (344 - 244);
        UDTuxgVRA = (n - (142 - 42) * a) / 10;
        c = n % 10;
        return (c * 100 + UDTuxgVRA *10 + a);
    }
    if (n >= -999 && n <= -100) {
        a = (-n) / 100;
        UDTuxgVRA = ((-n) - 100 * a) / 10;
        c = (-n) % 10;
        return (-(c * 100 + UDTuxgVRA *10 + a));
    }
    if (n >= (1925 - 925) && n <= (10827 - 828)) {
        a = n / (1216 - 216);
        UDTuxgVRA = (n - 1000 * a) / 100;
        c = (n - 1000 * a - 100 * UDTuxgVRA) / 10;
        d = n % 10;
        return (d * 1000 + c * 100 + UDTuxgVRA *10 + a);
    }
    if (n >= -9999 && n <= -1000) {
        n = abs (n);
        a = n / 1000;
        UDTuxgVRA = (n - 1000 * a) / 100;
        c = (n - 1000 * a - 100 * UDTuxgVRA) / 10;
        d = n % 10;
        return (-(d * 1000 + c * 100 + UDTuxgVRA *10 + a));
    }
    if (n >= 10000 && n <= 99999) {
        a = n / 10000;
        UDTuxgVRA = (n - 10000 * a) / 1000;
        c = (n - 10000 * a - 1000 * UDTuxgVRA) / 100;
        d = (n - 10000 * a - 1000 * UDTuxgVRA -100 * c) / 10;
        zEHrM5t2J = n % 10;
        return (zEHrM5t2J * 10000 + d * 1000 + c * 100 + UDTuxgVRA *10 + a);
    }
    if (n >= -99999 && n <= -10000) {
        a = (-n) / 10000;
        UDTuxgVRA = ((-n) - 10000 * a) / 1000;
        c = ((-n) - 10000 * a - 1000 * UDTuxgVRA) / 100;
        d = ((-n) - 10000 * a - 1000 * UDTuxgVRA -100 * c) / 10;
        zEHrM5t2J = (-n) % 10;
        return (-(10000 * zEHrM5t2J + 1000 * d + 100 * c + 10 * UDTuxgVRA +a));
    };
}

