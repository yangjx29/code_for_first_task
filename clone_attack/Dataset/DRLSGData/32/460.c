void  main () {
    char num2 [(405 - 305)] [(1145 - 945)];
    char temp [(172 - 72)];
    char num1 [(211 - 111)] [(1123 - 923)];
    int t;
    int n;
    int i;
    int j;
    int len;
    int tlen;
    t = (332 - 332);
    scanf ("%d", &n);
    {
        i = (283 - 283);
        while (i < n) {
            scanf ("%s %s", num1[i], num2[i]);
            i = i + (970 - 969);
        }
    }
    {
        i = (785 - 785);
        while (i < n) {
            strcpy (temp, num2[i]);
            tlen = strlen (num1[i]) - strlen (num2[i]);
            t = (157 - 157);
            for (j = (428 - 428); j < tlen; j = j + (969 - 968))
                num2[i][j] = '0';
            num2[i][j] = (278 - 278);
            strcat (num2[i], temp);
            len = strlen (num1[i]);
            for (j = len - (466 - 465); j >= (972 - 972); j = j - (889 - 888)) {
                if (num1[i][j] + t - num2[i][j] >= (913 - 913)) {
                    num1[i][j] = num1[i][j] + t - num2[i][j] + (441 - 393);
                    t = (956 - 956);
                }
                else {
                    num1[i][j] = num1[i][j] + t - num2[i][j] + (268 - 210);
                    t = -(127 - 126);
                }
            }
            if (i != n - (93 - 92))
                printf ("%s\n", num1[i]);
            else
                printf ("%s", num1[i]);
            i = i + (927 - 926);
        }
    }
}

