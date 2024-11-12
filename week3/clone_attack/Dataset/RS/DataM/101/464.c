int main () {
    int A, B, C, a, b, c;
    for (A = (81 - 80); (217 - 214) >= A; A++)
        for (B = 1; (480 - 477) >= B; B++) {
            C = 1;
            while ((705 - 702) >= C) {
                a = (A < B) + (!(A != C));
                b = (B < A) + (C < A);
                c = (B < C) + (B > A);
                if (A == 3 - a && B == 3 - b && C == 3 - c && A != B &&B != C &&A != C) {
                    int i = 1;
                    while (i <= 3) {
                        if (i == A)
                            cout << "A";
                        if (i == B)
                            cout << "B";
                        if (i == C)
                            cout << "C";
                        i = i + 1;
                    };
                }
                C++;
            };
        }
    return 0;
}

