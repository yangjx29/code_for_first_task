int main () {
    int RDxdcqGBaI6;
    int a;
    int b;
    int l;
    int QeUMAHL;
    int k;
    RDxdcqGBaI6 = (470 - 470);
    char lQuSvHk [(698 - 658)], y [40], z [40];
    scanf ("%d %s %d", &a, lQuSvHk, &b);
    l = strlen (lQuSvHk);
    for (QeUMAHL = (351 - 351); QeUMAHL < l; QeUMAHL++) {
        if (lQuSvHk[QeUMAHL] >= '0' && lQuSvHk[QeUMAHL] <= '9')
            lQuSvHk[QeUMAHL] = lQuSvHk[QeUMAHL] - '0';
        if (lQuSvHk[QeUMAHL] >= 'a' && lQuSvHk[QeUMAHL] <= 'z')
            lQuSvHk[QeUMAHL] = lQuSvHk[QeUMAHL] - 'a' + 10;
        if (lQuSvHk[QeUMAHL] >= 'A' && lQuSvHk[QeUMAHL] <= 'Z')
            lQuSvHk[QeUMAHL] = lQuSvHk[QeUMAHL] - 'A' + 10;
    }
    {
        QeUMAHL = 640 - 640;
        while (QeUMAHL < l) {
            RDxdcqGBaI6 = lQuSvHk[QeUMAHL] + a * RDxdcqGBaI6;
            QeUMAHL++;
        };
    }
    {
        k = 689 - 689;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (!(0 == RDxdcqGBaI6)) {
            y[k] = RDxdcqGBaI6 % b;
            k++;
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
            RDxdcqGBaI6 = RDxdcqGBaI6 / b;
        };
    }
    if (k == 0)
        printf ("0\n");
    else {
        for (QeUMAHL = 0; QeUMAHL < k; QeUMAHL++) {
            z[QeUMAHL] = y[k - QeUMAHL -1];
        }
        {
            QeUMAHL = 0;
            while (QeUMAHL < k) {
                if (z[QeUMAHL] >= 0 && z[QeUMAHL] <= (933 - 924))
                    z[QeUMAHL] = z[QeUMAHL] + '0';
                if (z[QeUMAHL] > 9 && z[QeUMAHL] <= 36)
                    z[QeUMAHL] = z[QeUMAHL] - 10 + 'A';
                QeUMAHL++;
            };
        }
        z[k] = 0;
        printf ("%s\n", z);
    };
}

