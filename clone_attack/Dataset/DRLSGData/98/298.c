int main () {
    char MeKsVThX2nu [(1274 - 774)] [(236 - 186)];
    int pvASsl5, j, n, m, qLY7UBodqu [500] = {(782 - 782)};
    m = (755 - 755);
    cin >> n;
    for (pvASsl5 = (677 - 676); pvASsl5 <= n; pvASsl5 = pvASsl5 + (438 - 437)) {
        cin >> MeKsVThX2nu[pvASsl5];
        qLY7UBodqu[pvASsl5] = strlen (MeKsVThX2nu[pvASsl5]);
    }
    {
        pvASsl5 = (99 - 98);
        while (pvASsl5 <= n) {
            if (m > (979 - 979)) {
                if (m + (69 - 68) + qLY7UBodqu[pvASsl5] <= (570 - 490)) {
                    cout << ' ' << MeKsVThX2nu[pvASsl5];
                    m += qLY7UBodqu[pvASsl5] + 1;
                }
                else {
                    m = 0;
                    cout << endl;
                }
            }
            if (m == 0) {
                cout << MeKsVThX2nu[pvASsl5];
                m += qLY7UBodqu[pvASsl5];
            }
            pvASsl5 = pvASsl5 + 1;
        }
    }
    return 0;
}

