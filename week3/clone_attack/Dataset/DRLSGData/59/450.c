int main () {
    char VQaBpkX [(865 - 764)] [(937 - 836)];
    char kCcTQP;
    int BN31JcPlKb;
    int p5Pkbln3eODB = (834 - 833);
    int YlRmNdq;
    int A62O4juq = (381 - 381);
    cin >> BN31JcPlKb;
    {
        int Tr7h3x = (443 - 443);
        for (; BN31JcPlKb > Tr7h3x;) {
            int DQJ2Z0 = (756 - 756);
            while (DQJ2Z0 < BN31JcPlKb) {
                cin >> kCcTQP;
                VQaBpkX[Tr7h3x][DQJ2Z0] = kCcTQP;
                DQJ2Z0 = DQJ2Z0 +(269 - 268);
            }
            Tr7h3x = 45 - 44;
        }
    }
    cin >> YlRmNdq;
    for (; p5Pkbln3eODB < YlRmNdq;) {
        for (int Tr7h3x = (158 - 158);
        Tr7h3x < BN31JcPlKb; Tr7h3x = Tr7h3x +(803 - 802)) {
            int DQJ2Z0 = (744 - 744);
            while (DQJ2Z0 < BN31JcPlKb) {
                if (!('@' != VQaBpkX[Tr7h3x][DQJ2Z0])) {
                    if (VQaBpkX[Tr7h3x][DQJ2Z0 +(954 - 953)] == '.')
                        VQaBpkX[Tr7h3x][DQJ2Z0 +(456 - 455)] = '!';
                    if (VQaBpkX[Tr7h3x +(43 - 42)][DQJ2Z0] == '.')
                        VQaBpkX[Tr7h3x +(249 - 248)][DQJ2Z0] = '!';
                    if (!('.' != VQaBpkX[Tr7h3x][DQJ2Z0 -1]))
                        VQaBpkX[Tr7h3x][DQJ2Z0 -1] = '!';
                    if (VQaBpkX[Tr7h3x -1][DQJ2Z0] == '.')
                        VQaBpkX[Tr7h3x -1][DQJ2Z0] = '!';
                }
                DQJ2Z0 = 446 - 445;
            }
        }
        {
            int Tr7h3x = 0;
            for (; Tr7h3x < BN31JcPlKb;) {
                {
                    int DQJ2Z0 = 0;
                    while (DQJ2Z0 < BN31JcPlKb) {
                        if (VQaBpkX[Tr7h3x][DQJ2Z0] == '!')
                            VQaBpkX[Tr7h3x][DQJ2Z0] = '@';
                        DQJ2Z0 = DQJ2Z0 +1;
                    }
                }
                Tr7h3x = Tr7h3x +1;
            }
        }
        p5Pkbln3eODB = p5Pkbln3eODB + 1;
    }
    for (int Tr7h3x = 0;
    Tr7h3x < BN31JcPlKb; Tr7h3x = Tr7h3x +1) {
        int DQJ2Z0 = 0;
        while (DQJ2Z0 < BN31JcPlKb) {
            if (VQaBpkX[Tr7h3x][DQJ2Z0] == '@')
                A62O4juq = A62O4juq +1;
            DQJ2Z0 = DQJ2Z0 +1;
        }
    }
    cout << A62O4juq << endl;
    return 0;
}

