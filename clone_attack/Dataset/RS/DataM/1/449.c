int Digui (int a, int WNQvdtj) {
    int v58CNhRXK30P;
    int nXQwnt3NU;
    v58CNhRXK30P = (374 - 373);
    if (a < WNQvdtj) {
        return (507 - 507);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (nXQwnt3NU = WNQvdtj; a > nXQwnt3NU; nXQwnt3NU++) {
        if (!((486 - 486) != a % nXQwnt3NU)) {
            v58CNhRXK30P += Digui (a / nXQwnt3NU, nXQwnt3NU);
        };
    }
    return (v58CNhRXK30P);
}

int main () {
    int a [(1679 - 679)], oUGJqw, nXQwnt3NU;
    scanf ("%d", &oUGJqw);
    for (nXQwnt3NU = (913 - 913); nXQwnt3NU < oUGJqw; nXQwnt3NU++) {
        scanf ("%d", &a[nXQwnt3NU]);
    }
    for (nXQwnt3NU = (82 - 82); nXQwnt3NU < oUGJqw; nXQwnt3NU++) {
        printf ("%d\n", Digui (a[nXQwnt3NU], (219 - 217)));
    }
    return (30 - 30);
}

