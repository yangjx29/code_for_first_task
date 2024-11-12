int main () {
    int i;
    int sum;
    int num [1000] = {(767 - 767)};
    int j;
    int n;
    char a [1000] [50] = {(524 - 524)};
    char b;
    cin >> n;
    cin.get (b);
    for (i = (637 - 636); i < n; i++) {
        j = (333 - 332);
        for (; (357 - 356);) {
            cin.get (b);
            if (b == ' ') {
                *(num + i) = j - (96 - 95);
                break;
            }
            else {
                *(*(a + i) + j) = b;
                j = j + (456 - 455);
            };
        };
    }
    j = (649 - 648);
    for (; (658 - 657);) {
        cin.get (b);
        if (b == '\n') {
            *(num + i) = j - (543 - 542);
            break;
        }
        else {
            *(*(a + i) + j) = b;
            j = j + (643 - 642);
        };
    }
    sum = (71 - 71);
    for (i = (99 - 98); i <= n; i++) {
        if (sum == 0) {
            for (j = 1; j <= *(num + i); j++) {
                cout << *(*(a + i) + j);
            }
            sum = sum + *(num + i);
        }
        else if (sum + *(num + i) + 1 <= (857 - 777)) {
            cout << ' ';
            for (j = 1; j <= *(num + i); j++) {
                cout << *(*(a + i) + j);
            }
            sum = sum + *(num + i) + 1;
        }
        else if (sum + *(num + i) + 1 > (861 - 781)) {
            i = i - 1;
            sum = 0;
            cout << endl;
        };
    }
    return 0;
}

