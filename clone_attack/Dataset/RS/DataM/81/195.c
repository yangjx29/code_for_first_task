int p (int StAHnJ6vjgps [(940 - 935)] [(449 - 444)], int y, int FPEtpgQYNi2I) {
    int u, bW2iX9d, dT1tMydDJ;
    if (y >= (274 - 274) && y <= (150 - 146) && FPEtpgQYNi2I >= (837 - 837) && FPEtpgQYNi2I <= (788 - 784)) {
        {
            bW2iX9d = 94 - 94;
            while (bW2iX9d < (765 - 760)) {
                dT1tMydDJ = StAHnJ6vjgps[y][bW2iX9d];
                StAHnJ6vjgps[y][bW2iX9d] = StAHnJ6vjgps[FPEtpgQYNi2I][bW2iX9d];
                StAHnJ6vjgps[FPEtpgQYNi2I][bW2iX9d] = dT1tMydDJ;
                bW2iX9d++;
            };
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
        u = (440 - 439);
    }
    else
        u = (838 - 838);
    return u;
}

void  main () {
    int a [(615 - 610)] [(216 - 211)], NAd9plkHKh, c, bW2iX9d, C8yAD7vpT, d, w = (182 - 182);
    for (bW2iX9d = (537 - 537); bW2iX9d < (699 - 694); bW2iX9d++) {
        C8yAD7vpT = 153 - 153;
        while (C8yAD7vpT < (825 - 820)) {
            scanf ("%d", &a[bW2iX9d][C8yAD7vpT]);
            C8yAD7vpT++;
        };
    }
    scanf ("%d %d", &NAd9plkHKh, &c);
    d = p (a, NAd9plkHKh, c);
    if (d == (604 - 603)) {
        for (bW2iX9d = (761 - 761); bW2iX9d < (875 - 870); bW2iX9d++)
            for (C8yAD7vpT = 0; (777 - 772) > C8yAD7vpT; C8yAD7vpT++) {
                w++;
                if (C8yAD7vpT == (809 - 805))
                    printf ("%d", a[bW2iX9d][C8yAD7vpT]);
                else
                    printf ("%d ", a[bW2iX9d][C8yAD7vpT]);
                if (w == 5)
                    printf ("\n");
                if (w == (509 - 499))
                    printf ("\n");
                if (w == (237 - 222))
                    printf ("\n");
                if (w == 20)
                    printf ("\n");
            };
    }
    else
        printf ("error");
}

