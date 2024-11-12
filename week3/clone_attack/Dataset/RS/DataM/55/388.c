int main () {
    double  ACo5cqxY = (691 - 691), TpLtKTVsr65 = 0, bMD0RAtsq1Si = 0;
    char hEmt1fay4Zr [100] = "0";
    int b [100];
    char A6vkIiOZ [100] = "0";
    int tpudBLa4vq;
    tpudBLa4vq = strlen (hEmt1fay4Zr);
    int DGSOIpJas = 0, Y2sQdrt5JW = 0, Bv2gjJC1NoQp = bMD0RAtsq1Si, tAJPjWZ1DV = TpLtKTVsr65;
    int NDZaqQSjWF = strlen (A6vkIiOZ);
    cin >> ACo5cqxY;
    cin >> hEmt1fay4Zr[0];
    for (int EvJbKlwtWR86 = 1;
    100 > EvJbKlwtWR86; EvJbKlwtWR86++) {
        if ((hEmt1fay4Zr[EvJbKlwtWR86] = getchar ()) == ' ')
            break;
    }
    cin >> TpLtKTVsr65;
    {
        int j = 0;
        while ((tpudBLa4vq - 1) > j) {
            b[j] = hEmt1fay4Zr[j];
            if (47 < b[j] && b[j] < 58)
                bMD0RAtsq1Si = bMD0RAtsq1Si + (b[j] - 48) * pow (ACo5cqxY, (tpudBLa4vq - j - 2));
            if (64 < b[j] && b[j] < 91)
                bMD0RAtsq1Si = bMD0RAtsq1Si + (b[j] - 55) * pow (ACo5cqxY, (tpudBLa4vq - j - 2));
            if (96 < b[j] && b[j] < 123)
                bMD0RAtsq1Si = bMD0RAtsq1Si + (b[j] - 87) * pow (ACo5cqxY, (tpudBLa4vq - j - 2));
            j = j + 1;
        };
    }
    do {
        DGSOIpJas = Bv2gjJC1NoQp % tAJPjWZ1DV;
        Bv2gjJC1NoQp = Bv2gjJC1NoQp / tAJPjWZ1DV;
        if (DGSOIpJas >= 0 && DGSOIpJas < 10)
            A6vkIiOZ[Y2sQdrt5JW] = DGSOIpJas +48;
        if (DGSOIpJas >= 10 && DGSOIpJas < 37)
            A6vkIiOZ[Y2sQdrt5JW] = DGSOIpJas +55;
        Y2sQdrt5JW++;
    }
    while (Bv2gjJC1NoQp != 0);
    for (int G4WcUrsM = 1;
    G4WcUrsM <= NDZaqQSjWF; G4WcUrsM = G4WcUrsM +1) {
        cout << A6vkIiOZ[NDZaqQSjWF -G4WcUrsM];
    }
    return 0;
}

