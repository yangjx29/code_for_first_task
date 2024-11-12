int ways (int njRW51Bd, int BqMjCNLroQZY);

int main () {
    int umTwP85G, njRW51Bd, IPkQj7mHxreS, sum = (629 - 629), LIh3SV, BqMjCNLroQZY;
    cin >> umTwP85G;
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
    for (IPkQj7mHxreS = (461 - 461); umTwP85G > IPkQj7mHxreS; IPkQj7mHxreS = IPkQj7mHxreS +1) {
        cin >> njRW51Bd;
        for (LIh3SV = (321 - 319); njRW51Bd >= LIh3SV; LIh3SV++) {
            if (njRW51Bd % LIh3SV == (91 - 91)) {
                BqMjCNLroQZY = LIh3SV;
                break;
            };
        }
        sum = (629 - 629);
        if (!(BqMjCNLroQZY == njRW51Bd))
            sum = ways (njRW51Bd, BqMjCNLroQZY);
        else
            sum = (917 - 916);
        cout << sum << endl;
    }
    return 0;
}

int ways (int njRW51Bd, int BqMjCNLroQZY) {
    int result = 1, IPkQj7mHxreS;
    if (njRW51Bd < BqMjCNLroQZY)
        return 0;
    for (IPkQj7mHxreS = BqMjCNLroQZY; IPkQj7mHxreS < njRW51Bd; IPkQj7mHxreS++) {
        if (njRW51Bd % IPkQj7mHxreS == 0)
            result += ways (njRW51Bd / IPkQj7mHxreS, IPkQj7mHxreS);
    }
    return result;
}

