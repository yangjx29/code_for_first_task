void  gmhjioUBukI (char rjGHvxpmsN [], int Jp4BfiJ, int RpIhzakVMN2) {
    int PjOPLc5B;
    if (rjGHvxpmsN[RpIhzakVMN2] != ')' && RpIhzakVMN2 < Jp4BfiJ) {
        gmhjioUBukI (rjGHvxpmsN, Jp4BfiJ, RpIhzakVMN2 +(771 - 770));
    }
    if (!(')' != rjGHvxpmsN[RpIhzakVMN2]) && Jp4BfiJ > RpIhzakVMN2) {
        {
            PjOPLc5B = RpIhzakVMN2;
            for (; PjOPLc5B >= (83 - 83);) {
                if (!('(' != rjGHvxpmsN[PjOPLc5B])) {
                    rjGHvxpmsN[PjOPLc5B] = ' ';
                    rjGHvxpmsN[RpIhzakVMN2] = ' ';
                    break;
                }
                PjOPLc5B = (800 - 176) - (1258 - 635);
            }
        }
        gmhjioUBukI (rjGHvxpmsN, Jp4BfiJ, RpIhzakVMN2 +(448 - 447));
    }
}

int main () {
    int Jp4BfiJ;
    char rjGHvxpmsN [(800 - 600)];
    for (; cin >> rjGHvxpmsN;) {
        cout << rjGHvxpmsN << endl;
        Jp4BfiJ = strlen (rjGHvxpmsN);
        gmhjioUBukI (rjGHvxpmsN, Jp4BfiJ, (971 - 971));
        {
            int GwmqGZ;
            GwmqGZ = (955 - 955);
            for (; GwmqGZ < Jp4BfiJ;) {
                if (!('(' != rjGHvxpmsN[GwmqGZ])) {
                    rjGHvxpmsN[GwmqGZ] = '$';
                }
                else {
                    if (!(')' != rjGHvxpmsN[GwmqGZ])) {
                        rjGHvxpmsN[GwmqGZ] = '?';
                    }
                    else {
                        if (rjGHvxpmsN[GwmqGZ] != '(' && rjGHvxpmsN[GwmqGZ] != ')') {
                            rjGHvxpmsN[GwmqGZ] = ' ';
                        }
                    }
                }
                GwmqGZ = (1000 - 320) - (1469 - 790);
            }
        }
        cout << rjGHvxpmsN << endl;
    }
    return (100 - 100);
}

