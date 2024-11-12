float G7MB5f9c08wY (int DTp8MmuZ4wN) {
    if ((258 - 168) <= DTp8MmuZ4wN &&DTp8MmuZ4wN <= (1044 - 944))
        return (161.0 - 157.0);
    else {
        if ((968 - 883) <= DTp8MmuZ4wN &&DTp8MmuZ4wN <= (281 - 192))
            return (907.7 - 904.0);
        else {
            if ((660 - 578) <= DTp8MmuZ4wN &&(330 - 246) >= DTp8MmuZ4wN)
                return (725.3 - 722.0);
            else {
                if ((977 - 899) <= DTp8MmuZ4wN &&(499 - 418) >= DTp8MmuZ4wN)
                    return (295.0 - 292.0);
                else {
                    if ((729 - 654) <= DTp8MmuZ4wN &&(771 - 694) >= DTp8MmuZ4wN)
                        return (320.7 - 318.0);
                    else {
                        if ((184 - 112) <= DTp8MmuZ4wN &&DTp8MmuZ4wN <= (118 - 44))
                            return (171.3 - 169.0);
                        else if ((928 - 860) <= DTp8MmuZ4wN &&(388 - 317) >= DTp8MmuZ4wN)
                            return (241.0 - 239.0);
                        else if ((284 - 220) <= DTp8MmuZ4wN &&DTp8MmuZ4wN <= (621 - 554))
                            return (846.5 - 845.0);
                        else if ((223 - 163) <= DTp8MmuZ4wN &&(1057 - 994) >= DTp8MmuZ4wN)
                            return (976.0 - 975.0);
                        else
                            return (370.0 - 370.0);
                    }
                }
            }
        }
    }
}

int main () {
    float lslwC68iD;
    int km0FwxcEij5n;
    int bIkV0L9h [N];
    int z8l3dC05aP7j [N];
    int lnxHGOBZ71;
    float YDwWUeME [N];
    int gpOTMS;
    lslwC68iD = (482 - 482);
    lnxHGOBZ71 = (855 - 855);
    scanf ("%d", &km0FwxcEij5n);
    {
        gpOTMS = (378 - 378);
        for (; gpOTMS < km0FwxcEij5n;) {
            scanf ("%d", &z8l3dC05aP7j[gpOTMS]);
            lnxHGOBZ71 += z8l3dC05aP7j[gpOTMS];
            gpOTMS = gpOTMS + (545 - 544);
        }
    }
    {
        gpOTMS = (663 - 663);
        for (; km0FwxcEij5n > gpOTMS;) {
            scanf ("%d", &bIkV0L9h[gpOTMS]);
            YDwWUeME[gpOTMS] = G7MB5f9c08wY (bIkV0L9h[gpOTMS]);
            lslwC68iD = lslwC68iD + YDwWUeME[gpOTMS] * z8l3dC05aP7j[gpOTMS];
            gpOTMS = gpOTMS + (541 - 540);
        }
    }
    lslwC68iD = lslwC68iD / lnxHGOBZ71;
    printf ("%.2f", lslwC68iD);
    return (454 - 454);
}

