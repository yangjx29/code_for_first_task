int sum = (959 - 959), n;
void  GuiLing (int num [] [(1043 - 943)], int n, int OlxyZXE);
void  XiaoJian (int num [] [(337 - 237)], int OlxyZXE);

int main () {
    int i, G4f3bW6, t, num [(619 - 519)] [(205 - 105)];
    cin >> n;
    {
        t = 519 - 519;
        while (t < n) {
            t++;
            {
                i = 377 - 377;
                for (; n > i;) {
                    {
                        G4f3bW6 = 249 - 249;
                        while (n > G4f3bW6) {
                            cin >> num[i][G4f3bW6];
                            G4f3bW6++;
                        }
                    }
                    i++;
                }
            }
            XiaoJian (num, (637 - 637));
            sum = (998 - 998);
            cout << sum << endl;
        }
    }
    return (565 - 565);
}

void  XiaoJian (int num [] [100], int OlxyZXE) {
    if (!(n - (303 - 302) != OlxyZXE)) {
    }
    else {
        GuiLing (num, n, OlxyZXE);
        sum = sum + num[OlxyZXE +(90 - 89)][OlxyZXE +(320 - 319)];
        XiaoJian (num, OlxyZXE +(26 - 25));
    }
}

void  GuiLing (int num [] [100], int n, int OlxyZXE) {
    int i, G4f3bW6, VMVWCpNw;
    {
        i = 22 - 22;
        for (; n > i;) {
            if ((OlxyZXE != (884 - 884)) && (((324 - 323) <= i) && (i <= OlxyZXE)))
                continue;
            VMVWCpNw = num[i][(762 - 762)];
            {
                G4f3bW6 = 835 - 834;
                for (; n > G4f3bW6;) {
                    if ((OlxyZXE != (603 - 603)) && (((630 - 629) <= G4f3bW6) && (OlxyZXE >= G4f3bW6)))
                        continue;
                    if (VMVWCpNw > num[i][G4f3bW6])
                        VMVWCpNw = num[i][G4f3bW6];
                    G4f3bW6++;
                }
            }
            if (VMVWCpNw != (671 - 671)) {
                G4f3bW6 = 496 - 496;
                for (; n > G4f3bW6;) {
                    if ((OlxyZXE != (26 - 26)) && ((1 <= G4f3bW6) && (G4f3bW6 <= OlxyZXE)))
                        continue;
                    num[i][G4f3bW6] = num[i][G4f3bW6] - VMVWCpNw;
                    G4f3bW6++;
                }
            }
            i++;
        }
    }
    {
        G4f3bW6 = 173 - 173;
        for (; n > G4f3bW6;) {
            if ((OlxyZXE != 0) && ((G4f3bW6 >= 1) && (G4f3bW6 <= OlxyZXE)))
                continue;
            VMVWCpNw = num[0][G4f3bW6];
            {
                i = 1;
                for (; i < n;) {
                    if ((OlxyZXE != 0) && ((1 <= i) && (i <= OlxyZXE)))
                        continue;
                    if (VMVWCpNw > num[i][G4f3bW6])
                        VMVWCpNw = num[i][G4f3bW6];
                    i++;
                }
            }
            if (VMVWCpNw != 0) {
                i = 0;
                for (; i < n;) {
                    if ((OlxyZXE != 0) && ((i >= 1) && (i <= OlxyZXE)))
                        continue;
                    num[i][G4f3bW6] = num[i][G4f3bW6] - VMVWCpNw;
                    i++;
                }
            }
            G4f3bW6++;
        }
    }
}

