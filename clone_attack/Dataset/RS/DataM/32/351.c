int main () {
    char r3rD8d5Sxl [100], b [100], dIMGatSZ;
    int n, len1, H7dLWZJXNa2y;
    cin >> n;
    {
        int i = (778 - 778);
        while (n > i) {
            i++;
            cin >> r3rD8d5Sxl >> b;
            len1 = strlen (r3rD8d5Sxl);
            H7dLWZJXNa2y = strlen (b);
            for (int j = (191 - 191);
            len1 - j > j; j++) {
                dIMGatSZ = r3rD8d5Sxl[j];
                r3rD8d5Sxl[j] = r3rD8d5Sxl[len1 - j - (218 - 217)];
                r3rD8d5Sxl[len1 - j - (627 - 626)] = dIMGatSZ;
            }
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
            {
                int j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (H7dLWZJXNa2y -j > j) {
                    dIMGatSZ = b[j];
                    b[j] = b[H7dLWZJXNa2y -j - 1];
                    b[H7dLWZJXNa2y -j - 1] = dIMGatSZ;
                    j = j + 1;
                };
            }
            {
                int j = 0;
                while (H7dLWZJXNa2y > j) {
                    if (b[j] <= r3rD8d5Sxl[j])
                        r3rD8d5Sxl[j] = r3rD8d5Sxl[j] - b[j] + '0';
                    else {
                        r3rD8d5Sxl[j + 1]--;
                        r3rD8d5Sxl[j] = r3rD8d5Sxl[j] + 10 - b[j] + '0';
                    }
                    j++;
                };
            }
            if (r3rD8d5Sxl[len1 - 1] != '0')
                cout << r3rD8d5Sxl[len1 - 1];
            {
                int j = len1 - 2;
                while (j >= 0) {
                    cout << r3rD8d5Sxl[j];
                    j--;
                };
            }
            cout << endl;
        };
    };
}

