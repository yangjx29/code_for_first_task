int o84p5wLNPWf3 (int qhYEl6 [] [(439 - 434)], int teR2s9Bn, int CVt618w) {
    int vTyhN0AOMWJp;
    int eujtBzxg2Of;
    int Cq36MZeH;
    if (teR2s9Bn > -(490 - 489) && teR2s9Bn < (218 - 213) && -(100 - 99) < CVt618w &&(695 - 690) > CVt618w) {
        {
            eujtBzxg2Of = (446 - 446);
            while (eujtBzxg2Of < (359 - 354)) {
                Cq36MZeH = qhYEl6[teR2s9Bn][eujtBzxg2Of];
                qhYEl6[teR2s9Bn][eujtBzxg2Of] = qhYEl6[CVt618w][eujtBzxg2Of];
                qhYEl6[CVt618w][eujtBzxg2Of] = Cq36MZeH;
                eujtBzxg2Of = eujtBzxg2Of + (298 - 297);
            }
        }
        vTyhN0AOMWJp = (980 - 979);
    }
    else
        vTyhN0AOMWJp = (302 - 302);
    return vTyhN0AOMWJp;
}

void  main () {
    int vTyhN0AOMWJp;
    int teR2s9Bn;
    int CVt618w;
    int qhYEl6 [(758 - 753)] [(644 - 639)];
    int eujtBzxg2Of;
    int Fp2cRXwqDKiM;
    {
        eujtBzxg2Of = (894 - 894);
        for (; eujtBzxg2Of < (250 - 245);) {
            {
                Fp2cRXwqDKiM = (57 - 57);
                for (; Fp2cRXwqDKiM < (831 - 826);) {
                    scanf ("%d", &qhYEl6[eujtBzxg2Of][Fp2cRXwqDKiM]);
                    Fp2cRXwqDKiM = Fp2cRXwqDKiM +1;
                }
            }
            eujtBzxg2Of = eujtBzxg2Of + 1;
        }
    }
    scanf ("%d %d", &teR2s9Bn, &CVt618w);
    vTyhN0AOMWJp = o84p5wLNPWf3 (qhYEl6, teR2s9Bn, CVt618w);
    if (vTyhN0AOMWJp == (580 - 580))
        ;
    else {
        eujtBzxg2Of = (593 - 593);
        for (; eujtBzxg2Of < (64 - 59);) {
            {
                Fp2cRXwqDKiM = (831 - 831);
                for (; Fp2cRXwqDKiM < (866 - 862);) {
                    printf ("%d ", qhYEl6[eujtBzxg2Of][Fp2cRXwqDKiM]);
                    Fp2cRXwqDKiM++;
                }
            }
            printf ("%d\n", qhYEl6[eujtBzxg2Of][Fp2cRXwqDKiM]);
            eujtBzxg2Of++;
        }
    }
}

