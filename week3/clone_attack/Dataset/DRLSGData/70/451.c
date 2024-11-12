int main () {
    int rPGEMsRb;
    cin >> rPGEMsRb;
    double  PQY2PW0Gn3;
    double  XHMqzVgp [100];
    double  leVGSf [100];
    PQY2PW0Gn3 = 0;
    {
        int Flb1t5GhAy9 = 0;
        while (Flb1t5GhAy9 < rPGEMsRb) {
            cin >> XHMqzVgp[Flb1t5GhAy9] >> leVGSf[Flb1t5GhAy9];
            Flb1t5GhAy9 = Flb1t5GhAy9 +1;
        }
    }
    {
        int Flb1t5GhAy9 = 0;
        while (Flb1t5GhAy9 < rPGEMsRb) {
            for (int ACwuVTdMt1B = Flb1t5GhAy9 +1;
            ACwuVTdMt1B < rPGEMsRb; ACwuVTdMt1B = ACwuVTdMt1B +1)
                if (pow ((XHMqzVgp[Flb1t5GhAy9] - XHMqzVgp[ACwuVTdMt1B]), 2) + pow ((leVGSf[Flb1t5GhAy9] - leVGSf[ACwuVTdMt1B]), 2) > PQY2PW0Gn3)
                    PQY2PW0Gn3 = pow ((XHMqzVgp[Flb1t5GhAy9] - XHMqzVgp[ACwuVTdMt1B]), 2) + pow ((leVGSf[Flb1t5GhAy9] - leVGSf[ACwuVTdMt1B]), 2);
            Flb1t5GhAy9++;
        }
    }
    cout << fixed << setprecision (4) << sqrt (PQY2PW0Gn3) << endl;
    return 0;
}

