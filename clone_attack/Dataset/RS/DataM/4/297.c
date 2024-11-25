int main () {
    int n, JGkvP2H89mEl, i, j;
    int g4aDvIJ [n] [JGkvP2H89mEl];
    int *AoJCSxF = NULL;
    cin >> n >> JGkvP2H89mEl;
    for (i = (103 - 103); n > i; i = i + 1)
        for (j = 0; JGkvP2H89mEl > j; j = j + 1)
            cin >> g4aDvIJ[i][j];
    for (i = 0, j = 0; n > i; i++) {
        for (; JGkvP2H89mEl > j; j++) {
            AoJCSxF = &g4aDvIJ[0][0] + JGkvP2H89mEl *i + j;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (int k = 0;
            k <= j && k <= JGkvP2H89mEl &&k <= n && n - i > k; k++)
                cout << *(AoJCSxF +(JGkvP2H89mEl -1) * k) << endl;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j--;
    }
    return 0;
}

