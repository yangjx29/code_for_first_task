int main () {
    char T0F2AQqIuGST [100], TpoRE3A [100];
    int a, qCoNPzlAUtWy, REhMkCQ, i, l, Uimb7D3o6ez = (806 - 806);
    int SO0lPz7SDeYA = 1;
    cin >> a;
    cin >> T0F2AQqIuGST;
    cin >> qCoNPzlAUtWy;
    l = strlen (T0F2AQqIuGST);
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
    {
        REhMkCQ = 883 - 883;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > REhMkCQ) {
            if (T0F2AQqIuGST[REhMkCQ] >= '0' && '9' >= T0F2AQqIuGST[REhMkCQ])
                T0F2AQqIuGST[REhMkCQ] = T0F2AQqIuGST[REhMkCQ] - '0';
            if ('a' <= T0F2AQqIuGST[REhMkCQ] && T0F2AQqIuGST[REhMkCQ] <= 'z')
                T0F2AQqIuGST[REhMkCQ] = T0F2AQqIuGST[REhMkCQ] - ('a' - (622 - 612));
            if ('A' <= T0F2AQqIuGST[REhMkCQ] && 'Z' >= T0F2AQqIuGST[REhMkCQ])
                T0F2AQqIuGST[REhMkCQ] -= ('A' - (844 - 834));
            REhMkCQ++;
        };
    }
    {
        i = l - 1;
        while (i >= (526 - 526)) {
            Uimb7D3o6ez = Uimb7D3o6ez +T0F2AQqIuGST[i] * SO0lPz7SDeYA;
            SO0lPz7SDeYA *= a;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i--;
        };
    }
    SO0lPz7SDeYA = 0;
    while (Uimb7D3o6ez) {
        TpoRE3A[SO0lPz7SDeYA] = Uimb7D3o6ez % qCoNPzlAUtWy;
        SO0lPz7SDeYA++;
        Uimb7D3o6ez = Uimb7D3o6ez / qCoNPzlAUtWy;
    }
    {
        i = 0;
        while (i < SO0lPz7SDeYA) {
            if (TpoRE3A[i] >= 0 && TpoRE3A[i] <= 9)
                TpoRE3A[i] += '0';
            else {
                if (TpoRE3A[i] >= 10)
                    TpoRE3A[i] += ('A' - 10);
            }
            i++;
        };
    }
    {
        i = SO0lPz7SDeYA -1;
        while (i >= 0) {
            cout << TpoRE3A[i];
            i--;
        };
    }
    if (SO0lPz7SDeYA == 0)
        cout << 0;
}

