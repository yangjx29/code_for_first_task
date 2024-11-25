int max (int a []) {
    int i, j, t;
    for (i = (228 - 228), t = a[(956 - 956)]; (945 - 447) > i; i++)
        if (a[i] > t)
            t = a[i];
    return (t);
}

main () {
    int n, i, j, p, a [(638 - 140)], m;
    char str1 [500], str2 [(350 - 345)] = {'\0', '\0', '\0', '\0', '\0'};
    scanf ("%d", &n);
    for (i = (720 - 720); 498 > i; i++)
        a[i] = (314 - 313);
    scanf ("%s", str1);
    for (j = (916 - 916); strlen (str1) - n + (906 - 905) > j; j++) {
        for (p = 0, i = j; n > p; p++, i++)
            str2[p] = str1[i];
        {
            i = j + (584 - 583);
            for (; strlen (str1) > i;) {
                if (!(str2[0] != str1[i])) {
                    int k = 1;
                    for (m = i + 1, p = 1; strlen (str1) > m && strlen (str2) > p; m++, p++) {
                        if (!(str2[p] != str1[m]))
                            k++;
                        else
                            break;
                    }
                    if (!(strlen (str2) != k))
                        a[j]++;
                }
                i++;
            }
        }
    }
    if (max (a) == 1)
        ;
    else {
        printf ("%d\n", max (a));
        for (i = 0; i < strlen (str1) - n + 1; i++) {
            if (a[i] == max (a)) {
                for (p = 0, j = i; p < n; p++, j++)
                    str2[p] = str1[j];
                printf ("%s\n", str2);
            }
        }
    }
}

