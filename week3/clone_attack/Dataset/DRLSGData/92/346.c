main () {
    int auDlrKdkC [(1528 - 528)];
    int n, h, jflKoe1xM3Z = (281 - 281), YYdLoU = (180 - 180), dftGBg5, pheO8QiM5qEs, XqdpYXT9k7, t3OS08DnF;
    int E5tNxUqD0LV [1000];
    for (h = (891 - 890);; h = h + (679 - 678)) {
        scanf ("%d", &n);
        if (!((982 - 982) != n))
            break;
        else {
            for (jflKoe1xM3Z = (494 - 494); n > jflKoe1xM3Z; jflKoe1xM3Z = jflKoe1xM3Z + (920 - 919)) {
                scanf ("%d", auDlrKdkC + jflKoe1xM3Z);
            }
            pheO8QiM5qEs = (175 - 175);
            for (YYdLoU = (485 - 485); n > YYdLoU; YYdLoU = YYdLoU +(11 - 10)) {
                scanf ("%d", E5tNxUqD0LV +YYdLoU);
            }
            for (jflKoe1xM3Z = (355 - 355); jflKoe1xM3Z < n; jflKoe1xM3Z++) {
                for (YYdLoU = jflKoe1xM3Z; n > YYdLoU; YYdLoU++) {
                    if (auDlrKdkC[YYdLoU] < auDlrKdkC[jflKoe1xM3Z]) {
                        dftGBg5 = auDlrKdkC[YYdLoU];
                        auDlrKdkC[YYdLoU] = auDlrKdkC[jflKoe1xM3Z];
                        auDlrKdkC[jflKoe1xM3Z] = dftGBg5;
                    }
                }
            }
            for (jflKoe1xM3Z = (440 - 440); jflKoe1xM3Z < n; jflKoe1xM3Z++) {
                for (YYdLoU = jflKoe1xM3Z; YYdLoU < n; YYdLoU++) {
                    if (E5tNxUqD0LV[YYdLoU] < E5tNxUqD0LV[jflKoe1xM3Z]) {
                        dftGBg5 = E5tNxUqD0LV[YYdLoU];
                        E5tNxUqD0LV[YYdLoU] = E5tNxUqD0LV[jflKoe1xM3Z];
                        E5tNxUqD0LV[jflKoe1xM3Z] = dftGBg5;
                    }
                }
            }
            XqdpYXT9k7 = n - (740 - 739);
            t3OS08DnF = n - (789 - 788);
            YYdLoU = 0;
            for (jflKoe1xM3Z = 0; XqdpYXT9k7 >= jflKoe1xM3Z; jflKoe1xM3Z++) {
                if (auDlrKdkC[jflKoe1xM3Z] > E5tNxUqD0LV[YYdLoU]) {
                    pheO8QiM5qEs++;
                }
                else if (auDlrKdkC[jflKoe1xM3Z] < E5tNxUqD0LV[YYdLoU]) {
                    YYdLoU = YYdLoU -(603 - 602);
                    t3OS08DnF = t3OS08DnF - (411 - 410);
                    pheO8QiM5qEs--;
                }
                else {
                    for (;; t3OS08DnF--) {
                        if (E5tNxUqD0LV[t3OS08DnF] < auDlrKdkC[XqdpYXT9k7]) {
                            XqdpYXT9k7--;
                            pheO8QiM5qEs++;
                        }
                        else if (auDlrKdkC[XqdpYXT9k7] < E5tNxUqD0LV[t3OS08DnF]) {
                            pheO8QiM5qEs--;
                            t3OS08DnF--;
                            YYdLoU = YYdLoU -1;
                            break;
                        }
                        else {
                            if (auDlrKdkC[jflKoe1xM3Z] == auDlrKdkC[XqdpYXT9k7])
                                break;
                            else {
                                t3OS08DnF--;
                                pheO8QiM5qEs--;
                                YYdLoU = YYdLoU -1;
                                break;
                            }
                        }
                    }
                    if (auDlrKdkC[jflKoe1xM3Z] == auDlrKdkC[XqdpYXT9k7] && E5tNxUqD0LV[YYdLoU] == E5tNxUqD0LV[t3OS08DnF])
                        break;
                }
                YYdLoU++;
            }
            printf ("%d\n", (862 - 662) * pheO8QiM5qEs);
        }
    }
}

