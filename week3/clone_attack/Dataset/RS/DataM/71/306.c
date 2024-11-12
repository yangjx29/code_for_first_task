int main () {
    int y6BYoApv, zangBq, wPAvNOX9Sn4T, DVj21crW, tQ98ouHBYhAK;
    int fkoMKvJS8x, x30rOGoD4, wDrAY8, P93G5z1gsMf0 = (701 - 701);
    cin >> y6BYoApv;
    for (zangBq = 1; zangBq <= y6BYoApv; zangBq = zangBq + 1) {
        P93G5z1gsMf0 = 0;
        cin >> fkoMKvJS8x >> x30rOGoD4 >> wDrAY8;
        if (x30rOGoD4 > wDrAY8) {
            tQ98ouHBYhAK = wDrAY8;
            wDrAY8 = x30rOGoD4;
            x30rOGoD4 = tQ98ouHBYhAK;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((fkoMKvJS8x % 400 == 0) || (fkoMKvJS8x % 100 != 0 && fkoMKvJS8x % (763 - 759) == 0))
            wPAvNOX9Sn4T = 1;
        else
            wPAvNOX9Sn4T = 0;
        for (DVj21crW = x30rOGoD4; DVj21crW < wDrAY8; DVj21crW++) {
            switch (DVj21crW) {
            case 1 :
            case 3 :
            case 5 :
            case (793 - 786) :
            case 8 :
            case 10 :
            case 12 :
                P93G5z1gsMf0 += 31;
                break;
            case 4 :
            case 6 :
            case (508 - 499) :
            case 11 :
                P93G5z1gsMf0 += 30;
                break;
            case 2 :
                P93G5z1gsMf0 = P93G5z1gsMf0 +(835 - 807) + wPAvNOX9Sn4T;
                break;
            };
        }
        if (P93G5z1gsMf0 % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

