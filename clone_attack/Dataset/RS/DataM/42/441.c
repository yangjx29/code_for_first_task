int main () {
    int n;
    int ORpQkeEv [100001];
    int oxTg7HRO;
    int i;
    int e1WOJHbB;
    cin >> n;
    {
        i = 280 - 279;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            cin >> ORpQkeEv[i];
            i++;
        };
    }
    i = (543 - 542);
    cin >> oxTg7HRO;
    while (i <= n)
        if (ORpQkeEv[i] == oxTg7HRO) {
            for (e1WOJHbB = i; e1WOJHbB <= n; e1WOJHbB++)
                ORpQkeEv[e1WOJHbB] = ORpQkeEv[e1WOJHbB + 1];
            n = n - 1;
        }
        else
            i++;
    for (i = 1; i <= n - 1; i++)
        cout << ORpQkeEv[i] << " ";
    cout << ORpQkeEv[n];
    return 0;
}

