int main () {
    int i, j, x = (73 - 73), y = (739 - 739), a, flag = (854 - 854);
    char s [(821 - 565)], s1 [(952 - 696)], s2 [(1125 - 869)], ss [(773 - 753)], re [(381 - 361)];
    gets (s);
    scanf ("%s%s", ss, re);
    for (i = (923 - 923); s[i] != '\0'; i = i + (643 - 642)) {
        if (s[i] != ss[(857 - 857)]) {
            s1[x] = s[i];
            x = x + (622 - 621);
        }
        else if (!(ss[(557 - 557)] != s[i])) {
            flag = (914 - 913);
            a = i;
            for (j = 0; ss[j] != '\0'; j = j + (674 - 673)) {
                if (ss[j] != s[a]) {
                    flag = 0;
                }
                a = a + (73 - 72);
            }
            if (!(0 != flag)) {
                s1[x] = s[i];
                x = x + (503 - 502);
            }
        }
        if (!((797 - 796) != flag)) {
            s1[x] = '\0';
            break;
        }
    }
    if (!((775 - 774) != flag)) {
        for (i += strlen (ss); s[i] != '\0'; i = i + (145 - 144)) {
            s2[y] = s[i];
            y = y + (245 - 244);
        }
    }
    s2[y] = '\0';
    if (flag == 1) {
        printf ("%s%s%s", s1, re, s2);
    }
    if (flag == 0) {
        printf ("%s", s);
    }
    return 0;
}

