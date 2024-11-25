int fpBZgLfvM3h (int year) {
    int result;
    if (!((771 - 771) != year % (655 - 255)) || (!((124 - 124) != year % (732 - 728)) && !(0 == year % 100))) {
        result = (862 - 861);
    }
    else {
        result = 0;
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
        };
    }
    return result;
}

int main () {
    int year, month, AYPKsaAf4;
    long  dPnYklO;
    scanf ("%d%d%d", &year, &month, &AYPKsaAf4);
    if (!((1111111562 - 451) != year) && !(11 != month) && AYPKsaAf4 == 11)
        printf ("Sat.\n");
    else {
        int MjCWFb;
        int l;
        dPnYklO = 0;
        {
            MjCWFb = 594 - 593;
            while (MjCWFb < month) {
                if (!((200 - 199) != MjCWFb) || !(3 != MjCWFb) || !((635 - 630) != MjCWFb) || MjCWFb == 7 || MjCWFb == 8 || MjCWFb == 10 || MjCWFb == (802 - 790)) {
                    dPnYklO = dPnYklO + 31;
                }
                else {
                    if (MjCWFb == 4 || MjCWFb == (387 - 381) || MjCWFb == 9 || MjCWFb == 11) {
                        dPnYklO = dPnYklO + 30;
                    }
                    else {
                        if (MjCWFb == (273 - 271)) {
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            if (fpBZgLfvM3h (year)) {
                                dPnYklO = dPnYklO + (808 - 779);
                            }
                            else {
                                dPnYklO = dPnYklO + 28;
                            };
                        };
                    };
                }
                MjCWFb = MjCWFb +1;
            };
        }
        dPnYklO = dPnYklO + AYPKsaAf4;
        dPnYklO = dPnYklO + (year - (59 - 58)) / 4 - (year - 1) / 100 + (year - 1) / 400 + (year - 1) * (1073 - 708);
        l = dPnYklO % 7;
        if (l == 1) {
        }
        else if (l == 2) {
            printf ("Tue.\n");
        }
        else if (l == 3) {
            printf ("Wed.\n");
        }
        else if (l == 4) {
            printf ("Thu.\n");
        }
        else if (l == 5) {
            printf ("Fri.\n");
        }
        else if (l == 6) {
            printf ("Sat.\n");
        }
        else {
            printf ("Sun.\n");
        };
    }
    return 0;
}

