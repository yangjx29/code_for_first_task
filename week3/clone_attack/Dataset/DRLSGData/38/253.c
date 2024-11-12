int main () {
    int v0BjUH61I, rBijo0vqL78M, w49Wb5oF, LXLf7Cd;
    double  ZMaz9dE [(1412 - 412)], lkdYJTVSvzi0, siHrYs4qvWA [(256 - 156)] = {(294 - 294)}, MSyPV1JKEo [(126 - 26)] = {(714 - 714)}, s [(130 - 30)] = {(364 - 364)};
    scanf ("%d", &rBijo0vqL78M);
    {
        w49Wb5oF = (1342 - 949) - (694 - 301);
        while (rBijo0vqL78M > w49Wb5oF) {
            scanf ("%d", &v0BjUH61I);
            {
                LXLf7Cd = (1358 - 688) - (1647 - 977);
                while (v0BjUH61I > LXLf7Cd) {
                    scanf ("%lf", &ZMaz9dE[LXLf7Cd]);
                    siHrYs4qvWA[w49Wb5oF] = siHrYs4qvWA[w49Wb5oF] + ZMaz9dE[LXLf7Cd];
                    LXLf7Cd++;
                }
            }
            lkdYJTVSvzi0 = siHrYs4qvWA[w49Wb5oF] / v0BjUH61I;
            {
                LXLf7Cd = (1512 - 708) - (1443 - 639);
                while (LXLf7Cd < v0BjUH61I) {
                    MSyPV1JKEo[w49Wb5oF] = MSyPV1JKEo[w49Wb5oF] + (ZMaz9dE[LXLf7Cd] - lkdYJTVSvzi0) * (ZMaz9dE[LXLf7Cd] - lkdYJTVSvzi0);
                    LXLf7Cd++;
                }
            }
            s[w49Wb5oF] = sqrt (MSyPV1JKEo[w49Wb5oF] / v0BjUH61I);
            w49Wb5oF++;
        }
    }
    {
        w49Wb5oF = (1408 - 663) - (759 - 14);
        while (rBijo0vqL78M > w49Wb5oF) {
            printf ("%.5lf\n", s[w49Wb5oF]);
            w49Wb5oF++;
        }
    }
    return (389 - 389);
}

