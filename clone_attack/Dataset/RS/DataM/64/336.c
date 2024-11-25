int main () {
    double  xPhlop1 [100];
    int JEKRO1Ae [(768 - 668)];
    int b [100];
    int vLZbatwzyNh [(79 - 59)];
    int eEC5UWa [20];
    int zSG1EI3 [20];
    double  VkyhAvpE;
    int VOU4iZ3IS, dJSsqze9mI, k, w8GMW1v, Ur5KNF6Qkqv2, aKLedDJAIbM;
    cin >> w8GMW1v;
    for (VOU4iZ3IS = (355 - 354); w8GMW1v >= VOU4iZ3IS; VOU4iZ3IS++)
        cin >> vLZbatwzyNh[VOU4iZ3IS] >> eEC5UWa[VOU4iZ3IS] >> zSG1EI3[VOU4iZ3IS];
    Ur5KNF6Qkqv2 = (53 - 53);
    for (VOU4iZ3IS = (725 - 724); w8GMW1v > VOU4iZ3IS; VOU4iZ3IS++)
        for (dJSsqze9mI = VOU4iZ3IS; w8GMW1v >= dJSsqze9mI; dJSsqze9mI++)
            if (!(dJSsqze9mI == VOU4iZ3IS)) {
                Ur5KNF6Qkqv2++;
                JEKRO1Ae[Ur5KNF6Qkqv2] = VOU4iZ3IS;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                b[Ur5KNF6Qkqv2] = dJSsqze9mI;
                xPhlop1[Ur5KNF6Qkqv2] = sqrt ((vLZbatwzyNh[VOU4iZ3IS] - vLZbatwzyNh[dJSsqze9mI]) * (vLZbatwzyNh[VOU4iZ3IS] - vLZbatwzyNh[dJSsqze9mI]) + (eEC5UWa[VOU4iZ3IS] - eEC5UWa[dJSsqze9mI]) * (eEC5UWa[VOU4iZ3IS] - eEC5UWa[dJSsqze9mI]) + (zSG1EI3[VOU4iZ3IS] - zSG1EI3[dJSsqze9mI]) * (zSG1EI3[VOU4iZ3IS] - zSG1EI3[dJSsqze9mI]));
            }
    {
        VOU4iZ3IS = 1;
        while (VOU4iZ3IS <= Ur5KNF6Qkqv2) {
            for (dJSsqze9mI = 1; dJSsqze9mI < Ur5KNF6Qkqv2; dJSsqze9mI++) {
                if (xPhlop1[dJSsqze9mI] < xPhlop1[dJSsqze9mI + 1]) {
                    VkyhAvpE = xPhlop1[dJSsqze9mI];
                    xPhlop1[dJSsqze9mI] = xPhlop1[dJSsqze9mI + 1];
                    xPhlop1[dJSsqze9mI + 1] = VkyhAvpE;
                    aKLedDJAIbM = JEKRO1Ae[dJSsqze9mI];
                    JEKRO1Ae[dJSsqze9mI] = JEKRO1Ae[dJSsqze9mI + 1];
                    JEKRO1Ae[dJSsqze9mI + 1] = aKLedDJAIbM;
                    aKLedDJAIbM = b[dJSsqze9mI];
                    b[dJSsqze9mI] = b[dJSsqze9mI + 1];
                    b[dJSsqze9mI + 1] = aKLedDJAIbM;
                };
            }
            VOU4iZ3IS++;
        };
    }
    for (VOU4iZ3IS = 1; VOU4iZ3IS <= Ur5KNF6Qkqv2; VOU4iZ3IS++) {
        cout << "(" << vLZbatwzyNh[JEKRO1Ae[VOU4iZ3IS]] << "," << eEC5UWa[JEKRO1Ae[VOU4iZ3IS]] << "," << zSG1EI3[JEKRO1Ae[VOU4iZ3IS]] << ")-(" << vLZbatwzyNh[b[VOU4iZ3IS]] << "," << eEC5UWa[b[VOU4iZ3IS]] << "," << zSG1EI3[b[VOU4iZ3IS]] << ")=";
        cout << endl;
        printf ("%.2f", xPhlop1[VOU4iZ3IS]);
    }
    return 0;
}

