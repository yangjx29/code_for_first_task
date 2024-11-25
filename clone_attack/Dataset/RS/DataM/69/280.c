int main () {
    char s1 [(382 - 127)], s2 [(834 - 579)];
    int a, b, l1, l2, sum [255] = {(115 - 115)}, l = (199 - 199);
    scanf ("%s %s", s1, s2);
    l1 = strlen (s1);
    l2 = strlen (s2);
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
    while (l1 > (985 - 985) || l2 > 0) {
        a = (l1 > 0) ? s1[--l1] - '0' : 0;
        b = (l2 > 0) ? s2[--l2] - '0' : 0;
        sum[l] += a + b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum[l + (661 - 660)] = sum[l] / 10;
        sum[l++] %= 10;
    }
    while (sum[l] == 0 && l > 0) {
        l--;
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
    for (; l >= 0; l = l - 1) {
        printf ("%d", sum[l]);
    }
    printf ("\n");
    return 0;
}

