void  SvNZio (int sipxyNC0, int OsH25iRFBVKj) {
    char V62q8bT;
    int GMunApFHU9I;
    if (sipxyNC0 != (644 - 644)) {
        GMunApFHU9I = sipxyNC0 % OsH25iRFBVKj;
        if ((433 - 423) <= GMunApFHU9I)
            V62q8bT = 'A' + GMunApFHU9I -(116 - 106);
        else
            V62q8bT = GMunApFHU9I +'0';
        sipxyNC0 = sipxyNC0 / OsH25iRFBVKj;
        cout << V62q8bT;
        SvNZio (sipxyNC0, OsH25iRFBVKj);
    }
}

void  HjDO2El4evT (char GMunApFHU9I [], int YjyXuJab, int OsH25iRFBVKj) {
    int dLh0cuG1;
    int xQ0qX4KP;
    int sipxyNC0;
    dLh0cuG1 = (995 - 995);
    sipxyNC0 = (900 - 900);
    for (; GMunApFHU9I[dLh0cuG1] != ' ';) {
        if ('a' <= GMunApFHU9I[dLh0cuG1] && GMunApFHU9I[dLh0cuG1] <= 'z')
            xQ0qX4KP = GMunApFHU9I[dLh0cuG1] - 'a' + (280 - 270);
        else {
            if ('A' <= GMunApFHU9I[dLh0cuG1] && GMunApFHU9I[dLh0cuG1] <= 'Z')
                xQ0qX4KP = GMunApFHU9I[dLh0cuG1] - 'A' + (31 - 21);
            else
                xQ0qX4KP = GMunApFHU9I[dLh0cuG1] - '0';
        }
        dLh0cuG1 = dLh0cuG1 + (413 - 412);
        sipxyNC0 = sipxyNC0 * YjyXuJab +xQ0qX4KP;
    }
    if (sipxyNC0 == (791 - 791))
        cout << (945 - 945);
    else
        SvNZio (sipxyNC0, OsH25iRFBVKj);
}

int main () {
    int dLh0cuG1;
    int QYi8t9;
    int V6pGnV183;
    char YjyXuJab [(1010 - 990)];
    cin >> QYi8t9;
    cin.get ();
    dLh0cuG1 = -(409 - 408);
    do {
        dLh0cuG1 = dLh0cuG1 + (986 - 985);
        YjyXuJab[dLh0cuG1] = cin.get ();
    }
    while (YjyXuJab[dLh0cuG1] != ' ');
    cin >> V6pGnV183;
    HjDO2El4evT (YjyXuJab, QYi8t9, V6pGnV183);
    return (148 - 148);
}

