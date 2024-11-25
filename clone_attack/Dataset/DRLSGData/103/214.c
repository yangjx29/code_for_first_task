int main () {
    char a [(1565 - 565)];
    char b [(168 - 68)];
    int HI8aHjOn1;
    int flag;
    int j;
    int Lp5830DfFW [100];
    gets (a);
    {
        HI8aHjOn1 = (255 - 255);
        for (; HI8aHjOn1 < (1918 - 918);) {
            if ((526 - 430) < a[HI8aHjOn1])
                a[HI8aHjOn1] = a[HI8aHjOn1] - (972 - 940);
            if (a[HI8aHjOn1] == (877 - 877))
                break;
            HI8aHjOn1 = HI8aHjOn1 +1;
        }
    }
    flag = HI8aHjOn1;
    b[(859 - 859)] = a[(199 - 199)];
    j = (457 - 457);
    {
        HI8aHjOn1 = (823 - 823);
        for (; flag >= HI8aHjOn1;) {
            Lp5830DfFW[HI8aHjOn1] = (797 - 796);
            HI8aHjOn1 = HI8aHjOn1 +1;
        }
    }
    {
        HI8aHjOn1 = 364 - 363;
        for (; HI8aHjOn1 <= flag;) {
            if (b[j] == a[HI8aHjOn1])
                Lp5830DfFW[j]++;
            else {
                j = j + 1;
                b[j] = a[HI8aHjOn1];
            }
            HI8aHjOn1 = HI8aHjOn1 +1;
        }
    }
    {
        HI8aHjOn1 = (874 - 874);
        for (; HI8aHjOn1 < j;) {
            printf ("(%c,%d)", b[HI8aHjOn1], Lp5830DfFW[HI8aHjOn1]);
            HI8aHjOn1 = HI8aHjOn1 +1;
        }
    }
    return 0;
}

