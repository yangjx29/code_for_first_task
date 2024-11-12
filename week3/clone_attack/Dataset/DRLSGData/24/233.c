void  main () {
    int oPy7Ue;
    int RHmdYEnRNG;
    int s4isvpNMR;
    int E5iM7yvtW;
    char VLYuqvj8m [500];
    gets (VLYuqvj8m);
    char wCO7elr3;
    char *xa74SBpqCvsm;
    char *kEQwr1;
    char *wE0klWOL;
    int xgwUJh0kRuY7;
    s4isvpNMR = 100;
    E5iM7yvtW = 0;
    xgwUJh0kRuY7 = 0;
    for (RHmdYEnRNG = 0; (wCO7elr3 = VLYuqvj8m[RHmdYEnRNG]) != '\0'; RHmdYEnRNG = RHmdYEnRNG +1) {
        if (wCO7elr3 != ' ') {
            if (!(0 != xgwUJh0kRuY7)) {
                xgwUJh0kRuY7 = 1;
                kEQwr1 = VLYuqvj8m +RHmdYEnRNG;
                oPy7Ue = 1;
            }
            else
                oPy7Ue = oPy7Ue + 1;
        }
        if (!(' ' != wCO7elr3) || !('\0' != VLYuqvj8m[RHmdYEnRNG +1])) {
            if (!(1 != xgwUJh0kRuY7)) {
                if (oPy7Ue > E5iM7yvtW) {
                    xa74SBpqCvsm = kEQwr1;
                    E5iM7yvtW = oPy7Ue;
                }
                if (s4isvpNMR > oPy7Ue) {
                    wE0klWOL = kEQwr1;
                    s4isvpNMR = oPy7Ue;
                }
            }
            xgwUJh0kRuY7 = 0;
        }
    }
    for (; *xa74SBpqCvsm != ' ' && *xa74SBpqCvsm != '\0';)
        putchar (*(xa74SBpqCvsm++));
    putchar ('\n');
    for (; *wE0klWOL != ' ' && *wE0klWOL != '\0';)
        putchar (*(wE0klWOL = wE0klWOL + 1));
}

