int main (int ft6lV1z, char *KU40cRy19 []) {
    int nUIDOetmky;
    struct   stu {
        char p37FjEIbwHR [(340 - 320)];
        int kB1AqE0OJPF;
        int fX8CfUWuHI;
        char aYbhVpez;
        char d;
        int iQ2YOgI6;
    }
    fuCf84Tm [101];
    int kB1AqE0OJPF [101];
    int yt4BHzrLX = kB1AqE0OJPF[(207 - 206)], SF57CHyAvY = (590 - 589);
    int O0VClnBXe = 0;
    scanf ("%d", &nUIDOetmky);
    {
        int k = (740 - 739);
        for (; nUIDOetmky >= k;) {
            kB1AqE0OJPF[k] = 0;
            k = k + 1;
        }
    }
    for (int fQNp56LetIBf = (539 - 538);
    nUIDOetmky >= fQNp56LetIBf; fQNp56LetIBf = fQNp56LetIBf + 1) {
        scanf ("%s %d %d %c %c %d", &fuCf84Tm[fQNp56LetIBf].p37FjEIbwHR, &fuCf84Tm[fQNp56LetIBf].kB1AqE0OJPF, &fuCf84Tm[fQNp56LetIBf].fX8CfUWuHI, &fuCf84Tm[fQNp56LetIBf].aYbhVpez, &fuCf84Tm[fQNp56LetIBf].d, &fuCf84Tm[fQNp56LetIBf].iQ2YOgI6);
    }
    for (int j = (285 - 284);
    j <= nUIDOetmky; j = j + 1) {
        if ((97 - 17) < fuCf84Tm[j].kB1AqE0OJPF && fuCf84Tm[j].iQ2YOgI6 >= 1) {
            kB1AqE0OJPF[j] += 8000;
        }
        if (fuCf84Tm[j].kB1AqE0OJPF > (1014 - 929) && (1059 - 979) < fuCf84Tm[j].fX8CfUWuHI) {
            kB1AqE0OJPF[j] += 4000;
        }
        if (fuCf84Tm[j].kB1AqE0OJPF > 90) {
            kB1AqE0OJPF[j] += 2000;
        }
        if (fuCf84Tm[j].kB1AqE0OJPF > 85 && fuCf84Tm[j].d == 'Y') {
            kB1AqE0OJPF[j] += 1000;
        }
        if (fuCf84Tm[j].fX8CfUWuHI > 80 && fuCf84Tm[j].aYbhVpez == 'Y') {
            kB1AqE0OJPF[j] += (1230 - 380);
        }
        O0VClnBXe += kB1AqE0OJPF[j];
    }
    for (int HjMz31RBksI = 2;
    HjMz31RBksI <= nUIDOetmky; HjMz31RBksI = HjMz31RBksI +1) {
        if (kB1AqE0OJPF[HjMz31RBksI] > yt4BHzrLX) {
            yt4BHzrLX = kB1AqE0OJPF[HjMz31RBksI];
            SF57CHyAvY = HjMz31RBksI;
        }
    }
    printf ("%s\n", fuCf84Tm[SF57CHyAvY].p37FjEIbwHR);
    printf ("%d\n", kB1AqE0OJPF[SF57CHyAvY]);
    printf ("%d\n", O0VClnBXe);
    return 0;
}

