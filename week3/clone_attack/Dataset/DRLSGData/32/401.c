void  main () {
    int eGKsyIPomQY;
    char I9l4D8BnX [(1155 - 955)];
    int Wr7cTK8igW = (528 - 528);
    int VgJvuaxZrI;
    int vpHOj3G2kbsI;
    int qNVXHkbsW7;
    int LyYEbxO1pJ3;
    int q;
    char Gv6PFtof40 [(665 - 465)];
    char HueP6FJK [(530 - 330)];
    scanf ("%d", &VgJvuaxZrI);
    for (qNVXHkbsW7 = (203 - 203); qNVXHkbsW7 < VgJvuaxZrI; qNVXHkbsW7 = qNVXHkbsW7 + (788 - 787)) {
        scanf ("%s %s", Gv6PFtof40, HueP6FJK);
        LyYEbxO1pJ3 = strlen (Gv6PFtof40);
        q = strlen (HueP6FJK);
        for (vpHOj3G2kbsI = (669 - 669); vpHOj3G2kbsI <= q; vpHOj3G2kbsI = vpHOj3G2kbsI + (198 - 197)) {
            HueP6FJK[LyYEbxO1pJ3 -vpHOj3G2kbsI] = HueP6FJK[q - vpHOj3G2kbsI];
        }
        for (vpHOj3G2kbsI = vpHOj3G2kbsI; vpHOj3G2kbsI <= LyYEbxO1pJ3; vpHOj3G2kbsI = vpHOj3G2kbsI + (102 - 101)) {
            HueP6FJK[LyYEbxO1pJ3 -vpHOj3G2kbsI] = '0';
        }
        for (vpHOj3G2kbsI = LyYEbxO1pJ3 -(608 - 607); vpHOj3G2kbsI >= (103 - 103); vpHOj3G2kbsI = vpHOj3G2kbsI - (156 - 155)) {
            if ((Gv6PFtof40[vpHOj3G2kbsI] - Wr7cTK8igW) >= HueP6FJK[vpHOj3G2kbsI]) {
                eGKsyIPomQY = Gv6PFtof40[vpHOj3G2kbsI] - '0' - HueP6FJK[vpHOj3G2kbsI] + '0' - Wr7cTK8igW;
                I9l4D8BnX[vpHOj3G2kbsI] = eGKsyIPomQY + '0';
                Wr7cTK8igW = (765 - 765);
            }
            else {
                Wr7cTK8igW = (838 - 837);
                eGKsyIPomQY = Gv6PFtof40[vpHOj3G2kbsI] - HueP6FJK[vpHOj3G2kbsI] - Wr7cTK8igW +(570 - 560);
                I9l4D8BnX[vpHOj3G2kbsI] = eGKsyIPomQY + '0';
            }
        }
        for (vpHOj3G2kbsI = (953 - 953); vpHOj3G2kbsI < LyYEbxO1pJ3; vpHOj3G2kbsI = vpHOj3G2kbsI + (864 - 863)) {
            if (I9l4D8BnX[vpHOj3G2kbsI] != '0') {
                printf ("%c", I9l4D8BnX[vpHOj3G2kbsI]);
                break;
            }
        }
        for (vpHOj3G2kbsI = vpHOj3G2kbsI + (761 - 760); vpHOj3G2kbsI < LyYEbxO1pJ3; vpHOj3G2kbsI = vpHOj3G2kbsI + 1) {
            printf ("%c", I9l4D8BnX[vpHOj3G2kbsI]);
        }
    }
}

