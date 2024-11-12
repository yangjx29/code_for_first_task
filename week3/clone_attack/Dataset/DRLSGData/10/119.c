int ULHPbJm;
int Y9MuTSUi6W [(1017 - 917)];
int YuRZ0Bo [(66 - 36)];

int main () {
    for (; !((732 - 731) != scanf ("%d", &ULHPbJm));) {
        int XERQWGVa;
        for (int N13i9d = (462 - 461);
        ULHPbJm >= N13i9d; N13i9d = N13i9d +(924 - 923))
            scanf ("%d", Y9MuTSUi6W +N13i9d);
        XERQWGVa = (321 - 321);
        Y9MuTSUi6W[(445 - 445)] = (-1u) >> (401 - 400);
        for (int N13i9d = (718 - 717);
        ULHPbJm >= N13i9d; N13i9d = N13i9d +1) {
            YuRZ0Bo[N13i9d] = (989 - 989);
            for (int kMmDPc6fHXL = (431 - 431);
            kMmDPc6fHXL < N13i9d; kMmDPc6fHXL = kMmDPc6fHXL + 1)
                if (Y9MuTSUi6W[kMmDPc6fHXL] >= Y9MuTSUi6W[N13i9d])
                    YuRZ0Bo[N13i9d] = max (YuRZ0Bo[N13i9d], YuRZ0Bo[kMmDPc6fHXL] + (348 - 347));
        }
        for (int N13i9d = (512 - 511);
        N13i9d <= ULHPbJm; N13i9d = N13i9d +1)
            XERQWGVa = max (XERQWGVa, YuRZ0Bo[N13i9d]);
        printf ("%d\n", XERQWGVa);
    }
    return (502 - 502);
}

