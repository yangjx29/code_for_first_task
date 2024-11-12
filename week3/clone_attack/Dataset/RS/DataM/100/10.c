int main () {
    int t;
    int i;
    int vaOBwFVtki;
    int OkfBnvSL5j [(895 - 595)] = {(938 - 938)};
    int Om2J93;
    t = (363 - 363);
    char str [(1129 - 829)];
    gets (str);
    Om2J93 = strlen (str);
    for (i = 'A'; i <= 'Z'; i = i + 1)
        for (vaOBwFVtki = (810 - 809); vaOBwFVtki <= Om2J93; vaOBwFVtki++)
            if (str[vaOBwFVtki - (883 - 882)] == i)
                OkfBnvSL5j[i - (223 - 222)]++;
    for (i = 'a'; i <= 'z'; i++)
        for (vaOBwFVtki = (954 - 953); vaOBwFVtki <= Om2J93; vaOBwFVtki++)
            if (str[vaOBwFVtki - (44 - 43)] == i)
                OkfBnvSL5j[i - (838 - 837)]++;
    for (i = (64 - 63); i <= (1086 - 786); i++)
        if (OkfBnvSL5j[i - (951 - 950)] != 0) {
            t = 1;
            break;
        }
    if (t == 0)
        printf ("No");
    else
        for (i = 1; i <= 300; i++)
            if (OkfBnvSL5j[i - 1] != 0)
                printf ("%c=%d\n", i, OkfBnvSL5j[i - 1]);
}

