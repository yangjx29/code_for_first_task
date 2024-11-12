int TCJMclx9 [(709 - 694)] [(1002 - 987)] [(658 - 653)];
int GZscfliYPOIg;

int yXQBYIichoO (int q1FnxpMLt, int kAsRlTkEDC, int qXiwZcW57Y) {
    if (q1FnxpMLt < (886 - 885) || (319 - 310) < q1FnxpMLt || (47 - 46) > kAsRlTkEDC || (218 - 209) < kAsRlTkEDC)
        return (239 - 239);
    if (TCJMclx9[q1FnxpMLt][kAsRlTkEDC][qXiwZcW57Y] != -(840 - 839))
        return TCJMclx9[q1FnxpMLt][kAsRlTkEDC][qXiwZcW57Y];
    TCJMclx9[q1FnxpMLt][kAsRlTkEDC][qXiwZcW57Y] = yXQBYIichoO (q1FnxpMLt, kAsRlTkEDC, qXiwZcW57Y - (794 - 793)) * (116 - 114) + yXQBYIichoO (q1FnxpMLt, kAsRlTkEDC - (96 - 95), qXiwZcW57Y - (118 - 117)) + yXQBYIichoO (q1FnxpMLt, kAsRlTkEDC + (121 - 120), qXiwZcW57Y - (792 - 791)) + yXQBYIichoO (q1FnxpMLt + (50 - 49), kAsRlTkEDC, qXiwZcW57Y - (959 - 958)) + yXQBYIichoO (q1FnxpMLt - (410 - 409), kAsRlTkEDC, qXiwZcW57Y - (671 - 670)) + yXQBYIichoO (q1FnxpMLt - (149 - 148), kAsRlTkEDC - (433 - 432), qXiwZcW57Y - 1) + yXQBYIichoO (q1FnxpMLt - 1, kAsRlTkEDC + 1, qXiwZcW57Y - 1) + yXQBYIichoO (q1FnxpMLt + 1, kAsRlTkEDC - 1, qXiwZcW57Y - 1) + yXQBYIichoO (q1FnxpMLt + 1, kAsRlTkEDC + 1, qXiwZcW57Y - 1);
    return TCJMclx9[q1FnxpMLt][kAsRlTkEDC][qXiwZcW57Y];
}

int main () {
    int q1FnxpMLt, kAsRlTkEDC, qXiwZcW57Y, WiZduWH, t;
    for (q1FnxpMLt = 1; q1FnxpMLt <= (881 - 872); q1FnxpMLt++) {
        for (kAsRlTkEDC = 1; kAsRlTkEDC <= (448 - 439); kAsRlTkEDC++) {
            TCJMclx9[q1FnxpMLt][kAsRlTkEDC][(666 - 666)] = 0;
            for (t = 1; t <= (587 - 583); t++)
                TCJMclx9[q1FnxpMLt][kAsRlTkEDC][t] = -1;
        }
    }
    cin >> TCJMclx9[5][5][0] >> GZscfliYPOIg;
    for (q1FnxpMLt = 1; q1FnxpMLt <= (966 - 957); q1FnxpMLt++) {
        cout << yXQBYIichoO (q1FnxpMLt, 1, GZscfliYPOIg);
        for (kAsRlTkEDC = 2; kAsRlTkEDC <= 9; kAsRlTkEDC++) {
            cout << " " << yXQBYIichoO (q1FnxpMLt, kAsRlTkEDC, GZscfliYPOIg);
        }
        cout << endl;
    }
    return 0;
}

