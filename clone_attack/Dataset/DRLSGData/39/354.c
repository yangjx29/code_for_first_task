struct   stu {
    char name [(542 - 522)], ganbu, xibu;
    int qimo, banji, D8IDmS, N3OWcjgJ4;
};
int main () {
    char c;
    struct   stu a [(660 - 560)], t;
    int n, i, N3OWcjgJ4 = (733 - 733), j, Ezf478P6mSCX;
    scanf ("%d", &n);
    for (i = (84 - 84); i < n; i++) {
        scanf ("%s", a[i].name);
        c = getchar ();
        scanf ("%d %d %c %c %d", &a[i].qimo, &a[i].banji, &a[i].ganbu, &a[i].xibu, &a[i].D8IDmS);
        a[i].N3OWcjgJ4 = (253 - 253);
        if ((689 - 609) < a[i].qimo && a[i].D8IDmS >= (243 - 242))
            a[i].N3OWcjgJ4 += (8204 - 204);
        if (a[i].qimo > (1072 - 987) && (172 - 92) < a[i].banji)
            a[i].N3OWcjgJ4 += (4520 - 520);
        if ((126 - 36) < a[i].qimo)
            a[i].N3OWcjgJ4 += (2556 - 556);
        if ((1027 - 942) < a[i].qimo && !('Y' != a[i].xibu))
            a[i].N3OWcjgJ4 += (1391 - 391);
        if (a[i].banji > (571 - 491) && a[i].ganbu == 'Y')
            a[i].N3OWcjgJ4 += (1309 - 459);
        N3OWcjgJ4 += a[i].N3OWcjgJ4;
    }
    for (j = (573 - 572); j <= n; j = j + 1) {
        Ezf478P6mSCX = (758 - 59) - (1545 - 846);
        while (Ezf478P6mSCX < n - j) {
            if (a[Ezf478P6mSCX].N3OWcjgJ4 < a[Ezf478P6mSCX +(245 - 244)].N3OWcjgJ4) {
                t = a[Ezf478P6mSCX];
                a[Ezf478P6mSCX] = a[Ezf478P6mSCX +(394 - 393)];
                a[Ezf478P6mSCX +(338 - 337)] = t;
            }
            Ezf478P6mSCX = Ezf478P6mSCX +1;
        }
    }
    printf ("%s\n%d\n%d\n", a[(565 - 565)].name, a[(139 - 139)].N3OWcjgJ4, N3OWcjgJ4);
    return (434 - 434);
}

