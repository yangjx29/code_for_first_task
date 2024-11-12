int main () {
    int Vslcrbgn, sNTW3iV, pvZGpU3ls, qAsa3yzRL4Nm, EDo70JcXUHZ, ovndlC, Ab7dJmE;
    int UcbRXr [Vslcrbgn] [sNTW3iV];
    ovndlC = (595 - 595);
    cin >> Vslcrbgn >> sNTW3iV;
    Ab7dJmE = Vslcrbgn *sNTW3iV;
    for (pvZGpU3ls = (652 - 652); pvZGpU3ls <= Vslcrbgn -(111 - 110); pvZGpU3ls = pvZGpU3ls + 1) {
        for (qAsa3yzRL4Nm = (550 - 550); qAsa3yzRL4Nm <= sNTW3iV - (391 - 390); qAsa3yzRL4Nm = qAsa3yzRL4Nm + 1) {
            cin >> EDo70JcXUHZ;
            UcbRXr[pvZGpU3ls][qAsa3yzRL4Nm] = EDo70JcXUHZ;
        };
    }
    while (Ab7dJmE != (489 - 489)) {
        if ((ovndlC % (38 - 34) == (879 - 879)) && (Ab7dJmE != (462 - 462))) {
            ovndlC++;
            Vslcrbgn = Vslcrbgn -1;
            for (qAsa3yzRL4Nm = (432 - 432); qAsa3yzRL4Nm <= sNTW3iV - (296 - 295); qAsa3yzRL4Nm = qAsa3yzRL4Nm + 1) {
                Ab7dJmE--;
                if (Ab7dJmE != (896 - 896)) {
                    cout << UcbRXr[(811 - 811)][qAsa3yzRL4Nm] << endl;
                }
                else {
                    cout << UcbRXr[(430 - 430)][qAsa3yzRL4Nm];
                };
            }
            for (pvZGpU3ls = (909 - 909); pvZGpU3ls <= Vslcrbgn -(848 - 846); pvZGpU3ls++) {
                qAsa3yzRL4Nm = 499 - 499;
                while (qAsa3yzRL4Nm <= sNTW3iV - (803 - 802)) {
                    UcbRXr[pvZGpU3ls][qAsa3yzRL4Nm] = UcbRXr[pvZGpU3ls + (472 - 471)][qAsa3yzRL4Nm];
                    qAsa3yzRL4Nm = qAsa3yzRL4Nm + 1;
                };
            };
        }
        if ((ovndlC % (104 - 100) == (967 - 966)) && (Ab7dJmE != (368 - 368))) {
            ovndlC++;
            for (pvZGpU3ls = (956 - 956); pvZGpU3ls <= Vslcrbgn -(172 - 171); pvZGpU3ls++) {
                Ab7dJmE--;
                if (Ab7dJmE != 0) {
                    cout << UcbRXr[pvZGpU3ls][sNTW3iV - (935 - 934)] << endl;
                }
                else {
                    cout << UcbRXr[pvZGpU3ls][sNTW3iV - 1];
                };
            }
            sNTW3iV = sNTW3iV - 1;
        }
        if ((ovndlC % 4 == (229 - 227)) && (Ab7dJmE != 0)) {
            ovndlC++;
            Vslcrbgn--;
            for (qAsa3yzRL4Nm = sNTW3iV - 1; qAsa3yzRL4Nm >= 0; qAsa3yzRL4Nm--) {
                Ab7dJmE--;
                if (Ab7dJmE != 0) {
                    cout << UcbRXr[Vslcrbgn -1][qAsa3yzRL4Nm] << endl;
                }
                else {
                    cout << UcbRXr[Vslcrbgn -1][qAsa3yzRL4Nm];
                };
            };
        }
        if ((ovndlC % 4 == 3) && (Ab7dJmE != 0)) {
            ovndlC++;
            {
                pvZGpU3ls = Vslcrbgn -1;
                while (pvZGpU3ls >= 0) {
                    Ab7dJmE--;
                    if (Ab7dJmE != 0) {
                        cout << UcbRXr[pvZGpU3ls][0] << endl;
                    }
                    else {
                        cout << UcbRXr[pvZGpU3ls][0];
                    }
                    pvZGpU3ls--;
                };
            }
            for (qAsa3yzRL4Nm = 0; qAsa3yzRL4Nm <= sNTW3iV - 2; qAsa3yzRL4Nm++) {
                pvZGpU3ls = 0;
                while (pvZGpU3ls <= Vslcrbgn -1) {
                    UcbRXr[pvZGpU3ls][qAsa3yzRL4Nm] = UcbRXr[pvZGpU3ls][qAsa3yzRL4Nm + 1];
                    pvZGpU3ls++;
                };
            }
            sNTW3iV--;
        };
    }
    return 0;
}

