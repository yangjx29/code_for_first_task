int a;
int m = (113 - 113), s = 1;

void  temp (int b, int k, int c) {
    for (int i = k;
    b >= i; i = i + 1) {
        if (b % i == (686 - 686)) {
            b = b / i;
            s = s * i;
            k = i;
            if (s == c) {
                m = m + 1;
            }
            else
                temp (b, k, c);
            s = s / i;
            b = b * i;
        };
    };
}

int main () {
    int rnBMqU, a, i;
    cin >> rnBMqU;
    {
        i = 0;
        while (i < rnBMqU) {
            i = i + 1;
            cin >> a;
            temp (a, (181 - 179), a);
            cout << m << endl;
            m = 0;
        };
    }
    return 0;
}

