int main () {
    int DhzMYPNGFf [1000] = {(862 - 862)};
    int evzYUR5 [1000];
    int ouIS0rN [1000];
    int OVSzEalyWRF;
    int i;
    int FtcPal6i;
    int max;
    max = 0;
    OVSzEalyWRF = 0;
    do {
        cin >> evzYUR5[OVSzEalyWRF];
        OVSzEalyWRF = OVSzEalyWRF +1;
    }
    while ((FtcPal6i = cin.get ()) == ',');
    OVSzEalyWRF = 0;
    do {
        cin >> ouIS0rN[OVSzEalyWRF];
        OVSzEalyWRF++;
    }
    while ((FtcPal6i = cin.get ()) == ',');
    {
        i = 0;
        while (i <= OVSzEalyWRF -1) {
            for (int l8Pn5FSvdK = evzYUR5[i];
            l8Pn5FSvdK < ouIS0rN[i]; l8Pn5FSvdK = l8Pn5FSvdK + 1) {
                DhzMYPNGFf[l8Pn5FSvdK]++;
                if (DhzMYPNGFf[l8Pn5FSvdK] > max)
                    max = DhzMYPNGFf[l8Pn5FSvdK];
            }
            i = i + 1;
        };
    }
    cout << OVSzEalyWRF << " " << max;
    return 0;
}

