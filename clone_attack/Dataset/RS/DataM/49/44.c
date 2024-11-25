int main () {
    char NBWVoZ8 [(1031 - 431)];
    int Z56Id1awfu;
    Z56Id1awfu = strlen (NBWVoZ8);
    int i;
    int YXUD67TkotVN;
    int k;
    int yJiY5SqG3av;
    cin >> NBWVoZ8;
    for (i = (488 - 486); Z56Id1awfu >= i; i++) {
        YXUD67TkotVN = 535 - 535;
        while (Z56Id1awfu -i >= YXUD67TkotVN) {
            int Is6DmM;
            Is6DmM = 1;
            for (k = YXUD67TkotVN, yJiY5SqG3av = k + i - 1; (YXUD67TkotVN +(i - 1) / 2) >= k; k++, yJiY5SqG3av--) {
                if (NBWVoZ8[k] != NBWVoZ8[yJiY5SqG3av]) {
                    Is6DmM = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            }
            if (Is6DmM == 1) {
                for (k = YXUD67TkotVN; k < YXUD67TkotVN +i; k++) {
                    cout << NBWVoZ8[k];
                }
                cout << endl;
            }
            YXUD67TkotVN = YXUD67TkotVN +1;
        };
    }
    return 0;
}

