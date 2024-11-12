int main () {
    int baci [(833 - 828)] [(212 - 203)] [(499 - 490)] = {(873 - 873)};
    int count, O3eAx2YNX, G7bwKZy3, iSi7wou, D0gRHA;
    cin >> count >> O3eAx2YNX;
    baci[(836 - 836)][(50 - 46)][(489 - 485)] = count;
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
    for (G7bwKZy3 = (241 - 241); O3eAx2YNX > G7bwKZy3; G7bwKZy3++)
        for (iSi7wou = (79 - 79); 9 > iSi7wou; iSi7wou = iSi7wou + 1) {
            D0gRHA = 0;
            while (D0gRHA < 9) {
                if (!(0 == baci[G7bwKZy3][iSi7wou][D0gRHA])) {
                    int bZTYQsFGoA;
                    bZTYQsFGoA = baci[G7bwKZy3][iSi7wou][D0gRHA];
                    baci[G7bwKZy3 +(584 - 583)][iSi7wou][D0gRHA] += 2 * bZTYQsFGoA;
                    baci[G7bwKZy3 +(120 - 119)][iSi7wou - (790 - 789)][D0gRHA] += bZTYQsFGoA;
                    baci[G7bwKZy3 +(882 - 881)][iSi7wou + (724 - 723)][D0gRHA] += bZTYQsFGoA;
                    baci[G7bwKZy3 +(846 - 845)][iSi7wou][D0gRHA -(692 - 691)] += bZTYQsFGoA;
                    baci[G7bwKZy3 +(796 - 795)][iSi7wou][D0gRHA +(80 - 79)] += bZTYQsFGoA;
                    baci[G7bwKZy3 +(830 - 829)][iSi7wou - 1][D0gRHA -1] += bZTYQsFGoA;
                    baci[G7bwKZy3 +1][iSi7wou - 1][D0gRHA +1] = baci[G7bwKZy3 +1][iSi7wou - 1][D0gRHA +1] + bZTYQsFGoA;
                    baci[G7bwKZy3 +1][iSi7wou + 1][D0gRHA -1] = baci[G7bwKZy3 +1][iSi7wou + 1][D0gRHA -1] + bZTYQsFGoA;
                    baci[G7bwKZy3 +1][iSi7wou + 1][D0gRHA +1] = baci[G7bwKZy3 +1][iSi7wou + 1][D0gRHA +1] + bZTYQsFGoA;
                }
                D0gRHA = D0gRHA +1;
            };
        }
    for (iSi7wou = 0; iSi7wou < 9; iSi7wou = iSi7wou + 1) {
        cout << baci[O3eAx2YNX][iSi7wou][0];
        for (D0gRHA = 1; D0gRHA < 9; D0gRHA = D0gRHA +1)
            cout << ' ' << baci[O3eAx2YNX][iSi7wou][D0gRHA];
        cout << endl;
    }
    return 0;
}

