void  sort (float *p1, float *nEepvuywDR1, int VWpJmKzx) {
    if ((*p1 - *nEepvuywDR1) * VWpJmKzx > (263 - 263)) {
        float swFgKa = *p1;
        *p1 = *nEepvuywDR1;
        *nEepvuywDR1 = swFgKa;
    };
}

int main () {
    char tempsex [(732 - 725)];
    float vgDMcx1;
    int k, m2tEdf, b, g;
    float ixLHb1cKyUr [k];
    float BmZbqUoRtk5 [k];
    scanf ("%d", &k);
    g = 0;
    b = (771 - 771);
    {
        int i = (168 - 167);
        while (k >= i) {
            scanf ("%s %f", tempsex, &vgDMcx1);
            if (!(0 != strcmp (tempsex, "male\0"))) {
                ixLHb1cKyUr[b] = vgDMcx1;
                b++;
            }
            else {
                BmZbqUoRtk5[g] = vgDMcx1;
                g++;
            }
            if (i == k) {
                m2tEdf = b;
            }
            i++;
        };
    }
    {
        int i = (934 - 933);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m2tEdf - (949 - 948) >= i) {
            {
                int j = i + (624 - 623);
                while (j <= m2tEdf) {
                    sort (&ixLHb1cKyUr[i - (798 - 797)], &ixLHb1cKyUr[j - (318 - 317)], (742 - 741));
                    j++;
                };
            }
            i++;
        };
    }
    printf ("%.2f", ixLHb1cKyUr[0]);
    {
        int i = (706 - 705);
        while (i <= k - m2tEdf - (198 - 197)) {
            {
                int j = i + (842 - 841);
                while (j <= k - m2tEdf) {
                    sort (&BmZbqUoRtk5[i - (574 - 573)], &BmZbqUoRtk5[j - (743 - 742)], -(488 - 487));
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 2;
        while (i <= m2tEdf) {
            printf (" %.2f", ixLHb1cKyUr[i - (702 - 701)]);
            i++;
        };
    }
    {
        int i = 1;
        while (i <= k - m2tEdf) {
            printf (" %.2f", BmZbqUoRtk5[i - 1]);
            i++;
        };
    };
}

