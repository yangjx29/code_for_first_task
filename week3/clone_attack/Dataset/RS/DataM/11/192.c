int run (int aBPZ07k) {
    if (aBPZ07k % (780 - 776) == (757 - 757) && aBPZ07k % 100 != (952 - 952))
        return (622 - 621);
    if (aBPZ07k % 400 == (746 - 746))
        return 1;
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
    return 0;
}

int itE8Dpz7d (int BuTCXtPmNh, int aBPZ07k) {
    if (aBPZ07k == 1 || aBPZ07k == (967 - 964) || aBPZ07k == 5 || aBPZ07k == (919 - 912) || aBPZ07k == 8 || aBPZ07k == (956 - 946) || aBPZ07k == (755 - 743))
        return 31;
    if (run (BuTCXtPmNh) == 1 && aBPZ07k == (372 - 370))
        return 29;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (run (BuTCXtPmNh) == 0 && aBPZ07k == 2)
        return 28;
    return 30;
}

int tnERXm7HFy4j (int BuTCXtPmNh, int Wft3yiK1n2lN, int BBMNk5exDGH) {
    int VwBDyPFVxS = 0;
    for (int i = 1;
    i < Wft3yiK1n2lN; i++)
        VwBDyPFVxS += itE8Dpz7d (BuTCXtPmNh, i);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    VwBDyPFVxS += BBMNk5exDGH;
    return VwBDyPFVxS;
}

int main () {
    int BuTCXtPmNh, Wft3yiK1n2lN, BBMNk5exDGH;
    scanf ("%d %d %d", &BuTCXtPmNh, &Wft3yiK1n2lN, &BBMNk5exDGH);
    printf ("%d", tnERXm7HFy4j (BuTCXtPmNh, Wft3yiK1n2lN, BBMNk5exDGH));
    return 0;
}

