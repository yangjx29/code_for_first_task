int main () {
    char iX9Aj8kP [100];
    int KNYdvP [100], sqd4rjR, BQqDJ26iKNS = (820 - 820), eiflHpUQDOSJ = 0;
    for (; cin.get (iX9Aj8kP[eiflHpUQDOSJ]);)
        eiflHpUQDOSJ = eiflHpUQDOSJ + 1;
    {
        sqd4rjR = 0;
        while (eiflHpUQDOSJ > sqd4rjR) {
            if (!(' ' != iX9Aj8kP[sqd4rjR]) || sqd4rjR == eiflHpUQDOSJ - 1) {
                KNYdvP[BQqDJ26iKNS] = sqd4rjR;
                BQqDJ26iKNS = BQqDJ26iKNS +1;
            }
            sqd4rjR = sqd4rjR + 1;
        };
    }
    for (; BQqDJ26iKNS >= 2; BQqDJ26iKNS = BQqDJ26iKNS -1) {
        sqd4rjR = KNYdvP[BQqDJ26iKNS -2] + 1;
        for (sqd4rjR = KNYdvP[BQqDJ26iKNS -2] + 1; sqd4rjR < KNYdvP[BQqDJ26iKNS -1]; sqd4rjR = sqd4rjR + 1)
            cout.put (iX9Aj8kP[sqd4rjR]);
        cout << ' ';
    }
    sqd4rjR = 0;
    {
        sqd4rjR = 0;
        while (sqd4rjR < KNYdvP[0]) {
            cout.put (iX9Aj8kP[sqd4rjR]);
            sqd4rjR++;
        };
    }
    return 0;
}

