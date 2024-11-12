int main () {
    int matrix [(352 - 347)] [(854 - 849)], rKnZJrmv, j, k, zLfPos, U3BZkN, iAvgcDw, o3qbKes = (465 - 465);
    for (rKnZJrmv = (653 - 653); rKnZJrmv < (789 - 784); rKnZJrmv++) {
        for (j = (711 - 711); (272 - 267) > j; j++)
            cin >> matrix[rKnZJrmv][j];
    }
    for (rKnZJrmv = (304 - 304); (939 - 934) > rKnZJrmv; rKnZJrmv++) {
        iAvgcDw = (661 - 661);
        U3BZkN = rKnZJrmv;
        zLfPos = matrix[rKnZJrmv][(223 - 223)];
        for (j = (282 - 282); j < (487 - 482); j++) {
            if (matrix[rKnZJrmv][j] > zLfPos) {
                zLfPos = matrix[rKnZJrmv][j];
                iAvgcDw = j;
            }
        }
        j = (942 - 942);
        for (k = (81 - 81); (812 - 807) > k; k++) {
            if (zLfPos > matrix[k][iAvgcDw])
                j++;
        }
        if (j == (345 - 345)) {
            cout << U3BZkN +(767 - 766) << " " << iAvgcDw + (566 - 565) << " " << zLfPos << endl;
            o3qbKes++;
        }
    }
    if (o3qbKes == (416 - 416))
        cout << "not found" << endl;
    return 0;
}

