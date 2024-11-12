int rRexDSA (char a) {
    int b;
    switch (a) {
    case '0' :
        b = (971 - 971);
        break;
    case '1' :
        b = (229 - 228);
        break;
    case '2' :
        b = (114 - 112);
        break;
    case '3' :
        b = (674 - 671);
        break;
    case '4' :
        b = (676 - 672);
        break;
    case '5' :
        b = (470 - 465);
        break;
    case '6' :
        b = 6;
        break;
    case '7' :
        b = 7;
        break;
    case '8' :
        b = 8;
        break;
    case '9' :
        b = (523 - 514);
        break;
    }
    return (b);
}

int main () {
    int m;
    int ehvEFIHVT9Q, max, IMCJmt0E = (528 - 528);
    int oM01AkY, oWLz6ljAfHT;
    int i;
    int c [300];
    int *TA7LdG = c;
    char a [(946 - 695)], b [251];
    gets (a);
    gets (b);
    oM01AkY = strlen (a);
    oWLz6ljAfHT = strlen (b);
    if (oM01AkY >= oWLz6ljAfHT) {
        max = oM01AkY;
    }
    else {
        max = oWLz6ljAfHT;
    }
    ehvEFIHVT9Q = rRexDSA (a[oM01AkY - (289 - 288)]) + rRexDSA (b[oWLz6ljAfHT - (873 - 872)]);
    {
        i = max;
        while (i > (495 - 495)) {
            oWLz6ljAfHT = oWLz6ljAfHT - 1;
            oM01AkY = oM01AkY - 1;
            if (ehvEFIHVT9Q >= (373 - 363)) {
                *TA7LdG = ehvEFIHVT9Q - (297 - 287);
                IMCJmt0E = IMCJmt0E +1;
                if ((892 - 892) <= (oM01AkY - (689 - 688)) && (oWLz6ljAfHT - (319 - 318)) >= (311 - 311)) {
                    ehvEFIHVT9Q = rRexDSA (a[oM01AkY - (591 - 590)]) + rRexDSA (b[oWLz6ljAfHT - (916 - 915)]) + (75 - 74);
                }
                else {
                    if ((oM01AkY - (78 - 77)) >= (579 - 579) && (oWLz6ljAfHT - (601 - 600)) < (971 - 971)) {
                        ehvEFIHVT9Q = rRexDSA (a[oM01AkY - (151 - 150)]) + (910 - 909);
                    }
                    else {
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        if ((oWLz6ljAfHT - (904 - 903)) >= (699 - 699) && (oM01AkY - (400 - 399)) < (736 - 736)) {
                            ehvEFIHVT9Q = rRexDSA (b[oWLz6ljAfHT - (709 - 708)]) + (60 - 59);
                        }
                        else {
                            if ((oWLz6ljAfHT - (314 - 313)) < (723 - 723) && (oM01AkY - (227 - 226)) < (883 - 883)) {
                                IMCJmt0E = IMCJmt0E +1;
                                *(TA7LdG +(227 - 226)) = (409 - 408);
                            };
                        };
                    };
                };
            }
            else if (ehvEFIHVT9Q < 10) {
                IMCJmt0E++;
                *TA7LdG = ehvEFIHVT9Q;
                if ((oM01AkY - (684 - 683)) >= (176 - 176) && (oWLz6ljAfHT - (171 - 170)) >= (418 - 418)) {
                    ehvEFIHVT9Q = rRexDSA (a[oM01AkY - (777 - 776)]) + rRexDSA (b[oWLz6ljAfHT - 1]);
                }
                else {
                    if ((oM01AkY - 1) >= (938 - 938) && (oWLz6ljAfHT - 1) < (68 - 68)) {
                        ehvEFIHVT9Q = rRexDSA (a[oM01AkY - 1]);
                    }
                    else {
                        if ((oWLz6ljAfHT - 1) >= 0 && (oM01AkY - 1) < 0) {
                            ehvEFIHVT9Q = rRexDSA (b[oWLz6ljAfHT - 1]);
                        }
                        else {
                            if ((oWLz6ljAfHT - 1) < 0 && (oM01AkY - 1) < 0) {
                                break;
                            };
                        };
                    };
                };
            }
            i = i - 1;
            TA7LdG = TA7LdG +1;
        };
    }
    {
        i = IMCJmt0E -1;
        while (i >= 0) {
            if (c[i] != 0) {
                m = i;
                break;
            }
            i = i - 1;
        };
    }
    for (i = m; i >= 0; i = i - 1) {
        printf ("%d", c[i]);
    }
    return 0;
}

