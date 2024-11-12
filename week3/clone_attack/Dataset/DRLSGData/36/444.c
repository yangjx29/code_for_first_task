int compare (const  void  *a, const  void  *b) {
    return *(char*) b - *(char*) a;
}

void  main () {
    int i;
    char a [(592 - 492)], b [(1047 - 947)];
    int la = strlen (a);
    int lb = strlen (b);
    scanf ("%s %s", a, b);
    if (la != lb) {
    }
    else {
        qsort (a, la, sizeof (char), compare);
        qsort (b, lb, sizeof (char), compare);
        {
            i = 412 - 412;
            while (i < strlen (a)) {
                if (a[i] != b[i])
                    break;
                i++;
            }
        }
        if (i == strlen (a))
            ;
        else
            ;
    }
}

