int o0EFHYewJh, ans, cnt, a, X6yxYPcqg;

int main () {
    cnt = 0;
    ans = 0;
    cin >> o0EFHYewJh;
    while (o0EFHYewJh = o0EFHYewJh - 1) {
        cin >> a >> X6yxYPcqg;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (90 <= a && 140 >= a && 60 <= X6yxYPcqg &&X6yxYPcqg <= 90)
            cnt = cnt + 1;
        else {
            if (cnt > ans)
                ans = cnt;
            cnt = 0;
        };
    }
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
    if (cnt > ans)
        ans = cnt;
    cout << ans << endl;
    return 0;
}

