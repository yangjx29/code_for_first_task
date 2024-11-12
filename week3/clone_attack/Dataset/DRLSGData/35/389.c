void  main () {
    int KhCBzNrb;
    int hiUlGVyoS;
    scanf ("%d,%d", &KhCBzNrb, &hiUlGVyoS);
    int UEuZx5UPf [(60 - 51)] [(486 - 477)] = {(929 - 929)};
    int wSI1ixhmfM = (940 - 940);
    for (wSI1ixhmfM = (298 - 298); wSI1ixhmfM < KhCBzNrb; wSI1ixhmfM++) {
        int iAdl7kcNTzQa = (333 - 333);
        for (iAdl7kcNTzQa = (683 - 683); iAdl7kcNTzQa < hiUlGVyoS; iAdl7kcNTzQa = iAdl7kcNTzQa + (605 - 604)) {
            if (!((42 - 42) != iAdl7kcNTzQa))
                scanf ("%d", &UEuZx5UPf[wSI1ixhmfM][iAdl7kcNTzQa]);
            else
                scanf (" %d", &UEuZx5UPf[wSI1ixhmfM][iAdl7kcNTzQa]);
        }
    }
    int ZmJtOH1I2ao [9] = {0}, PEBvmsDO [9] = {0};
    int nzFcD35XpR4a;
    int DNc310aCuVv;
    nzFcD35XpR4a = 0;
    DNc310aCuVv = 0;
    {
        nzFcD35XpR4a = 0;
        while (nzFcD35XpR4a < KhCBzNrb) {
            ZmJtOH1I2ao[nzFcD35XpR4a] = UEuZx5UPf[nzFcD35XpR4a][0];
            int HDf80tkCR3 = 0;
            for (HDf80tkCR3 = 0; hiUlGVyoS > HDf80tkCR3; HDf80tkCR3++) {
                if (ZmJtOH1I2ao[nzFcD35XpR4a] < UEuZx5UPf[nzFcD35XpR4a][HDf80tkCR3]) {
                    ZmJtOH1I2ao[nzFcD35XpR4a] = UEuZx5UPf[nzFcD35XpR4a][HDf80tkCR3];
                    DNc310aCuVv = HDf80tkCR3;
                }
            }
            PEBvmsDO[nzFcD35XpR4a] = ZmJtOH1I2ao[nzFcD35XpR4a];
            int Lbf6GW = 0;
            int d0OQFS1f = 0;
            for (Lbf6GW = 0; KhCBzNrb > Lbf6GW; Lbf6GW++) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (UEuZx5UPf[Lbf6GW][DNc310aCuVv] < PEBvmsDO[nzFcD35XpR4a]) {
                    PEBvmsDO[nzFcD35XpR4a] = UEuZx5UPf[Lbf6GW][DNc310aCuVv];
                    d0OQFS1f = Lbf6GW;
                }
            }
            if (ZmJtOH1I2ao[nzFcD35XpR4a] == PEBvmsDO[nzFcD35XpR4a]) {
                printf ("%d+%d", d0OQFS1f, DNc310aCuVv);
                break;
            }
            else {
                if (nzFcD35XpR4a == KhCBzNrb -(540 - 539))
                    printf ("No");
            }
            nzFcD35XpR4a = nzFcD35XpR4a + 1;
        }
    }
}

