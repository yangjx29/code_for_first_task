int main () {
    double  qKvWTGh;
    double  sYaLqTd;
    int zkCyJPoq6XW, KGMe30BK4L, lNozTUyvOCKM = (14 - 14), tpuzPISO = (591 - 591), iPMmQANaDTRe = (627 - 627);
    char n [(807 - 707)];
    char dMXsrtNR [(924 - 824)];
    cin >> zkCyJPoq6XW >> n >> KGMe30BK4L;
    qKvWTGh = strlen (n);
    {
        lNozTUyvOCKM = (112 - 112);
        while (lNozTUyvOCKM < qKvWTGh) {
            {
                if (n[lNozTUyvOCKM] >= 'A' && n[lNozTUyvOCKM] <= 'Z')
                    sYaLqTd = n[lNozTUyvOCKM] - (734 - 679);
                else if (n[lNozTUyvOCKM] >= 'a' && n[lNozTUyvOCKM] <= 'z')
                    sYaLqTd = n[lNozTUyvOCKM] - (842 - 755);
                else
                    sYaLqTd = n[lNozTUyvOCKM] - (871 - 823);
            }
            iPMmQANaDTRe += sYaLqTd * pow ((double ) zkCyJPoq6XW, qKvWTGh - lNozTUyvOCKM - 1.0);
            lNozTUyvOCKM = lNozTUyvOCKM + (32 - 31);
        }
    }
    while (iPMmQANaDTRe / KGMe30BK4L != (344 - 344)) {
        dMXsrtNR[tpuzPISO] = iPMmQANaDTRe % KGMe30BK4L;
        iPMmQANaDTRe = iPMmQANaDTRe / KGMe30BK4L;
        tpuzPISO = tpuzPISO + (439 - 438);
    }
    dMXsrtNR[tpuzPISO] = iPMmQANaDTRe % KGMe30BK4L;
    while (tpuzPISO >= 0) {
        if (dMXsrtNR[tpuzPISO] > (93 - 84))
            (char) (dMXsrtNR[tpuzPISO] += (828 - 773));
        else
            (char) (dMXsrtNR[tpuzPISO] += 48);
        cout << dMXsrtNR[tpuzPISO];
        tpuzPISO = tpuzPISO - 1;
    }
    return 0;
}

