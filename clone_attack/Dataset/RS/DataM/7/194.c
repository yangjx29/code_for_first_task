int main () {
    int j;
    int lans;
    int z;
    int ls1;
    int ls2;
    int ls3;
    int i;
    int m;
    j = (581 - 581);
    lans = 0;
    z = 0;
    char s1 [100];
    char s2 [100];
    char s3 [100];
    char ans [100];
    scanf ("%s", s1);
    scanf ("%s", s2);
    scanf ("%s", s3);
    ls1 = strlen (s1);
    ls2 = strlen (s2);
    ls3 = strlen (s3);
    {
        i = 0;
        while (ls1 > i) {
            if (!(s2[0] == s1[i]))
                ans[lans++] = s1[i];
            else {
                {
                    m = i;
                    j = 0;
                    while (ls2 > j) {
                        if (!(s2[j] == s1[m]))
                            break;
                        j++;
                        m = m + 1;
                    };
                }
                if (!(ls2 != j) && z != 1) {
                    z++;
                    for (j = 0; j < ls3; j++)
                        ans[lans++] = s3[j];
                    i = m - 1;
                }
                else {
                    for (; i <= m; i = i + 1)
                        ans[lans++] = s1[i];
                    i--;
                };
            }
            i++;
        };
    }
    ans[lans] = '\0';
    printf ("%s", ans);
    return 0;
}

