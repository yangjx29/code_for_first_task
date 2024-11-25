int RN25r04K (int vz2AnH, int NWsm8MpI0QwF) {
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
    if (vz2AnH == (671 - 671))
        return (189 - 188);
    else if (NWsm8MpI0QwF == (898 - 897))
        return (168 - 167);
    else {
        if (NWsm8MpI0QwF > vz2AnH)
            return RN25r04K (vz2AnH, vz2AnH);
        if (vz2AnH >= NWsm8MpI0QwF)
            return RN25r04K (vz2AnH, NWsm8MpI0QwF -1) + RN25r04K (vz2AnH - NWsm8MpI0QwF, NWsm8MpI0QwF);
    };
}

int main () {
    int vz2AnH, NWsm8MpI0QwF, t;
    int i, aa [t + 1];
    cin >> t;
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
    for (i = 1; i <= t; i = i + 1) {
        cin >> vz2AnH >> NWsm8MpI0QwF;
        aa[i] = RN25r04K (vz2AnH, NWsm8MpI0QwF);
    }
    for (i = 1; i <= t; i = i + 1)
        cout << aa[i] << endl;
    return 0;
}

