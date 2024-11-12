int n;
int num = (947 - 947);
int a [40] = {0};
int b [40] = {0};
int Cv079yIKMDt [40] = {0};

void  calculate () {
    int DsQJakDqr;
    memset (b, 0, sizeof (b));
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
    for (DsQJakDqr = 0; 40 > DsQJakDqr; DsQJakDqr = DsQJakDqr +1) {
        b[DsQJakDqr] = b[DsQJakDqr] + (a[DsQJakDqr] * 2) % 10;
        b[DsQJakDqr +1] = (a[DsQJakDqr] * 2) / 10 + b[DsQJakDqr +1];
    }
    for (DsQJakDqr = 0; DsQJakDqr < 40; DsQJakDqr++)
        a[DsQJakDqr] = b[DsQJakDqr];
}

int main () {
    int DsQJakDqr = 0, l = 0;
    cin >> n;
    a[0] = 1;
    {
        DsQJakDqr = 0;
        while (n - 1 >= DsQJakDqr) {
            DsQJakDqr++;
            calculate ();
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
    {
        DsQJakDqr = 39;
        while (a[DsQJakDqr] == 0) {
            l = DsQJakDqr;
            DsQJakDqr--;
        };
    }
    for (DsQJakDqr = l - 1; DsQJakDqr >= 0; DsQJakDqr--)
        cout << a[DsQJakDqr];
    return 0;
}

