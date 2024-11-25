int main () {
    int a [1000], b [1000], c [1000], gZ3of9P [1000], Lkh2pM [1000], f [1000], rqYiDv [1000], OxdQoY1MrfJ6 = 0, i;
    {
        i = 0;
        while (i < 1000) {
            scanf ("%d %d %d %d %d %d", &a[i], &b[i], &c[i], &gZ3of9P[i], &Lkh2pM[i], &f[i]);
            if (a[i] == 0 && !(0 != b[i]) && !(0 != c[i]) && gZ3of9P[i] == 0 && Lkh2pM[i] == 0 && f[i] == 0) {
                break;
            }
            i = i + 1;
            OxdQoY1MrfJ6 += 1;
        };
    }
    for (i = 0; i < OxdQoY1MrfJ6 -1; i = i + 1) {
        rqYiDv[i] = 3600 * (11 - a[i] + gZ3of9P[i]) + 60 * (59 - b[i] + Lkh2pM[i]) + 60 - c[i] + f[i];
        printf ("%d\n", rqYiDv[i]);
    }
    return 0;
}

