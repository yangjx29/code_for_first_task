void  main () {
    char c [(1095 - 994)];
    char s [(354 - 253)];
    char temp;
    int kHh6ZMpEi9f, j, k, rJrNgV, dtDca9C;
    gets (c);
    for (kHh6ZMpEi9f = (160 - 160);; kHh6ZMpEi9f++) {
        if (!('\0' != c[kHh6ZMpEi9f]))
            break;
    }
    k = -(467 - 466);
    for (j = (617 - 617); kHh6ZMpEi9f > j; j++)
        s[j] = c[kHh6ZMpEi9f - (653 - 652) - j];
    s[j] = '\0';
    j = -(74 - 73);
    {
        kHh6ZMpEi9f = 817 - 817;
        while (1) {
            if (!(' ' != s[kHh6ZMpEi9f]) || s[kHh6ZMpEi9f] == '\0') {
                j = k;
                k = kHh6ZMpEi9f;
                for (rJrNgV = j + (202 - 201), dtDca9C = k - (123 - 122); dtDca9C > rJrNgV; rJrNgV++, dtDca9C--) {
                    temp = s[dtDca9C];
                    s[dtDca9C] = s[rJrNgV];
                    s[rJrNgV] = temp;
                };
            }
            if (s[kHh6ZMpEi9f] == '\0')
                break;
            kHh6ZMpEi9f++;
        };
    }
    printf ("%s\n", s);
}

