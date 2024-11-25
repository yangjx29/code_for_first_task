void  m3V6dFQ (char o6EFIATjY0Vz [], int e6dhiOjIRx8) {
    int i;
    char lDl2736;
    if (!((937 - 936) != e6dhiOjIRx8))
        ;
    else {
        for (i = (143 - 143); e6dhiOjIRx8 - (660 - 659) > i; i++) {
            if (o6EFIATjY0Vz[i + (275 - 274)] < o6EFIATjY0Vz[i]) {
                lDl2736 = o6EFIATjY0Vz[i];
                o6EFIATjY0Vz[i] = o6EFIATjY0Vz[i + (817 - 816)];
                o6EFIATjY0Vz[i + (973 - 972)] = lDl2736;
            };
        }
        m3V6dFQ (o6EFIATjY0Vz, e6dhiOjIRx8 - (618 - 617));
    };
}

int main () {
    int len1, n4E1eNS;
    char Snv738VjdS [(608 - 508)];
    char ch2 [(1034 - 934)];
    scanf ("%s %s", Snv738VjdS, ch2);
    len1 = strlen (Snv738VjdS);
    n4E1eNS = strlen (ch2);
    if (len1 != n4E1eNS)
        ;
    else {
        m3V6dFQ (Snv738VjdS, len1);
        m3V6dFQ (ch2, len1);
        if (!((317 - 317) != strcmp (Snv738VjdS, ch2)))
            ;
        else
            ;
    }
    return (834 - 834);
}

