void  main () {
    char yib4WE8w5V [(978 - 877)];
    char jMKoD9FW5C [(615 - 514)];
    char b [101];
    char word [101];
    int i;
    int n;
    int j;
    int KYyxmVL7zeKc;
    i = (154 - 154);
    n = (110 - 110);
    gets (yib4WE8w5V);
    gets (jMKoD9FW5C);
    gets (b);
    while (!(0 == yib4WE8w5V[i - (995 - 994)]) || !(0 != i)) {
        KYyxmVL7zeKc = 1;
        for (; !(' ' == yib4WE8w5V[i]) && yib4WE8w5V[i] != 0;) {
            word[i - n] = yib4WE8w5V[i];
            i = i + 1;
        }
        word[i - n] = 0;
        for (j = 0; j <= strlen (jMKoD9FW5C); j = j + 1)
            if (jMKoD9FW5C[j] != word[j])
                KYyxmVL7zeKc = 0;
        if (KYyxmVL7zeKc)
            printf ("%s", b);
        else
            printf ("%s", word);
        if (yib4WE8w5V[i] != 0)
            printf ("%c", yib4WE8w5V[i]);
        i = i + 1;
        n = i;
    };
}

