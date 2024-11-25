int main () {
    int lxE3wfk8J, e5ZPwMc, NvbWjV, kpkT4q7 = (515 - 515), l;
    double  CnxKO6aR [(540 - 530)] [10], mFEMvCN48Q, eNp50OFPjBR [91] = {(593 - 593)}, zb6qxrGFReCU [10] [3];
    cin >> lxE3wfk8J;
    {
        e5ZPwMc = 0;
        while (lxE3wfk8J > e5ZPwMc) {
            cin >> zb6qxrGFReCU[e5ZPwMc][0] >> zb6qxrGFReCU[e5ZPwMc][(566 - 565)] >> zb6qxrGFReCU[e5ZPwMc][(656 - 654)];
            e5ZPwMc = e5ZPwMc + 1;
        };
    }
    {
        e5ZPwMc = 0;
        while (e5ZPwMc < lxE3wfk8J - (57 - 56)) {
            for (NvbWjV = e5ZPwMc + (634 - 633); NvbWjV < lxE3wfk8J; NvbWjV = NvbWjV +1) {
                CnxKO6aR[e5ZPwMc][NvbWjV] = sqrt ((zb6qxrGFReCU[e5ZPwMc][0] - zb6qxrGFReCU[NvbWjV][0]) * (zb6qxrGFReCU[e5ZPwMc][0] - zb6qxrGFReCU[NvbWjV][0]) + (zb6qxrGFReCU[e5ZPwMc][(908 - 907)] - zb6qxrGFReCU[NvbWjV][(530 - 529)]) * (zb6qxrGFReCU[e5ZPwMc][(619 - 618)] - zb6qxrGFReCU[NvbWjV][1]) + (zb6qxrGFReCU[e5ZPwMc][(945 - 943)] - zb6qxrGFReCU[NvbWjV][2]) * (zb6qxrGFReCU[e5ZPwMc][2] - zb6qxrGFReCU[NvbWjV][2]));
                eNp50OFPjBR[kpkT4q7] = CnxKO6aR[e5ZPwMc][NvbWjV];
                kpkT4q7 = kpkT4q7 + 1;
            }
            e5ZPwMc = e5ZPwMc + 1;
        };
    }
    for (e5ZPwMc = 0; lxE3wfk8J * (lxE3wfk8J - 1) / 2 > e5ZPwMc; e5ZPwMc = e5ZPwMc + 1) {
        NvbWjV = 0;
        while (lxE3wfk8J * (lxE3wfk8J - 1) / 2 - 1 > NvbWjV) {
            if (eNp50OFPjBR[NvbWjV +1] > eNp50OFPjBR[NvbWjV]) {
                mFEMvCN48Q = eNp50OFPjBR[NvbWjV];
                eNp50OFPjBR[NvbWjV] = eNp50OFPjBR[NvbWjV +1];
                eNp50OFPjBR[NvbWjV +1] = mFEMvCN48Q;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            NvbWjV = NvbWjV +1;
        };
    }
    for (e5ZPwMc = 0; e5ZPwMc < lxE3wfk8J * (lxE3wfk8J - 1) / 2; e5ZPwMc++) {
        for (kpkT4q7 = 0; kpkT4q7 < lxE3wfk8J - 1; kpkT4q7 = kpkT4q7 + 1) {
            l = kpkT4q7 + 1;
            while (lxE3wfk8J > l) {
                if (CnxKO6aR[kpkT4q7][l] == eNp50OFPjBR[e5ZPwMc]) {
                    cout << fixed << setprecision (0) << "(" << zb6qxrGFReCU[kpkT4q7][0] << "," << zb6qxrGFReCU[kpkT4q7][1] << "," << zb6qxrGFReCU[kpkT4q7][2] << ")" << "-" << "(" << zb6qxrGFReCU[l][0] << "," << zb6qxrGFReCU[l][1] << "," << zb6qxrGFReCU[l][2] << ")" << "=";
                    cout << fixed << setprecision (2) << CnxKO6aR[kpkT4q7][l] << endl;
                    CnxKO6aR[kpkT4q7][l] = 0;
                }
                l++;
            };
        };
    }
    return 0;
}

