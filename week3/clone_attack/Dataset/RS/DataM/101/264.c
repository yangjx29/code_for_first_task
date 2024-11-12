int main () {
    int A;
    int B;
    int C;
    int s1;
    int s2;
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
    int s3;
    int shu [4];
    {
        A = 135 - 134;
        while ((405 - 402) >= A) {
            for (B = (402 - 401); 3 >= B; B = B +1) {
                C = 1;
                while (3 >= C) {
                    s1 = (A < B) + (!(C != A));
                    s2 = (A > B) + (C < A);
                    s3 = (B < C) + (B > A);
                    if (A +s1 == 3 && B +s2 == 3 && C +s3 == 3) {
                        for (int qRFTazU = 1;
                        qRFTazU <= 3; qRFTazU = qRFTazU + 1) {
                            if (A == qRFTazU)
                                cout << "A";
                            if (B == qRFTazU)
                                cout << "B";
                            if (C == qRFTazU)
                                cout << "C";
                        };
                    }
                    C = C +1;
                };
            }
            A = A +1;
        };
    }
    return 0;
}

