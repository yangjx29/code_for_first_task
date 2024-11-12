void  main () {
    char max;
    char *p;
    char *m;
    char *ukseQHl8m3d6;
    char *GGwAUFl7XVO;
    char nhgesIwWY [(359 - 349)];
    char Xsya2kf [(814 - 811)];
    char HxIK1LQJRv [(337 - 324)];
    for (; !(EOF == scanf ("%s %s", nhgesIwWY, Xsya2kf));) {
        for (m = nhgesIwWY, max = *m; !('\0' == *m); m++)
            if (*m > max)
                max = *m;
        for (m = nhgesIwWY; *m != '\0'; m++)
            if (*m == max) {
                GGwAUFl7XVO = m;
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
                break;
            }
        for (p = HxIK1LQJRv, m = nhgesIwWY; m <= GGwAUFl7XVO; p++, m++)
            *p = *m;
        for (ukseQHl8m3d6 = Xsya2kf; *ukseQHl8m3d6 != '\0'; ukseQHl8m3d6++, p++)
            *p = *ukseQHl8m3d6;
        for (m = GGwAUFl7XVO +1; *m != '\0'; m++, p++)
            *p = *m;
        *p = '\0';
        p = HxIK1LQJRv;
        printf ("%s\n", p);
    };
}

