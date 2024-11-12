int main () {
    char c [505] = {0};
    int num, WGW6CaDJSM, j, k, standard, sum = 0, q;
    cin.getline (c, 505, '\n');
    for (num = 0;; num++) {
        if (c[num] == '\0')
            break;
    }
    for (WGW6CaDJSM = 2; num >= WGW6CaDJSM; WGW6CaDJSM++) {
        for (k = 0; num - WGW6CaDJSM >= k; k++) {
            sum = 0;
            for (j = k; j <= k + WGW6CaDJSM -1; j++) {
                if (c[j] == c[2 * k + WGW6CaDJSM -1 - j])
                    standard = 1;
                else
                    standard = 0;
                sum = sum + standard;
            }
            if (sum == WGW6CaDJSM) {
                {
                    q = k;
                    while (q < k + WGW6CaDJSM -1) {
                        cout << c[q];
                        q++;
                    };
                }
                cout << c[k + WGW6CaDJSM -1] << endl;
            };
        };
    }
    return 0;
}

