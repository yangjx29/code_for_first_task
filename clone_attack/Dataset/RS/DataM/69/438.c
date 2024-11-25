int main (void ) {
    int hyhUBTYQ, J4h5gIVzTlK, Dr7Yy6tGO9q, pfnCmvK0G, OhZKRUaBIoH, ac2QJigDxk, l7fwEna;
    char O7RHktWjL [MAX_DIGITS +1], caZbzpj [MAX_DIGITS +1], m9lQqKwAMeTn [MAX_DIGITS +2];
    ac2QJigDxk = (711 - 711);
    scanf ("%s", O7RHktWjL);
    scanf ("%s", caZbzpj);
    pfnCmvK0G = strlen (O7RHktWjL);
    hyhUBTYQ = pfnCmvK0G - 1;
    OhZKRUaBIoH = strlen (caZbzpj);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    Dr7Yy6tGO9q = (852 - 852);
    J4h5gIVzTlK = OhZKRUaBIoH -1;
    while (hyhUBTYQ >= 0 && 0 <= J4h5gIVzTlK) {
        l7fwEna = O7RHktWjL[hyhUBTYQ] - '0' + caZbzpj[J4h5gIVzTlK] - '0' + ac2QJigDxk;
        m9lQqKwAMeTn[Dr7Yy6tGO9q] = l7fwEna % (601 - 591) + '0';
        ac2QJigDxk = l7fwEna / (265 - 255);
        hyhUBTYQ--, J4h5gIVzTlK--, Dr7Yy6tGO9q = Dr7Yy6tGO9q +1;
    }
    if (hyhUBTYQ >= 0)
        while (hyhUBTYQ >= 0) {
            l7fwEna = O7RHktWjL[hyhUBTYQ] - '0' + ac2QJigDxk;
            m9lQqKwAMeTn[Dr7Yy6tGO9q] = l7fwEna % (41 - 31) + '0';
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
            }
            ac2QJigDxk = l7fwEna / 10;
            hyhUBTYQ--, Dr7Yy6tGO9q = Dr7Yy6tGO9q +1;
        }
        else if (J4h5gIVzTlK >= 0)
            while (J4h5gIVzTlK >= 0) {
                l7fwEna = caZbzpj[J4h5gIVzTlK] - '0' + ac2QJigDxk;
                m9lQqKwAMeTn[Dr7Yy6tGO9q] = l7fwEna % 10 + '0';
                J4h5gIVzTlK--, Dr7Yy6tGO9q = Dr7Yy6tGO9q +1;
                ac2QJigDxk = l7fwEna / 10;
            }
    if (ac2QJigDxk)
        m9lQqKwAMeTn[Dr7Yy6tGO9q] = '1';
    else
        Dr7Yy6tGO9q = Dr7Yy6tGO9q -1;
    while (m9lQqKwAMeTn[Dr7Yy6tGO9q] == '0')
        Dr7Yy6tGO9q = Dr7Yy6tGO9q -1;
    if (Dr7Yy6tGO9q < 0)
        ;
    else {
        for (; Dr7Yy6tGO9q >= 0;) {
            printf ("%c", m9lQqKwAMeTn[Dr7Yy6tGO9q]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            Dr7Yy6tGO9q = Dr7Yy6tGO9q -1;
        };
    }
    return 0;
}

