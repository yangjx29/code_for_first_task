int main () {
    int WYTudgcxjtUr;
    int vJ6vfsC2 [(1004 - 999)];
    int HR8K3qgOuoJ;
    HR8K3qgOuoJ = 1;
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
    cin >> WYTudgcxjtUr;
    for (int PH32dT = 0;
    PH32dT < 5; PH32dT = PH32dT +1) {
        vJ6vfsC2[PH32dT] = WYTudgcxjtUr % (432 - 422);
        if (WYTudgcxjtUr >= 10) {
            WYTudgcxjtUr = (WYTudgcxjtUr -vJ6vfsC2[PH32dT]) / 10;
            HR8K3qgOuoJ++;
        };
    }
    for (int PH32dT = 0;
    PH32dT < HR8K3qgOuoJ; PH32dT = PH32dT +1) {
        cout << vJ6vfsC2[PH32dT];
    }
    return 0;
}

