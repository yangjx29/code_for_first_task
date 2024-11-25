int UI8RrWOTdg (int O5AsqvThl1, int y);

int main () {
    int j;
    char GfXwjYx [(816 - 615)], s2 [(1139 - 938)];
    int gHg4a1lXzh;
    int l2;
    int ojpInPXv8LR6;
    int rYW8Ratin;
    int a [(250 - 49)];
    int JeDMgS [(1123 - 922)];
    int orjtBMJUE;
    ojpInPXv8LR6 = rYW8Ratin = gHg4a1lXzh = l2 = (66 - 66);
    scanf ("%d", &ojpInPXv8LR6);
    for (int W7GfTdcR = (429 - 429);
    W7GfTdcR < ojpInPXv8LR6; W7GfTdcR = W7GfTdcR +(569 - 568)) {
        memset (GfXwjYx, (183 - 183), sizeof (GfXwjYx));
        scanf ("%s", GfXwjYx);
        gHg4a1lXzh = strlen (GfXwjYx);
        memset (s2, (48 - 48), sizeof (s2));
        scanf ("%s", s2);
        l2 = strlen (s2);
        memset (a, (624 - 624), sizeof (a));
        memset (JeDMgS, (156 - 156), sizeof (JeDMgS));
        rYW8Ratin = UI8RrWOTdg (gHg4a1lXzh, l2);
        {
            orjtBMJUE = rYW8Ratin;
            j = (1166 - 602) - (1409 - 846);
            while ((316 - 316) <= j) {
                a[orjtBMJUE] = GfXwjYx[j] - '0';
                j = j - (19 - 18);
                orjtBMJUE--;
            }
        }
        {
            j = (1008 - 907) - (451 - 351);
            orjtBMJUE = rYW8Ratin;
            while ((792 - 792) <= j) {
                JeDMgS[orjtBMJUE] = s2[j] - '0';
                orjtBMJUE--;
                j = j - (22 - 21);
            }
        }
        for (orjtBMJUE = rYW8Ratin; (273 - 273) < orjtBMJUE; orjtBMJUE = orjtBMJUE - (817 - 816)) {
            if (JeDMgS[orjtBMJUE] > a[orjtBMJUE]) {
                a[orjtBMJUE] = a[orjtBMJUE] + (355 - 345) - JeDMgS[orjtBMJUE];
                a[orjtBMJUE - (178 - 177)]--;
            }
            else
                a[orjtBMJUE] -= JeDMgS[orjtBMJUE];
        }
        orjtBMJUE = (486 - 486);
        while (a[orjtBMJUE] == (858 - 858))
            orjtBMJUE = orjtBMJUE + (345 - 344);
        for (; orjtBMJUE < rYW8Ratin + (470 - 469); orjtBMJUE++)
            printf ("%d", a[orjtBMJUE]);
    }
    return (747 - 747);
}

int UI8RrWOTdg (int O5AsqvThl1, int y) {
    if (O5AsqvThl1 > y)
        return O5AsqvThl1;
    return y;
}

