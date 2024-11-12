int main () {
    int eJe7pj;
    int vISucQ;
    int UNanGYu1Dq;
    eJe7pj = 1;
    int rmP3ecIVlFJD [vISucQ];
    cin >> vISucQ;
    for (UNanGYu1Dq = 1; vISucQ >= UNanGYu1Dq; UNanGYu1Dq++)
        cin >> rmP3ecIVlFJD[UNanGYu1Dq];
    cout << rmP3ecIVlFJD[1];
    {
        UNanGYu1Dq = 2;
        while (vISucQ >= UNanGYu1Dq) {
            eJe7pj = 1;
            {
                int zWil5rwgX = UNanGYu1Dq -1;
                while (zWil5rwgX > 0) {
                    if (rmP3ecIVlFJD[UNanGYu1Dq] == rmP3ecIVlFJD[zWil5rwgX])
                        eJe7pj = 0;
                    zWil5rwgX = zWil5rwgX - 1;
                };
            }
            if (eJe7pj == 1)
                cout << ' ' << rmP3ecIVlFJD[UNanGYu1Dq];
            UNanGYu1Dq = UNanGYu1Dq +1;
        };
    }
    return 0;
}

