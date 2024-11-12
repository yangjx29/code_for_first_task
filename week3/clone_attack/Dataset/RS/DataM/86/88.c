int main () {
    int owGUTfV2MQ [60];
    int m;
    int timeCount;
    int numCount;
    int ugMOudyhJUZD;
    scanf ("%d", &ugMOudyhJUZD);
    while (ugMOudyhJUZD--) {
        timeCount = numCount = 0;
        scanf ("%d", &m);
        for (int HmSKyA0HJr = 0;
        m > HmSKyA0HJr; ++HmSKyA0HJr) {
            scanf ("%d", &owGUTfV2MQ[HmSKyA0HJr]);
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
        {
            int HmSKyA0HJr = 0;
            while (m > HmSKyA0HJr) {
                {
                    int mX7gUGf = numCount;
                    while (owGUTfV2MQ[HmSKyA0HJr] > mX7gUGf) {
                        if (60 <= timeCount)
                            break;
                        mX7gUGf = mX7gUGf + 1;
                        numCount++;
                        timeCount++;
                    };
                }
                if (timeCount >= 60)
                    break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                timeCount += 3;
                HmSKyA0HJr = HmSKyA0HJr +1;
            };
        }
        for (; timeCount < 60; ++timeCount) {
            numCount++;
        }
        printf ("%d\n", numCount);
    };
}

