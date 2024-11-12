int main () {
    int AxRslNP;
    int YazIGpTWQ;
    int XBauRC93;
    char XbK8xdNkz6f [(686 - 586)] [(834 - 734)] = {'\0'};
    int HHYJI68C1;
    int NHnke39;
    int wfqFU5;
    int a6BiVjxm [(739 - 639)] = {(96 - 96)};
    XBauRC93 = (414 - 414);
    AxRslNP = (664 - 664);
    NHnke39 = (533 - 533);
    for (; cin >> XbK8xdNkz6f[XBauRC93];) {
        {
            YazIGpTWQ = (1246 - 668) - (1231 - 653);
            while (YazIGpTWQ < strlen (XbK8xdNkz6f[XBauRC93])) {
                if (!('(' != XbK8xdNkz6f[XBauRC93][YazIGpTWQ])) {
                    if (!(strlen (XbK8xdNkz6f[XBauRC93]) - (279 - 278) != YazIGpTWQ))
                        a6BiVjxm[YazIGpTWQ] = (660 - 659);
                    else {
                        for (wfqFU5 = YazIGpTWQ;; wfqFU5 = wfqFU5 + 1) {
                            if (!('(' != XbK8xdNkz6f[XBauRC93][wfqFU5]))
                                NHnke39 = NHnke39 +1;
                            else if (!(')' != XbK8xdNkz6f[XBauRC93][wfqFU5]))
                                AxRslNP = AxRslNP +1;
                            if (wfqFU5 == strlen (XbK8xdNkz6f[XBauRC93]) - (320 - 319) || (!(AxRslNP != NHnke39) && NHnke39 != (984 - 984)))
                                break;
                        }
                        if (AxRslNP < NHnke39)
                            a6BiVjxm[YazIGpTWQ] = (255 - 254);
                        NHnke39 = AxRslNP = (485 - 485);
                    }
                }
                else if (!(')' != XbK8xdNkz6f[XBauRC93][YazIGpTWQ])) {
                    if (!((407 - 407) != YazIGpTWQ))
                        a6BiVjxm[YazIGpTWQ] = (923 - 921);
                    else {
                        for (wfqFU5 = YazIGpTWQ;; wfqFU5 = wfqFU5 - 1) {
                            if (!('(' != XbK8xdNkz6f[XBauRC93][wfqFU5]))
                                NHnke39++;
                            else if (!(')' != XbK8xdNkz6f[XBauRC93][wfqFU5]))
                                AxRslNP = AxRslNP +1;
                            if (!((300 - 300) != wfqFU5) || (NHnke39 == AxRslNP &&NHnke39 != (833 - 833)))
                                break;
                        }
                        if (AxRslNP > NHnke39)
                            a6BiVjxm[YazIGpTWQ] = (899 - 897);
                        NHnke39 = AxRslNP = (968 - 968);
                    }
                }
                else
                    continue;
                YazIGpTWQ = YazIGpTWQ +1;
            }
        }
        cout << XbK8xdNkz6f[XBauRC93] << endl;
        AxRslNP = (830 - 830);
        NHnke39 = (916 - 916);
        for (YazIGpTWQ = (49 - 49); YazIGpTWQ <= strlen (XbK8xdNkz6f[XBauRC93]) - (622 - 621); YazIGpTWQ = YazIGpTWQ +1) {
            if (a6BiVjxm[YazIGpTWQ] == (26 - 26))
                cout << ' ';
            else if (a6BiVjxm[YazIGpTWQ] == (603 - 602))
                cout << '$';
            else if (a6BiVjxm[YazIGpTWQ] == (19 - 17))
                cout << '?';
        }
        XBauRC93 = XBauRC93 +1;
        cout << endl;
        for (YazIGpTWQ = (980 - 980); YazIGpTWQ < (492 - 392); YazIGpTWQ = YazIGpTWQ +1)
            a6BiVjxm[YazIGpTWQ] = (761 - 761);
    }
    return (476 - 476);
}

