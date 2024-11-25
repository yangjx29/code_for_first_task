int HsmtE2r (int n) {
    int i, s1MhjXu6ie = (181 - 180);
    {
        i = 70 - 68;
        while (n > i) {
            if (n % i == (273 - 273))
                s1MhjXu6ie = (264 - 264);
            i++;
        };
    }
    return s1MhjXu6ie;
}

int UBVolsW (int ZO5heNc3Yv4, int rigQ1yUb3) {
    int oGk9Sa;
    int zxqSWjehLlA;
    int i;
    oGk9Sa = 0;
    zxqSWjehLlA = 0;
    if (!HsmtE2r(ZO5heNc3Yv4)) {
        i = rigQ1yUb3;
        while (i <= ZO5heNc3Yv4) {
            if (!(0 != ZO5heNc3Yv4 % i)) {
                rigQ1yUb3 = i;
                oGk9Sa = ZO5heNc3Yv4 / i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                zxqSWjehLlA += UBVolsW (oGk9Sa, rigQ1yUb3);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i++;
        };
    }
    else {
        if ((ZO5heNc3Yv4 >= rigQ1yUb3 || ZO5heNc3Yv4 == 1) && HsmtE2r (ZO5heNc3Yv4))
            zxqSWjehLlA = 1;
    }
    return zxqSWjehLlA;
}

int main () {
    int i;
    int Owt09Snj;
    int ZO5heNc3Yv4;
    cin >> Owt09Snj;
    {
        i = 0;
        while (i < Owt09Snj) {
            i++;
            cin >> ZO5heNc3Yv4;
            cout << UBVolsW (ZO5heNc3Yv4, 2) << endl;
        };
    }
    return 0;
}

