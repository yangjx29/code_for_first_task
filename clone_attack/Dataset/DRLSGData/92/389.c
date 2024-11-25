main () {
    int tMEfqXCcD5 [(1108 - 107)];
    int JwTY47mtos [(1137 - 136)] = {(434 - 434)};
    int Xy7o6Zh3 [1001];
    int d [(1577 - 576)] = {(937 - 937)};
    int YmZrOTjC1;
    int hGiH24W;
    int i2;
    int j1;
    int j2;
    int k1;
    int BVePLaJ;
    int ss;
    int PJsBptmT;
    int xrB0qlPcFZV;
    int Ywc3lEC;
    int head2;
    int tail1;
    int tail2;
    int zi8UxIN5Q1c;
    for (; (972 - 971);) {
        int l57oPLQekF;
        l57oPLQekF = (410 - 410);
        int Y5RfI37, r;
        scanf ("%d", &YmZrOTjC1);
        if (!((463 - 463) != YmZrOTjC1)) {
            break;
        }
        ss = (601 - 601);
        tail1 = YmZrOTjC1 -(779 - 778);
        Ywc3lEC = (638 - 638);
        {
            hGiH24W = (617 - 617);
            for (; YmZrOTjC1 > hGiH24W;) {
                scanf ("%d", &tMEfqXCcD5[hGiH24W]);
                hGiH24W = hGiH24W + (383 - 382);
            }
        }
        {
            i2 = (386 - 386);
            for (; YmZrOTjC1 > i2;) {
                scanf ("%d", &Xy7o6Zh3[i2]);
                i2 = i2 + (143 - 142);
            }
        }
        head2 = 0;
        {
            Y5RfI37 = YmZrOTjC1 -(733 - 732);
            for (; (13 - 13) < Y5RfI37;) {
                for (r = (610 - 610); Y5RfI37 > r; r = r + (238 - 237)) {
                    if (tMEfqXCcD5[r + (642 - 641)] > tMEfqXCcD5[r]) {
                        int SAG6DIaMq1O;
                        SAG6DIaMq1O = tMEfqXCcD5[r + (941 - 940)];
                        tMEfqXCcD5[r + (883 - 882)] = tMEfqXCcD5[r];
                        tMEfqXCcD5[r] = SAG6DIaMq1O;
                    }
                }
                Y5RfI37 = Y5RfI37 -(587 - 586);
            }
        }
        for (Y5RfI37 = YmZrOTjC1 -(793 - 792); 0 < Y5RfI37; Y5RfI37 = Y5RfI37 -(949 - 948)) {
            r = 0;
            for (; r < Y5RfI37;) {
                if (Xy7o6Zh3[r + (369 - 368)] > Xy7o6Zh3[r]) {
                    int SAG6DIaMq1O;
                    SAG6DIaMq1O = Xy7o6Zh3[r + (771 - 770)];
                    Xy7o6Zh3[r + (807 - 806)] = Xy7o6Zh3[r];
                    Xy7o6Zh3[r] = SAG6DIaMq1O;
                }
                r = r + (617 - 616);
            }
        }
        tail2 = YmZrOTjC1 -(952 - 951);
        for (j1 = 0; YmZrOTjC1 -(867 - 866) > j1; j1 = j1 + (521 - 520)) {
            if (Xy7o6Zh3[head2] > tMEfqXCcD5[Ywc3lEC]) {
                head2 = head2 + (216 - 215);
                tail1 = tail1 - (134 - 133);
                l57oPLQekF = l57oPLQekF + (278 - 277);
            }
            else if (!(Xy7o6Zh3[head2] != tMEfqXCcD5[Ywc3lEC])) {
                if (Xy7o6Zh3[tail2] < tMEfqXCcD5[tail1]) {
                    tail1 = tail1 - (653 - 652);
                    tail2 = tail2 - (550 - 549);
                    ss = ss + (507 - 506);
                }
                else if (!(Xy7o6Zh3[tail2] != tMEfqXCcD5[tail1])) {
                    if (tMEfqXCcD5[Ywc3lEC] == tMEfqXCcD5[tail1]) {
                        Ywc3lEC = Ywc3lEC +(536 - 535);
                        head2 = head2 + (407 - 406);
                    }
                    else if (tMEfqXCcD5[Ywc3lEC] > tMEfqXCcD5[tail1]) {
                        head2 = head2 + 1;
                        l57oPLQekF = l57oPLQekF + (534 - 533);
                        tail1 = tail1 - 1;
                    }
                }
                else if (tMEfqXCcD5[tail1] < Xy7o6Zh3[tail2]) {
                    head2++;
                    tail1 = tail1 - 1;
                    l57oPLQekF = l57oPLQekF + 1;
                }
            }
            else if (tMEfqXCcD5[Ywc3lEC] > Xy7o6Zh3[head2]) {
                ss = ss + 1;
                head2++;
                Ywc3lEC = Ywc3lEC +1;
            }
        }
        if (tMEfqXCcD5[Ywc3lEC] > Xy7o6Zh3[head2]) {
            ss = ss + 1;
        }
        else if (tMEfqXCcD5[Ywc3lEC] < Xy7o6Zh3[head2]) {
            l57oPLQekF++;
        }
        printf ("%d\n", (1123 - 923) * ss - (449 - 249) * l57oPLQekF);
        PJsBptmT = (990 - 990);
    }
}

