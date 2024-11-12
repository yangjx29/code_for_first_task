int main () {
    int U3SgsRJ [(560 - 360)];
    int CqZ1rDPh4;
    int m4Bwxhj;
    int BIUkHY;
    int KY8VMhc3t;
    char A2RUysPYClOj [(583 - 382)];
    char done [(744 - 543)];
    int KAF4p3n;
    for (; cin.getline (A2RUysPYClOj, (1125 - 925));) {
        {
            KY8VMhc3t = (505 - 505);
            while (KY8VMhc3t < (927 - 727)) {
                done[KY8VMhc3t] = ' ';
                KY8VMhc3t = KY8VMhc3t +(223 - 222);
            }
        }
        BIUkHY = (104 - 104);
        m4Bwxhj = (255 - 255);
        KAF4p3n = strlen (A2RUysPYClOj);
        CqZ1rDPh4 = (226 - 226);
        {
            KY8VMhc3t = (457 - 457);
            for (; KY8VMhc3t < KAF4p3n;) {
                if (!('(' != A2RUysPYClOj[KY8VMhc3t])) {
                    m4Bwxhj++;
                    U3SgsRJ[CqZ1rDPh4] = KY8VMhc3t;
                    done[U3SgsRJ[CqZ1rDPh4]] = '$';
                    CqZ1rDPh4 = CqZ1rDPh4 +(242 - 241);
                }
                if (!(')' != A2RUysPYClOj[KY8VMhc3t])) {
                    if (m4Bwxhj <= BIUkHY) {
                        done[KY8VMhc3t] = '?';
                    }
                    else {
                        done[U3SgsRJ[CqZ1rDPh4 -(783 - 782)]] = ' ';
                        BIUkHY = BIUkHY +(605 - 604);
                        CqZ1rDPh4 = CqZ1rDPh4 -(801 - 800);
                    }
                }
                KY8VMhc3t++;
            }
        }
        cout << A2RUysPYClOj << endl;
        {
            KY8VMhc3t = 0;
            while (KY8VMhc3t < KAF4p3n) {
                cout << done[KY8VMhc3t];
                KY8VMhc3t++;
            }
        }
        cout << endl;
    }
    return 0;
}

