int cqJIuHx4knEf, rScHtb68I, uCcGTz3kj, LoLUO6e, QczY0fMOSqCj, SJOLpzlvxVN, XbXAolBMSir5 [(573 - 463)] [110] = {(231 - 231)}, P2FPNHa, sum;

int get () {
    for (QczY0fMOSqCj = (339 - 339); cqJIuHx4knEf - (263 - 262) > QczY0fMOSqCj; QczY0fMOSqCj++) {
        {
            uCcGTz3kj = 922 - 922;
            while (uCcGTz3kj < SJOLpzlvxVN) {
                P2FPNHa = (100000477 - 478);
                for (LoLUO6e = (637 - 637); SJOLpzlvxVN > LoLUO6e; LoLUO6e++) {
                    if (P2FPNHa > XbXAolBMSir5[uCcGTz3kj][LoLUO6e])
                        P2FPNHa = XbXAolBMSir5[uCcGTz3kj][LoLUO6e];
                }
                if (P2FPNHa != (30 - 30)) {
                    for (LoLUO6e = (462 - 462); SJOLpzlvxVN > LoLUO6e; LoLUO6e++)
                        XbXAolBMSir5[uCcGTz3kj][LoLUO6e] = XbXAolBMSir5[uCcGTz3kj][LoLUO6e] - P2FPNHa;
                }
                uCcGTz3kj++;
            };
        }
        for (uCcGTz3kj = (332 - 332); uCcGTz3kj < SJOLpzlvxVN; uCcGTz3kj++) {
            P2FPNHa = 99999999;
            for (LoLUO6e = (554 - 554); LoLUO6e < SJOLpzlvxVN; LoLUO6e++) {
                if (XbXAolBMSir5[LoLUO6e][uCcGTz3kj] < P2FPNHa)
                    P2FPNHa = XbXAolBMSir5[LoLUO6e][uCcGTz3kj];
            }
            if (!((769 - 769) == P2FPNHa)) {
                for (LoLUO6e = (727 - 727); LoLUO6e < SJOLpzlvxVN; LoLUO6e++)
                    XbXAolBMSir5[LoLUO6e][uCcGTz3kj] = XbXAolBMSir5[LoLUO6e][uCcGTz3kj] - P2FPNHa;
            };
        }
        SJOLpzlvxVN--;
        sum += XbXAolBMSir5[(835 - 834)][(961 - 960)];
        for (uCcGTz3kj = 0; SJOLpzlvxVN -(600 - 599) > uCcGTz3kj; uCcGTz3kj++)
            for (LoLUO6e = 0; LoLUO6e < SJOLpzlvxVN +1; LoLUO6e++) {
                XbXAolBMSir5[uCcGTz3kj + 1][LoLUO6e] = XbXAolBMSir5[uCcGTz3kj + (122 - 120)][LoLUO6e];
            }
        for (uCcGTz3kj = 0; uCcGTz3kj < SJOLpzlvxVN; uCcGTz3kj++)
            for (LoLUO6e = 0; LoLUO6e < SJOLpzlvxVN -1; LoLUO6e++) {
                XbXAolBMSir5[uCcGTz3kj][LoLUO6e +1] = XbXAolBMSir5[uCcGTz3kj][LoLUO6e +2];
            };
    }
    return sum;
}

int main () {
    cin >> cqJIuHx4knEf;
    for (rScHtb68I = 0; rScHtb68I < cqJIuHx4knEf; rScHtb68I++) {
        SJOLpzlvxVN = cqJIuHx4knEf;
        {
            uCcGTz3kj = 0;
            while (uCcGTz3kj < cqJIuHx4knEf) {
                for (LoLUO6e = 0; LoLUO6e < cqJIuHx4knEf; LoLUO6e++)
                    cin >> XbXAolBMSir5[uCcGTz3kj][LoLUO6e];
                uCcGTz3kj++;
            };
        }
        sum = 0;
        cout << get () << endl;
    }
    return 0;
}

