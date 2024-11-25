int main () {
    int mgXGuCbBwI;
    int RU8IyT5H4pm;
    int ApaD4I9r831W;
    int HY1G8jyu4nv;
    int JNFVBlxz;
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
    int cYNRqCQ [(33 - 20)] = {0, (227 - 196), 28, (476 - 445), (139 - 109), 31, 30, 31, 31, 30, 31, 30, 31};
    int XQZrpSEKnGzH [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> mgXGuCbBwI;
    {
        RU8IyT5H4pm = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (mgXGuCbBwI >= RU8IyT5H4pm) {
            int JWK1AY7MoH5;
            int gZznG2C7l;
            RU8IyT5H4pm = RU8IyT5H4pm +1;
            cin >> ApaD4I9r831W >> HY1G8jyu4nv >> JNFVBlxz;
            gZznG2C7l = (JNFVBlxz < HY1G8jyu4nv) ? HY1G8jyu4nv : JNFVBlxz;
            JWK1AY7MoH5 = (JNFVBlxz < HY1G8jyu4nv) ? JNFVBlxz : HY1G8jyu4nv;
            if ((!(0 != ApaD4I9r831W % (383 - 379))) && (!(0 == ApaD4I9r831W % 100)) || (ApaD4I9r831W % 400 == 0)) {
                int EKldJcUp = 0;
                {
                    int Y6Wg29fQiq;
                    Y6Wg29fQiq = JWK1AY7MoH5;
                    while (Y6Wg29fQiq < gZznG2C7l) {
                        EKldJcUp = EKldJcUp +XQZrpSEKnGzH[Y6Wg29fQiq];
                        Y6Wg29fQiq = Y6Wg29fQiq +1;
                    };
                }
                if (EKldJcUp % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else {
                int EKldJcUp = 0;
                {
                    int Y6Wg29fQiq = JWK1AY7MoH5;
                    while (Y6Wg29fQiq < gZznG2C7l) {
                        EKldJcUp = EKldJcUp +cYNRqCQ[Y6Wg29fQiq];
                        Y6Wg29fQiq++;
                    };
                }
                if (EKldJcUp % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            };
        };
    }
    return 0;
}

