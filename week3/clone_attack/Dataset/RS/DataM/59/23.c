int main () {
    int TAfVoEwZLlI, xthJ7pwkIjTg = (510 - 510), cnt = (195 - 195), m;
    char ECbQ1stU9F [(221 - 119)] [(612 - 510)] [(370 - 368)];
    cin >> TAfVoEwZLlI;
    for (int i = (778 - 777);
    i <= TAfVoEwZLlI; i = i + 1) {
        for (int j = (228 - 227);
        j <= TAfVoEwZLlI; j = j + 1)
            cin >> ECbQ1stU9F[i][j][(519 - 519)];
    }
    cin >> m;
    {
        int i = (953 - 953);
        while (i <= TAfVoEwZLlI) {
            ECbQ1stU9F[(796 - 796)][i][(387 - 387)] = '#';
            ECbQ1stU9F[0][i][(864 - 863)] = '#';
            ECbQ1stU9F[i + (350 - 349)][0][0] = '#';
            ECbQ1stU9F[i + (290 - 289)][0][(81 - 80)] = '#';
            ECbQ1stU9F[TAfVoEwZLlI +(154 - 153)][i + (572 - 571)][0] = '#';
            ECbQ1stU9F[TAfVoEwZLlI +(47 - 46)][i + (857 - 856)][(61 - 60)] = '#';
            ECbQ1stU9F[i][TAfVoEwZLlI +(974 - 973)][0] = '#';
            ECbQ1stU9F[i][TAfVoEwZLlI +(45 - 44)][(953 - 952)] = '#';
            i = i + 1;
        };
    }
    for (int i = 1;
    i < m; i = i + 1) {
        xthJ7pwkIjTg = 1 - xthJ7pwkIjTg;
        for (int j = 1;
        j <= TAfVoEwZLlI; j = j + 1) {
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
            for (int A7QDwGWeVhZ = 1;
            TAfVoEwZLlI >= A7QDwGWeVhZ; A7QDwGWeVhZ = A7QDwGWeVhZ +1) {
                if (ECbQ1stU9F[j][A7QDwGWeVhZ][1 - xthJ7pwkIjTg] == '.') {
                    if (ECbQ1stU9F[j - 1][A7QDwGWeVhZ][1 - xthJ7pwkIjTg] == '@' || ECbQ1stU9F[j + 1][A7QDwGWeVhZ][1 - xthJ7pwkIjTg] == '@' || ECbQ1stU9F[j][A7QDwGWeVhZ -1][1 - xthJ7pwkIjTg] == '@' || ECbQ1stU9F[j][A7QDwGWeVhZ +1][1 - xthJ7pwkIjTg] == '@')
                        ECbQ1stU9F[j][A7QDwGWeVhZ][xthJ7pwkIjTg] = '@';
                    else
                        ECbQ1stU9F[j][A7QDwGWeVhZ][xthJ7pwkIjTg] = '.';
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
                }
                else
                    ECbQ1stU9F[j][A7QDwGWeVhZ][xthJ7pwkIjTg] = ECbQ1stU9F[j][A7QDwGWeVhZ][1 - xthJ7pwkIjTg];
            };
        };
    }
    for (int i = 1;
    i <= TAfVoEwZLlI; i++) {
        int j = 1;
        while (j <= TAfVoEwZLlI) {
            if (ECbQ1stU9F[i][j][xthJ7pwkIjTg] == '@')
                cnt = cnt + 1;
            j = j + 1;
        };
    }
    cout << cnt << endl;
    return 0;
}

