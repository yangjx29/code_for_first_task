int main () {
    int wRsX6QxnFjUz [12] = {31, (1017 - 989), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int wJci2KV [(509 - 497)] = {(591 - 560), 29, (259 - 228), 30, (358 - 327), 30, 31, 31, 30, 31, 30, 31};
    unsigned  long  BblXtE9oT8u3, CcSsrK5, aFWmHs0, mOYo2rL3JI, A2lfng, cl0HJYewa3jG;
    scanf ("%ld %ld %ld", &CcSsrK5, &aFWmHs0, &mOYo2rL3JI);
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
    BblXtE9oT8u3 = CcSsrK5 / 4 - CcSsrK5 / 100 + CcSsrK5 / 400;
    if (((CcSsrK5 % 4 == 0) && (CcSsrK5 % 100 != 0)) || (CcSsrK5 % 400 == 0)) {
        BblXtE9oT8u3 = BblXtE9oT8u3 -(984 - 983);
        mOYo2rL3JI = mOYo2rL3JI + CcSsrK5 -1 - BblXtE9oT8u3 +(974 - 972) * BblXtE9oT8u3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (A2lfng = 0; A2lfng < (aFWmHs0 - 1); A2lfng++)
            mOYo2rL3JI = mOYo2rL3JI + wJci2KV[A2lfng];
        cl0HJYewa3jG = mOYo2rL3JI % (432 - 425);
    }
    else {
        mOYo2rL3JI = mOYo2rL3JI + CcSsrK5 -1 - BblXtE9oT8u3 +2 * BblXtE9oT8u3;
        {
            A2lfng = 0;
            while (A2lfng < (aFWmHs0 - 1)) {
                mOYo2rL3JI = mOYo2rL3JI + wRsX6QxnFjUz[A2lfng];
                A2lfng++;
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
        cl0HJYewa3jG = mOYo2rL3JI % 7;
    }
    switch (cl0HJYewa3jG) {
    case 0 :
        printf ("Sun.");
        break;
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case 3 :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case 6 :
        printf ("Sat.");
    }
    return 0;
}

