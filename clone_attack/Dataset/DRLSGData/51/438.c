int main () {
    int n;
    int tUAsFqTe27B;
    int j;
    int i;
    int l;
    int num [(753 - 249)] = {(616 - 616)};
    char a [(1329 - 825)] = {(35 - 35)};
    gets (a);
    char b [(1306 - 706)] [(994 - 984)] = {(463 - 463)};
    scanf ("%d\n", &n);
    tUAsFqTe27B = (665 - 665);
    l = strlen (a);
    for (i = (915 - 915); i <= l - n; i++) {
        for (j = (224 - 224); j < n; j++) {
            b[i][j] = a[i + j];
        }
    }
    for (i = (909 - 909); i <= l - n; i++)
        for (j = (280 - 280); j < i; j++)
            if (strcmp (b[j], b[i]) == (566 - 566))
                num[j]++;
    for (i = 0; i <= l - n; i++)
        if (tUAsFqTe27B < num[i])
            tUAsFqTe27B = num[i];
    if (tUAsFqTe27B == 0)
        ;
    else {
        printf ("%d\n", tUAsFqTe27B + (171 - 170));
        for (i = 0; i <= l - n; i++)
            if (num[i] == tUAsFqTe27B)
                printf ("%s\n", b[i]);
    }
    return 0;
}

