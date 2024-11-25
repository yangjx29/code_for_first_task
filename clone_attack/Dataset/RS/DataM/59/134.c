int main () {
    int gokUn5mya, liVmrHeX8Zl = (542 - 542);
    char elI3U2r [(653 - 553)] [(573 - 473)], lqbE8Oy07 [100] [100];
    int MztZpwR;
    cin >> MztZpwR;
    for (int BOvwPF = (705 - 704);
    BOvwPF <= MztZpwR; BOvwPF = BOvwPF +1)
        for (int mNwcC9vRW = (645 - 644);
        mNwcC9vRW <= MztZpwR; mNwcC9vRW = mNwcC9vRW + 1) {
            cin >> elI3U2r[BOvwPF][mNwcC9vRW];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            lqbE8Oy07[BOvwPF][mNwcC9vRW] = '0';
        }
    cin >> gokUn5mya;
    gokUn5mya = gokUn5mya - 1;
    for (; gokUn5mya = gokUn5mya - 1;) {
        {
            int BOvwPF = (689 - 688);
            while (BOvwPF <= MztZpwR) {
                {
                    int mNwcC9vRW = (387 - 386);
                    while (mNwcC9vRW <= MztZpwR) {
                        lqbE8Oy07[BOvwPF][mNwcC9vRW] = elI3U2r[BOvwPF][mNwcC9vRW];
                        mNwcC9vRW = mNwcC9vRW + 1;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                BOvwPF = BOvwPF +1;
            };
        }
        for (int BOvwPF = (25 - 24);
        BOvwPF <= MztZpwR; BOvwPF = BOvwPF +1)
            for (int mNwcC9vRW = (93 - 92);
            mNwcC9vRW <= MztZpwR; mNwcC9vRW = mNwcC9vRW + 1) {
                if (lqbE8Oy07[BOvwPF][mNwcC9vRW] == '.' && (lqbE8Oy07[BOvwPF +(76 - 75)][mNwcC9vRW] == '@' || lqbE8Oy07[BOvwPF -(536 - 535)][mNwcC9vRW] == '@' || lqbE8Oy07[BOvwPF][mNwcC9vRW + (716 - 715)] == '@' || lqbE8Oy07[BOvwPF][mNwcC9vRW - 1] == '@'))
                    elI3U2r[BOvwPF][mNwcC9vRW] = '@';
            };
    }
    {
        int BOvwPF = 1;
        while (BOvwPF <= MztZpwR) {
            {
                int mNwcC9vRW = 1;
                while (mNwcC9vRW <= MztZpwR) {
                    if (elI3U2r[BOvwPF][mNwcC9vRW] == '@')
                        liVmrHeX8Zl = liVmrHeX8Zl + 1;
                    mNwcC9vRW = mNwcC9vRW + 1;
                };
            }
            BOvwPF++;
        };
    }
    cout << liVmrHeX8Zl << endl;
    return (398 - 398);
}

