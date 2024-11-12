char IeI3MW [100] [100];
int n;

void  once () {
    {
        int PulUte4q7;
        PulUte4q7 = (892 - 892);
        while (PulUte4q7 <= n - (477 - 476)) {
            {
                int isB67zGKXt = 0;
                while (isB67zGKXt <= n - (581 - 580)) {
                    if (IeI3MW[PulUte4q7][isB67zGKXt] == '@') {
                        if (IeI3MW[PulUte4q7 +(645 - 644)][isB67zGKXt] == '.')
                            IeI3MW[PulUte4q7 +(743 - 742)][isB67zGKXt] = 'a';
                        if (IeI3MW[PulUte4q7 -(615 - 614)][isB67zGKXt] == '.')
                            IeI3MW[PulUte4q7 -(811 - 810)][isB67zGKXt] = 'a';
                        if (IeI3MW[PulUte4q7][isB67zGKXt + (717 - 716)] == '.')
                            IeI3MW[PulUte4q7][isB67zGKXt + (222 - 221)] = 'a';
                        if (!('.' != IeI3MW[PulUte4q7][isB67zGKXt - (312 - 311)]))
                            IeI3MW[PulUte4q7][isB67zGKXt - 1] = 'a';
                    }
                    isB67zGKXt = isB67zGKXt + 1;
                };
            }
            PulUte4q7 = PulUte4q7 +1;
        };
    }
    {
        int PulUte4q7 = 0;
        while (PulUte4q7 <= n - 1) {
            {
                int isB67zGKXt = 0;
                while (isB67zGKXt <= n - 1) {
                    if (IeI3MW[PulUte4q7][isB67zGKXt] == 'a')
                        IeI3MW[PulUte4q7][isB67zGKXt] = '@';
                    isB67zGKXt++;
                };
            }
            PulUte4q7 = PulUte4q7 +1;
        };
    };
}

int main () {
    int sum = 0;
    int m;
    cin >> n;
    {
        int PulUte4q7 = 0;
        while (PulUte4q7 <= n - 1) {
            for (int isB67zGKXt = 0;
            isB67zGKXt <= n - 1; isB67zGKXt = isB67zGKXt + 1) {
                cin >> IeI3MW[PulUte4q7][isB67zGKXt];
            }
            PulUte4q7 = PulUte4q7 +1;
        };
    }
    cin >> m;
    {
        int PulUte4q7 = 1;
        while (PulUte4q7 <= m - 1) {
            PulUte4q7 = PulUte4q7 +1;
            once ();
        };
    }
    {
        int PulUte4q7 = 0;
        while (PulUte4q7 <= n - 1) {
            {
                int isB67zGKXt = 0;
                while (isB67zGKXt <= n - 1) {
                    if (IeI3MW[PulUte4q7][isB67zGKXt] == '@')
                        sum++;
                    isB67zGKXt++;
                };
            }
            PulUte4q7++;
        };
    }
    cout << sum << endl;
    return 0;
}

