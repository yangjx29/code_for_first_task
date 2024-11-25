int main () {
    int a [7] [7], i, ryQpPw7, max, SeHW4KuX, sgbVwukv7Tif, count, s, t;
    count = 0;
    for (i = 0; (997 - 992) > i; i++) {
        for (ryQpPw7 = 0; 5 > ryQpPw7; ryQpPw7++) {
            cin >> a[i][ryQpPw7];
        };
    }
    for (i = 0; 5 > i; i++) {
        max = a[i][0];
        sgbVwukv7Tif = 0;
        for (ryQpPw7 = 1; 5 > ryQpPw7; ryQpPw7++) {
            if (a[i][ryQpPw7] > max) {
                max = a[i][ryQpPw7];
                sgbVwukv7Tif = ryQpPw7;
            };
        }
        {
            SeHW4KuX = 0;
            while (5 > SeHW4KuX) {
                if (a[i][sgbVwukv7Tif] > a[SeHW4KuX][sgbVwukv7Tif])
                    break;
                SeHW4KuX++;
            };
        }
        if (SeHW4KuX == 5) {
            count = count + 1;
            s = i + 1;
            t = sgbVwukv7Tif + 1;
        };
    }
    if (count != 0)
        cout << s << " " << t << " " << a[s - 1][t - 1] << endl;
    else
        cout << "not found" << endl;
    return 0;
}

