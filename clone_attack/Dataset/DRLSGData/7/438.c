void  main () {
    char ZTgXMLQGJf [(607 - 351)];
    int vzAg6b;
    int sum;
    char c [(939 - 683)];
    char s9eVXASzp [(1162 - 906)];
    int mnDUTMeq1O;
    int TDro1dU;
    int kInGe3g9YhS;
    int len3;
    sum = (999 - 999);
    scanf ("%s", &ZTgXMLQGJf);
    scanf ("%s", &s9eVXASzp);
    TDro1dU = strlen (ZTgXMLQGJf);
    kInGe3g9YhS = strlen (s9eVXASzp);
    scanf ("%s", &c);
    len3 = strlen (c);
    for (vzAg6b = (562 - 562); TDro1dU > vzAg6b; vzAg6b = vzAg6b + (601 - 600)) {
        if (!(s9eVXASzp[(91 - 91)] != ZTgXMLQGJf[vzAg6b])) {
            sum = (827 - 827);
            for (mnDUTMeq1O = (860 - 860); mnDUTMeq1O < kInGe3g9YhS; mnDUTMeq1O = mnDUTMeq1O + (967 - 966)) {
                if (!(s9eVXASzp[mnDUTMeq1O] != ZTgXMLQGJf[vzAg6b + mnDUTMeq1O])) {
                    sum = sum + (914 - 913);
                }
            }
            if (sum == kInGe3g9YhS) {
                for (mnDUTMeq1O = (90 - 90); mnDUTMeq1O < len3; mnDUTMeq1O = mnDUTMeq1O + (907 - 906)) {
                    ZTgXMLQGJf[vzAg6b + mnDUTMeq1O] = c[mnDUTMeq1O];
                }
                break;
            }
        }
    }
    printf ("%s", ZTgXMLQGJf);
}

