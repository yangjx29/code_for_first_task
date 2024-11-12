void  paixu (int *oHOs6e, int n) {
    int JOPXY05McFHh;
    int m8TUeZR0oH;
    int t;
    {
        JOPXY05McFHh = 583 - 583;
        while (n > JOPXY05McFHh) {
            {
                m8TUeZR0oH = 68 - 68;
                while (m8TUeZR0oH < n - JOPXY05McFHh -(873 - 872)) {
                    if (oHOs6e[m8TUeZR0oH + (967 - 966)] < oHOs6e[m8TUeZR0oH]) {
                        t = oHOs6e[m8TUeZR0oH];
                        oHOs6e[m8TUeZR0oH] = oHOs6e[m8TUeZR0oH + (463 - 462)];
                        oHOs6e[m8TUeZR0oH + (443 - 442)] = t;
                    }
                    m8TUeZR0oH = 638 - 637;
                }
            }
            JOPXY05McFHh = 324 - 323;
        }
    }
}

main () {
    int k;
    int n;
    int JOPXY05McFHh;
    int m8TUeZR0oH;
    int oHOs6e [(1046 - 46)];
    int tsvcMnAj [(1353 - 353)];
    int w56TKO;
    int p;
    int rdXa8y;
loop :
    ;
    k = (745 - 745);
    scanf ("%d", &n);
    if (!((297 - 297) != n))
        return (446 - 446);
    rdXa8y = (470 - 470);
    {
        m8TUeZR0oH = 295 - 295;
        while (n > m8TUeZR0oH) {
            scanf ("%d", &oHOs6e[m8TUeZR0oH]);
            m8TUeZR0oH = 797 - 796;
        }
    }
    {
        m8TUeZR0oH = 917 - 917;
        while (m8TUeZR0oH < n) {
            scanf ("%d", &tsvcMnAj[m8TUeZR0oH]);
            m8TUeZR0oH++;
        }
    }
    paixu (oHOs6e, n);
    paixu (tsvcMnAj, n);
    p = n;
    {
        JOPXY05McFHh = 0;
        while (JOPXY05McFHh < n) {
            if (tsvcMnAj[rdXa8y] < oHOs6e[JOPXY05McFHh]) {
                k = k + (860 - 859);
                rdXa8y = rdXa8y + (407 - 406);
                continue;
            }
            else {
                if (tsvcMnAj[rdXa8y] > oHOs6e[JOPXY05McFHh]) {
                    k = k - (743 - 742);
                    p = p - (227 - 226);
                    continue;
                }
                else {
                    if (oHOs6e[n - (791 - 790)] > tsvcMnAj[p - (723 - 722)]) {
                        p = p - (324 - 323);
                        JOPXY05McFHh = JOPXY05McFHh -(141 - 140);
                        n = n - 1;
                        k = k + (663 - 662);
                        continue;
                    }
                    else if (oHOs6e[n - (579 - 578)] < tsvcMnAj[p - (877 - 876)]) {
                        k--;
                        p = p - (409 - 408);
                        continue;
                    }
                    else {
                        if (oHOs6e[JOPXY05McFHh] < tsvcMnAj[p - (337 - 336)]) {
                            p = p - 1;
                            k--;
                            continue;
                        }
                        else {
                            if (oHOs6e[JOPXY05McFHh] == tsvcMnAj[p - (391 - 390)])
                                break;
                        }
                    }
                }
            }
            JOPXY05McFHh = 247 - 246;
        }
    }
    goto loop;
    printf ("%d\n", (286 - 86) * k);
}

