int main () {
    char pQqDNfn [100];
    char qSq2tmDj [100], HSRJAUKI [100];
    char rdcmXC61RPx3 [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int hVnCAlofXjBp, GY1NG3I;
    int shiIFAWqtz0, zIT0sqhAL;
    int VtGqM2jASY, HRSkfdiZt, JLc3vTIwM1, yb;
    scanf ("%d", &hVnCAlofXjBp);
    for (GY1NG3I = 0; hVnCAlofXjBp > GY1NG3I; GY1NG3I = GY1NG3I +1) {
        scanf ("%s\n", qSq2tmDj);
        scanf ("%s", HSRJAUKI);
        VtGqM2jASY = 0;
        for (shiIFAWqtz0 = 0; qSq2tmDj[shiIFAWqtz0]; shiIFAWqtz0 = shiIFAWqtz0 + 1) {
            VtGqM2jASY = VtGqM2jASY +1;
            pQqDNfn[shiIFAWqtz0] = '0';
        }
        HRSkfdiZt = 0;
        for (shiIFAWqtz0 = 0; HSRJAUKI[shiIFAWqtz0]; shiIFAWqtz0 = shiIFAWqtz0 + 1)
            HRSkfdiZt = HRSkfdiZt +1;
        {
            shiIFAWqtz0 = VtGqM2jASY -1;
            while (shiIFAWqtz0 >= VtGqM2jASY -HRSkfdiZt) {
                HSRJAUKI[shiIFAWqtz0] = HSRJAUKI[shiIFAWqtz0 - VtGqM2jASY +HRSkfdiZt];
                shiIFAWqtz0 = shiIFAWqtz0 - 1;
            }
        }
        for (shiIFAWqtz0 = 0; shiIFAWqtz0 < VtGqM2jASY -HRSkfdiZt; shiIFAWqtz0 = shiIFAWqtz0 + 1)
            HSRJAUKI[shiIFAWqtz0] = '0';
        for (shiIFAWqtz0 = VtGqM2jASY -1; 0 <= shiIFAWqtz0; shiIFAWqtz0 = shiIFAWqtz0 - 1) {
            JLc3vTIwM1 = qSq2tmDj[shiIFAWqtz0] - '0';
            yb = HSRJAUKI[shiIFAWqtz0] - '0';
            if (JLc3vTIwM1 -yb >= 0)
                pQqDNfn[shiIFAWqtz0] = rdcmXC61RPx3[JLc3vTIwM1 -yb];
            if (0 > JLc3vTIwM1 -yb) {
                int I3Qa9T, vJOA4LK, VGuamsXPfcn, j0dzfIA9Xt;
                pQqDNfn[shiIFAWqtz0] = rdcmXC61RPx3[JLc3vTIwM1 -yb + 10];
                for (I3Qa9T = shiIFAWqtz0 - 1; 0 <= I3Qa9T; I3Qa9T = I3Qa9T -1) {
                    if (qSq2tmDj[I3Qa9T] != '0') {
                        vJOA4LK = I3Qa9T;
                        break;
                    }
                }
                VGuamsXPfcn = qSq2tmDj[vJOA4LK] - '0';
                qSq2tmDj[vJOA4LK] = rdcmXC61RPx3[VGuamsXPfcn -1];
                {
                    j0dzfIA9Xt = shiIFAWqtz0 - 1;
                    while (j0dzfIA9Xt > vJOA4LK) {
                        qSq2tmDj[j0dzfIA9Xt] = '9';
                        j0dzfIA9Xt = j0dzfIA9Xt - 1;
                    }
                }
            }
        }
        for (shiIFAWqtz0 = 0; shiIFAWqtz0 < VtGqM2jASY -1; shiIFAWqtz0 = shiIFAWqtz0 + 1) {
            zIT0sqhAL = VtGqM2jASY -1;
            if (pQqDNfn[shiIFAWqtz0] != '0') {
                zIT0sqhAL = shiIFAWqtz0;
                break;
            }
        }
        for (shiIFAWqtz0 = zIT0sqhAL; shiIFAWqtz0 < VtGqM2jASY -1; shiIFAWqtz0 = shiIFAWqtz0 + 1)
            printf ("%c", pQqDNfn[shiIFAWqtz0]);
        printf ("%c\n", pQqDNfn[VtGqM2jASY -1]);
    }
    return 0;
}

