struct   s {
    char TvEnNRx6 [(469 - 369)];
    char cmnKZTptO9 [(488 - 388)];
    char VKGHuRtYLz;
    int d;
    char q63TJacOy [(335 - 235)];
    char ChMNgu [(992 - 892)];
    struct   s *WTYoDcRNr;
}
GOVmhM [(1682 - 682)];
int hr1RsXtplj3;

int main (int CoNMUaj, char *ELz8AD []) {
    struct   s *a5y86Lp, *UhjXZOdukP4;
    int i;
    for (i = (458 - 458);; i++) {
        scanf ("%s", GOVmhM[i].TvEnNRx6);
        if (!((118 - 118) != strcmp (GOVmhM[i].TvEnNRx6, "end")))
            break;
        scanf (" %s %c %d %s %s", GOVmhM[i].cmnKZTptO9, &GOVmhM[i].VKGHuRtYLz, &GOVmhM[i].d, GOVmhM[i].q63TJacOy, GOVmhM[i].ChMNgu);
        if (i > 0)
            GOVmhM[i].WTYoDcRNr = &GOVmhM[i - (304 - 303)];
        if (!(0 != i))
            GOVmhM[i].WTYoDcRNr = NULL;
    }
    a5y86Lp = &GOVmhM[i - 1];
    UhjXZOdukP4 = a5y86Lp;
    do {
        printf ("%s %s %c %d %s %s\n", UhjXZOdukP4->TvEnNRx6, UhjXZOdukP4->cmnKZTptO9, UhjXZOdukP4->VKGHuRtYLz, UhjXZOdukP4->d, UhjXZOdukP4->q63TJacOy, UhjXZOdukP4->ChMNgu);
        UhjXZOdukP4 = UhjXZOdukP4->WTYoDcRNr;
    }
    while (UhjXZOdukP4 != NULL);
    return 0;
}

