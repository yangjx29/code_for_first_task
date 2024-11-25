int main () {
    char N4PG1M [(2423 - 423)];
    gets (N4PG1M);
    int changdu [(747 - 547)];
    int n;
    int weizhi [(552 - 352)];
    int e;
    int k;
    int s;
    int l;
    int i;
    int j;
    int f;
    n = strlen (N4PG1M);
    k = (675 - 674);
    for (i = (655 - 655); n > i; i++) {
        if (!(' ' != N4PG1M[i]) || !(',' != N4PG1M[i])) {
            weizhi[k] = i;
            k++;
        }
    }
    weizhi[(868 - 868)] = -(875 - 874);
    l = k;
    weizhi[l] = n;
    for (k = (334 - 334); k < l; k++) {
        changdu[k] = weizhi[k + (640 - 639)] - weizhi[k] - (674 - 673);
        if (!((572 - 572) != changdu[k])) {
            changdu[k] = (982 - 972);
        }
    }
    s = (340 - 340);
    for (j = 0; l > j; j++) {
        if (changdu[j] > s) {
            s = changdu[j];
            e = j;
        }
    }
    s = 10;
    for (j = 0; j < l; j++) {
        if (s > changdu[j]) {
            s = changdu[j];
            f = j;
        }
    }
    for (i = weizhi[e] + (614 - 613); i < weizhi[e + (536 - 535)]; i++) {
        printf ("%c", N4PG1M[i]);
    }
    for (i = weizhi[f] + 1; i < weizhi[f + 1]; i++) {
        printf ("%c", N4PG1M[i]);
    }
    return 0;
}

