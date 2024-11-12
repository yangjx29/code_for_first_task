void  account (int, int);
int p;

int main () {
    int n;
    int OTebQRKiVPt0;
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
    for (; n > (986 - 986);) {
        p = 0;
        cin >> OTebQRKiVPt0;
        account (OTebQRKiVPt0, (775 - 774));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << p << endl;
        n--;
    }
    return 0;
}

void  account (int OTebQRKiVPt0, int i) {
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
    if (OTebQRKiVPt0 == 1)
        p = p + 1;
    else
        for (int j = 2;
        j <= OTebQRKiVPt0; j++) {
            if ((OTebQRKiVPt0 % j == 0) && (j >= i))
                account (OTebQRKiVPt0 / j, j);
        };
}

