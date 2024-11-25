int IveMtfVIa, vrnWZsw;
void  fact (int);

int main () {
    int ExesW2j, Kbg4drIDW, k;
    cin >> ExesW2j;
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
    {
        Kbg4drIDW = 407 - 407;
        while (ExesW2j > Kbg4drIDW) {
            fact (k);
            Kbg4drIDW = Kbg4drIDW +1;
            IveMtfVIa = 0;
            cout << IveMtfVIa << endl;
            cin >> k;
            vrnWZsw = 2;
        };
    }
    return 0;
}

void  fact (int k) {
    int Kbg4drIDW;
    if (!(1 != k)) {
        IveMtfVIa++;
        return;
    }
    {
        Kbg4drIDW = vrnWZsw;
        while (Kbg4drIDW <= k) {
            if (k % Kbg4drIDW == 0) {
                vrnWZsw = Kbg4drIDW;
                fact (k / Kbg4drIDW);
            }
            Kbg4drIDW = Kbg4drIDW +1;
        };
    };
}

