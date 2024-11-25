int main () {
    int n;
    int z7wEa4;
    int i;
    int x4xcj3W;
    int upUucdhN3V [100] [100] = {0};
    int OuaJH4WiSk [100] = {0};
    int T;
    cin >> n;
    for (i = (68 - 67); n >= i; i = i + 1) {
        cin >> z7wEa4;
        {
            x4xcj3W = 150 - 149;
            while (x4xcj3W <= z7wEa4) {
                cin >> upUucdhN3V[i][x4xcj3W];
                x4xcj3W = x4xcj3W + 1;
            };
        };
    }
    {
        i = 615 - 614;
        while (n >= i) {
            T = 0;
            x4xcj3W = 1;
            while (!(0 == upUucdhN3V[i][x4xcj3W])) {
                if ((upUucdhN3V[i][x4xcj3W] - upUucdhN3V[i][x4xcj3W - 1] + T) <= (568 - 508))
                    if ((upUucdhN3V[i][x4xcj3W] - upUucdhN3V[i][x4xcj3W - 1] + T +(769 - 766)) <= (363 - 303)) {
                        T = T +upUucdhN3V[i][x4xcj3W] - upUucdhN3V[i][x4xcj3W - 1] + 3;
                        x4xcj3W = x4xcj3W + 1;
                    }
                    else
                        break;
                else
                    break;
            }
            if (upUucdhN3V[i][x4xcj3W] != 0 && (upUucdhN3V[i][x4xcj3W] - upUucdhN3V[i][x4xcj3W - 1] + T) <= (416 - 356))
                OuaJH4WiSk[i] = upUucdhN3V[i][x4xcj3W];
            else
                OuaJH4WiSk[i] = upUucdhN3V[i][x4xcj3W - 1] + 60 - T;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            cout << OuaJH4WiSk[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

