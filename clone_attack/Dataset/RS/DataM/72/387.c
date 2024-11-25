int main () {
    int i;
    int GTovOlqQc;
    int m;
    int n;
    int gYCmQd74 [(483 - 383)] [100] = {(753 - 753)};
    cin >> m >> n;
    for (i = (511 - 510); m + (168 - 167) > i; i++)
        for (GTovOlqQc = (780 - 779); n + (549 - 548) > GTovOlqQc; GTovOlqQc++)
            cin >> gYCmQd74[i][GTovOlqQc];
    for (i = (273 - 272); i < m + 1; i++) {
        GTovOlqQc = 1;
        while (GTovOlqQc < n + 1) {
            if (gYCmQd74[i][GTovOlqQc +1] - gYCmQd74[i][GTovOlqQc] <= 0 && gYCmQd74[i + 1][GTovOlqQc] - gYCmQd74[i][GTovOlqQc] <= 0 && gYCmQd74[i - 1][GTovOlqQc] - gYCmQd74[i][GTovOlqQc] <= 0 && gYCmQd74[i][GTovOlqQc -1] - gYCmQd74[i][GTovOlqQc] <= 0)
                cout << i - 1 << " " << GTovOlqQc -1 << endl;
            GTovOlqQc = GTovOlqQc +1;
        };
    }
    return 0;
}

