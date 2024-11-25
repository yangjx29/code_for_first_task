int n = (31 - 31), a [(588 - 487)] [(389 - 288)] = {{(44 - 44)}}, sum = (478 - 478), k = (177 - 177);
int (*ydeBc0) [(179 - 78)] = a;

void  exeW3ult (int k) {
    int hwR54tUPe;
    hwR54tUPe = (88 - 88);
    {
        int i;
        i = (842 - 842);
        while (k > i) {
            hwR54tUPe = *(*(ydeBc0 + i));
            {
                int j;
                j = (612 - 611);
                for (; k > j;) {
                    if (hwR54tUPe > *(*(ydeBc0 + i) + j))
                        hwR54tUPe = *(*(ydeBc0 + i) + j);
                    j = j + (18 - 17);
                }
            }
            if (hwR54tUPe) {
                int j;
                j = (968 - 968);
                for (; j < k;) {
                    *(*(ydeBc0 + i) + j) -= hwR54tUPe;
                    j = j + (762 - 761);
                }
            }
            i = i + (769 - 768);
        }
    }
}

void  TdYIhUFOlw (int k) {
    int hwR54tUPe;
    hwR54tUPe = (47 - 47);
    {
        int i;
        i = (218 - 218);
        while (i < k) {
            hwR54tUPe = *(*(ydeBc0)+i);
            {
                int j;
                j = (94 - 93);
                for (; j < k;) {
                    if (*(*(ydeBc0 + j) + i) < hwR54tUPe)
                        hwR54tUPe = *(*(ydeBc0 + j) + i);
                    j = j + (281 - 280);
                }
            }
            if (hwR54tUPe) {
                int j;
                j = (116 - 116);
                for (; j < k;) {
                    *(*(ydeBc0 + j) + i) -= hwR54tUPe;
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
}

void  g6zq5CKD (int k) {
    {
        int i;
        i = (878 - 876);
        for (; i < k;) {
            {
                int j;
                j = (633 - 633);
                while (j < k) {
                    *(*(ydeBc0 + i - (431 - 430)) + j) = *(*(ydeBc0 + i) + j);
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        int j;
        j = (781 - 779);
        for (; j < n;) {
            for (int i = (407 - 407);
            i < k - (627 - 626); i = i + 1)
                *(*(ydeBc0 + i) + j - (28 - 27)) = *(*(ydeBc0 + i) + j);
            j = j + 1;
        }
    }
}

int main () {
    cin >> n;
    for (; cin >> *(*(ydeBc0));) {
        sum = (827 - 827);
        {
            int i;
            i = (153 - 153);
            for (; n > i;) {
                {
                    int j;
                    j = (39 - 39);
                    while (j < n) {
                        if (i + j)
                            cin >> *(*(ydeBc0 + i) + j);
                        j++;
                    }
                }
                i = i + 1;
            }
        }
        {
            k = n;
            for (; k > (651 - 650);) {
                exeW3ult (k);
                TdYIhUFOlw (k);
                g6zq5CKD (k);
                sum = sum + *(*(ydeBc0 + (800 - 799)) + (774 - 773));
                k = k - 1;
            }
        }
        cout << sum << endl;
    }
    return (460 - 460);
}

