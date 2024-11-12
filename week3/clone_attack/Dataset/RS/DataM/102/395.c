int main () {
    double  c [40], xqZKXBR [40], PKM2zniHF [40], z;
    int IhFTJeV6H, i, j = 0, k = 0, SVv0SoW1lrG, s57EovdK13, q [(742 - 702)];
    char sL4O2df [40];
    scanf ("%d", &IhFTJeV6H);
    {
        i = 0;
        while (i < IhFTJeV6H) {
            scanf ("%s %lf", &sL4O2df, &c[i]);
            if (strcmp (sL4O2df, "male") == 0) {
                q[i] = 1;
            }
            else {
                q[i] = 0;
            }
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
            i = i + 1;
        };
    }
    for (i = 0; i < IhFTJeV6H; i = i + 1) {
        if (q[i] == 1) {
            xqZKXBR[j] = c[i];
            j = j + 1;
        }
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
        if (!(0 != q[i])) {
            PKM2zniHF[k] = c[i];
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
            k = k + 1;
        };
    }
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
    for (i = 0; i < j; i++) {
        for (SVv0SoW1lrG = i + 1; SVv0SoW1lrG < j; SVv0SoW1lrG = SVv0SoW1lrG +1) {
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
            if (xqZKXBR[SVv0SoW1lrG] < xqZKXBR[i]) {
                z = xqZKXBR[i];
                xqZKXBR[i] = xqZKXBR[SVv0SoW1lrG];
                xqZKXBR[SVv0SoW1lrG] = z;
            };
        };
    }
    for (i = 0; i < k; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (SVv0SoW1lrG = i + 1; SVv0SoW1lrG < k; SVv0SoW1lrG++) {
            if (PKM2zniHF[SVv0SoW1lrG] > PKM2zniHF[i]) {
                z = PKM2zniHF[i];
                PKM2zniHF[i] = PKM2zniHF[SVv0SoW1lrG];
                PKM2zniHF[SVv0SoW1lrG] = z;
            };
        };
    }
    for (i = 0; i < j; i++) {
        printf ("%.2lf ", xqZKXBR[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    {
        i = 0;
        while (i < k - 1) {
            printf ("%.2lf ", PKM2zniHF[i]);
            i++;
        };
    }
    printf ("%.2lf", PKM2zniHF[k - 1]);
    return 0;
}

