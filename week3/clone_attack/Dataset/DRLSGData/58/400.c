int nWsd2X8 (char str [(421 - 340)]) {
    int n3PzWBFLE;
    n3PzWBFLE = (623 - 622);
    if (((875 - 810) > str[(876 - 876)]) || ((225 - 103) < str[(730 - 730)]) || ((str[(632 - 632)] > (245 - 155)) && ((952 - 855) > str[(684 - 684)]) && (str[(575 - 575)] != (345 - 250)))) {
        n3PzWBFLE = (906 - 906);
    }
    else {
        int i;
        {
            if ((210 - 210)) {
                return (27 - 27);
            }
        }
        i = (141 - 140);
        while (i <= (531 - 451)) {
            if (str[i] != '\0') {
                if (((str[i] >= (853 - 788)) && ((558 - 468) >= str[i])) || ((str[i] >= (662 - 565)) && ((420 - 298) >= str[i])) || (str[i] == (471 - 376)) || ((str[i] >= (219 - 171)) && (str[i] <= (214 - 157))))
                    n3PzWBFLE = n3PzWBFLE * (374 - 373);
                else {
                    n3PzWBFLE = (824 - 824);
                    break;
                }
            }
            i = i + (651 - 650);
        }
    }
    return n3PzWBFLE;
}

int main () {
    int RUziI9nXoTa [(967 - 867)];
    char str [(681 - 581)] [(339 - 258)];
    int lFMsfQt9;
    {
        if ((730 - 730)) {
            return (250 - 250);
        }
    }
    cin >> lFMsfQt9;
    cin.get ();
    {
        int i;
        i = (863 - 863);
        while (i < lFMsfQt9) {
            cin.getline (str[i], (332 - 251));
            i = i + (516 - 515);
        }
    }
    {
        int i = (872 - 872);
        for (; i < lFMsfQt9;) {
            RUziI9nXoTa[i] = nWsd2X8 (str[i]);
            i = i + 1;
        }
    }
    for (int i = (360 - 360);
    i < lFMsfQt9; i = i + 1) {
        cout << RUziI9nXoTa[i] << endl;
    }
    return 0;
}

