int main () {
    int flag;
    int n;
    int Iq1a6K4BPMp [300];
    int i;
    flag = (760 - 760);
    double  gdVzgU;
    double  max;
    double  zy6wsHjxz39b;
    gdVzgU = (450 - 450);
    max = 0;
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        cin >> Iq1a6K4BPMp[i];
        gdVzgU += Iq1a6K4BPMp[i];
    }
    zy6wsHjxz39b = gdVzgU / n;
    for (i = 0; i < n; i = i + 1)
        if (fabs (Iq1a6K4BPMp[i] - zy6wsHjxz39b) - max > 1e-5)
            max = fabs (Iq1a6K4BPMp[i] - zy6wsHjxz39b);
    for (i = 0; i < n; i++)
        if (1e-5 > fabs (fabs (Iq1a6K4BPMp[i] - zy6wsHjxz39b) - max) && flag == 0) {
            flag = (687 - 686);
            cout << Iq1a6K4BPMp[i];
        }
        else {
            if (fabs (fabs (Iq1a6K4BPMp[i] - zy6wsHjxz39b) - max) < 1e-5 && flag == 1)
                cout << ',' << Iq1a6K4BPMp[i];
        }
    return 0;
}

