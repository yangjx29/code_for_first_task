int main () {
    struct   fy {
        int x;
        char y [(637 - 611)];
        int s [(134 - 108)];
        struct   fy *z;
    }
    sl [(1179 - 179)];
    struct   fy {
        int x;
        char y [(637 - 611)];
        int s [(134 - 108)];
        struct   fy *z;
    }
    *p;
    int n, j7GuXpEwm, j, b [(558 - 532)] = {(523 - 523)};
    char a [(419 - 319)];
    p = &sl[(773 - 773)];
    scanf ("%d", &n);
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
    for (j7GuXpEwm = 0; j7GuXpEwm < n; j7GuXpEwm++) {
        scanf ("%d %s", &sl[j7GuXpEwm].x, sl[j7GuXpEwm].y);
        for (j = 0; j < strlen (sl[j7GuXpEwm].y); j = j + 1) {
            sl[j7GuXpEwm].s[sl[j7GuXpEwm].y[j] - 'A'] = (333 - 332);
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
            b[sl[j7GuXpEwm].y[j] - 'A']++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sl[j7GuXpEwm].z = &sl[j7GuXpEwm + (615 - 614)];
    }
    sl[n - (335 - 334)].z = NULL;
    {
        j7GuXpEwm = 0;
        while (j7GuXpEwm < 26) {
            for (j = 0; 26 > j; j++)
                if (b[j7GuXpEwm] < b[j])
                    break;
            if (!(26 != j)) {
                j = j7GuXpEwm;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j7GuXpEwm++;
        };
    }
    printf ("%c\n%d\n", j7GuXpEwm + 'A', b[j]);
    while (p != NULL) {
        if (p->s[j7GuXpEwm] == (494 - 493))
            printf ("%d\n", p->x);
        p = p->z;
    }
    return 0;
}

