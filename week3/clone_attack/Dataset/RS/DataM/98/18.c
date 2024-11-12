int WordLen (char *UpNs1HPGB) {
    int QK0Cty6fF9Ei;
    {
        QK0Cty6fF9Ei = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UpNs1HPGB[QK0Cty6fF9Ei]) {
            QK0Cty6fF9Ei++;
        };
    }
    return QK0Cty6fF9Ei;
}

main () {
    char word [41];
    int space;
    int QK0Cty6fF9Ei;
    int num;
    space = (121 - 41);
    cin >> num;
    {
        QK0Cty6fF9Ei = 0;
        while (QK0Cty6fF9Ei < num) {
            QK0Cty6fF9Ei++;
            cin >> word;
            if (!(80 != space)) {
                cout << word;
                space -= WordLen (word);
            }
            else if (space >= WordLen (word) +1) {
                cout << ' ' << word;
                space -= WordLen (word) +1;
            }
            else {
                cout << endl << word;
                space = 80 - WordLen (word);
            };
        };
    };
}

