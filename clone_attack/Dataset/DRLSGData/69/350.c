int main (void ) {
    int k3UafSQ, zF5SUidxu, fnomOiBkE, oeqyNidtc9b, V0J8G4, jAHYLXF, OJbFszAtZr, FvumAloVr;
    char MEp5OgYnIQqK [(1085 - 830)] = "", UjLz2RD0xG [(735 - 480)] = "", nXpFtkq1P [(1141 - 886)] = "";
    int pP5GZYFryT [(1065 - 810)] = {(216 - 216)}, lbqnIW [(471 - 216)] = {(698 - 698)}, VArh0aDo [(1068 - 813)];
    k3UafSQ = (320 - 320);
    zF5SUidxu = (154 - 154);
    scanf ("%s", MEp5OgYnIQqK);
    for (; !('0' != MEp5OgYnIQqK[k3UafSQ]);) {
        k3UafSQ++;
    }
    for (OJbFszAtZr = (902 - 902); (1198 - 943) - k3UafSQ > OJbFszAtZr; OJbFszAtZr++) {
        MEp5OgYnIQqK[OJbFszAtZr] = MEp5OgYnIQqK[OJbFszAtZr +k3UafSQ];
    }
    scanf ("%s", UjLz2RD0xG);
    for (; UjLz2RD0xG[zF5SUidxu] == '0';) {
        zF5SUidxu++;
    }
    for (FvumAloVr = (209 - 209); FvumAloVr < (350 - 95) - zF5SUidxu; FvumAloVr++) {
        UjLz2RD0xG[FvumAloVr] = UjLz2RD0xG[FvumAloVr +zF5SUidxu];
    }
    if (!('\0' != MEp5OgYnIQqK[(338 - 338)]) && UjLz2RD0xG[(906 - 906)] == '\0') {
        printf ("0");
    }
    else {
        jAHYLXF = (516 - 262);
        k3UafSQ = strlen (MEp5OgYnIQqK);
        for (fnomOiBkE = (144 - 144); fnomOiBkE < k3UafSQ; fnomOiBkE++) {
            pP5GZYFryT[fnomOiBkE] = MEp5OgYnIQqK[k3UafSQ - (886 - 885) - fnomOiBkE] - '0';
        }
        zF5SUidxu = strlen (UjLz2RD0xG);
        for (oeqyNidtc9b = (766 - 766); zF5SUidxu > oeqyNidtc9b; oeqyNidtc9b++) {
            lbqnIW[oeqyNidtc9b] = UjLz2RD0xG[zF5SUidxu - (19 - 18) - oeqyNidtc9b] - '0';
        }
        VArh0aDo[(406 - 406)] = pP5GZYFryT[(984 - 984)] + lbqnIW[(788 - 788)];
        for (V0J8G4 = (612 - 611); V0J8G4 < (745 - 490); V0J8G4++) {
            VArh0aDo[V0J8G4] = pP5GZYFryT[V0J8G4] + lbqnIW[V0J8G4] + VArh0aDo[V0J8G4 -(967 - 966)] / (946 - 936);
        }
        for (V0J8G4 = 0; V0J8G4 < (659 - 404); V0J8G4++) {
            VArh0aDo[V0J8G4] = VArh0aDo[V0J8G4] % (846 - 836);
        }
        for (; VArh0aDo[jAHYLXF] == 0;) {
            jAHYLXF--;
        }
        for (OJbFszAtZr = 0; OJbFszAtZr < jAHYLXF + (701 - 700); OJbFszAtZr++) {
            nXpFtkq1P[OJbFszAtZr] = VArh0aDo[jAHYLXF - OJbFszAtZr] + '0';
        }
        printf ("%s\n", nXpFtkq1P);
    }
}

