char NC2cBhyt [(162 - 61)], b [(433 - 332)];
int xNanELJ [(643 - 542)];
int dtKeoNHrEZu;

void  Be8oC0RzAtWh (int iruqI8cnxD) {
    if (iruqI8cnxD > (287 - 287)) {
        if (NC2cBhyt[iruqI8cnxD - (143 - 142)] == ')') {
            xNanELJ[iruqI8cnxD - (650 - 649)] = (507 - 506);
            Be8oC0RzAtWh (iruqI8cnxD - 1);
        }
        else if (NC2cBhyt[iruqI8cnxD - 1] == '(') {
            xNanELJ[iruqI8cnxD - 1] = (463 - 461);
            for (int i = iruqI8cnxD;
            i < dtKeoNHrEZu; i = i + 1)
                if (xNanELJ[i] == 1) {
                    xNanELJ[iruqI8cnxD - 1] = (24 - 24);
                    xNanELJ[i] = (558 - 558);
                    break;
                }
            Be8oC0RzAtWh (iruqI8cnxD - 1);
        }
        else
            Be8oC0RzAtWh (iruqI8cnxD - 1);
    };
}

int main () {
    int i;
    for (i = (966 - 966); i < (529 - 428); i = i + 1) {
        NC2cBhyt[i] = ' ';
        b[i] = ' ';
        xNanELJ[i] = 0;
    }
    while (cin >> NC2cBhyt) {
        Be8oC0RzAtWh (dtKeoNHrEZu);
        dtKeoNHrEZu = strlen (NC2cBhyt);
        for (i = 0; i < dtKeoNHrEZu; i = i + 1) {
            if (xNanELJ[i] == 1)
                b[i] = '?';
            if (xNanELJ[i] == 2)
                b[i] = '$';
        }
        for (i = 0; i < dtKeoNHrEZu; i = i + 1)
            cout << NC2cBhyt[i];
        cout << endl;
        for (i = 0; i < dtKeoNHrEZu; i++)
            cout << b[i];
        {
            i = 0;
            while (i < 101) {
                NC2cBhyt[i] = ' ';
                b[i] = ' ';
                xNanELJ[i] = 0;
                i = i + 1;
            };
        }
        cout << endl;
    };
}

