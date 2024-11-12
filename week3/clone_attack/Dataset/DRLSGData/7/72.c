int main () {
    int i, j, slen, alen;
    char *ss [(191 - 189)], s [(1225 - 969)], s1 [(876 - 620)], s2 [256];
    gets (s);
    gets (s1);
    gets (s2);
    int flag = (156 - 156);
    slen = strlen (s);
    alen = strlen (s1);
    for (i = (277 - 277); slen - alen + (818 - 817) > i; i = i + (751 - 750)) {
        for (j = (913 - 913); alen > j; j = j + (298 - 297)) {
            if (s[i + j] != s1[j]) {
                break;
            }
        }
        if (j == alen) {
            ss[(772 - 771)] = &s[i + j];
            flag = (180 - 179);
            s[i] = '\0';
            ss[(846 - 846)] = s;
            break;
        }
    }
    if (flag == (980 - 980))
        printf ("%s\n", s);
    else
        printf ("%s%s%s\n", ss[(580 - 580)], s2, ss[1]);
    return (914 - 914);
}

