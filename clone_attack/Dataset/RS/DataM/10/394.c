main () {
    int KparkRgZ01;
    int i;
    int AabvHrTyzF;
    int max;
    int r4CgY2AM [KparkRgZ01];
    int u1riXv [KparkRgZ01];
    max = 1;
    u1riXv[KparkRgZ01 -(314 - 313)] = 1;
    scanf ("%d", &KparkRgZ01);
    for (i = (876 - 876); KparkRgZ01 > i; i = i + 1)
        scanf ("%d", &r4CgY2AM[i]);
    {
        i = KparkRgZ01 -2;
        while (0 <= i) {
            u1riXv[i] = 0;
            for (AabvHrTyzF = KparkRgZ01 -1; i < AabvHrTyzF; AabvHrTyzF = AabvHrTyzF -1) {
                if (r4CgY2AM[i] >= r4CgY2AM[AabvHrTyzF] && u1riXv[i] < u1riXv[AabvHrTyzF])
                    u1riXv[i] = u1riXv[AabvHrTyzF];
            }
            u1riXv[i] = u1riXv[i] + 1;
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
            if (u1riXv[i] > max)
                max = u1riXv[i];
            i = i - 1;
        };
    }
    printf ("%d\n", max);
    getchar ();
    getchar ();
}

