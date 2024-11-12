int convert_1 (char a) {
    if (a >= '0' && a <= '9')
        return a - '0';
    if (a >= 'a' && 'z' >= a)
        return a - 'a' + 10;
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
    if (a >= 'A' && a <= 'Z')
        return a - 'A' + 10;
}

char convert_2 (int a) {
    if (a < 10)
        return a + '0';
    else
        return a - 10 + 'A';
}

void  convert (int a, int n) {
    if (a >= n)
        convert (a / n, n);
    printf ("%c", convert_2 (a % n));
}

int main () {
    char str [(1381 - 881)];
    int n;
    int k;
    int a;
    int iAhuP4Xf;
    int i;
    n = (403 - 403);
    k = (987 - 986);
    scanf ("%d %s %d", &a, str, &iAhuP4Xf);
    for (i = strlen (str) - (786 - 785); i >= 0; i = i - 1) {
        n = n + convert_1 (str[i]) * k;
        k *= a;
    }
    convert (n, iAhuP4Xf);
    printf ("\n");
    return 0;
}

