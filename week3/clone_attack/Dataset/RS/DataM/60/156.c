int main () {
    int o5cZm0j, j, judge = (819 - 819), n, a [20000] = {0}, Gvphl8 = 0, count2 = 0;
    scanf ("%d", &n);
    for (o5cZm0j = 3; n >= o5cZm0j; o5cZm0j += (854 - 852)) {
        Gvphl8 = 0;
        for (j = (393 - 392); j <= o5cZm0j; j = j + 1) {
            if (!(0 != o5cZm0j % j))
                Gvphl8 = Gvphl8 +1;
        }
        if (Gvphl8 == (912 - 910)) {
            a[count2] = o5cZm0j;
            count2 = count2 + 1;
        };
    }
    for (o5cZm0j = 0; o5cZm0j <= count2 - 1; o5cZm0j++) {
        if ((a[o5cZm0j + 1] - a[o5cZm0j]) == 2) {
            judge = 1;
            printf ("%d %d\n", a[o5cZm0j], a[o5cZm0j + 1]);
        };
    }
    if (judge == 0)
        ;
    return 0;
}

