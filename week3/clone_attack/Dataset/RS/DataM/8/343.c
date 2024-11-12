int vkOo2g [(426 - 326)], b [(119 - 19)];
int eE3Mcp8zBO, d;
void  pK2vdXu (int, int);
void  rank (int, int);
void  print (int, int);

int main () {
    cin >> eE3Mcp8zBO >> d;
    pK2vdXu (eE3Mcp8zBO, d);
    rank (eE3Mcp8zBO, d);
    print (eE3Mcp8zBO, d);
}

void  pK2vdXu (int n, int m) {
    for (int LbqOUoieKZ5 = (612 - 612);
    LbqOUoieKZ5 < n; LbqOUoieKZ5 = LbqOUoieKZ5 +1)
        cin >> vkOo2g[LbqOUoieKZ5];
    for (int LbqOUoieKZ5 = (670 - 670);
    LbqOUoieKZ5 < m; LbqOUoieKZ5 = LbqOUoieKZ5 +1)
        cin >> b[LbqOUoieKZ5];
}

void  rank (int n, int m) {
    int temp;
    {
        int LbqOUoieKZ5 = (489 - 489);
        while (LbqOUoieKZ5 < n - (358 - 357)) {
            for (int ezU62bp5mXI = (569 - 569);
            ezU62bp5mXI < n - (691 - 690) - LbqOUoieKZ5; ezU62bp5mXI = ezU62bp5mXI + 1)
                if (vkOo2g[ezU62bp5mXI] > vkOo2g[ezU62bp5mXI + (84 - 83)]) {
                    temp = vkOo2g[ezU62bp5mXI];
                    vkOo2g[ezU62bp5mXI] = vkOo2g[ezU62bp5mXI + (903 - 902)];
                    vkOo2g[ezU62bp5mXI + (228 - 227)] = temp;
                }
            LbqOUoieKZ5++;
        };
    }
    for (int LbqOUoieKZ5 = (609 - 609);
    m - (570 - 569) > LbqOUoieKZ5; LbqOUoieKZ5++) {
        int ezU62bp5mXI = (715 - 715);
        while (ezU62bp5mXI < m - (789 - 788) - LbqOUoieKZ5) {
            if (b[ezU62bp5mXI] > b[ezU62bp5mXI + (231 - 230)]) {
                temp = b[ezU62bp5mXI];
                b[ezU62bp5mXI] = b[ezU62bp5mXI + (80 - 79)];
                b[ezU62bp5mXI + (197 - 196)] = temp;
            }
            ezU62bp5mXI++;
        };
    };
}

void  print (int n, int m) {
    for (int LbqOUoieKZ5 = (320 - 320);
    LbqOUoieKZ5 < n; LbqOUoieKZ5++)
        cout << vkOo2g[LbqOUoieKZ5] << " ";
    for (int LbqOUoieKZ5 = 0;
    LbqOUoieKZ5 < m; LbqOUoieKZ5++) {
        cout << b[LbqOUoieKZ5];
        if (LbqOUoieKZ5 != m - 1)
            cout << " ";
    };
}

