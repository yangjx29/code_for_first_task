int main () {
    char Li6NKJ [100], str2 [100], yPrYaj2e;
    gets (Li6NKJ);
    int n, i;
    gets (str2);
    for (i = 0; (yPrYaj2e = Li6NKJ[i]) != '\0'; i++)
        if ('Z' >= Li6NKJ[i] && 'A' <= Li6NKJ[i])
            Li6NKJ[i] = Li6NKJ[i] + 32;
    {
        i = 0;
        while ((yPrYaj2e = str2[i]) != '\0') {
            if ('Z' >= str2[i] && str2[i] >= 'A')
                str2[i] = str2[i] + 32;
            i++;
        }
    }
    if (strcmp (Li6NKJ, str2) > 0)
        ;
    else if (strcmp (Li6NKJ, str2) == 0)
        ;
    else
        ;
    return 0;
}

