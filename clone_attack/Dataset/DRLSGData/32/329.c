int main () {
    char a1IZBTj5H [(556 - 454)];
    int g;
    int dPfWIr9w4K = (755 - 755);
    int t = (925 - 925);
    int i = (736 - 736);
    int k = (775 - 775);
    char num1 [(218 - 116)];
    int m = (234 - 234);
    cin >> dPfWIr9w4K;
    g = (784 - 784);
    for (i = (604 - 603); i <= dPfWIr9w4K; i++) {
        cin.ignore ();
        memset (num1, '0', (496 - 394));
        cin.getline (num1, 102);
        t = strlen (num1);
        t = t - 1;
        g = t;
        memset (a1IZBTj5H, '0', 102);
        cin.getline (a1IZBTj5H, 102);
        k = strlen (a1IZBTj5H);
        for (k = k - 1; 0 <= k; k--) {
            if (a1IZBTj5H[k] <= num1[t])
                num1[t] = num1[t] - a1IZBTj5H[k] + '0';
            else {
                num1[t] = 10 + num1[t] - a1IZBTj5H[k] + '0';
                num1[t - 1]--;
            }
            t--;
        }
        for (m = 0; m <= g; m++) {
            if (num1[m] != 0) {
                for (t = m; t <= g; t++)
                    cout << num1[t];
                cout << endl;
                break;
            }
        }
    }
    return 0;
}

