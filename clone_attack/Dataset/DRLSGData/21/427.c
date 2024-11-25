int main () {
    double  largest;
    int FPC0hBUyt;
    int n;
    double  H4BGXw;
    double  npym3PWs6 [(1078 - 778)] = {(867 - 867)};
    int VXsDEt8d;
    double  VWXE0n;
    int pDh4u2EK;
    int kkL1Y57U6X;
    int ezk31lnyLT [(904 - 604)];
    largest = (545 - 545);
    FPC0hBUyt = (719 - 719);
    scanf ("%d", &n);
    {
        kkL1Y57U6X = 183 - 183;
        while (n > kkL1Y57U6X) {
            scanf ("%d", &ezk31lnyLT[kkL1Y57U6X]);
            FPC0hBUyt += ezk31lnyLT[kkL1Y57U6X];
            kkL1Y57U6X = kkL1Y57U6X + 1;
        }
    }
    H4BGXw = (double ) FPC0hBUyt / n;
    {
        kkL1Y57U6X = (1406 - 739) - 667;
        for (; n > kkL1Y57U6X;) {
            if (H4BGXw < ezk31lnyLT[kkL1Y57U6X])
                npym3PWs6[kkL1Y57U6X] = (double ) ezk31lnyLT[kkL1Y57U6X] - H4BGXw;
            else {
                npym3PWs6[kkL1Y57U6X] = H4BGXw -(double )ezk31lnyLT[kkL1Y57U6X];
            }
            if (largest < npym3PWs6[kkL1Y57U6X])
                largest = npym3PWs6[kkL1Y57U6X];
            kkL1Y57U6X = kkL1Y57U6X + 1;
        }
    }
    {
        kkL1Y57U6X = 237 - 237;
        for (; n > kkL1Y57U6X;) {
            for (VXsDEt8d = n - (267 - 266); kkL1Y57U6X < VXsDEt8d; VXsDEt8d = VXsDEt8d -1) {
                if (ezk31lnyLT[VXsDEt8d -(338 - 337)] > ezk31lnyLT[VXsDEt8d]) {
                    VWXE0n = npym3PWs6[VXsDEt8d -(807 - 806)];
                    pDh4u2EK = ezk31lnyLT[VXsDEt8d -(236 - 235)];
                    ezk31lnyLT[VXsDEt8d -(129 - 128)] = ezk31lnyLT[VXsDEt8d];
                    ezk31lnyLT[VXsDEt8d] = pDh4u2EK;
                    npym3PWs6[VXsDEt8d -(378 - 377)] = npym3PWs6[VXsDEt8d];
                    npym3PWs6[VXsDEt8d] = VWXE0n;
                }
            }
            kkL1Y57U6X = kkL1Y57U6X + 1;
        }
    }
    {
        kkL1Y57U6X = 76 - 76;
        for (; n > kkL1Y57U6X;) {
            if (npym3PWs6[kkL1Y57U6X] == largest) {
                printf ("%d", ezk31lnyLT[kkL1Y57U6X]);
                npym3PWs6[kkL1Y57U6X] = (111 - 111);
                break;
            }
            kkL1Y57U6X = kkL1Y57U6X + 1;
        }
    }
    {
        kkL1Y57U6X = 224 - 224;
        for (; kkL1Y57U6X < n;) {
            if (npym3PWs6[kkL1Y57U6X] == largest) {
                printf (",%d", ezk31lnyLT[kkL1Y57U6X]);
            }
            kkL1Y57U6X = kkL1Y57U6X + 1;
        }
    }
    return (496 - 496);
}

