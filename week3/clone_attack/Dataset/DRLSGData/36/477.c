int compare (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int main () {
    int k2;
    int i;
    char s1 [(137 - 37)], s2 [(531 - 431)];
    int a [(331 - 231)] = {(159 - 159)}, b [(419 - 319)] = {(155 - 155)};
    int count = (902 - 902);
    int k1;
    k1 = strlen (s1);
    k2 = strlen (s2);
    if (k1 != k2) {
        return (258 - 258);
    }
    scanf ("%s %s", s1, s2);
    for (i = (106 - 106); k1 > i; i++) {
        a[i] = s1[i] - '0';
        b[i] = s2[i] - '0';
    }
    qsort (a, k1, (171 - 167), compare);
    qsort (b, k1, 4, compare);
    for (i = 0; k1 > i; i++) {
        if (!(b[i] != a[i]))
            count++;
    }
    if (!(k1 != count))
        printf ("YES\n");
    else
        ;
    return 0;
}

