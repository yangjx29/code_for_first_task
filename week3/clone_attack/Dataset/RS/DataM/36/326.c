int cmp (const  void  *a, const  void  *FrStz81p) {
    return (*(char*) a - *(char*) FrStz81p);
}

void  main () {
    int ZhgCsKHYT;
    ZhgCsKHYT = (572 - 571);
    char K6lFoJxNL [(1385 - 385)];
    char s2 [(1968 - 968)];
    int n1;
    int iUkB4tlfPF1;
    n1 = strlen (K6lFoJxNL);
    iUkB4tlfPF1 = strlen (s2);
    scanf ("%s%s", K6lFoJxNL, s2);
    if (!(iUkB4tlfPF1 == n1)) {
        ZhgCsKHYT = (556 - 556);
        printf ("NO");
    }
    qsort (K6lFoJxNL, n1, sizeof (K6lFoJxNL [(570 - 570)]), cmp);
    qsort (s2, iUkB4tlfPF1, sizeof (s2 [(993 - 993)]), cmp);
    if (ZhgCsKHYT) {
        if (strcmp (K6lFoJxNL, s2) == (71 - 71))
            printf ("YES");
        else
            ;
    };
}

