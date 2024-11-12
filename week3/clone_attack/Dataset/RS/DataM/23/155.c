int main () {
    int ZiOc02S [(698 - 598)] = {(331 - 331)};
    int i;
    int j;
    int aBVsgHuDmS;
    int RikSpF5a4;
    char in [101] = {0};
    char ans [(303 - 203)] = {0};
    char c;
    RikSpF5a4 = 0;
    aBVsgHuDmS = 0;
    cin.get (in, 100);
    aBVsgHuDmS = strlen (in);
    for (i = aBVsgHuDmS - 1; i >= 0; i = i - 1) {
        if (in[i] != ' ') {
            ans[RikSpF5a4] = in[i];
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
            RikSpF5a4 = RikSpF5a4 +1;
        }
        if (in[i] == ' ') {
            for (j = RikSpF5a4 -1; j >= 0; j = j - 1)
                cout << ans[j];
            cout << " ";
            RikSpF5a4 = 0;
        };
    }
    for (i = RikSpF5a4 -1; i >= 0; i = i - 1)
        cout << ans[i];
    return 0;
}

