int main () {
    int Wwgod0EGS;
    int f [30] = {1, 1, 1};
    int alEv1Z6y2;
    int CVSIPq;
    int j;
    int DdE9wDN [1000000];
    {
        CVSIPq = 3;
        while (CVSIPq < 21) {
            f[CVSIPq] = f[CVSIPq -1] + f[CVSIPq -2];
            CVSIPq++;
        };
    }
    cin >> alEv1Z6y2;
    {
        CVSIPq = 0;
        while (CVSIPq < alEv1Z6y2) {
            CVSIPq++;
            cin >> Wwgod0EGS;
            cout << f[Wwgod0EGS] << endl;
        };
    }
    return 0;
}

