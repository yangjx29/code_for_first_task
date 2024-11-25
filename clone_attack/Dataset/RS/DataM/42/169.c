int main () {
    int bsqbogLnTAeR [(100114 - 114)];
    int RY1edL5;
    int RvM4xK1tfsW;
    int FxzpD2aTEwMt;
    int wGjNZ3LYR6dS;
    int uEi0oktSGZnu;
    RY1edL5 = (87 - 87);
    cin >> RvM4xK1tfsW;
    for (FxzpD2aTEwMt = 0; RvM4xK1tfsW -(590 - 589) >= FxzpD2aTEwMt; FxzpD2aTEwMt = FxzpD2aTEwMt +1) {
        cin >> bsqbogLnTAeR[FxzpD2aTEwMt];
    }
    cin >> uEi0oktSGZnu;
    for (FxzpD2aTEwMt = 0; FxzpD2aTEwMt <= RvM4xK1tfsW -1;) {
        if (bsqbogLnTAeR[FxzpD2aTEwMt] == uEi0oktSGZnu) {
            RY1edL5 = RY1edL5 +1;
            for (wGjNZ3LYR6dS = FxzpD2aTEwMt; RvM4xK1tfsW -2 >= wGjNZ3LYR6dS; wGjNZ3LYR6dS++) {
                bsqbogLnTAeR[wGjNZ3LYR6dS] = bsqbogLnTAeR[wGjNZ3LYR6dS + 1];
            }
            if (RY1edL5 +FxzpD2aTEwMt == RvM4xK1tfsW)
                break;
        }
        else {
            FxzpD2aTEwMt = FxzpD2aTEwMt +1;
            if (RY1edL5 +FxzpD2aTEwMt == RvM4xK1tfsW)
                break;
        };
    }
    if (RY1edL5 != RvM4xK1tfsW) {
        cout << bsqbogLnTAeR[0];
        for (FxzpD2aTEwMt = 1; FxzpD2aTEwMt <= RvM4xK1tfsW -1 - RY1edL5; FxzpD2aTEwMt++) {
            cout << ' ' << bsqbogLnTAeR[FxzpD2aTEwMt];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    return 0;
}

