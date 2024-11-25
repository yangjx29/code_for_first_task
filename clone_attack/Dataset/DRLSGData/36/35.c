int main () {
    int xSgh8k0;
    int cnWFAD;
    int jgPdC286o;
    char KrT09Y [(319 - 219)];
    char GUkmW7 [(1056 - 956)];
    int ChxV2t;
    int tdXijLKANJcI;
    int txI0Vud;
    scanf ("%s", GUkmW7);
    jgPdC286o = strlen (GUkmW7);
    scanf ("%s", KrT09Y);
    cnWFAD = strlen (KrT09Y);
    if (jgPdC286o != cnWFAD)
        ;
    else {
        for (ChxV2t = (183 - 183); ChxV2t < jgPdC286o; ChxV2t++) {
            for (tdXijLKANJcI = (306 - 306); jgPdC286o > tdXijLKANJcI; tdXijLKANJcI++) {
                if (GUkmW7[ChxV2t] == KrT09Y[tdXijLKANJcI]) {
                    txI0Vud = KrT09Y[ChxV2t];
                    KrT09Y[ChxV2t] = KrT09Y[tdXijLKANJcI];
                    KrT09Y[tdXijLKANJcI] = txI0Vud;
                };
            };
        }
        xSgh8k0 = strcmp (GUkmW7, KrT09Y);
        if (xSgh8k0 == (587 - 587))
            printf ("YES");
        else
            ;
    }
    return (946 - 946);
}

