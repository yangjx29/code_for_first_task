int main () {
    int Rk7QMoz0e [101] [101];
    int hp9OFg;
    int DpfkKdHgR3Zh;
    int fTV4gG3w;
    int Bfp54Kg;
    int PhDbypkLMcTG;
    int NF8iaV;
    int W5IOzrVd3njY;
    int p0nu8i6JUzdw;
    int m8gS7MqztaK;
    Bfp54Kg = (844 - 844);
    PhDbypkLMcTG = (573 - 573);
    m8gS7MqztaK = 0;
    cin >> p0nu8i6JUzdw;
    N7pKPIdt = Rk7QMoz0e;
    for (W5IOzrVd3njY = 0; p0nu8i6JUzdw > W5IOzrVd3njY; W5IOzrVd3njY = W5IOzrVd3njY +1) {
        for (NF8iaV = 0; p0nu8i6JUzdw > NF8iaV; NF8iaV = NF8iaV +1) {
            cin >> Rk7QMoz0e[W5IOzrVd3njY][NF8iaV];
        }
    }
    for (W5IOzrVd3njY = 0; W5IOzrVd3njY < p0nu8i6JUzdw; W5IOzrVd3njY++) {
        for (NF8iaV = 0; NF8iaV < p0nu8i6JUzdw; NF8iaV++) {
            if (!(0 != *(*(N7pKPIdt +W5IOzrVd3njY) + NF8iaV))) {
                Bfp54Kg = NF8iaV;
                m8gS7MqztaK = 1;
                PhDbypkLMcTG = W5IOzrVd3njY;
                break;
            }
        }
        if (m8gS7MqztaK == 1)
            break;
    }
    hp9OFg = 0;
    DpfkKdHgR3Zh = (280 - 280);
    fTV4gG3w = (344 - 344);
    for (W5IOzrVd3njY = p0nu8i6JUzdw - 1; W5IOzrVd3njY >= 0; W5IOzrVd3njY--) {
        for (NF8iaV = p0nu8i6JUzdw - 1; NF8iaV >= 0; NF8iaV = NF8iaV -1) {
            if (*(*(N7pKPIdt +W5IOzrVd3njY) + NF8iaV) == 0) {
                DpfkKdHgR3Zh = NF8iaV;
                fTV4gG3w = W5IOzrVd3njY;
                hp9OFg = 1;
                break;
            }
        }
        if (hp9OFg == 1)
            break;
    }
    cout << (fTV4gG3w - PhDbypkLMcTG -1) * (DpfkKdHgR3Zh -Bfp54Kg-1) << endl;
    return 0;
}

