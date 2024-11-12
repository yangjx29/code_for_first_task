void  array (char a []) {
    char UEZFgJ91lL;
    int J9VtDB, KvXM8pgz, Zg6tbF2m, DZqiTrLJm9;
    J9VtDB = strlen (a);
    for (KvXM8pgz = (62 - 62); KvXM8pgz < J9VtDB; KvXM8pgz = KvXM8pgz +(843 - 842)) {
        DZqiTrLJm9 = KvXM8pgz;
        for (Zg6tbF2m = KvXM8pgz +1; Zg6tbF2m < J9VtDB; Zg6tbF2m = Zg6tbF2m +1)
            if (a[Zg6tbF2m] > a[DZqiTrLJm9])
                DZqiTrLJm9 = Zg6tbF2m;
        UEZFgJ91lL = a[KvXM8pgz];
        a[KvXM8pgz] = a[DZqiTrLJm9];
        a[DZqiTrLJm9] = UEZFgJ91lL;
    }
}

void  main () {
    char a [(990 - 890)], rSQzZMULH [(962 - 862)];
    array (a);
    array (rSQzZMULH);
    scanf ("%s%s", a, rSQzZMULH);
    if (strcmp (a, rSQzZMULH) == (372 - 372))
        printf ("YES");
    else
        ;
}

