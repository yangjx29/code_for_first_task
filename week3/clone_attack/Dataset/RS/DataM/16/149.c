int main () {
    int DKJQlgHhcSL;
    int Ws2Otfum34Rp;
    int b;
    int c;
    int d;
    int e;
    int Pa7Vn4dC;
    int B;
    int dX6U8ow;
    int D;
    int E;
    cin >> DKJQlgHhcSL;
    if (DKJQlgHhcSL == 10000)
        cout << "00001" << endl;
    else if (DKJQlgHhcSL >= 1000 && 10000 > DKJQlgHhcSL) {
        Ws2Otfum34Rp = DKJQlgHhcSL / 1000;
        b = DKJQlgHhcSL / 100;
        c = DKJQlgHhcSL / 10;
        d = DKJQlgHhcSL % 10;
        Pa7Vn4dC = d;
        B = c % 10;
        dX6U8ow = b % 10;
        D = Ws2Otfum34Rp;
        cout << Pa7Vn4dC << B << dX6U8ow << D << endl;
    }
    else if (DKJQlgHhcSL >= 100 && DKJQlgHhcSL < 1000) {
        Ws2Otfum34Rp = DKJQlgHhcSL / 100;
        b = DKJQlgHhcSL / 10;
        c = DKJQlgHhcSL % 10;
        Pa7Vn4dC = c;
        B = b % 10;
        dX6U8ow = Ws2Otfum34Rp;
        cout << Pa7Vn4dC << B << dX6U8ow << endl;
    }
    else if (DKJQlgHhcSL >= 10 && DKJQlgHhcSL < 100) {
        Pa7Vn4dC = DKJQlgHhcSL % 10;
        B = DKJQlgHhcSL / 10;
        cout << Pa7Vn4dC << B << endl;
    }
    else
        cout << DKJQlgHhcSL << endl;
}

