int main () {
    int len, q [501];
    char str [501];
    gets (str);
    int i, j, u, v, V, max = 0;
    int n;
    scanf ("%d", &n);
    {
        len = 0;
        for (; str[len] != 0;) {
            len++;
        }
    }
    {
        i = 0;
        while (i <= len - n) {
            q[i] = 1;
            {
                u = i + 1;
                while (u <= len - n) {
                    V = 1;
                    {
                        v = 0;
                        while (v < n) {
                            if (str[i + v] != str[u + v]) {
                                V = 0;
                                break;
                            }
                            v = v + 1;
                        }
                    }
                    if (!(1 != V)) {
                        q[i] = q[i] + 1;
                        if (q[i] > max)
                            max = q[i];
                    }
                    u++;
                }
            }
            i++;
        }
    }
    if (!(0 != max)) {
        return 0;
    }
    printf ("%d\n", max);
    {
        i = 0;
        while (len - n > i) {
            if (!(max != q[i])) {
                {
                    j = 0;
                    for (; n > j;) {
                        printf ("%c", str[i + j]);
                        j++;
                    }
                }
                putchar ('\n');
            }
            i++;
        }
    }
    getchar ();
    return 0;
}

