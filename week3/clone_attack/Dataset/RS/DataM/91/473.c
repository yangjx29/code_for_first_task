int main () {
    char KF1b0Q5Zxd4 [110], FzJt94ugZL [110];
    char *p = KF1b0Q5Zxd4, *p1 = FzJt94ugZL;
    int FDQCbZ;
    FDQCbZ = p - KF1b0Q5Zxd4;
    cin.getline (KF1b0Q5Zxd4, 110);
    {
        p = KF1b0Q5Zxd4;
        while (!('\0' == *p)) {
            p = p + 1;
        };
    }
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
    for (p1 = FzJt94ugZL, p = KF1b0Q5Zxd4; p < KF1b0Q5Zxd4 +FDQCbZ-1; p = p + 1, p1 = p1 + 1)
        *p1 = *p + *(p + 1);
    *p1 = *p + *(p - FDQCbZ +1);
    *(p1 + 1) = '\0';
    p1 = FzJt94ugZL;
    cout << p1;
    return 0;
}

