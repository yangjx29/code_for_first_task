void  o7rGDIAYlM5 (char KExhkDu [], char rgAeYRnSaJ []) {
    char pLRwtMNz [15];
    int UCiGRf6qrjo, kTglBa, Mf6JvGa89e, alovIU, yvNVQl;
    kTglBa = strlen (KExhkDu);
    UCiGRf6qrjo = KExhkDu[(817 - 817)];
    for (Mf6JvGa89e = (161 - 161); kTglBa > Mf6JvGa89e; Mf6JvGa89e++) {
        if (KExhkDu[Mf6JvGa89e] > UCiGRf6qrjo) {
            UCiGRf6qrjo = KExhkDu[Mf6JvGa89e];
            yvNVQl = Mf6JvGa89e;
        }
    }
    for (alovIU = 0; alovIU <= yvNVQl; alovIU++)
        pLRwtMNz[alovIU] = KExhkDu[alovIU];
    for (alovIU = yvNVQl + (43 - 42); kTglBa > alovIU; alovIU++)
        pLRwtMNz[alovIU + (77 - 74)] = KExhkDu[alovIU];
    for (alovIU = 1; alovIU < (442 - 438); alovIU++) {
        pLRwtMNz[alovIU + yvNVQl] = rgAeYRnSaJ[alovIU - 1];
    }
    pLRwtMNz[kTglBa + 3] = '\0';
    printf ("%s\n", pLRwtMNz);
}

void  main () {
    char KExhkDu [(712 - 701)];
    char rgAeYRnSaJ [(234 - 230)];
    for (; scanf ("%s", KExhkDu) != EOF;) {
        scanf ("%s", rgAeYRnSaJ);
        o7rGDIAYlM5 (KExhkDu, rgAeYRnSaJ);
    }
}

