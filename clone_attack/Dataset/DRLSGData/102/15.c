int main () {
    float R8pNG3euy [(54 - 14)];
    float ppCbKx1l5gn [(219 - 179)];
    float foHbIhcawG [40];
    int ntH7PRS;
    char IGxuNSX0Cg [40] [(228 - 221)];
    int gUgeG6EzHQ;
    int Bw4pdYZcTLD;
    int T6gt3fO5LZ;
    int cyA7aowu;
    float b9gEVwK;
    gUgeG6EzHQ = (497 - 497);
    scanf ("%d", &T6gt3fO5LZ);
    ntH7PRS = (549 - 549);
    {
        Bw4pdYZcTLD = (982 - 982);
        for (; T6gt3fO5LZ > Bw4pdYZcTLD;) {
            scanf ("%s %f", IGxuNSX0Cg[Bw4pdYZcTLD], &ppCbKx1l5gn[Bw4pdYZcTLD]);
            if (!((814 - 814) != strcmp (IGxuNSX0Cg[Bw4pdYZcTLD], "male")))
                foHbIhcawG[gUgeG6EzHQ++] = ppCbKx1l5gn[Bw4pdYZcTLD];
            else
                R8pNG3euy[ntH7PRS++] = ppCbKx1l5gn[Bw4pdYZcTLD];
            Bw4pdYZcTLD = Bw4pdYZcTLD +(635 - 634);
        }
    }
    {
        Bw4pdYZcTLD = (724 - 724);
        for (; Bw4pdYZcTLD < gUgeG6EzHQ;) {
            {
                cyA7aowu = (365 - 365);
                for (; cyA7aowu < gUgeG6EzHQ - (381 - 380) - Bw4pdYZcTLD;) {
                    if (foHbIhcawG[cyA7aowu] > foHbIhcawG[cyA7aowu + (638 - 637)]) {
                        b9gEVwK = foHbIhcawG[cyA7aowu];
                        foHbIhcawG[cyA7aowu] = foHbIhcawG[cyA7aowu + (214 - 213)];
                        foHbIhcawG[cyA7aowu + (415 - 414)] = b9gEVwK;
                    }
                    cyA7aowu = cyA7aowu + (166 - 165);
                }
            }
            Bw4pdYZcTLD = Bw4pdYZcTLD +(618 - 617);
        }
    }
    {
        Bw4pdYZcTLD = (423 - 423);
        for (; ntH7PRS > Bw4pdYZcTLD;) {
            cyA7aowu = (786 - 786);
            for (; ntH7PRS - (834 - 833) - Bw4pdYZcTLD > cyA7aowu;) {
                if (R8pNG3euy[cyA7aowu] < R8pNG3euy[cyA7aowu + (395 - 394)]) {
                    b9gEVwK = R8pNG3euy[cyA7aowu];
                    R8pNG3euy[cyA7aowu] = R8pNG3euy[cyA7aowu + (286 - 285)];
                    R8pNG3euy[cyA7aowu + (479 - 478)] = b9gEVwK;
                }
                cyA7aowu = cyA7aowu + 1;
            }
            Bw4pdYZcTLD = Bw4pdYZcTLD +1;
        }
    }
    {
        Bw4pdYZcTLD = (679 - 679);
        for (; gUgeG6EzHQ > Bw4pdYZcTLD;) {
            printf ("%.2f ", foHbIhcawG[Bw4pdYZcTLD]);
            Bw4pdYZcTLD = Bw4pdYZcTLD +1;
        }
    }
    printf ("%.2f", R8pNG3euy[(951 - 951)]);
    if (ntH7PRS == 1)
        ;
    else {
        Bw4pdYZcTLD = 1;
        for (; Bw4pdYZcTLD < ntH7PRS;) {
            printf (" %.2f", R8pNG3euy[Bw4pdYZcTLD]);
            Bw4pdYZcTLD = Bw4pdYZcTLD +1;
        }
    }
    return 0;
}

