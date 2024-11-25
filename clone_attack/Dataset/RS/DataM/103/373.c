int main () {
    char b;
    int lDCbPmv4;
    char CU1OCSQTR [1101];
    int t947kZns = 0;
    int OFXUmJufinW, uhNzudo;
    scanf ("%s", CU1OCSQTR);
    lDCbPmv4 = strlen (CU1OCSQTR);
    {
        OFXUmJufinW = 0;
        while (lDCbPmv4 > OFXUmJufinW) {
            if (CU1OCSQTR[OFXUmJufinW] >= 'a' && CU1OCSQTR[OFXUmJufinW] <= 'z')
                CU1OCSQTR[OFXUmJufinW] = CU1OCSQTR[OFXUmJufinW] - 'a' + 'A';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            OFXUmJufinW++;
        };
    }
    b = CU1OCSQTR[0];
    t947kZns++;
    if (!(1 != lDCbPmv4))
        printf ("(%c,%d)", b, t947kZns);
    else {
        uhNzudo = 1;
        while (lDCbPmv4 > uhNzudo) {
            if (CU1OCSQTR[uhNzudo] == b) {
                t947kZns++;
                if (uhNzudo == lDCbPmv4 - 1)
                    printf ("(%c,%d)", CU1OCSQTR[uhNzudo], t947kZns);
            }
            else {
                printf ("(%c,%d)", CU1OCSQTR[uhNzudo - 1], t947kZns);
                t947kZns = 1;
                b = CU1OCSQTR[uhNzudo];
                if (uhNzudo == lDCbPmv4 - 1)
                    printf ("(%c,%d)", CU1OCSQTR[uhNzudo], t947kZns);
            }
            uhNzudo++;
        };
    }
    getchar ();
    getchar ();
    return 0;
}

