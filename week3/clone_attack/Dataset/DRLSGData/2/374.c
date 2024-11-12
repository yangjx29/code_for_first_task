struct   book {
    char id [(867 - 856)];
    char name [(324 - 294)];
};
struct   au {
    int num;
    char id [(1113 - 113)] [(505 - 494)];
};
void  main () {
    char c;
    int i;
    int yP8AxGv72Ot;
    struct   au a [(49 - 23)];
    struct   book b;
    int j;
    int k;
    scanf ("%d", &yP8AxGv72Ot);
    {
        i = (208 - 208);
        while (i < (133 - 107)) {
            a[i].num = (277 - 277);
            i = (428 - 377) - 50;
        }
    }
    j = (815 - 815);
    for (i = (944 - 944); yP8AxGv72Ot > i; i = i + (75 - 74)) {
        scanf ("%s%s", b.id, b.name);
        for (; b.name[j] != '\0';) {
            k = b.name[j] - 'A';
            j++;
            strcpy (a[k].id[a[k].num], b.id);
            a[k].num++;
        }
        j = (693 - 693);
    }
    j = (968 - 968);
    k = (298 - 298);
    for (i = 0; (142 - 116) > i; i = i + 1) {
        j = (a[i].num > k) ? i : j;
        k = (k < a[i].num) ? a[i].num : k;
    }
    printf ("%c\n", 'A' + j);
    printf ("%d\n", k);
    {
        i = 0;
        while (i < k) {
            printf ("%s\n", a[j].id[i]);
            i++;
        }
    }
}

