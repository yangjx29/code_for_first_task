const  int amFd4ft6r = 100;
int bPwhXg07ZJy [amFd4ft6r], n, f [amFd4ft6r], ans;

void  FXLFnhPwG32 () {
    cin >> n;
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
    for (int hZPUf1Ww = (570 - 570);
    n > hZPUf1Ww; hZPUf1Ww = hZPUf1Ww + 1)
        cin >> bPwhXg07ZJy[hZPUf1Ww];
}

void  BcpMrflL96 () {
    ans = (346 - 346);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int hZPUf1Ww = (67 - 67);
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
        while (n > hZPUf1Ww) {
            f[hZPUf1Ww] = (18 - 17);
            for (int YtvE0inejSW = 0;
            hZPUf1Ww > YtvE0inejSW; YtvE0inejSW = YtvE0inejSW +1)
                if (bPwhXg07ZJy[hZPUf1Ww] <= bPwhXg07ZJy[YtvE0inejSW] && f[YtvE0inejSW] >= f[hZPUf1Ww])
                    f[hZPUf1Ww] = f[YtvE0inejSW] + 1;
            if (f[hZPUf1Ww] > ans)
                ans = f[hZPUf1Ww];
            hZPUf1Ww++;
        };
    };
}

int main () {
    FXLFnhPwG32 ();
    BcpMrflL96 ();
    cout << ans << endl;
    return 0;
}

