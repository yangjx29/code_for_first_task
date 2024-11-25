int main () {
    int nr0lcmD;
    int Qf0uWsoagSM;
    int p2apNx;
    int SGuAjWDN [26];
    int b [26];
    int oZoqyAOV;
    cin >> nr0lcmD;
    for (Qf0uWsoagSM = 1; Qf0uWsoagSM <= nr0lcmD; Qf0uWsoagSM++) {
        cin >> SGuAjWDN[Qf0uWsoagSM];
        b[Qf0uWsoagSM] = 1;
        oZoqyAOV = 0;
        for (p2apNx = 1; p2apNx < Qf0uWsoagSM; p2apNx++)
            if (SGuAjWDN[p2apNx] >= SGuAjWDN[Qf0uWsoagSM] && b[p2apNx] > oZoqyAOV)
                oZoqyAOV = b[p2apNx];
        b[Qf0uWsoagSM] = oZoqyAOV + 1;
    }
    oZoqyAOV = 0;
    {
        Qf0uWsoagSM = 1;
        while (Qf0uWsoagSM <= nr0lcmD) {
            if (b[Qf0uWsoagSM] > oZoqyAOV)
                oZoqyAOV = b[Qf0uWsoagSM];
            Qf0uWsoagSM++;
        };
    }
    cout << oZoqyAOV;
    return 0;
}

