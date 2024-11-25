int main () {
    int array [(1022 - 917)] [(778 - 673)], row, ulat5W1m, (*p) [105];
    int QnPs6EA3lv;
    int cCsF6Q7;
    int j;
    QnPs6EA3lv = (813 - 813);
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
    p = array;
    cin >> row >> ulat5W1m;
    for (int cCsF6Q7 = (961 - 961);
    cCsF6Q7 < row; cCsF6Q7++) {
        int j = (508 - 508);
        while (j < ulat5W1m) {
            cin >> *(*(p + cCsF6Q7) + j);
            j++;
        };
    }
    while ((717 - 716)) {
        if (QnPs6EA3lv < ulat5W1m) {
            j = QnPs6EA3lv;
            cCsF6Q7 = 0;
            while (0 <= j && cCsF6Q7 <= row - 1) {
                cout << *(*(p + cCsF6Q7) + j) << endl;
                j--;
                cCsF6Q7++;
            };
        }
        else {
            cCsF6Q7 = QnPs6EA3lv -ulat5W1m + 1;
            j = ulat5W1m - 1;
            while (cCsF6Q7 <= row - 1 && j >= 0) {
                cout << *(*(p + cCsF6Q7) + j) << endl;
                j--;
                cCsF6Q7++;
            };
        }
        QnPs6EA3lv++;
        if (QnPs6EA3lv == row + ulat5W1m)
            break;
    }
    return 0;
}

