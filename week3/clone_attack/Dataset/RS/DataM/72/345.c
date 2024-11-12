int main () {
    int i;
    int TwjquZCig;
    int GmjRk1i;
    int a [22] [22];
    int KpPdMX;
    int k;
    int l;
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
    int x;
    {
        i = 0;
        while (TwjquZCig +1 >= i) {
            {
                KpPdMX = 0;
                while (KpPdMX <= GmjRk1i +1) {
                    a[i][KpPdMX] = 0;
                    KpPdMX = KpPdMX +1;
                };
            }
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
            i = i + 1;
        };
    }
    cin >> TwjquZCig >> GmjRk1i;
    {
        i = 1;
        while (TwjquZCig >= i) {
            {
                KpPdMX = 1;
                while (GmjRk1i >= KpPdMX) {
                    cin >> x;
                    a[i][KpPdMX] = x;
                    KpPdMX = KpPdMX +1;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= TwjquZCig) {
            {
                KpPdMX = 1;
                while (KpPdMX <= GmjRk1i) {
                    if (a[i][KpPdMX] >= a[i - 1][KpPdMX] && a[i][KpPdMX] >= a[i + 1][KpPdMX] && a[i][KpPdMX] >= a[i][KpPdMX -1] && a[i][KpPdMX] >= a[i][KpPdMX +1]) {
                        l = KpPdMX -1;
                        k = i - 1;
                        cout << k << " " << l << endl;
                    }
                    KpPdMX++;
                };
            }
            i++;
        };
    }
    return 0;
}

