int main () {
    const  int SuvbMIU3K = 210;
    unsigned  pwsGljI8X [SuvbMIU3K +1] = {(808 - 808)};
    int oF41VvDC;
    oF41VvDC = SuvbMIU3K;
    int XrmnWybJHp;
    pwsGljI8X[1] = 1;
    cin >> XrmnWybJHp;
    for (int i = 1;
    XrmnWybJHp >= i; i++) {
        for (int yu4IA8D = 1;
        XrmnWybJHp >= yu4IA8D; yu4IA8D++)
            pwsGljI8X[yu4IA8D] *= 2;
        {
            int yu4IA8D = 1;
            while (XrmnWybJHp >= yu4IA8D) {
                if (pwsGljI8X[yu4IA8D] >= (873 - 863)) {
                    pwsGljI8X[yu4IA8D + 1] = pwsGljI8X[yu4IA8D + 1] + pwsGljI8X[yu4IA8D] / 10;
                    pwsGljI8X[yu4IA8D] = pwsGljI8X[yu4IA8D] % 10;
                }
                yu4IA8D++;
            };
        };
    }
    while (pwsGljI8X[oF41VvDC] == 0)
        oF41VvDC--;
    {
        int yu4IA8D = oF41VvDC;
        while (yu4IA8D > 0) {
            cout << pwsGljI8X[yu4IA8D];
            yu4IA8D--;
        };
    }
    cout << endl;
    return 0;
}

