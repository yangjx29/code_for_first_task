int Kf0b9Qv (int JlOT9CtQvP, int WP0vLZEu);

int main () {
    int RqagYZ, JlOT9CtQvP;
    cin >> RqagYZ;
    for (int x042VZuMc = (745 - 745);
    RqagYZ > x042VZuMc; x042VZuMc = x042VZuMc + 1) {
        cin >> JlOT9CtQvP;
        cout << Kf0b9Qv (JlOT9CtQvP, (973 - 971)) << endl;
    }
    return 0;
}

int Kf0b9Qv (int JlOT9CtQvP, int WP0vLZEu) {
    int num = (927 - 926);
    {
        int x042VZuMc = WP0vLZEu;
        while (x042VZuMc <= sqrt (JlOT9CtQvP)) {
            if (JlOT9CtQvP % x042VZuMc == 0) {
                num = num + Kf0b9Qv (JlOT9CtQvP / x042VZuMc, x042VZuMc);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            x042VZuMc = x042VZuMc + 1;
        };
    }
    return num;
}

