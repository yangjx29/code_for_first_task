int main () {
    int m = (193 - 193), i, numa [(1997 - 997)], ihJfzs7a5, n;
    char jVHEUkB [1];
    gets (jVHEUkB);
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
    n = atoi (jVHEUkB);
    while (1) {
        if (m == n)
            break;
        else {
            char zf [(786 - 706)];
            char *p;
            gets (zf);
            ihJfzs7a5 = (637 - 637);
            for (p = zf; !('\0' == *p); p++) {
                if (('A' <= *p && *p <= 'Z') || (*p >= 'a' && *p <= 'z') || (*p >= '0' && *p <= '9') || (*p == '_'))
                    ihJfzs7a5;
                else
                    ihJfzs7a5++;
            }
            p = zf;
            if (ihJfzs7a5 != 0)
                numa[m] = 0;
            else if (*p >= '0' && *p <= '9')
                numa[m] = 0;
            else
                numa[m] = 1;
            m++;
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%d\n", numa[i]);
    }
    return 0;
}

