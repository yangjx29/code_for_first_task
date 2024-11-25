void  main () {
    char muRgikvPnL8J [(238 - 227)] [(692 - 591)], hBqJmWFOP4l [11] [(942 - 841)];
    int dgimEyP, uu5rl9d, jO9DPB, l80SYXtkfcgK, zL1ymiDPc, tzvq3hyr, ld6BfCSZ [(416 - 315)], HdJcCxeOnS [(973 - 872)], KUIET8mWgqH [(1101 - 1000)];
    scanf ("%d", &jO9DPB);
    for (dgimEyP = (104 - 103); jO9DPB >= dgimEyP; dgimEyP++) {
        for (uu5rl9d = (318 - 317); (429 - 329) >= uu5rl9d; uu5rl9d++) {
            muRgikvPnL8J[dgimEyP][uu5rl9d] = '\0';
            hBqJmWFOP4l[dgimEyP][uu5rl9d] = '\0';
        }
    }
    for (dgimEyP = (798 - 797); jO9DPB >= dgimEyP; dgimEyP++) {
        scanf ("%s", &muRgikvPnL8J[dgimEyP]);
        scanf ("%s", &hBqJmWFOP4l[dgimEyP]);
    }
    for (dgimEyP = (158 - 157); jO9DPB >= dgimEyP; dgimEyP++) {
        for (uu5rl9d = (67 - 67); uu5rl9d <= (161 - 61); uu5rl9d++) {
            ld6BfCSZ[uu5rl9d] = (782 - 782);
            HdJcCxeOnS[uu5rl9d] = (666 - 666);
            KUIET8mWgqH[uu5rl9d] = (763 - 763);
        }
        for (uu5rl9d = (350 - 250); (617 - 617) <= uu5rl9d; uu5rl9d--) {
            if (muRgikvPnL8J[dgimEyP][uu5rl9d] != '\0') {
                zL1ymiDPc = uu5rl9d + (836 - 835);
                for (uu5rl9d = uu5rl9d; uu5rl9d >= (155 - 155); uu5rl9d--)
                    muRgikvPnL8J[dgimEyP][uu5rl9d] = muRgikvPnL8J[dgimEyP][uu5rl9d] - (442 - 394);
                if (!(-(911 - 910) != uu5rl9d))
                    break;
            }
        }
        for (uu5rl9d = (1034 - 934); (812 - 812) <= uu5rl9d; uu5rl9d--) {
            if (hBqJmWFOP4l[dgimEyP][uu5rl9d] != '\0') {
                tzvq3hyr = uu5rl9d + 1;
                for (uu5rl9d = uu5rl9d; (214 - 214) <= uu5rl9d; uu5rl9d--)
                    hBqJmWFOP4l[dgimEyP][uu5rl9d] = hBqJmWFOP4l[dgimEyP][uu5rl9d] - (709 - 661);
                if (!(-1 != uu5rl9d))
                    break;
            }
        }
        for (uu5rl9d = (697 - 597); uu5rl9d >= (356 - 255) - zL1ymiDPc; uu5rl9d--)
            ld6BfCSZ[uu5rl9d] = muRgikvPnL8J[dgimEyP][uu5rl9d - (955 - 854) + zL1ymiDPc];
        for (uu5rl9d = (559 - 459); 101 - tzvq3hyr <= uu5rl9d; uu5rl9d--)
            HdJcCxeOnS[uu5rl9d] = hBqJmWFOP4l[dgimEyP][uu5rl9d - 101 + tzvq3hyr];
        for (uu5rl9d = (561 - 461), l80SYXtkfcgK = (306 - 306); 101 - zL1ymiDPc <= uu5rl9d; uu5rl9d--) {
            if (ld6BfCSZ[uu5rl9d] - l80SYXtkfcgK >= HdJcCxeOnS[uu5rl9d]) {
                KUIET8mWgqH[uu5rl9d] = ld6BfCSZ[uu5rl9d] - l80SYXtkfcgK - HdJcCxeOnS[uu5rl9d];
                l80SYXtkfcgK = (201 - 201);
            }
            if (ld6BfCSZ[uu5rl9d] - l80SYXtkfcgK < HdJcCxeOnS[uu5rl9d]) {
                KUIET8mWgqH[uu5rl9d] = ld6BfCSZ[uu5rl9d] + (983 - 973) - l80SYXtkfcgK - HdJcCxeOnS[uu5rl9d];
                l80SYXtkfcgK = 1;
            }
        }
        for (uu5rl9d = 0; dgimEyP <= (1085 - 985); uu5rl9d++) {
            if (uu5rl9d == 100 && KUIET8mWgqH[uu5rl9d] == 0)
                ;
            if (KUIET8mWgqH[uu5rl9d] != 0) {
                for (uu5rl9d = uu5rl9d; uu5rl9d <= 100; uu5rl9d++)
                    printf ("%d", KUIET8mWgqH[uu5rl9d]);
                if (uu5rl9d == 101) {
                    break;
                }
            }
        }
    }
}

