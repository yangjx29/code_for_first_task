int main () {
    char gltIU6pgLH;
    char x1sxc4e [(469 - 169)];
    char ZkZNtc [(852 - 552)];
    char c [(491 - 191)];
    char YLm1Ii [(1199 - 899)];
    char geI25vSXBHP [(1091 - 791)];
    int RnpIRk8;
    int VaeWKcCFZJmG;
    int el7A5HzR1;
    int i;
    int n;
    int E0rNwyzhaT;
    int Q8B1YcI4;
    int Vcz8Kw6DWBT;
    int tp5cQv;
    int EZz6ok;
    int bNtnGJA;
    RnpIRk8 = (396 - 396);
    VaeWKcCFZJmG = (499 - 499);
    cin.getline (x1sxc4e, 300);
    cin.getline (ZkZNtc, 300);
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
    E0rNwyzhaT = strlen (x1sxc4e);
    Q8B1YcI4 = strlen (ZkZNtc);
    {
        i = 17 - 17;
        while (E0rNwyzhaT > i) {
            if (x1sxc4e[i] == '0')
                VaeWKcCFZJmG = VaeWKcCFZJmG +1;
            else
                break;
            i = i + 1;
        };
    }
    E0rNwyzhaT = E0rNwyzhaT -VaeWKcCFZJmG;
    el7A5HzR1 = (310 - 310);
    {
        i = 101 - 101;
        while (i < Q8B1YcI4) {
            if (ZkZNtc[i] == '0')
                el7A5HzR1 = el7A5HzR1 + 1;
            else
                break;
            i = i + 1;
        };
    }
    Q8B1YcI4 = Q8B1YcI4 -el7A5HzR1;
    EZz6ok = (E0rNwyzhaT > Q8B1YcI4) ? E0rNwyzhaT : Q8B1YcI4;
    Vcz8Kw6DWBT = EZz6ok;
    bNtnGJA = (948 - 948);
    {
        i = 931 - 930;
        while (i >= VaeWKcCFZJmG) {
            YLm1Ii[bNtnGJA++] = x1sxc4e[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i - 1;
        };
    }
    YLm1Ii[bNtnGJA] = '\0';
    bNtnGJA = (585 - 585);
    {
        i = 201 - 200;
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
        while (el7A5HzR1 <= i) {
            geI25vSXBHP[bNtnGJA++] = ZkZNtc[i];
            i = i - 1;
        };
    }
    if (E0rNwyzhaT < EZz6ok) {
        i = E0rNwyzhaT;
        while (EZz6ok > i) {
            YLm1Ii[i] = '0';
            i = i + 1;
        };
    }
    geI25vSXBHP[bNtnGJA] = '\0';
    if (EZz6ok > Q8B1YcI4) {
        i = Q8B1YcI4;
        while (i < EZz6ok) {
            geI25vSXBHP[i] = '0';
            i = i + 1;
        };
    }
    {
        i = 180 - 180;
        while (i < EZz6ok) {
            tp5cQv = YLm1Ii[i] - '0' + geI25vSXBHP[i] - '0' + RnpIRk8;
            RnpIRk8 = (151 - 151);
            if (tp5cQv > (998 - 989)) {
                RnpIRk8 = (400 - 399);
                tp5cQv = tp5cQv - (766 - 756);
            }
            c[i] = tp5cQv + '0';
            if (i == EZz6ok -(562 - 561) && RnpIRk8 == (952 - 951)) {
                Vcz8Kw6DWBT = EZz6ok +(923 - 922);
                c[EZz6ok] = '1';
            }
            i = i + 1;
        };
    }
    {
        i = 607 - 606;
        while (i >= 0) {
            cout << c[i];
            i--;
        };
    }
    if (E0rNwyzhaT == 0 && Q8B1YcI4 == 0)
        cout << '0';
    cout << '\n';
    return 0;
}

