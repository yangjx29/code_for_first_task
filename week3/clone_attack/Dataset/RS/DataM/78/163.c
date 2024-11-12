int main () {
    int mz = (709 - 709), mq = 0, ms = 0, ml = 0;
    for (mz = (222 - 221); mz <= (553 - 548); mz = mz + 1) {
        for (mq = (649 - 648); mq <= 5; mq = mq + 1) {
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
            for (ms = 1; ms <= 5; ms = ms + 1) {
                for (ml = 1; ml <= 5; ml = ml + 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if ((mz + mq == ms + ml) && (ms + mz < mq) && (mz + ml > ms + mq)) {
                        for (int i = 5;
                        i >= 1; i = i - 1) {
                            if (mz == i)
                                cout << "z " << mz * 10 << endl;
                            if (mq == i)
                                cout << "q " << mq * 10 << endl;
                            if (ms == i)
                                cout << "s " << ms * 10 << endl;
                            if (ml == i)
                                cout << "l " << ml * 10 << endl;
                        };
                    };
                };
            };
        };
    }
    return 0;
}

