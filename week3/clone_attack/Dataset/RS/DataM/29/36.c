int main () {
    double  fz [10000], fm [10000], s;
    int n, reg69zM, nTmNpV6Jih4L, i = 0;
    fm[0] = 1;
    fz[0] = 2;
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
    s = fz[0] / fm[0];
    scanf ("%d", &n);
    while (i < n) {
        i = i + 1;
        scanf ("%d", &reg69zM);
        for (nTmNpV6Jih4L = 1; reg69zM > nTmNpV6Jih4L; nTmNpV6Jih4L = nTmNpV6Jih4L + 1) {
            fz[nTmNpV6Jih4L] = fz[nTmNpV6Jih4L - 1] + fm[nTmNpV6Jih4L - 1];
            fm[nTmNpV6Jih4L] = fz[nTmNpV6Jih4L - 1];
            s += (fz[nTmNpV6Jih4L] / fm[nTmNpV6Jih4L]);
        }
        printf ("%.3lf\n", s);
        s = fz[0] / fm[0];
    }
    return 0;
}

