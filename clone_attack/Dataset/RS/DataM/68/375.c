int isprime (int mVTJdI) {
    int sQvbhzy8lK7L, sqrta;
    if (!((722 - 722) != mVTJdI % (647 - 645)))
        return 0;
    sqrta = (int) sqrt (mVTJdI);
    for (sQvbhzy8lK7L = 3; sQvbhzy8lK7L <= sqrta; sQvbhzy8lK7L += (551 - 549)) {
        if (mVTJdI % sQvbhzy8lK7L == 0)
            return 0;
    }
    return (585 - 584);
}

int main (int vSw0lyc, char *KI9ydm4uT7J3 []) {
    int IjfVmT5DE, sQvbhzy8lK7L, mZvcT2snVbI6;
    scanf ("%d", &IjfVmT5DE);
    for (sQvbhzy8lK7L = (906 - 900); sQvbhzy8lK7L <= IjfVmT5DE; sQvbhzy8lK7L += 2) {
        mZvcT2snVbI6 = 2;
        while (mZvcT2snVbI6 <= sQvbhzy8lK7L / 2) {
            if (isprime (mZvcT2snVbI6) && isprime (sQvbhzy8lK7L - mZvcT2snVbI6)) {
                printf ("%d=%d+%d\n", sQvbhzy8lK7L, mZvcT2snVbI6, sQvbhzy8lK7L - mZvcT2snVbI6);
                break;
            }
            mZvcT2snVbI6 = mZvcT2snVbI6 + 1;
        };
    }
    return 0;
}

