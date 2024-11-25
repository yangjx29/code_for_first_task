int main () {
    char w1hB54qop0 [(189 - 139) * (909 - 809)], fgQeVoHz [(1045 - 995)] [100];
    gets (w1hB54qop0);
    int g2yOuWotz, DKhn1RIs, bTPk9F, wLF54s, min, fUlsmY = (270 - 270), xMI3UjXYBk1 = (478 - 478);
    for (g2yOuWotz = (366 - 366), bTPk9F = (199 - 199), DKhn1RIs = (302 - 302); !('\0' == w1hB54qop0[g2yOuWotz]); g2yOuWotz = g2yOuWotz + 1) {
        if (!(' ' != w1hB54qop0[g2yOuWotz])) {
            fgQeVoHz[bTPk9F][DKhn1RIs] = '\0';
            DKhn1RIs = (585 - 585);
            bTPk9F = bTPk9F + 1;
            continue;
        }
        fgQeVoHz[bTPk9F][DKhn1RIs] = w1hB54qop0[g2yOuWotz];
        DKhn1RIs = DKhn1RIs +1;
    }
    fgQeVoHz[bTPk9F][DKhn1RIs] = '\0';
    wLF54s = (int) strlen (fgQeVoHz[0]);
    min = (int) strlen (fgQeVoHz[0]);
    {
        g2yOuWotz = 0;
        while (g2yOuWotz <= bTPk9F) {
            if (wLF54s < (int) strlen (fgQeVoHz[g2yOuWotz])) {
                wLF54s = (int) strlen (fgQeVoHz[g2yOuWotz]);
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
                fUlsmY = g2yOuWotz;
            }
            if (min > (int) strlen (fgQeVoHz[g2yOuWotz])) {
                min = (int) strlen (fgQeVoHz[g2yOuWotz]);
                xMI3UjXYBk1 = g2yOuWotz;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            g2yOuWotz = g2yOuWotz + 1;
        };
    }
    printf ("%s\n", fgQeVoHz[fUlsmY]);
    printf ("%s\n", fgQeVoHz[xMI3UjXYBk1]);
    return 0;
}

