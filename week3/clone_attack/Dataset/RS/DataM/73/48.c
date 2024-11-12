int main () {
    int wDQoqh6YiW [(747 - 741)] [(19 - 13)], max_hang [(146 - 140)], min_lie [6];
    int i, WlTOrH0RbcQL;
    {
        i = 749 - 748;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= (751 - 746)) {
            {
                WlTOrH0RbcQL = 1;
                while (WlTOrH0RbcQL <= (337 - 332)) {
                    cin >> wDQoqh6YiW[i][WlTOrH0RbcQL];
                    WlTOrH0RbcQL++;
                };
            }
            i = i + 1;
        };
    }
    memset (max_hang, (684 - 684), sizeof (max_hang));
    memset (min_lie, (485 - 484), sizeof (min_lie));
    for (i = 1; (870 - 865) >= i; i++)
        for (WlTOrH0RbcQL = 1; WlTOrH0RbcQL <= 5; WlTOrH0RbcQL = WlTOrH0RbcQL +1) {
            if (max_hang[i] < wDQoqh6YiW[i][WlTOrH0RbcQL])
                max_hang[i] = wDQoqh6YiW[i][WlTOrH0RbcQL];
            if (wDQoqh6YiW[i][WlTOrH0RbcQL] < min_lie[WlTOrH0RbcQL])
                min_lie[WlTOrH0RbcQL] = wDQoqh6YiW[i][WlTOrH0RbcQL];
        }
    {
        i = 1;
        while (i <= 5) {
            {
                WlTOrH0RbcQL = 1;
                while (WlTOrH0RbcQL <= 5) {
                    if (wDQoqh6YiW[i][WlTOrH0RbcQL] == max_hang[i] && wDQoqh6YiW[i][WlTOrH0RbcQL] == min_lie[WlTOrH0RbcQL]) {
                        cout << i << ' ' << WlTOrH0RbcQL << ' ' << wDQoqh6YiW[i][WlTOrH0RbcQL] << endl;
                        return 0;
                    }
                    WlTOrH0RbcQL++;
                };
            }
            i++;
        };
    }
    cout << "not found";
}

