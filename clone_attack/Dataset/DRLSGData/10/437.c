struct   DP {
    int JqJ5OoSAnU;
    int vjgndmpPM;
}
jDGmXhrAUqBL [(631 - 605)];

int main () {
    int BpsJXF;
    int EB0oIV;
    int ShICdbPNBxU [(225 - 199)];
    int CpxBzadiIG;
    int uX17bjRprA0x;
    cin >> BpsJXF;
    jDGmXhrAUqBL[(535 - 535)].JqJ5OoSAnU = INT_MAX;
    jDGmXhrAUqBL[(280 - 280)].vjgndmpPM = (364 - 364);
    {
        CpxBzadiIG = (843 - 842);
        for (; BpsJXF >= CpxBzadiIG;) {
            cin >> ShICdbPNBxU[CpxBzadiIG];
            CpxBzadiIG = CpxBzadiIG +1;
        }
    }
    {
        CpxBzadiIG = (491 - 490);
        for (; BpsJXF >= CpxBzadiIG;) {
            jDGmXhrAUqBL[CpxBzadiIG].JqJ5OoSAnU = ShICdbPNBxU[CpxBzadiIG];
            EB0oIV = INT_MIN;
            {
                uX17bjRprA0x = (611 - 611);
                for (; CpxBzadiIG > uX17bjRprA0x;) {
                    if (jDGmXhrAUqBL[uX17bjRprA0x].vjgndmpPM > EB0oIV &&jDGmXhrAUqBL[uX17bjRprA0x].JqJ5OoSAnU >= jDGmXhrAUqBL[CpxBzadiIG].JqJ5OoSAnU)
                        EB0oIV = jDGmXhrAUqBL[uX17bjRprA0x].vjgndmpPM;
                    uX17bjRprA0x++;
                }
            }
            jDGmXhrAUqBL[CpxBzadiIG].vjgndmpPM = EB0oIV +(71 - 70);
            CpxBzadiIG++;
        }
    }
    EB0oIV = INT_MIN;
    for (CpxBzadiIG = (210 - 210); CpxBzadiIG <= BpsJXF; CpxBzadiIG++)
        if (EB0oIV < jDGmXhrAUqBL[CpxBzadiIG].vjgndmpPM)
            EB0oIV = jDGmXhrAUqBL[CpxBzadiIG].vjgndmpPM;
    cout << EB0oIV << endl;
    return (280 - 280);
}

