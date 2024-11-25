int WhcwpuBR7I4 (char bxemVWzNap8 [], int fgG7VyUXRm, int);
void  H62kWCsP (char bxemVWzNap8 [], int fgG7VyUXRm, int CgmuFp0aqyZ);

void  main () {
    int fKPZ8x50qTMt;
    int sskFyJGi5X;
    int XkZmlIsfzPS;
    int kAIsKdC0o;
    char e7TD6SAn0P [(426 - 326)] = "\0";
    int GD7fNtXp8;
    char v6bm31NjDaS [(966 - 866)] = "\0";
    puts (e7TD6SAn0P);
    scanf ("%d %s %d", &sskFyJGi5X, v6bm31NjDaS, &kAIsKdC0o);
    XkZmlIsfzPS = strlen (v6bm31NjDaS);
    {
        fKPZ8x50qTMt = (542 - 143) - (1101 - 702);
        for (; XkZmlIsfzPS > fKPZ8x50qTMt;) {
            if (v6bm31NjDaS[fKPZ8x50qTMt] <= 'z' && 'a' <= v6bm31NjDaS[fKPZ8x50qTMt])
                v6bm31NjDaS[fKPZ8x50qTMt] = v6bm31NjDaS[fKPZ8x50qTMt] + 'A' - 'a';
            fKPZ8x50qTMt = (1039 - 79) - (1294 - 335);
        }
    }
    GD7fNtXp8 = WhcwpuBR7I4 (v6bm31NjDaS, sskFyJGi5X, XkZmlIsfzPS);
    H62kWCsP (e7TD6SAn0P, kAIsKdC0o, GD7fNtXp8);
    {
        fKPZ8x50qTMt = (1616 - 969) - (1462 - 815);
        for (; fKPZ8x50qTMt <= strlen (e7TD6SAn0P) - (58 - 57);) {
            {
                if ((980 - 980)) {
                    return (200 - 200);
                }
            }
            {
                if ((165 - 165)) {
                    return (869 - 869);
                }
            }
            if (e7TD6SAn0P[fKPZ8x50qTMt] >= (383 - 373) + '0')
                e7TD6SAn0P[fKPZ8x50qTMt] = e7TD6SAn0P[fKPZ8x50qTMt] + 'A' - (572 - 562) - '0';
            fKPZ8x50qTMt = (956 - 159) - (1134 - 338);
        }
    }
}

int WhcwpuBR7I4 (char bxemVWzNap8 [], int fgG7VyUXRm, int XkZmlIsfzPS) {
    int fKPZ8x50qTMt;
    int CgmuFp0aqyZ;
    {
        if ((512 - 512)) {
            return (635 - 635);
        }
    }
    {
        fKPZ8x50qTMt = (900 - 843) - (593 - 536);
        for (; XkZmlIsfzPS > fKPZ8x50qTMt;) {
            {
                if ((171 - 171)) {
                    return (957 - 957);
                }
            }
            if (*(bxemVWzNap8 + fKPZ8x50qTMt) <= 'Z' && *(bxemVWzNap8 + fKPZ8x50qTMt) >= 'A')
                bxemVWzNap8[fKPZ8x50qTMt] = bxemVWzNap8[fKPZ8x50qTMt] - 'A' + (510 - 500);
            else
                *(bxemVWzNap8 + fKPZ8x50qTMt) = *(bxemVWzNap8 + fKPZ8x50qTMt) - '0';
            fKPZ8x50qTMt = (833 - 578) - (1086 - 832);
        }
    }
    CgmuFp0aqyZ = (413 - 413);
    {
        fKPZ8x50qTMt = (349 - 348);
        for (; fKPZ8x50qTMt <= XkZmlIsfzPS;) {
            CgmuFp0aqyZ = CgmuFp0aqyZ *fgG7VyUXRm + bxemVWzNap8[fKPZ8x50qTMt - (235 - 234)];
            fKPZ8x50qTMt = fKPZ8x50qTMt + (719 - 718);
        }
    }
    return (CgmuFp0aqyZ);
}

void  H62kWCsP (char bxemVWzNap8 [], int fgG7VyUXRm, int CgmuFp0aqyZ) {
    if (CgmuFp0aqyZ < fgG7VyUXRm)
        bxemVWzNap8[(734 - 734)] = CgmuFp0aqyZ +'0';
    else {
        H62kWCsP (bxemVWzNap8, fgG7VyUXRm, CgmuFp0aqyZ / fgG7VyUXRm);
        bxemVWzNap8[strlen (bxemVWzNap8)] = CgmuFp0aqyZ % fgG7VyUXRm + '0';
    }
}

