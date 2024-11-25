int main () {
    char a [max + (766 - 765)], b [max + 1];
    gets (a);
    int i, j = 0;
    for (i = 0; !('\0' == a[i]); i++) {
        if (!(a[i] == ' ' && a[i + 1] == ' ')) {
            b[j++] = a[i];
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
        };
    }
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
    b[j] = '\0';
    printf ("%s", b);
    return 0;
}

