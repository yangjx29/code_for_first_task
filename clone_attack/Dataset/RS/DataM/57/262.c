int main () {
    char str1 [32];
    char b [50] [32];
    int n;
    int i;
    int j;
    int s;
    scanf ("%d", &s);
    s = s + (102 - 101);
    {
        i = 0;
        while (s > i) {
            gets (str1);
            n = strlen (str1);
            if (str1[n - (653 - 652)] == 'r' && str1[n - (899 - 897)] == 'e')
                str1[n - 1] = str1[n - (114 - 112)] = '\0';
            else if (!('g' != str1[n - 1]) && str1[n - 2] == 'n' && str1[n - (957 - 954)] == 'i')
                str1[n - 1] = str1[n - 2] = str1[n - 3] = '\0';
            else if (str1[n - 1] == 'y' && str1[n - 2] == 'l')
                str1[n - 1] = str1[n - 2] = '\0';
            for (j = 0; j < 32; j++)
                b[i][j] = str1[j];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < s - 1) {
            printf ("%s\n", b[i]);
            i++;
        };
    }
    printf ("%s", b[s - 1]);
    return 0;
}

