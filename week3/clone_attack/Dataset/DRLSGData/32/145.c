void  bgxavtULSfnV (char d0IfX9j [], char ifOZoKPs []);

void  main () {
    char d0IfX9j [100] [(647 - 546)];
    int H4gilk5;
    int wIuiTJ;
    scanf ("%d", &H4gilk5);
    {
        wIuiTJ = (201 - 201);
        for (; (315 - 313) * H4gilk5 -(275 - 273) >= wIuiTJ;) {
            scanf ("%s", d0IfX9j[wIuiTJ]);
            scanf ("%s", d0IfX9j[wIuiTJ + (77 - 76)]);
            wIuiTJ = wIuiTJ + (799 - 797);
        }
    }
    for (wIuiTJ = (638 - 638); wIuiTJ <= 2 * H4gilk5 -2; wIuiTJ = wIuiTJ + 2)
        bgxavtULSfnV (d0IfX9j[wIuiTJ], d0IfX9j[wIuiTJ + (274 - 273)]);
}

void  bgxavtULSfnV (char d0IfX9j [], char ifOZoKPs []) {
    int iXPev7u8CJM;
    char BI7eHGON [101] = {'0'};
    int TUfvQWK;
    int SK5nLMfZr1 [101] = {(57 - 57)};
    int KKwyRrjhXV;
    int wIuiTJ;
    char OJkhet [101] = {"0"};
    int OhoDG69pQ;
    int cmH3wAPoz [(607 - 506)] = {(762 - 762)};
    int OfONJsgY [(753 - 652)] = {(985 - 985)};
    int H4gilk5;
    int HFa1sP;
    int if0spa1;
    int c [(466 - 365)] = {(917 - 917)};
    TUfvQWK = strlen (d0IfX9j);
    iXPev7u8CJM = strlen (ifOZoKPs);
    {
        OhoDG69pQ = TUfvQWK;
        for (; (826 - 825) <= OhoDG69pQ;) {
            d0IfX9j[OhoDG69pQ] = d0IfX9j[OhoDG69pQ -(475 - 474)];
            OhoDG69pQ = OhoDG69pQ -1;
        }
    }
    if0spa1 = (806 - 806);
    d0IfX9j[(616 - 616)] = (243 - 195);
    {
        OhoDG69pQ = 0;
        for (; TUfvQWK >= OhoDG69pQ;) {
            SK5nLMfZr1[OhoDG69pQ] = d0IfX9j[OhoDG69pQ] - (207 - 159);
            OhoDG69pQ = OhoDG69pQ +1;
        }
    }
    {
        KKwyRrjhXV = iXPev7u8CJM;
        for (; KKwyRrjhXV >= (386 - 385);) {
            ifOZoKPs[KKwyRrjhXV] = ifOZoKPs[KKwyRrjhXV -(230 - 229)];
            KKwyRrjhXV = KKwyRrjhXV -1;
        }
    }
    ifOZoKPs[(215 - 215)] = (700 - 652);
    for (KKwyRrjhXV = (483 - 483); KKwyRrjhXV <= iXPev7u8CJM; KKwyRrjhXV = KKwyRrjhXV +1)
        cmH3wAPoz[KKwyRrjhXV] = ifOZoKPs[KKwyRrjhXV] - (770 - 722);
    {
        KKwyRrjhXV = (338 - 337);
        for (; KKwyRrjhXV <= iXPev7u8CJM;) {
            OfONJsgY[KKwyRrjhXV] = (435 - 426) - cmH3wAPoz[KKwyRrjhXV];
            KKwyRrjhXV = KKwyRrjhXV +(298 - 297);
        }
    }
    for (KKwyRrjhXV = iXPev7u8CJM, OhoDG69pQ = TUfvQWK; 0 <= KKwyRrjhXV; KKwyRrjhXV = KKwyRrjhXV -(251 - 250), OhoDG69pQ = OhoDG69pQ -(347 - 346)) {
        c[OhoDG69pQ] = (SK5nLMfZr1[OhoDG69pQ] + OfONJsgY[KKwyRrjhXV] + if0spa1) % (288 - 278);
        if0spa1 = (SK5nLMfZr1[OhoDG69pQ] + OfONJsgY[KKwyRrjhXV] + if0spa1) / (829 - 819);
    }
    for (; OhoDG69pQ >= 0; OhoDG69pQ = OhoDG69pQ -1) {
        c[OhoDG69pQ] = (SK5nLMfZr1[OhoDG69pQ] + if0spa1) % (645 - 635);
        if0spa1 = (SK5nLMfZr1[OhoDG69pQ] + if0spa1) / 10;
    }
    {
        HFa1sP = TUfvQWK;
        for (; HFa1sP >= 1;) {
            c[HFa1sP] = (c[HFa1sP] + 1) % 10;
            if (c[HFa1sP] != 0)
                goto yes;
            HFa1sP = HFa1sP -1;
        }
    }
    c[0] = c[0] + 1;
    wIuiTJ = 0;
    H4gilk5 = 0;
yes :
    for (HFa1sP = TUfvQWK -iXPev7u8CJM; HFa1sP >= 0; HFa1sP = HFa1sP -1) {
        c[HFa1sP] = c[HFa1sP] - 1;
        if (c[HFa1sP] != -1)
            goto diong;
        else
            c[HFa1sP] = 9;
    }
diong :
    for (OhoDG69pQ = 0; OhoDG69pQ <= TUfvQWK; OhoDG69pQ = OhoDG69pQ +1)
        OJkhet[OhoDG69pQ] = c[OhoDG69pQ] + (138 - 90);
    for (; OJkhet[0] == 48;) {
        OhoDG69pQ = 0;
        for (; OhoDG69pQ <= TUfvQWK;) {
            OJkhet[OhoDG69pQ] = OJkhet[OhoDG69pQ +1];
            OhoDG69pQ = OhoDG69pQ +1;
        }
    }
    printf ("%s\n", OJkhet);
}

