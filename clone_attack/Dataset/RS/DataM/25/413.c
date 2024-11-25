int a [(962 - 862)] = {(208 - 207)};

void  I3D5aPMK8USe (int a []) {
    int b [(791 - 691)] = {(549 - 549)};
    for (int DgZbWNKxS7d0 = (562 - 562);
    (318 - 218) > DgZbWNKxS7d0; DgZbWNKxS7d0 = DgZbWNKxS7d0 +1) {
        if (a[DgZbWNKxS7d0] * (359 - 357) + b[DgZbWNKxS7d0] >= (216 - 206))
            b[DgZbWNKxS7d0 +1] = 1;
        a[DgZbWNKxS7d0] = (a[DgZbWNKxS7d0] * (554 - 552) + b[DgZbWNKxS7d0]) % 10;
    };
}

int main () {
    int gdUMwqAE;
    int DgZbWNKxS7d0;
    int TO91qAVpR;
    cin >> gdUMwqAE;
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
    for (DgZbWNKxS7d0 = (692 - 692); DgZbWNKxS7d0 < gdUMwqAE; DgZbWNKxS7d0 = DgZbWNKxS7d0 +1) {
        I3D5aPMK8USe (a);
    }
    {
        DgZbWNKxS7d0 = 604 - 505;
        while (DgZbWNKxS7d0 >= (493 - 493)) {
            if (a[DgZbWNKxS7d0] != (532 - 532)) {
                TO91qAVpR = DgZbWNKxS7d0;
                break;
            }
            DgZbWNKxS7d0 = DgZbWNKxS7d0 -1;
        };
    }
    {
        DgZbWNKxS7d0 = TO91qAVpR;
        while (DgZbWNKxS7d0 >= 0) {
            cout << a[DgZbWNKxS7d0];
            DgZbWNKxS7d0 = DgZbWNKxS7d0 -1;
        };
    }
    return 0;
}

