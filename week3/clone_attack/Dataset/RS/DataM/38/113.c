int main () {
    int WaYNMU0BWguf;
    cin >> WaYNMU0BWguf;
    for (int XcNnDGM = 0;
    WaYNMU0BWguf > XcNnDGM; XcNnDGM = XcNnDGM +1) {
        double  OTMb5GCeh6, W7oQbztC;
        double  hz41EZx9 [101], *RZ1y0Wsm = hz41EZx9;
        double  pGbKvfTZCc;
        double  Wf3wIL;
        pGbKvfTZCc = 0;
        cin >> Wf3wIL;
        for (int gOK4TPWViek = 0;
        Wf3wIL > gOK4TPWViek; gOK4TPWViek++) {
            cin >> *(RZ1y0Wsm +gOK4TPWViek);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            pGbKvfTZCc = pGbKvfTZCc + *(RZ1y0Wsm +gOK4TPWViek);
        }
        OTMb5GCeh6 = pGbKvfTZCc / Wf3wIL;
        pGbKvfTZCc = 0;
        {
            int gOK4TPWViek = 0;
            while (gOK4TPWViek < Wf3wIL) {
                pGbKvfTZCc += pow (*(RZ1y0Wsm +gOK4TPWViek) - OTMb5GCeh6, 2);
                gOK4TPWViek = gOK4TPWViek + 1;
            };
        }
        W7oQbztC = sqrt (pGbKvfTZCc / Wf3wIL);
        cout << fixed << setprecision (5) << W7oQbztC << endl;
    }
    return 0;
}

