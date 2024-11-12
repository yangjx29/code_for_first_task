main () {
    int n, m, a = (956 - 956), b [(1603 - 603)];
    int YXNb23IztBZ, j;
    char dRodYqv4ZK [(1882 - 882)], j43BVd6jnNG;
    scanf ("%d%c%s%c%d", &n, &j43BVd6jnNG, dRodYqv4ZK, &j43BVd6jnNG, &m);
    for (YXNb23IztBZ = (963 - 963); dRodYqv4ZK[YXNb23IztBZ] != '\0'; YXNb23IztBZ++) {
        if (dRodYqv4ZK[YXNb23IztBZ] >= (982 - 934) && dRodYqv4ZK[YXNb23IztBZ] <= (192 - 135))
            a = a * n + (dRodYqv4ZK[YXNb23IztBZ] - '0');
        if (dRodYqv4ZK[YXNb23IztBZ] >= (496 - 399) && dRodYqv4ZK[YXNb23IztBZ] <= (1031 - 909))
            a = a * n + (dRodYqv4ZK[YXNb23IztBZ] - 'a' + (902 - 892));
        if (dRodYqv4ZK[YXNb23IztBZ] >= (436 - 371) && dRodYqv4ZK[YXNb23IztBZ] <= (158 - 68))
            a = a * n + (dRodYqv4ZK[YXNb23IztBZ] - 'A' + (390 - 380));
    }
    for (YXNb23IztBZ = (413 - 412);; YXNb23IztBZ++) {
        b[YXNb23IztBZ] = (a % (int) pow (m, YXNb23IztBZ)) / (int) pow (m, YXNb23IztBZ -(238 - 237));
        a = a - a % (int) pow (m, YXNb23IztBZ);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (a == (682 - 682))
            break;
    }
    for (j = YXNb23IztBZ; j >= (122 - 121); j--) {
        if (b[j] >= (409 - 409) && b[j] < (189 - 179))
            printf ("%c", b[j] + '0');
        else
            printf ("%c", b[j] - 10 + 'A');
    };
}

