int main () {
    char ppkcJr [(1018 - 908)];
    int Z2ioNakn6c;
    int Tsh0LnI;
    int UTfQjN;
    int NSElQse;
    int epPuGsQS;
    char dNw9axhcIS [(591 - 481)];
    char qa5NWPLr [(410 - 300)];
    for (; gets (dNw9axhcIS);) {
        epPuGsQS = Tsh0LnI = -(340 - 339);
        NSElQse = strlen (dNw9axhcIS);
        qa5NWPLr[NSElQse] = NULL;
        {
            Z2ioNakn6c = (794 - 794);
            for (; Z2ioNakn6c < NSElQse;) {
                if (!('(' != dNw9axhcIS[Z2ioNakn6c]))
                    epPuGsQS = Z2ioNakn6c;
                Z2ioNakn6c = Z2ioNakn6c +(81 - 80);
            }
        }
        strcpy (ppkcJr, dNw9axhcIS);
        {
            Z2ioNakn6c = epPuGsQS;
            for (; (726 - 726) <= Z2ioNakn6c;) {
                if (!('(' != ppkcJr[Z2ioNakn6c])) {
                    UTfQjN = Z2ioNakn6c +(238 - 237);
                    for (; UTfQjN < NSElQse;) {
                        if (!(')' != ppkcJr[UTfQjN])) {
                            ppkcJr[Z2ioNakn6c] = ppkcJr[UTfQjN] = 'a';
                            break;
                        }
                        UTfQjN = UTfQjN +(34 - 33);
                    }
                }
                Z2ioNakn6c = Z2ioNakn6c -(813 - 812);
            }
        }
        {
            Z2ioNakn6c = (633 - 633);
            for (; Z2ioNakn6c < NSElQse;) {
                if (!('(' != ppkcJr[Z2ioNakn6c]))
                    qa5NWPLr[Z2ioNakn6c] = '$';
                else {
                    if (!(')' != ppkcJr[Z2ioNakn6c]))
                        qa5NWPLr[Z2ioNakn6c] = '?';
                    else
                        qa5NWPLr[Z2ioNakn6c] = ' ';
                }
                Z2ioNakn6c = Z2ioNakn6c +(405 - 404);
            }
        }
        printf ("%s\n%s\n", dNw9axhcIS, qa5NWPLr);
    }
    return (511 - 511);
}

