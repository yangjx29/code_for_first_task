int main () {
    int DZWlQhb;
    int y;
    int e;
    DZWlQhb = 0;
    y = 0;
    int Slgda6ecjn9;
    int PBTrYxlESM;
    int aGsAONLcK;
    int j;
    int num [200];
    int dHqJBN68IOzk [200];
    Slgda6ecjn9 = 0;
    PBTrYxlESM = 0;
    char a [1000];
    gets (a);
    int len;
    len = strlen (a);
    {
        aGsAONLcK = 0;
        while (len >= aGsAONLcK) {
            Slgda6ecjn9 = Slgda6ecjn9 +1;
            if (a[aGsAONLcK] == ' ' || a[aGsAONLcK] == '\0' || !(',' != a[aGsAONLcK])) {
                Slgda6ecjn9 = 0;
                num[PBTrYxlESM] = Slgda6ecjn9 -1;
                dHqJBN68IOzk[PBTrYxlESM] = aGsAONLcK;
                PBTrYxlESM++;
            }
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
            aGsAONLcK = aGsAONLcK + 1;
        };
    }
    for (aGsAONLcK = 0; aGsAONLcK < PBTrYxlESM; aGsAONLcK++) {
        if (num[aGsAONLcK] > num[DZWlQhb]) {
            DZWlQhb = aGsAONLcK;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (num[aGsAONLcK] < num[y] && num[aGsAONLcK] != 0) {
            y = aGsAONLcK;
        };
    }
    for (aGsAONLcK = dHqJBN68IOzk[DZWlQhb] - num[DZWlQhb]; aGsAONLcK < dHqJBN68IOzk[DZWlQhb]; aGsAONLcK++) {
        if (aGsAONLcK != dHqJBN68IOzk[DZWlQhb] - 1) {
            printf ("%c", a[aGsAONLcK]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        if (aGsAONLcK == dHqJBN68IOzk[DZWlQhb] - 1) {
            printf ("%c\n", a[aGsAONLcK]);
        };
    }
    for (aGsAONLcK = dHqJBN68IOzk[y] - num[y]; aGsAONLcK < dHqJBN68IOzk[y]; aGsAONLcK++) {
        if (aGsAONLcK != dHqJBN68IOzk[y] - 1) {
            printf ("%c", a[aGsAONLcK]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (aGsAONLcK == dHqJBN68IOzk[y] - 1) {
            printf ("%c\n", a[aGsAONLcK]);
        };
    }
    return 0;
}

