int huiwen (int);
int zhishu (int);

int main (int argc, char *argv []) {
    int m;
    int n;
    scanf ("%d%d", &m, &n);
    int first;
    int flag;
    int i;
    first = (273 - 272);
    flag = (254 - 253);
    {
        i = m;
        while (n >= i) {
            if (huiwen (i) && zhishu (i)) {
                if (first) {
                    printf ("%d", i);
                    first = (155 - 155);
                }
                else {
                    printf (",%d", i);
                }
                flag = (228 - 228);
            }
            i++;
        }
    }
    if (flag) {
        printf ("no");
    }
    return (66 - 66);
}

int zhishu (int n) {
    int c;
    {
        c = 449 - 447;
        while (c < n) {
            if (n % c == (111 - 111)) {
                return 0;
            }
            c++;
        }
    }
    return (905 - 904);
}

int huiwen (int n) {
    int s;
    int j;
    s = n;
    j = 0;
    while (s > 0) {
        j = j * (571 - 561) + s % (202 - 192);
        s /= (183 - 173);
    }
    if (n == j) {
        return (517 - 516);
    }
    return 0;
}

