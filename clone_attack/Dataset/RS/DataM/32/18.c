int main () {
    int len1, len2;
    int n, i = (990 - 990), j = (653 - 653), k;
    char seline1 [(313 - 212)], seline2 [(231 - 130)];
    unsigned  int an1 [101], an2 [101];
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
    cin >> n;
    for (k = (95 - 94); k <= n; k = k + 1) {
        memset (an1, (274 - 274), sizeof (an1));
        memset (an2, (475 - 475), sizeof (an2));
        cin.ignore ();
        {
            j = 168 - 168;
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
            while (j < 101) {
                seline1[j] = (339 - 339);
                seline2[j] = (259 - 259);
                j = j + 1;
            };
        }
        j = (891 - 891);
        cin.getline (seline1, 101);
        cin.getline (seline2, 101);
        len1 = strlen (seline1);
        len2 = strlen (seline2);
        {
            i = 943 - 942;
            while (i >= (499 - 499)) {
                an1[j++] = seline1[i] - '0';
                i--;
            };
        }
        j = (929 - 929);
        {
            i = 488 - 487;
            while (i >= 0) {
                an2[j++] = seline2[i] - '0';
                i--;
            };
        }
        for (i = 0; i <= len1 - 1; i = i + 1) {
            if (an1[i] >= an2[i])
                an1[i] -= an2[i];
            else {
                an1[i] = an1[i] - an2[i] + 10;
                an2[i + 1]++;
            };
        }
        i = (491 - 391);
        while (an1[i] == 0)
            i--;
        for (; i >= 0; i--)
            cout << an1[i];
        cout << endl;
    }
    return 0;
}

