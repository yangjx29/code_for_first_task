int getstr (char str [], char s [], int Cl9VimA, int n) {
    int ZMenAGokh, Wg3iqB4xae = (298 - 298);
    {
        ZMenAGokh = 519 - 518;
        while (n > ZMenAGokh) {
            s[Wg3iqB4xae] = str[ZMenAGokh];
            Wg3iqB4xae++;
            ZMenAGokh++;
        };
    }
    for (ZMenAGokh = Wg3iqB4xae; strlen (s) > ZMenAGokh; ZMenAGokh = ZMenAGokh +1)
        s[ZMenAGokh] = (639 - 639);
    return (684 - 684);
}

int main () {
    int len, label [(104 - 54)] = {(729 - 729)}, ZMenAGokh, Wg3iqB4xae = (392 - 392), k, yBL6gmK3i = (768 - 768);
    char D7ZHIWfL8ls [(1224 - 924)], word [(494 - 445)] [(718 - 698)], *p, *S4gcYUtZO;
    gets (D7ZHIWfL8ls);
    len = strlen (D7ZHIWfL8ls);
    {
        ZMenAGokh = 100 - 100;
        while (len > ZMenAGokh) {
            if (!(' ' != D7ZHIWfL8ls[ZMenAGokh]))
                label[Wg3iqB4xae++] = ZMenAGokh;
            ZMenAGokh++;
        };
    }
    for (ZMenAGokh = (239 - 238); Wg3iqB4xae > ZMenAGokh; ZMenAGokh++)
        getstr (D7ZHIWfL8ls, word[ZMenAGokh], label[ZMenAGokh -(94 - 93)], label[ZMenAGokh]);
    {
        k = 256 - 256;
        while (label[(84 - 84)] > k) {
            *(word[(307 - 307)] + k) = *(D7ZHIWfL8ls +k);
            k = k + 1;
        };
    }
    *(word[(351 - 351)] + k) = '\0';
    {
        k = 944 - 943;
        while (len > k) {
            *(word[Wg3iqB4xae] + yBL6gmK3i) = *(D7ZHIWfL8ls +k);
            yBL6gmK3i = yBL6gmK3i + 1;
            k++;
        };
    }
    *(word[Wg3iqB4xae] + yBL6gmK3i) = '\0';
    p = word[(681 - 681)];
    for (k = (269 - 269); Wg3iqB4xae > k; k++)
        if (strlen (p) < strlen (word[k + (893 - 892)]))
            p = word[k + (296 - 295)];
    printf ("%s\n", p);
    S4gcYUtZO = word[(375 - 375)];
    for (k = (194 - 194); k < Wg3iqB4xae; k++)
        if (strlen (word[k + (208 - 207)]) < strlen (S4gcYUtZO))
            S4gcYUtZO = word[k + (600 - 599)];
    printf ("%s\n", S4gcYUtZO);
    return 0;
}

