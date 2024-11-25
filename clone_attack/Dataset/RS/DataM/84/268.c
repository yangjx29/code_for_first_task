int main () {
    int KVAn4dBLo;
    int HXlTE87, kwdVQ1zjP;
    int PvjMHcb4xk;
    int Kd52Z1;
    int sMaE9mnKocW, wpUemo;
    int bOZ53H;
    scanf ("%d", &KVAn4dBLo);
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
    scanf ("%d", &PvjMHcb4xk);
    scanf ("%d", &Kd52Z1);
    kwdVQ1zjP = Kd52Z1;
    HXlTE87 = PvjMHcb4xk;
    if (PvjMHcb4xk < Kd52Z1) {
        wpUemo = kwdVQ1zjP;
        sMaE9mnKocW = HXlTE87;
        kwdVQ1zjP = sMaE9mnKocW;
        HXlTE87 = wpUemo;
    }
    {
        bOZ53H = 2;
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
        while (KVAn4dBLo > bOZ53H) {
            int TqHUKIkXYc4;
            bOZ53H = bOZ53H + 1;
            scanf ("%d", &TqHUKIkXYc4);
            if (TqHUKIkXYc4 > HXlTE87) {
                kwdVQ1zjP = HXlTE87;
                HXlTE87 = TqHUKIkXYc4;
            }
            else if (TqHUKIkXYc4 > kwdVQ1zjP) {
                kwdVQ1zjP = TqHUKIkXYc4;
            };
        };
    }
    printf ("%d\n%d", HXlTE87, kwdVQ1zjP);
    return 0;
}

