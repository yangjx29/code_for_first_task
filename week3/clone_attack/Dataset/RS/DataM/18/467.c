int Ob4POTc3agYw = (223 - 223);
int VLvc1hOZ [100] [100] = {(668 - 668)};

void  Tb2DAd (int LlPuBI0ce) {
    if (!((881 - 880) != LlPuBI0ce))
        return;
    Tb2DAd (LlPuBI0ce -1);
    for (int rwyAfc6s = 0;
    LlPuBI0ce > rwyAfc6s; rwyAfc6s = rwyAfc6s + 1) {
        int l15ALbF0u = (1832 - 832);
        for (int HWJiDAQ = 0;
        HWJiDAQ < LlPuBI0ce; HWJiDAQ = HWJiDAQ +1)
            if (VLvc1hOZ[rwyAfc6s][HWJiDAQ] < l15ALbF0u)
                l15ALbF0u = VLvc1hOZ[rwyAfc6s][HWJiDAQ];
        for (int HWJiDAQ = 0;
        HWJiDAQ < LlPuBI0ce; HWJiDAQ = HWJiDAQ +1)
            VLvc1hOZ[rwyAfc6s][HWJiDAQ] = VLvc1hOZ[rwyAfc6s][HWJiDAQ] - l15ALbF0u;
    }
    for (int HWJiDAQ = 0;
    HWJiDAQ < LlPuBI0ce; HWJiDAQ = HWJiDAQ +1) {
        int l15ALbF0u = 1000;
        for (int rwyAfc6s = 0;
        rwyAfc6s < LlPuBI0ce; rwyAfc6s = rwyAfc6s + 1)
            if (VLvc1hOZ[rwyAfc6s][HWJiDAQ] < l15ALbF0u)
                l15ALbF0u = VLvc1hOZ[rwyAfc6s][HWJiDAQ];
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
        for (int rwyAfc6s = 0;
        rwyAfc6s < LlPuBI0ce; rwyAfc6s = rwyAfc6s + 1)
            VLvc1hOZ[rwyAfc6s][HWJiDAQ] = VLvc1hOZ[rwyAfc6s][HWJiDAQ] - l15ALbF0u;
    }
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
    Ob4POTc3agYw = Ob4POTc3agYw +VLvc1hOZ[1][1];
    for (int rwyAfc6s = 0;
    rwyAfc6s < LlPuBI0ce; rwyAfc6s = rwyAfc6s + 1) {
        int HWJiDAQ = 1;
        while (LlPuBI0ce -1 > HWJiDAQ) {
            VLvc1hOZ[rwyAfc6s][HWJiDAQ] = VLvc1hOZ[rwyAfc6s][HWJiDAQ +1];
            HWJiDAQ = HWJiDAQ +1;
        };
    }
    for (int HWJiDAQ = 0;
    LlPuBI0ce -1 > HWJiDAQ; HWJiDAQ = HWJiDAQ +1)
        for (int rwyAfc6s = 1;
        LlPuBI0ce -1 > rwyAfc6s; rwyAfc6s = rwyAfc6s + 1)
            VLvc1hOZ[rwyAfc6s][HWJiDAQ] = VLvc1hOZ[rwyAfc6s + 1][HWJiDAQ];
}

int main () {
    int LlPuBI0ce;
    cin >> LlPuBI0ce;
    for (int rv2CHdctqDx = 0;
    rv2CHdctqDx < LlPuBI0ce; rv2CHdctqDx = rv2CHdctqDx + 1) {
        Tb2DAd (LlPuBI0ce);
        for (int rwyAfc6s = 0;
        rwyAfc6s < LlPuBI0ce; rwyAfc6s = rwyAfc6s + 1)
            for (int HWJiDAQ = 0;
            HWJiDAQ < LlPuBI0ce; HWJiDAQ = HWJiDAQ +1)
                cin >> VLvc1hOZ[rwyAfc6s][HWJiDAQ];
        Ob4POTc3agYw = 0;
        cout << Ob4POTc3agYw << endl;
    }
    return 0;
}

