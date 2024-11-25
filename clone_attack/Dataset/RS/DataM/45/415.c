int main () {
    char a [100], b [100];
    int len1, len2, i, ifLFrV9l;
    scanf ("%s%s", a, b);
    len1 = strlen (a);
    len2 = strlen (b);
    for (i = 0; len2 - len1 >= i; i++) {
        for (ifLFrV9l = i; i + len1 - 1 > ifLFrV9l; ifLFrV9l++) {
            if (b[ifLFrV9l] == a[ifLFrV9l - i])
                continue;
            else
                break;
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
        if (ifLFrV9l == i + len1 - 1) {
            printf ("%d", i);
            break;
        };
    }
    return 0;
}

