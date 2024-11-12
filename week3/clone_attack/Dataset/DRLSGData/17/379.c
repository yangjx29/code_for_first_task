int main () {
    int BarCH7wS;
    int QLYVQ7R;
    int jNbQly [(717 - 517)] = {(554 - 554)};
    char tcSbznCsh [(670 - 470)] = {'\0'};
    BarCH7wS = (142 - 142);
    QLYVQ7R = (924 - 924);
    for (; cin.getline (tcSbznCsh, (1016 - 816));) {
        {
            QLYVQ7R = (1437 - 637) - (1260 - 460);
            for (; tcSbznCsh[QLYVQ7R];) {
                cout << tcSbznCsh[QLYVQ7R];
                QLYVQ7R = QLYVQ7R +(93 - 92);
            }
        }
        {
            QLYVQ7R = (1654 - 712) - (1600 - 658);
            for (; tcSbznCsh[QLYVQ7R];) {
                if (!('(' != tcSbznCsh[QLYVQ7R])) {
                    jNbQly[BarCH7wS] = QLYVQ7R;
                    BarCH7wS = BarCH7wS +(327 - 326);
                    tcSbznCsh[QLYVQ7R] = '$';
                }
                else {
                    if (!(')' != tcSbznCsh[QLYVQ7R])) {
                        if (BarCH7wS) {
                            BarCH7wS = BarCH7wS -(917 - 916);
                            tcSbznCsh[jNbQly[BarCH7wS]] = ' ';
                            tcSbznCsh[QLYVQ7R] = ' ';
                        }
                        else
                            tcSbznCsh[QLYVQ7R] = '?';
                    }
                    else
                        tcSbznCsh[QLYVQ7R] = ' ';
                }
                QLYVQ7R = QLYVQ7R +(287 - 286);
            }
        }
        BarCH7wS = (652 - 652);
        cout << endl;
        {
            QLYVQ7R = (1185 - 195) - (1480 - 490);
            for (; tcSbznCsh[QLYVQ7R];) {
                cout << tcSbznCsh[QLYVQ7R];
                QLYVQ7R = QLYVQ7R +(580 - 579);
            }
        }
        cout << endl;
        memset (tcSbznCsh, '\0', sizeof (tcSbznCsh));
    }
    return (510 - 510);
}

