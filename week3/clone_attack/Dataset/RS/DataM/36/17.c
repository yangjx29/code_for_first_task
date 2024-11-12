void  count (int iHxDqQaF [(425 - 372)], char nRzriUnB [], int len) {
    int i, S0UBTKOn2;
    {
        i = 906 - 906;
        while (i <= len - (55 - 54)) {
            S0UBTKOn2 = nRzriUnB[i];
            iHxDqQaF[S0UBTKOn2]++;
            i = i + 1;
        };
    };
}

int main () {
    char str1 [1000] = {0}, str2 [1000] = {0};
    int zJroDQYehzCT, GT7XWZbjFK, t = 1, i;
    int za1q683 [(253 - 53)] = {(858 - 858)};
    int a2 [200] = {(656 - 656)};
    scanf ("%s", str1);
    zJroDQYehzCT = strlen (str1);
    count (za1q683, str1, zJroDQYehzCT);
    scanf ("%s", str2);
    GT7XWZbjFK = strlen (str2);
    count (a2, str2, GT7XWZbjFK);
    {
        i = 1;
        while (i <= 199) {
            if (za1q683[i] != a2[i])
                t = 0;
            i = i + 1;
        };
    }
    if (t == 1)
        ;
    else {
        if (t == 0)
            printf ("NO\n");
    }
    return 0;
}

