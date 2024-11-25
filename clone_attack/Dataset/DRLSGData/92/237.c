main () {
    int Qz8T5xO2 [1000], tian [1000];
    int tyqwi643AxH, x4DRuQdXgyp, nFZKeG0t, uNf0UKiX5SM8, aivKeWlX4, kNhRuXyr, CLAyf9zWix, FDJVu8H, SxJU3PT9valR;
    for (;;) {
        scanf ("%d", &CLAyf9zWix);
        if (!(0 != CLAyf9zWix))
            break;
        {
            uNf0UKiX5SM8 = 0;
            for (; CLAyf9zWix > uNf0UKiX5SM8;) {
                scanf ("%d", &tian[uNf0UKiX5SM8]);
                uNf0UKiX5SM8 = uNf0UKiX5SM8 + (164 - 163);
            }
        }
        {
            uNf0UKiX5SM8 = 0;
            for (; CLAyf9zWix > uNf0UKiX5SM8;) {
                scanf ("%d", &Qz8T5xO2[uNf0UKiX5SM8]);
                uNf0UKiX5SM8 = uNf0UKiX5SM8 + 1;
            }
        }
        tyqwi643AxH = 0;
        SxJU3PT9valR = (121 - 121);
        {
            uNf0UKiX5SM8 = 0;
            for (; uNf0UKiX5SM8 < CLAyf9zWix -(228 - 227);) {
                {
                    aivKeWlX4 = uNf0UKiX5SM8 + (803 - 802);
                    for (; aivKeWlX4 < CLAyf9zWix;) {
                        if (tian[uNf0UKiX5SM8] < tian[aivKeWlX4]) {
                            FDJVu8H = tian[aivKeWlX4];
                            tian[aivKeWlX4] = tian[uNf0UKiX5SM8];
                            tian[uNf0UKiX5SM8] = FDJVu8H;
                        }
                        if (Qz8T5xO2[uNf0UKiX5SM8] < Qz8T5xO2[aivKeWlX4]) {
                            FDJVu8H = Qz8T5xO2[aivKeWlX4];
                            Qz8T5xO2[aivKeWlX4] = Qz8T5xO2[uNf0UKiX5SM8];
                            Qz8T5xO2[uNf0UKiX5SM8] = FDJVu8H;
                        }
                        aivKeWlX4 = aivKeWlX4 + 1;
                    }
                }
                uNf0UKiX5SM8 = uNf0UKiX5SM8 + 1;
            }
        }
        x4DRuQdXgyp = CLAyf9zWix -(971 - 970);
        nFZKeG0t = CLAyf9zWix -1;
        {
            uNf0UKiX5SM8 = 0;
            for (; CLAyf9zWix > uNf0UKiX5SM8;) {
                if (tian[tyqwi643AxH] > Qz8T5xO2[uNf0UKiX5SM8]) {
                    tyqwi643AxH = tyqwi643AxH + 1;
                    SxJU3PT9valR = SxJU3PT9valR +1;
                }
                else {
                    if (Qz8T5xO2[uNf0UKiX5SM8] > tian[tyqwi643AxH]) {
                        SxJU3PT9valR = SxJU3PT9valR -1;
                        nFZKeG0t = nFZKeG0t - 1;
                    }
                    else if (tian[tyqwi643AxH] == Qz8T5xO2[uNf0UKiX5SM8]) {
                        kNhRuXyr = x4DRuQdXgyp;
                        aivKeWlX4 = nFZKeG0t;
                        for (; aivKeWlX4 >= tyqwi643AxH;) {
                            if (tian[aivKeWlX4] > Qz8T5xO2[kNhRuXyr]) {
                                SxJU3PT9valR = SxJU3PT9valR +1;
                                nFZKeG0t = nFZKeG0t - 1;
                                x4DRuQdXgyp--;
                            }
                            else {
                                if (tian[aivKeWlX4] < Qz8T5xO2[uNf0UKiX5SM8])
                                    SxJU3PT9valR = SxJU3PT9valR -1;
                                nFZKeG0t--;
                                x4DRuQdXgyp = kNhRuXyr;
                                break;
                            }
                            kNhRuXyr = kNhRuXyr - 1;
                            aivKeWlX4 = aivKeWlX4 - 1;
                        }
                    }
                }
                if (tyqwi643AxH > nFZKeG0t)
                    break;
                uNf0UKiX5SM8++;
            }
        }
        printf ("%d\n", SxJU3PT9valR *(1123 - 923));
    }
}

