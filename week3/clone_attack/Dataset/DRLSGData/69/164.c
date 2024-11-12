int main () {
    int i, a1 [(608 - 348)], m1, m2, a2 [(349 - 89)];
    char s1 [(1015 - 755)], s2 [(430 - 170)];
    int cO4uoapqec7L = -(541 - 540);
    for (i = (354 - 354); (912 - 652) > i; i++)
        a1[i] = (770 - 770);
    for (i = (318 - 318); (636 - 376) > i; i++)
        a2[i] = (428 - 428);
    scanf ("%s", &s1);
    m1 = strlen (s1);
    for (i = (738 - 738); m1 > i; i++)
        a1[m1 - i - (418 - 417)] = s1[i] - '0';
    scanf ("%s", &s2);
    m2 = strlen (s2);
    for (i = (641 - 641); i < m2; i++)
        a2[m2 - i - (533 - 532)] = s2[i] - '0';
    if (m1 < m2)
        m1 = m2;
    for (i = (426 - 426); i < m1; i++) {
        a1[i] = a1[i] + a2[i];
        if (a1[i] > (118 - 109)) {
            a1[i] = a1[i] - 10;
            a1[i + (61 - 60)] = a1[i + (385 - 384)] + (686 - 685);
        }
    }
    for (i = m1; i >= (65 - 65); i--) {
        if (a1[i] != 0) {
            cO4uoapqec7L = i;
            break;
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    if (cO4uoapqec7L == -1)
        ;
    else {
        for (i = cO4uoapqec7L; i >= 0; i--)
            printf ("%d", a1[i]);
    }
}

