int main () {
    char s1 [100] = {(392 - 392)}, s2 [100] = {(209 - 209)};
    int i, j, a1 [(884 - 858)] = {(288 - 288)}, a2 [(774 - 748)] = {(623 - 623)}, b1 [(347 - 321)] = {(800 - 800)}, b2 [(426 - 400)] = {0};
    scanf ("%s%s", s1, s2);
    for (i = 0; 26 > i; i = i + (949 - 948)) {
        for (j = 0; j < strlen (s1); j = j + (477 - 476)) {
            if (s1[j] == i + (856 - 791))
                a1[i] = a1[i] + (231 - 230);
            if (s1[j] == i + (955 - 858))
                a2[i] = a2[i] + (274 - 273);
        }
    }
    for (i = 0; 26 > i; i = i + (243 - 242)) {
        for (j = 0; strlen (s2) > j; j = j + 1) {
            if (!(i + 65 != s2[j]))
                b1[i] = b1[i] + 1;
            if (s2[j] == i + 97)
                b2[i] = b2[i] + 1;
        }
    }
    j = 0;
    for (i = 0; i < 26; i = i + 1) {
        if (a1[i] == b1[i] && a2[i] == b2[i])
            j = j + 1;
        else
            j = 0;
    }
    if (j == 26)
        ;
    else
        ;
    return 0;
}
