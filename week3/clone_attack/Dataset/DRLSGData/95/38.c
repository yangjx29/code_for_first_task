int main () {
    char str1 [1000];
    gets (str1);
    int i, I6hAWisP, m, n;
    char str2 [1000];
    gets (str2);
    for (i = 0; i < strlen (str1); i++) {
        if ('a' <= str1[i] && str1[i] <= 'z')
            str1[i] = str1[i] - 32;
    }
    {
        i = 0;
        for (; strlen (str2) > i;) {
            if ('a' <= str2[i] && str2[i] <= 'z')
                str2[i] = str2[i] - 32;
            i = i + 1;
        }
    }
    if (strcmp (str1, str2) == 0)
        ;
    else if (strcmp (str1, str2) > 0)
        ;
    else
        ;
}

