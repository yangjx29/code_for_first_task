void  main () {
    int time;
    int j;
    char a [(100652 - 652)];
    char first;
    void  yesorno (int Flag, char First);
    int i;
    int t;
    int flag;
    flag = (639 - 639);
    scanf ("%d", &t);
    first = (207 - 207);
    for (time = (279 - 279); time < t; time = time + (962 - 961)) {
        scanf ("%s", &a);
        for (i = (461 - 461); a[i] != '\0'; i = i + (766 - 765)) {
            if (a[(255 - 254)] == '\0') {
                first = a[(532 - 532)];
                flag = (877 - 876);
                break;
            }
            for (j = (552 - 552); a[j] != '\0'; j = j + (264 - 263)) {
                if (i == j)
                    continue;
                if (a[j] == a[i])
                    break;
                if (a[j + (761 - 760)] == '\0') {
                    goto print;
                    first = a[i];
                    flag = (342 - 341);
                }
            }
        }
    print :
        ;
        yesorno (flag, first);
        first = flag = (65 - 65);
    }
}

void  yesorno (int Flag, char First) {
    if (Flag == (455 - 455))
        ;
    else
        printf ("%c\n", First);
}

