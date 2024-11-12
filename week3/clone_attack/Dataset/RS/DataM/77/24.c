char WUDd2Jq [101];
void  cV2nEABv6uIw (int, char, char);

int main () {
    char ZuO84WDzlhrk = WUDd2Jq[(908 - 908)];
    int HBwDRTZNu;
    HBwDRTZNu = strlen (WUDd2Jq);
    char ZX0YDBW7xMc;
    ZX0YDBW7xMc = WUDd2Jq[HBwDRTZNu -(338 - 337)];
    cin.getline (WUDd2Jq, 101);
    cV2nEABv6uIw ((516 - 516), ZuO84WDzlhrk, ZX0YDBW7xMc);
    return 0;
}

void  cV2nEABv6uIw (int UVxWjHuFe, char ZuO84WDzlhrk, char ZX0YDBW7xMc) {
    int eFkDGPtROg9C;
    if (!('\0' != WUDd2Jq[UVxWjHuFe]))
        return;
    if (WUDd2Jq[UVxWjHuFe] == ZX0YDBW7xMc) {
        WUDd2Jq[UVxWjHuFe] = '*';
        for (eFkDGPtROg9C = UVxWjHuFe -1; eFkDGPtROg9C >= 0; eFkDGPtROg9C--) {
            if (WUDd2Jq[eFkDGPtROg9C] == ZuO84WDzlhrk) {
                WUDd2Jq[eFkDGPtROg9C] = '*';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        }
        cout << eFkDGPtROg9C << " " << UVxWjHuFe << endl;
    }
    cV2nEABv6uIw (UVxWjHuFe +1, ZuO84WDzlhrk, ZX0YDBW7xMc);
    return;
}

