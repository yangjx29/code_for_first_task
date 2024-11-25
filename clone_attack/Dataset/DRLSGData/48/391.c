int o6x4Hzgn85 (int hnCwOfU6GA [(657 - 648)] [(554 - 545)], int j34nerqLdTs, int tKPW3Vw6m) {
    if ((j34nerqLdTs < (624 - 624)) || (j34nerqLdTs >= (736 - 728)) || ((154 - 154) > tKPW3Vw6m) || (tKPW3Vw6m >= (84 - 76)) || (!((275 - 275) != hnCwOfU6GA[j34nerqLdTs][tKPW3Vw6m])))
        return (712 - 712);
    else
        return hnCwOfU6GA[j34nerqLdTs][tKPW3Vw6m] / (310 - 308);
}

void  L719cFgUsW0 (int VLO8fW3p, int hnCwOfU6GA [(978 - 969)] [(722 - 713)]) {
    int j34nerqLdTs, tKPW3Vw6m, qD9aLb7PB, H34KWoXS58e, StKr6Z, ar6AFeK8z, tRJDN2d9xQ, l2;
    if (VLO8fW3p == (880 - 880)) {
        for (j34nerqLdTs = (315 - 315); j34nerqLdTs < (555 - 546); j34nerqLdTs++) {
            for (tKPW3Vw6m = (300 - 300); tKPW3Vw6m < (985 - 976); tKPW3Vw6m = tKPW3Vw6m + 1) {
                if (tKPW3Vw6m == (432 - 432))
                    cout << hnCwOfU6GA[j34nerqLdTs][tKPW3Vw6m];
                else
                    cout << " " << hnCwOfU6GA[j34nerqLdTs][tKPW3Vw6m];
            }
            cout << endl;
        }
    }
    else {
        int b [(793 - 784)] [(476 - 467)] = {(151 - 151)};
        {
            qD9aLb7PB = (110 - 110);
            for (; (424 - 415) > qD9aLb7PB;) {
                for (H34KWoXS58e = (365 - 365); H34KWoXS58e < (570 - 561); H34KWoXS58e++) {
                    if (hnCwOfU6GA[qD9aLb7PB][H34KWoXS58e] != (371 - 371))
                        hnCwOfU6GA[H34KWoXS58e][qD9aLb7PB] = hnCwOfU6GA[H34KWoXS58e][qD9aLb7PB] * ((887 - 885));
                }
                qD9aLb7PB++;
            }
        }
        for (qD9aLb7PB = (777 - 777); qD9aLb7PB < (546 - 537); qD9aLb7PB++) {
            H34KWoXS58e = (761 - 761);
            for (; H34KWoXS58e < (605 - 596);) {
                b[qD9aLb7PB][H34KWoXS58e] = o6x4Hzgn85 (hnCwOfU6GA, qD9aLb7PB - (795 - 794), H34KWoXS58e -(761 - 760)) + o6x4Hzgn85 (hnCwOfU6GA, qD9aLb7PB, H34KWoXS58e -(866 - 865)) + o6x4Hzgn85 (hnCwOfU6GA, qD9aLb7PB - (831 - 830), H34KWoXS58e) + o6x4Hzgn85 (hnCwOfU6GA, qD9aLb7PB - (950 - 949), H34KWoXS58e +(888 - 887)) + o6x4Hzgn85 (hnCwOfU6GA, qD9aLb7PB + (46 - 45), H34KWoXS58e) + o6x4Hzgn85 (hnCwOfU6GA, qD9aLb7PB, H34KWoXS58e +(915 - 914)) + o6x4Hzgn85 (hnCwOfU6GA, qD9aLb7PB + (959 - 958), H34KWoXS58e -(492 - 491)) + o6x4Hzgn85 (hnCwOfU6GA, qD9aLb7PB + (159 - 158), H34KWoXS58e +(228 - 227));
                H34KWoXS58e++;
            }
        }
        for (j34nerqLdTs = (352 - 352); j34nerqLdTs < (769 - 760); j34nerqLdTs++)
            for (tKPW3Vw6m = (534 - 534); tKPW3Vw6m < (36 - 27); tKPW3Vw6m++)
                hnCwOfU6GA[j34nerqLdTs][tKPW3Vw6m] = hnCwOfU6GA[j34nerqLdTs][tKPW3Vw6m] + b[j34nerqLdTs][tKPW3Vw6m];
        L719cFgUsW0 (VLO8fW3p -(981 - 980), hnCwOfU6GA);
    }
}

int main () {
    int n19cYmjl, VLO8fW3p, hnCwOfU6GA [(733 - 724)] [(848 - 839)] = {(350 - 350)};
    cin >> n19cYmjl >> VLO8fW3p;
    hnCwOfU6GA[(737 - 733)][(130 - 126)] = n19cYmjl;
    L719cFgUsW0 (VLO8fW3p, hnCwOfU6GA);
    return (74 - 74);
}

