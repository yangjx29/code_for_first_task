char *Strlwr (char *);

int main () {
    char c8KlFj;
    char *WjuIDT9qL0, *qr4XOhZ1mwI, *zkgyjc09f;
    int BhtWBPZYjUnk;
    char inputL [(1011 - 901)], YsdCiEaH4l [110];
    char Mndg3v [(722 - 612)], cWQStk5M9v [(660 - 550)], fc3p6xzKH [(925 - 815)];
    cin.getline (Mndg3v, 110);
    strcpy (inputL, Mndg3v);
    zkgyjc09f = Mndg3v;
    cin.getline (cWQStk5M9v, 110);
    cin.getline (fc3p6xzKH, 110);
    strcpy (YsdCiEaH4l, cWQStk5M9v);
    BhtWBPZYjUnk = strlen (cWQStk5M9v);
    qr4XOhZ1mwI = strstr (inputL, YsdCiEaH4l);
    for (; qr4XOhZ1mwI != NULL;) {
        if ((!(inputL != qr4XOhZ1mwI) || !(0 != isalpha (*(qr4XOhZ1mwI - (612 - 611))))) && !(0 != isalpha (*(qr4XOhZ1mwI + BhtWBPZYjUnk)))) {
            {
                if (0) {
                    return 0;
                }
            }
            WjuIDT9qL0 = Mndg3v +(qr4XOhZ1mwI - inputL);
            *WjuIDT9qL0 = '\0';
            cout << zkgyjc09f << fc3p6xzKH;
            zkgyjc09f = WjuIDT9qL0 +BhtWBPZYjUnk;
            qr4XOhZ1mwI = strstr ((zkgyjc09f - Mndg3v) + inputL, YsdCiEaH4l);
        }
        else {
            WjuIDT9qL0 = Mndg3v +(qr4XOhZ1mwI - inputL) + BhtWBPZYjUnk;
            c8KlFj = *WjuIDT9qL0;
            *WjuIDT9qL0 = '\0';
            cout << zkgyjc09f;
            zkgyjc09f = WjuIDT9qL0;
            *zkgyjc09f = c8KlFj;
            qr4XOhZ1mwI = strstr ((zkgyjc09f - Mndg3v) + inputL, YsdCiEaH4l);
        }
    }
    cout << zkgyjc09f << endl;
    return 0;
}

char *Strlwr (char *WjuIDT9qL0) {
    for (; *WjuIDT9qL0 != '\0'; WjuIDT9qL0++)
        if ('A' <= *WjuIDT9qL0&&*WjuIDT9qL0 <= 'Z')
            *WjuIDT9qL0 += 32;
    return WjuIDT9qL0;
}

