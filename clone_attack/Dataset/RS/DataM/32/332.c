int main () {
    int p6qihUeO1c;
    int H8BI9SFZMg;
    cin >> H8BI9SFZMg;
    for (p6qihUeO1c = (267 - 266); p6qihUeO1c <= H8BI9SFZMg; p6qihUeO1c++) {
        int zu8kSf9gzM;
        int UIXtHZz6YF;
        zu8kSf9gzM = (374 - 374);
        char b [201];
        char a [201];
        int LogwfLJWm9;
        LogwfLJWm9 = strlen (a);
        int BJiVUD;
        BJiVUD = strlen (b);
        int b1 [(286 - 85)];
        int FZcfUl [(643 - 442)];
        memset (FZcfUl, (770 - 770), sizeof (FZcfUl));
        memset (b1, (434 - 434), sizeof (b1));
        cin >> a >> b;
        for (UIXtHZz6YF = LogwfLJWm9 -(213 - 212); (48 - 48) <= UIXtHZz6YF; UIXtHZz6YF = UIXtHZz6YF -1)
            FZcfUl[zu8kSf9gzM++] = a[UIXtHZz6YF] - '0';
        zu8kSf9gzM = 0;
        for (UIXtHZz6YF = BJiVUD -1; 0 <= UIXtHZz6YF; UIXtHZz6YF = UIXtHZz6YF -1)
            b1[zu8kSf9gzM++] = b[UIXtHZz6YF] - '0';
        for (UIXtHZz6YF = 0; UIXtHZz6YF < LogwfLJWm9; UIXtHZz6YF = UIXtHZz6YF +1) {
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
            if (FZcfUl[UIXtHZz6YF] >= b1[UIXtHZz6YF]) {
                FZcfUl[UIXtHZz6YF] = FZcfUl[UIXtHZz6YF] - b1[UIXtHZz6YF];
            }
            else {
                if (FZcfUl[UIXtHZz6YF] < b1[UIXtHZz6YF]) {
                    FZcfUl[UIXtHZz6YF] = FZcfUl[UIXtHZz6YF] + (859 - 849) - b1[UIXtHZz6YF];
                    FZcfUl[UIXtHZz6YF +1]--;
                };
            };
        }
        UIXtHZz6YF = LogwfLJWm9;
        for (; FZcfUl[UIXtHZz6YF] == 0;)
            UIXtHZz6YF--;
        for (; UIXtHZz6YF >= 0; UIXtHZz6YF--)
            cout << FZcfUl[UIXtHZz6YF];
        cout << endl;
    }
    return 0;
}

