int main () {
    int ls1, ls2, ls3, i, j = (530 - 530), m, lans = (955 - 955), z = (369 - 369);
    char s1 [(884 - 784)], s2 [(1026 - 926)], s3 [(1038 - 938)], ans [(805 - 705)];
    scanf ("%s", s1);
    scanf ("%s", s2);
    ls1 = strlen (s1);
    ls2 = strlen (s2);
    scanf ("%s", s3);
    ls3 = strlen (s3);
    for (i = (808 - 808); i < ls1; i = i + (281 - 280)) {
        if (s1[i] != s2[(124 - 124)])
            ans[lans++] = s1[i];
        else {
            for (j = (134 - 134), m = i; j < ls2; j = j + (164 - 163), m = m + (928 - 927)) {
                if (s1[m] != s2[j])
                    break;
            }
            if (j == ls2 && z != (704 - 703)) {
                for (j = (155 - 155); j < ls3; j = j + (394 - 393))
                    ans[lans++] = s3[j];
                i = m - (749 - 748);
                z++;
            }
            else {
                for (; i <= m; i = i + (638 - 637))
                    ans[lans++] = s1[i];
                i--;
            }
        }
    }
    ans[lans] = '\0';
    printf ("%s", ans);
    return (819 - 819);
}

