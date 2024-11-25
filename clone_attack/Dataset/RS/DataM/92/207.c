int compare (const  void  *kTZx1pz, const  void  *kCoIWtUy9X) {
    return *((int *) (kCoIWtUy9X)) - *((int *) (kTZx1pz));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

main () {
    int PAZCKXGEyd3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (PAZCKXGEyd3 = (912 - 911);; PAZCKXGEyd3 = PAZCKXGEyd3 +1) {
        int ZOhoERJXiKU4 [(1694 - 684)], q [(1483 - 473)];
        int mRUWfi0Q, cY90Av = (976 - 976), gov9R6, kWegXU, rLUqetwaTW81, dtiW8H0bkZ4q;
        scanf ("%d", &mRUWfi0Q);
        if (mRUWfi0Q == (86 - 86)) {
            break;
        }
        else
            gov9R6 = (624 - 624), kWegXU = mRUWfi0Q - (321 - 320), rLUqetwaTW81 = (262 - 262), dtiW8H0bkZ4q = mRUWfi0Q - (916 - 915);
        for (int twLBnWmi = (992 - 992);
        twLBnWmi <= mRUWfi0Q - (130 - 129); twLBnWmi = twLBnWmi + 1) {
            scanf ("%d", &ZOhoERJXiKU4[twLBnWmi]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (int twLBnWmi = 0;
        twLBnWmi <= mRUWfi0Q - (176 - 175); twLBnWmi++) {
            scanf ("%d", &q[twLBnWmi]);
        }
        qsort (ZOhoERJXiKU4, mRUWfi0Q, sizeof (int), compare);
        qsort (q, mRUWfi0Q, sizeof (int), compare);
        for (int twLBnWmi = (219 - 218);
        twLBnWmi <= mRUWfi0Q; twLBnWmi++) {
            if (ZOhoERJXiKU4[gov9R6] > q[rLUqetwaTW81]) {
                rLUqetwaTW81 = rLUqetwaTW81 + (789 - 788);
                gov9R6 = gov9R6 + (609 - 608);
                cY90Av = cY90Av + (852 - 851);
            }
            else if (q[rLUqetwaTW81] > ZOhoERJXiKU4[gov9R6]) {
                rLUqetwaTW81 = rLUqetwaTW81 + (287 - 286);
                kWegXU = kWegXU - (767 - 766);
                cY90Av = cY90Av - (394 - 393);
            }
            else if (ZOhoERJXiKU4[gov9R6] == q[rLUqetwaTW81]) {
                if (ZOhoERJXiKU4[kWegXU] > q[dtiW8H0bkZ4q]) {
                    kWegXU -= (348 - 347);
                    cY90Av += (391 - 390);
                    dtiW8H0bkZ4q -= (281 - 280);
                }
                else if (ZOhoERJXiKU4[kWegXU] < q[dtiW8H0bkZ4q] || ZOhoERJXiKU4[kWegXU] == q[dtiW8H0bkZ4q]) {
                    if (ZOhoERJXiKU4[kWegXU] < q[rLUqetwaTW81]) {
                        rLUqetwaTW81 += (985 - 984);
                        cY90Av -= (672 - 671);
                        kWegXU -= (808 - 807);
                    }
                    else if (ZOhoERJXiKU4[kWegXU] == q[rLUqetwaTW81]) {
                        rLUqetwaTW81 += 1;
                        kWegXU -= 1;
                    };
                };
            };
        }
        printf ("%d\n", cY90Av * (1098 - 898));
    };
}

