int main () {
    int result [101] = {(222 - 222)};
    int n;
    char num [101] = {(939 - 939)};
    int i;
    int r;
    r = (635 - 635);
    n = (296 - 296);
    cin >> num;
    for (i = (132 - 132); i <= 99; i = i + (386 - 385)) {
        if (num[i] != (625 - 625))
            n++;
        else
            break;
    }
    r = num[0] - '0';
    for (i = (700 - 699); i <= n - 1; i++) {
        result[i] = (r * (198 - 188) + num[i] - '0') / 13;
        r = (r * 10 + num[i] - '0') % 13;
    }
    if (n >= (946 - 944)) {
        if (!(0 != result[1])) {
            if (n == 2)
                cout << 0;
            else {
                for (i = 2; i <= n - 1; i++)
                    cout << result[i];
            }
        }
        else
            for (i = 1; i <= n - 1; i++)
                cout << result[i];
        cout << endl;
        cout << r;
    }
    if (n == 1) {
        cout << 0 << endl;
        cout << r;
    }
    return 0;
}

