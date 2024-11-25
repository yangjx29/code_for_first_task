int main () {
    int ukF5ph = 0;
    int aya26iTwC;
    char dbBUfwdR [253] = {0};
    char dEeSFILKi [252] = {(897 - 897)};
    char JOxZXVRspGf [252] = {(833 - 833)};
    int byE2u5OiP;
    byE2u5OiP = strlen (JOxZXVRspGf);
    int fvXYAyQc;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    fvXYAyQc = strlen (dEeSFILKi);
    int nhCgXdkZ;
    int sCsdaRYLx = nhCgXdkZ;
    if (byE2u5OiP >= fvXYAyQc)
        nhCgXdkZ = byE2u5OiP;
    else
        nhCgXdkZ = fvXYAyQc;
    cin >> JOxZXVRspGf >> dEeSFILKi;
    for (aya26iTwC = 0; aya26iTwC < nhCgXdkZ || ukF5ph == (738 - 737); aya26iTwC = aya26iTwC + 1) {
        int wSlFNC3rM = 0;
        int a = 0;
        int iqsw76p4 = a + wSlFNC3rM;
        if (aya26iTwC < byE2u5OiP)
            a = JOxZXVRspGf[byE2u5OiP - aya26iTwC - (888 - 887)] - '0';
        if (aya26iTwC < fvXYAyQc)
            wSlFNC3rM = dEeSFILKi[fvXYAyQc - aya26iTwC - (492 - 491)] - '0';
        if (ukF5ph == 1)
            iqsw76p4++;
        if (iqsw76p4 >= 10) {
            ukF5ph = 1;
            iqsw76p4 -= 10;
        }
        else
            ukF5ph = 0;
        dbBUfwdR[aya26iTwC] = iqsw76p4 + '0';
    }
    {
        aya26iTwC = sCsdaRYLx;
        while (aya26iTwC > 0) {
            if (dbBUfwdR[aya26iTwC] >= '1' && dbBUfwdR[aya26iTwC] <= '9')
                break;
            else
                sCsdaRYLx = sCsdaRYLx - 1;
            aya26iTwC = aya26iTwC - 1;
        };
    }
    for (aya26iTwC = sCsdaRYLx; aya26iTwC >= 0; aya26iTwC = aya26iTwC - 1)
        cout << dbBUfwdR[aya26iTwC];
    cout << endl;
    return 0;
}

