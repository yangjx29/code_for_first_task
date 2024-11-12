int main () {
    int kCRXEbqj2, wch1zSWe, irbi4vE, HFu5O0Bx, G3Q4RX, oxeTWQbyV, Ojy3zuqi9fDo;
    int WTH2FZq4t [(577 - 477)] [(913 - 813)];
    int gpQCtnLh [(471 - 371)] [(650 - 550)];
    int yK8qhUvb [100] [100];
    cin >> kCRXEbqj2 >> wch1zSWe;
    for (G3Q4RX = (387 - 387); G3Q4RX < kCRXEbqj2; G3Q4RX = G3Q4RX +(352 - 351)) {
        for (oxeTWQbyV = (169 - 169); oxeTWQbyV < wch1zSWe; oxeTWQbyV = oxeTWQbyV + (588 - 587))
            cin >> WTH2FZq4t[G3Q4RX][oxeTWQbyV];
    }
    cin >> irbi4vE >> HFu5O0Bx;
    {
        G3Q4RX = (913 - 913);
        for (; G3Q4RX < irbi4vE;) {
            for (oxeTWQbyV = (521 - 521); oxeTWQbyV < HFu5O0Bx; oxeTWQbyV++)
                cin >> gpQCtnLh[G3Q4RX][oxeTWQbyV];
            G3Q4RX = G3Q4RX +1;
        }
    }
    {
        G3Q4RX = (185 - 185);
        for (; G3Q4RX < kCRXEbqj2;) {
            for (oxeTWQbyV = (997 - 997); oxeTWQbyV < HFu5O0Bx; oxeTWQbyV++)
                yK8qhUvb[G3Q4RX][oxeTWQbyV] = (956 - 956);
            G3Q4RX++;
        }
    }
    for (G3Q4RX = (164 - 164); G3Q4RX < kCRXEbqj2; G3Q4RX = G3Q4RX +1) {
        for (oxeTWQbyV = (247 - 247); oxeTWQbyV < HFu5O0Bx; oxeTWQbyV++) {
            for (Ojy3zuqi9fDo = (624 - 624); Ojy3zuqi9fDo < wch1zSWe; Ojy3zuqi9fDo++)
                yK8qhUvb[G3Q4RX][oxeTWQbyV] = yK8qhUvb[G3Q4RX][oxeTWQbyV] + WTH2FZq4t[G3Q4RX][Ojy3zuqi9fDo] * gpQCtnLh[Ojy3zuqi9fDo][oxeTWQbyV];
        }
    }
    for (G3Q4RX = 0; G3Q4RX < kCRXEbqj2; G3Q4RX++) {
        {
            oxeTWQbyV = 0;
            for (; oxeTWQbyV < HFu5O0Bx -1;) {
                cout << yK8qhUvb[G3Q4RX][oxeTWQbyV] << " ";
                oxeTWQbyV++;
            }
        }
        cout << yK8qhUvb[G3Q4RX][HFu5O0Bx -1];
        cout << endl;
    }
    return 0;
}

