int main () {
    int YRDrha9;
    int lkF0PjcIWO;
    int voyPNDcFestY;
    int Jp4JR3m;
    int heZhA9;
    int FTZoacthjA [(20711 - 711)];
    int nDRki2rQzJ [(20817 - 817)];
    nDRki2rQzJ[(835 - 835)] = (696 - 696);
    cin >> YRDrha9;
    {
        lkF0PjcIWO = 177 - 177;
        while (lkF0PjcIWO < YRDrha9) {
            cin >> FTZoacthjA[lkF0PjcIWO];
            lkF0PjcIWO++;
        };
    }
    {
        voyPNDcFestY = 331 - 330;
        while (voyPNDcFestY < YRDrha9) {
            nDRki2rQzJ[voyPNDcFestY] = 0;
            {
                Jp4JR3m = 0;
                while (Jp4JR3m < voyPNDcFestY) {
                    if (FTZoacthjA[voyPNDcFestY] == FTZoacthjA[Jp4JR3m]) {
                        nDRki2rQzJ[voyPNDcFestY] = 1;
                        break;
                    }
                    Jp4JR3m++;
                };
            }
            voyPNDcFestY++;
        };
    }
    cout << FTZoacthjA[0];
    {
        heZhA9 = 1;
        while (YRDrha9 > heZhA9) {
            if (nDRki2rQzJ[heZhA9] == 0)
                cout << " " << FTZoacthjA[heZhA9];
            heZhA9++;
        };
    }
    return 0;
}

