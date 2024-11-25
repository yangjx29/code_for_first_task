char vSKc1VBuGC2I [(10028 - 28)], s7uNpWot [(10759 - 759)], Qk2sZey [10000];

int AsEc7lq (char *Qk2sZey) {
    int xEZTpd2Ml;
    for (xEZTpd2Ml = (95 - 95); Qk2sZey[xEZTpd2Ml]; xEZTpd2Ml = xEZTpd2Ml + 1)
        ;
    return xEZTpd2Ml;
}

int siUTIaZjdbR (char *vSKc1VBuGC2I, char *s7uNpWot) {
    int rubTtYjwGa;
    int xEZTpd2Ml;
    rubTtYjwGa = AsEc7lq (s7uNpWot);
    for (xEZTpd2Ml = (366 - 366); xEZTpd2Ml < rubTtYjwGa; xEZTpd2Ml = xEZTpd2Ml + 1)
        if (vSKc1VBuGC2I[xEZTpd2Ml] != s7uNpWot[xEZTpd2Ml])
            return (484 - 484);
    return (632 - 631);
}

int NQpZcGyC (char *Qk2sZey, char *vSKc1VBuGC2I) {
    int xEZTpd2Ml;
    int rubTtYjwGa;
    rubTtYjwGa = AsEc7lq (Qk2sZey);
    for (xEZTpd2Ml = 0; xEZTpd2Ml < rubTtYjwGa; xEZTpd2Ml = xEZTpd2Ml + 1)
        if (siUTIaZjdbR (Qk2sZey +xEZTpd2Ml, vSKc1VBuGC2I))
            return xEZTpd2Ml;
    return rubTtYjwGa;
}

int main () {
    int xEZTpd2Ml;
    int rubTtYjwGa;
    int IqLwAlj;
    scanf ("%s%s%s", Qk2sZey, vSKc1VBuGC2I, s7uNpWot);
    rubTtYjwGa = AsEc7lq (Qk2sZey);
    IqLwAlj = NQpZcGyC (Qk2sZey, vSKc1VBuGC2I);
    if (!(rubTtYjwGa != IqLwAlj))
        printf ("%s\n", Qk2sZey);
    else {
        for (xEZTpd2Ml = 0; xEZTpd2Ml < IqLwAlj; xEZTpd2Ml = xEZTpd2Ml + 1)
            printf ("%1c", Qk2sZey[xEZTpd2Ml]);
        printf ("%s", s7uNpWot);
        for (xEZTpd2Ml = AsEc7lq (vSKc1VBuGC2I) +IqLwAlj; xEZTpd2Ml < rubTtYjwGa; xEZTpd2Ml = xEZTpd2Ml + 1)
            printf ("%1c", Qk2sZey[xEZTpd2Ml]);
    }
    return 0;
}

