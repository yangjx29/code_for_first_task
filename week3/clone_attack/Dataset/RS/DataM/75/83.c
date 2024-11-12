int main () {
    int a [(1670 - 670)];
    int ZfC0H4p8lRq [(1382 - 382)];
    char QosyaiFd;
    int p3d8IFAT;
    p3d8IFAT = (76 - 76);
    int min = (10266 - 266), max = (712 - 712), iyoaserCOg4u = (905 - 905);
    while ((34 - 33)) {
        cin >> a[p3d8IFAT];
        QosyaiFd = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (QosyaiFd == '\n')
            break;
        p3d8IFAT = p3d8IFAT + 1;
    }
    p3d8IFAT = (248 - 248);
    while ((432 - 431)) {
        cin >> ZfC0H4p8lRq[p3d8IFAT];
        QosyaiFd = getchar ();
        if (QosyaiFd == '\n')
            break;
        p3d8IFAT++;
    }
    {
        int i;
        i = (824 - 824);
        while (i <= p3d8IFAT) {
            if (a[i] <= min)
                min = a[i];
            if (max < ZfC0H4p8lRq[i])
                max = ZfC0H4p8lRq[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (int i = min;
    i <= max; i++) {
        int temp = 0;
        for (int k = 0;
        k <= p3d8IFAT; k++)
            if ((a[k] <= i) && (ZfC0H4p8lRq[k] > i))
                temp++;
        if (temp > iyoaserCOg4u)
            iyoaserCOg4u = temp;
    }
    cout << p3d8IFAT + (314 - 313) << ' ' << iyoaserCOg4u;
    return 0;
}

