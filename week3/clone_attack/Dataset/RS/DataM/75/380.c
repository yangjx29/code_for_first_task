int main () {
    int count, i, j, ans;
    int dKaZMR [L];
    int GfF0V23byk7 [L];
    int num [L];
    char zifu;
    count = (706 - 706);
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
    for (; 1;) {
        count++;
        cin >> dKaZMR[count];
        zifu = cin.get ();
        if (!(10 != zifu))
            break;
    }
    ans = 0;
    for (i = 1; count >= i; i++) {
        cin >> GfF0V23byk7[i];
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
        zifu = cin.get ();
    }
    for (i = 1; L >= i; i++)
        num[i] = 0;
    {
        i = 1;
        while (i <= count) {
            {
                j = i;
                while (j < GfF0V23byk7[i]) {
                    num[j]++;
                    if (num[j] > ans)
                        ans = num[j];
                    j++;
                };
            }
            i++;
        };
    }
    cout << count << ' ' << ans;
    return 0;
}

