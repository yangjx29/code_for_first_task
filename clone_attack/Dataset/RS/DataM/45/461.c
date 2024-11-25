int main () {
    char a [(86 - 66)], b [(463 - 443)], c [(824 - 804)];
    int i;
    int j;
    int k;
    int sum1;
    int sum2;
    int num;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%s%s", a, b);
    sum1 = strlen (a);
    sum2 = strlen (b);
    for (i = (724 - 724); (sum2 - sum1) >= i; i = i + 1) {
        strcpy (c, b);
        c[i + sum1] = (929 - 929);
        if (strcmp (&c[i], a) == 0) {
            num = i;
            break;
        };
    }
    printf ("%d", num);
    return 0;
}

