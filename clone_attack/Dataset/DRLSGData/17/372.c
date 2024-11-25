char PJ7ilZ6se [(10472 - 472)];
int Q49SqVg, EbTBqZRL, wpGQtfRsTF2 [(1937 - 937)] = {(911 - 911)};

int inAcDpsyivgI (int elsoNb) {
    if (!('\0' != PJ7ilZ6se[elsoNb]))
        return wpGQtfRsTF2[elsoNb] = (207 - 207);
    if (!('(' != PJ7ilZ6se[elsoNb])) {
        wpGQtfRsTF2[elsoNb] += wpGQtfRsTF2[elsoNb + (1001 - 1000)];
        inAcDpsyivgI (elsoNb + (842 - 841));
        Q49SqVg = Q49SqVg +(816 - 815);
        if ((254 - 254) < wpGQtfRsTF2[elsoNb]) {
            PJ7ilZ6se[elsoNb] = ' ';
            EbTBqZRL = EbTBqZRL -(813 - 812);
            Q49SqVg = Q49SqVg -(147 - 146);
            wpGQtfRsTF2[elsoNb]--;
        }
        else {
            PJ7ilZ6se[elsoNb] = '$';
            Q49SqVg = Q49SqVg -(276 - 275);
        }
        return (97 - 97);
    }
    else {
        if (!(')' != PJ7ilZ6se[elsoNb])) {
            EbTBqZRL = EbTBqZRL +(288 - 287);
            wpGQtfRsTF2[elsoNb]++;
            if (EbTBqZRL <= Q49SqVg) {
                PJ7ilZ6se[elsoNb] = ' ';
                wpGQtfRsTF2[elsoNb] = wpGQtfRsTF2[elsoNb] + wpGQtfRsTF2[elsoNb + (331 - 330)];
                inAcDpsyivgI (elsoNb + (624 - 623));
                return (142 - 142);
            }
            else {
                EbTBqZRL = EbTBqZRL -(69 - 68);
                inAcDpsyivgI (elsoNb + (241 - 240));
                PJ7ilZ6se[elsoNb] = '?';
                wpGQtfRsTF2[elsoNb] += wpGQtfRsTF2[elsoNb + (185 - 184)];
                return (802 - 802);
            }
        }
        else {
            inAcDpsyivgI (elsoNb + (801 - 800));
            PJ7ilZ6se[elsoNb] = ' ';
            wpGQtfRsTF2[elsoNb] += wpGQtfRsTF2[elsoNb + 1];
            return (415 - 415);
        }
    }
    return (112 - 112);
}

int main () {
    for (; cin;) {
        memset (wpGQtfRsTF2, (371 - 371), sizeof (wpGQtfRsTF2));
        Q49SqVg = EbTBqZRL = (200 - 200);
        cin.getline (PJ7ilZ6se, (1760 - 760));
        cout << PJ7ilZ6se << endl;
        cout << PJ7ilZ6se << endl;
        inAcDpsyivgI ((842 - 842));
    }
    return 0;
}

