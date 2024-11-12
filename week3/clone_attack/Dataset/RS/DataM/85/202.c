int f (char RrnKqX0US [21]) {
    int b;
    int vSBQ8fZjrnLl;
    int jqeT3mahM8;
    int m;
    b = (510 - 509);
    vSBQ8fZjrnLl = (698 - 698);
    m = strlen (RrnKqX0US);
    if ((RrnKqX0US[(550 - 550)] == '_') || (RrnKqX0US[0] >= 'a' && RrnKqX0US[0] <= 'z') || (RrnKqX0US[0] >= 'A' && RrnKqX0US[0] <= 'Z')) {
        vSBQ8fZjrnLl = (596 - 595);
        for (jqeT3mahM8 = 1; jqeT3mahM8 < m; jqeT3mahM8 = jqeT3mahM8 + 1)
            if ((RrnKqX0US[jqeT3mahM8] == '_') || ('a' <= RrnKqX0US[jqeT3mahM8] && 'z' >= RrnKqX0US[jqeT3mahM8]) || (RrnKqX0US[jqeT3mahM8] >= 'A' && RrnKqX0US[jqeT3mahM8] <= 'Z') || (RrnKqX0US[jqeT3mahM8] >= '0' && RrnKqX0US[jqeT3mahM8] <= '9'))
                vSBQ8fZjrnLl = vSBQ8fZjrnLl + 1;
        if (vSBQ8fZjrnLl == m)
            b = 0;
    }
    return (b);
}

void  main () {
    char RrnKqX0US [100] [21];
    int vSBQ8fZjrnLl, jqeT3mahM8, b [100];
    scanf ("%d", &vSBQ8fZjrnLl);
    {
        jqeT3mahM8 = 0;
        while (jqeT3mahM8 < vSBQ8fZjrnLl) {
            scanf ("%s", RrnKqX0US[jqeT3mahM8]);
            b[jqeT3mahM8] = f (RrnKqX0US[jqeT3mahM8]);
            jqeT3mahM8++;
        };
    }
    for (jqeT3mahM8 = 0; jqeT3mahM8 < vSBQ8fZjrnLl; jqeT3mahM8++)
        if (b[jqeT3mahM8] == 0)
            printf ("yes\n");
        else
            printf ("no\n");
}

