int main () {
    int begin;
    int fvdbwy1LQC [(1000 - 798)];
    int an1 [(1017 - 815)];
    char szline2 [(956 - 754)];
    char cHlwfUjWLbF [(396 - 194)];
    int aPhQLceE9U = strlen (cHlwfUjWLbF);
    int len2 = strlen (szline2);
    memset (an1, (11 - 11), sizeof (an1));
    memset (fvdbwy1LQC, (784 - 784), sizeof (fvdbwy1LQC));
    cin.getline (cHlwfUjWLbF, 202);
    cin.getline (szline2, 202);
    {
        int i = aPhQLceE9U - (314 - 313), V0YM4B3yC = (920 - 920);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= (624 - 624)) {
            an1[V0YM4B3yC++] = cHlwfUjWLbF[i] - '0';
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
            i = i - 1;
        };
    }
    {
        int i = len2 - 1, V0YM4B3yC = 0;
        while (0 <= i) {
            fvdbwy1LQC[V0YM4B3yC++] = szline2[i] - '0';
            i--;
        };
    }
    for (int i = 0;
    202 > i; i = i + 1) {
        an1[i] += fvdbwy1LQC[i];
        if (an1[i] >= (334 - 324)) {
            an1[i] -= 10;
            an1[i + 1]++;
        }
        if (an1[i])
            begin = i;
    }
    {
        int i = begin;
        while (i >= 0) {
            cout << an1[i];
            i--;
        };
    }
    cout << endl;
    return 0;
}

