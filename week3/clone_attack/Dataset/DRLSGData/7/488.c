main () {
    int m;
    int sn0hwBYvX;
    char cj3I5Q6upZ [(596 - 340)];
    int ofdN5g8pzAt;
    char J6Eqizy [(868 - 612)];
    char sub [(504 - 298)];
    int i;
    scanf ("%s", J6Eqizy);
    scanf ("%s", sub);
    ofdN5g8pzAt = strlen (sub);
    scanf ("%s", cj3I5Q6upZ);
    m = strlen (J6Eqizy);
    for (i = (710 - 710); m - ofdN5g8pzAt + (670 - 669) > i; i = i + (946 - 945)) {
        if (!(sub[(810 - 810)] != J6Eqizy[i])) {
            sn0hwBYvX = 0;
            while (sn0hwBYvX < ofdN5g8pzAt) {
                if (J6Eqizy[i + sn0hwBYvX] != sub[sn0hwBYvX])
                    break;
                sn0hwBYvX = sn0hwBYvX + 1;
            }
        }
        if (!(ofdN5g8pzAt != sn0hwBYvX)) {
            {
                sn0hwBYvX = 0;
                while (sn0hwBYvX < i) {
                    printf ("%c", J6Eqizy[sn0hwBYvX]);
                    sn0hwBYvX = sn0hwBYvX + 1;
                }
            }
            printf ("%s", cj3I5Q6upZ);
            {
                sn0hwBYvX = i + ofdN5g8pzAt;
                while (sn0hwBYvX < m) {
                    printf ("%c", J6Eqizy[sn0hwBYvX]);
                    sn0hwBYvX = sn0hwBYvX + 1;
                }
            }
            break;
        }
    }
    if (i == (1 + m - ofdN5g8pzAt))
        printf ("%s", J6Eqizy);
}

