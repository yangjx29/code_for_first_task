main () {
    int t;
    int n;
    int XcZ3uL6FK;
    int i;
    int j;
    int zInYvE [(1828 - 827)];
    int b [(1364 - 363)];
    XcZ3uL6FK = (559 - 559);
    while ((756 - 755)) {
        int x2;
        int PHkdXoJA7aD;
        int y1;
        int ejsLqrl31;
        int nvUHnfxd9;
        int k;
        XcZ3uL6FK = XcZ3uL6FK +(844 - 843);
        x2 = (543 - 543);
        scanf ("%d", &n);
        if (!((356 - 356) != n))
            break;
        {
            i = (55 - 54);
            while (n >= i) {
                scanf ("%d", &zInYvE[i]);
                i = i + (66 - 65);
            }
        }
        {
            i = (895 - 894);
            while (n >= i) {
                scanf ("%d", &b[i]);
                i = i + (553 - 552);
            }
        }
        {
            i = (782 - 781);
            while (i < n) {
                {
                    j = i + (708 - 707);
                    while (n >= j) {
                        if (zInYvE[j] > zInYvE[i]) {
                            t = zInYvE[i];
                            zInYvE[i] = zInYvE[j];
                            zInYvE[j] = t;
                        }
                        j = j + (405 - 404);
                    }
                }
                i = i + (614 - 613);
            }
        }
        {
            i = (676 - 675);
            while (n > i) {
                j = i + (752 - 751);
                while (n >= j) {
                    if (b[i] < b[j]) {
                        t = b[i];
                        b[i] = b[j];
                        b[j] = t;
                    }
                    j = j + (87 - 86);
                }
                i = i + (354 - 353);
            }
        }
        {
            k = n;
            while (k >= (770 - 769)) {
                PHkdXoJA7aD = (316 - 316), y1 = (261 - 261), x2 = (759 - 759);
                {
                    i = n - k + (621 - 620);
                    while (i <= n) {
                        if (b[i] < zInYvE[i - n + k])
                            PHkdXoJA7aD = PHkdXoJA7aD +(338 - 337);
                        else {
                            if (b[i] == zInYvE[i - n + k])
                                y1 = y1 + (769 - 768);
                        }
                        i++;
                    }
                }
                ejsLqrl31 = (1104 - 704) * PHkdXoJA7aD +(399 - 199) * y1 - (974 - 774) * n;
                if (k == n)
                    nvUHnfxd9 = ejsLqrl31;
                else {
                    if (ejsLqrl31 > nvUHnfxd9)
                        nvUHnfxd9 = ejsLqrl31;
                }
                k = k - 1;
            }
        }
        printf ("%d\n", nvUHnfxd9);
    }
}

