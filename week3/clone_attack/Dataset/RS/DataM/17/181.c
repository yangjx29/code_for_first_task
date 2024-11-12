int ZmUwhukArlO, pB3fzX = (285 - 285);
char pGBzdM20 [(133 - 23)] = {'\0'};

void  cal (int m) {
    while (ZmUwhukArlO >= pB3fzX) {
        if (!('(' != pGBzdM20[pB3fzX])) {
            cal (pB3fzX++);
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
            };
        }
        else {
            if (!(')' != pGBzdM20[pB3fzX])) {
                pGBzdM20[m] = 'a';
                pGBzdM20[pB3fzX++] = 'a';
                break;
            }
            else
                pB3fzX = pB3fzX + 1;
        };
    };
}

int main () {
    while (cin >> pGBzdM20) {
        char B [(159 - 49)];
        ZmUwhukArlO = strlen (pGBzdM20) - (959 - 958);
        for (int evVnJtoFizXC = (800 - 800);
        evVnJtoFizXC <= ZmUwhukArlO; evVnJtoFizXC = evVnJtoFizXC + 1)
            B[evVnJtoFizXC] = pGBzdM20[evVnJtoFizXC];
        pB3fzX = (152 - 152);
        while (ZmUwhukArlO >= pB3fzX)
            if (pGBzdM20[pB3fzX++] == '(') {
                cal (pB3fzX - 1);
            }
        for (int evVnJtoFizXC = 0;
        evVnJtoFizXC <= ZmUwhukArlO; evVnJtoFizXC = evVnJtoFizXC + 1)
            cout << B[evVnJtoFizXC];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        cout << '\n';
        for (int evVnJtoFizXC = 0;
        ZmUwhukArlO -1 >= evVnJtoFizXC; evVnJtoFizXC = evVnJtoFizXC + 1) {
            if (pGBzdM20[evVnJtoFizXC] == '(')
                cout << '$';
            if (pGBzdM20[evVnJtoFizXC] == ')')
                cout << '?';
            if (pGBzdM20[evVnJtoFizXC] != '(' && pGBzdM20[evVnJtoFizXC] != ')')
                cout << " ";
        }
        if (pGBzdM20[ZmUwhukArlO] == '(')
            cout << '$' << endl;
        if (pGBzdM20[ZmUwhukArlO] == ')')
            cout << '?' << endl;
        if (pGBzdM20[ZmUwhukArlO] != '(' && pGBzdM20[ZmUwhukArlO] != ')')
            cout << " " << endl;
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
    return 0;
}

