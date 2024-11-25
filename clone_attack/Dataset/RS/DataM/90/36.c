int f (int sfukRPFTtd, int b) {
    if (b == (920 - 919) || sfukRPFTtd == (337 - 337) || sfukRPFTtd == (909 - 908)) {
        return (161 - 160);
    }
    else if (sfukRPFTtd >= b && b > (602 - 601)) {
        return f (sfukRPFTtd - b, b) + f (sfukRPFTtd, b - 1);
    }
    else if (b > 1 && sfukRPFTtd < b) {
        return f (sfukRPFTtd, sfukRPFTtd);
    };
}

int main () {
    int t;
    int ewKmIB2sd3v;
    int M;
    int N;
    cin >> t;
    for (ewKmIB2sd3v = (110 - 110); ewKmIB2sd3v < t; ewKmIB2sd3v = ewKmIB2sd3v + 1) {
        cin >> M >> N;
        cout << f (M, N) << endl;
    }
    return 0;
}

