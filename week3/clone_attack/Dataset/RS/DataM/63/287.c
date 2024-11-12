int main () {
    int ZKXIYkeEcA3s;
    ZKXIYkeEcA3s = (751 - 751);
    int x1;
    x1 = (182 - 182);
    int YwZrXx;
    YwZrXx = (484 - 484);
    int IOt9dQApI5;
    IOt9dQApI5 = (502 - 502);
    int j15Tiwo9 [(879 - 779)] [(1053 - 953)] = {(830 - 830)};
    int JyW3CwrhOU [100] [100] = {(180 - 180)};
    int c [100] [100] = {0};
    int D9tRcjmoTD;
    int LBpAiUqF;
    D9tRcjmoTD = 0;
    LBpAiUqF = 0;
    int BQqV2wU;
    BQqV2wU = 0;
    cin >> x1 >> ZKXIYkeEcA3s;
    {
        D9tRcjmoTD = 0;
        while (D9tRcjmoTD < x1) {
            for (LBpAiUqF = 0; LBpAiUqF < ZKXIYkeEcA3s; LBpAiUqF++) {
                cin >> j15Tiwo9[D9tRcjmoTD][LBpAiUqF];
            }
            D9tRcjmoTD++;
        };
    }
    cin >> YwZrXx >> IOt9dQApI5;
    for (D9tRcjmoTD = 0; D9tRcjmoTD < YwZrXx; D9tRcjmoTD++) {
        for (LBpAiUqF = 0; LBpAiUqF < IOt9dQApI5; LBpAiUqF++)
            cin >> JyW3CwrhOU[D9tRcjmoTD][LBpAiUqF];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (D9tRcjmoTD = 0; D9tRcjmoTD < x1; D9tRcjmoTD++) {
        for (LBpAiUqF = 0; LBpAiUqF < IOt9dQApI5; LBpAiUqF++) {
            c[D9tRcjmoTD][LBpAiUqF] = j15Tiwo9[D9tRcjmoTD][LBpAiUqF] - j15Tiwo9[D9tRcjmoTD][LBpAiUqF];
            {
                BQqV2wU = 0;
                while (BQqV2wU < ZKXIYkeEcA3s) {
                    c[D9tRcjmoTD][LBpAiUqF] = c[D9tRcjmoTD][LBpAiUqF] + j15Tiwo9[D9tRcjmoTD][BQqV2wU] * JyW3CwrhOU[BQqV2wU][LBpAiUqF];
                    BQqV2wU++;
                };
            };
        };
    }
    for (D9tRcjmoTD = 0; D9tRcjmoTD < x1; D9tRcjmoTD++) {
        for (LBpAiUqF = 0; LBpAiUqF < IOt9dQApI5 -(242 - 241); LBpAiUqF++) {
            cout << c[D9tRcjmoTD][LBpAiUqF] << " ";
        }
        cout << c[D9tRcjmoTD][IOt9dQApI5 -(725 - 724)] << endl;
    }
    return 0;
}

