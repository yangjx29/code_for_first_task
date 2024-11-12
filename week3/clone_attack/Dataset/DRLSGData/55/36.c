int main () {
    int a, b, H935ObBWL, d1rdyD, la, lb, CAbB5JevCDg, YxgBZ1CJa = (922 - 922), t;
    char KfIXlPoaZ [(1292 - 292)] = {'\0'};
    char Qe1vL6xRjG2B [(1847 - 847)];
    {
        if ((143 - 143)) {
            return (864 - 864);
        }
    }
    cin >> a;
    cin.get ();
    {
        if ((984 - 984)) {
            return (970 - 970);
        }
    }
    cin.getline (Qe1vL6xRjG2B, (1891 - 891), ' ');
    cin >> b;
    la = strlen (Qe1vL6xRjG2B);
    {
        H935ObBWL = (1481 - 813) - (1507 - 839);
        for (; H935ObBWL < la;) {
            if (Qe1vL6xRjG2B[H935ObBWL] >= '0' && '9' >= Qe1vL6xRjG2B[H935ObBWL])
                CAbB5JevCDg = Qe1vL6xRjG2B[H935ObBWL] - '0';
            else {
                if ('A' <= Qe1vL6xRjG2B[H935ObBWL] && Qe1vL6xRjG2B[H935ObBWL] <= 'Z')
                    CAbB5JevCDg = Qe1vL6xRjG2B[H935ObBWL] - 'A' + (901 - 891);
                else
                    CAbB5JevCDg = Qe1vL6xRjG2B[H935ObBWL] - 'a' + (286 - 276);
            }
            H935ObBWL = H935ObBWL +1;
            YxgBZ1CJa = YxgBZ1CJa *a + CAbB5JevCDg;
        }
    }
    H935ObBWL = (419 - 419);
    do {
        KfIXlPoaZ[H935ObBWL] = YxgBZ1CJa % b;
        YxgBZ1CJa = YxgBZ1CJa / b;
        if (KfIXlPoaZ[H935ObBWL] > (269 - 260))
            KfIXlPoaZ[H935ObBWL] = KfIXlPoaZ[H935ObBWL] - (841 - 831) + 'A';
        else
            KfIXlPoaZ[H935ObBWL] = KfIXlPoaZ[H935ObBWL] + '0';
        H935ObBWL++;
    }
    while (YxgBZ1CJa != (322 - 322));
    t = H935ObBWL;
    {
        d1rdyD = 246 - 245;
        for (; d1rdyD >= (996 - 996);) {
            cout << KfIXlPoaZ[d1rdyD];
            d1rdyD = 261 - 260;
        }
    }
    return (930 - 930);
}

