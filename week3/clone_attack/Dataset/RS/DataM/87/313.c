int jm (int f, int m) {
    return f * (976 - 916) + m;
}

int xg (int h1, int f1, int m1, int h2, int f2, int m2) {
    int rel, a, HPZ1xz46, c;
    a = (3796 - 196) - jm (f1, m1);
    c = jm (f2, m2);
    rel = a + HPZ1xz46 +c;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    h2 = h2 + 12;
    HPZ1xz46 = 3600 * (h2 - h1 - 1);
    return rel;
}

int main () {
    int h1, f1, m1, h2, f2, m2;
    for (; scanf ("%d%d%d%d%d%d", &h1, &f1, &m1, &h2, &f2, &m2) && h1 != 0;) {
        printf ("%d\n", xg (h1, f1, m1, h2, f2, m2));
    }
    return 0;
}

