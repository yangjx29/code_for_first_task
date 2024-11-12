int main () {
    int JiJOIM13A2Dn;
    int a;
    int k1mI4tBc5;
    int OD1K7Ojb5Y4u;
    char dna [256];
    scanf ("%d", &k1mI4tBc5);
    {
        OD1K7Ojb5Y4u = 0;
        while (k1mI4tBc5 > OD1K7Ojb5Y4u) {
            scanf ("%s", dna);
            a = strlen (dna);
            if (!(0 == OD1K7Ojb5Y4u))
                ;
            OD1K7Ojb5Y4u = OD1K7Ojb5Y4u +1;
            {
                JiJOIM13A2Dn = 0;
                while (JiJOIM13A2Dn < a) {
                    if (!('A' != dna[JiJOIM13A2Dn]))
                        printf ("%c", 'T');
                    else {
                        if (dna[JiJOIM13A2Dn] == 'T')
                            printf ("%c", 'A');
                        else if (dna[JiJOIM13A2Dn] == 'C')
                            printf ("%c", 'G');
                        else if (dna[JiJOIM13A2Dn] == 'G')
                            printf ("%c", 'C');
                    }
                    JiJOIM13A2Dn++;
                };
            };
        };
    }
    return 0;
}

