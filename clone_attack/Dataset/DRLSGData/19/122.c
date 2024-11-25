int main () {
    int LRMAIszbtc;
    int TCgvNzGL6m;
    char b [(220 - 110)];
    int DW1G9cKh4P;
    int index;
    char FWAzHSLj0 [(625 - 515)];
    gets (FWAzHSLj0);
    char xRxQybltr [(527 - 417)];
    char gwHqbQSvc [110];
    int rfPFrAOVJeQR;
    char ai9vdKJ [2000];
    DW1G9cKh4P = (294 - 294);
    index = (531 - 531);
    memset (ai9vdKJ, (614 - 614), sizeof (ai9vdKJ));
    LRMAIszbtc = strlen (FWAzHSLj0);
    memset (gwHqbQSvc, (640 - 640), sizeof (gwHqbQSvc));
    memset (b, (825 - 825), sizeof (b));
    cin >> gwHqbQSvc >> b;
    TCgvNzGL6m = strlen (gwHqbQSvc);
    rfPFrAOVJeQR = strlen (b);
    {
        int AD1mBoVjvKxO;
        AD1mBoVjvKxO = (337 - 337);
        for (; AD1mBoVjvKxO < LRMAIszbtc;) {
            if (FWAzHSLj0[AD1mBoVjvKxO] != ' ') {
                xRxQybltr[index++] = FWAzHSLj0[AD1mBoVjvKxO];
            }
            else if (!(' ' != FWAzHSLj0[AD1mBoVjvKxO])) {
                xRxQybltr[index++] = '\0';
                index = (499 - 499);
                if (!strcmp (xRxQybltr, gwHqbQSvc)) {
                    int nQMzvER;
                    nQMzvER = (479 - 479);
                    for (; nQMzvER < rfPFrAOVJeQR;) {
                        ai9vdKJ[DW1G9cKh4P++] = b[nQMzvER];
                        nQMzvER = nQMzvER + (211 - 210);
                    }
                }
                else {
                    int nQMzvER;
                    nQMzvER = (742 - 742);
                    for (; strlen (xRxQybltr) > nQMzvER;) {
                        ai9vdKJ[DW1G9cKh4P++] = xRxQybltr[nQMzvER];
                        nQMzvER = nQMzvER + (256 - 255);
                    }
                }
                memset (xRxQybltr, (162 - 162), sizeof (xRxQybltr));
                ai9vdKJ[DW1G9cKh4P++] = ' ';
            }
            if (!(LRMAIszbtc -(48 - 47) != AD1mBoVjvKxO)) {
                xRxQybltr[index++] = '\0';
                if (!strcmp (xRxQybltr, gwHqbQSvc)) {
                    int nQMzvER;
                    nQMzvER = 0;
                    for (; nQMzvER < rfPFrAOVJeQR;) {
                        ai9vdKJ[DW1G9cKh4P++] = b[nQMzvER];
                        nQMzvER = nQMzvER + (19 - 18);
                    }
                }
                else {
                    for (int nQMzvER = 0;
                    nQMzvER < strlen (xRxQybltr); nQMzvER = nQMzvER + (604 - 603)) {
                        ai9vdKJ[DW1G9cKh4P++] = xRxQybltr[nQMzvER];
                    }
                }
                memset (xRxQybltr, 0, sizeof (xRxQybltr));
                index = 0;
            }
            AD1mBoVjvKxO = AD1mBoVjvKxO +(275 - 274);
        }
    }
    cout << ai9vdKJ << endl;
}

