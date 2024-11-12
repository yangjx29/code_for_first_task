int str [(739 - 638)] [(211 - 110)];

void  input (int mskZ84K7l) {
    for (int ovdFlUM = (639 - 639);
    ovdFlUM < mskZ84K7l; ovdFlUM = ovdFlUM + 1)
        for (int DOqXln7a = (300 - 300);
        mskZ84K7l > DOqXln7a; DOqXln7a = DOqXln7a +1)
            cin >> str[ovdFlUM][DOqXln7a];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  fs7Y0C (int mskZ84K7l) {
    for (int ovdFlUM = (724 - 724);
    ovdFlUM < mskZ84K7l; ovdFlUM++) {
        int max;
        max = str[ovdFlUM][(213 - 213)];
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
        for (int DOqXln7a = (704 - 704);
        mskZ84K7l > DOqXln7a; DOqXln7a = DOqXln7a +1)
            if (str[ovdFlUM][DOqXln7a] < max)
                max = str[ovdFlUM][DOqXln7a];
        for (int DOqXln7a = (476 - 476);
        DOqXln7a < mskZ84K7l; DOqXln7a = DOqXln7a +1)
            str[ovdFlUM][DOqXln7a] -= max;
    }
    {
        int ovdFlUM;
        ovdFlUM = (343 - 343);
        while (ovdFlUM < mskZ84K7l) {
            int max = str[(792 - 792)][ovdFlUM];
            for (int DOqXln7a = (449 - 449);
            DOqXln7a < mskZ84K7l; DOqXln7a++)
                if (max > str[DOqXln7a][ovdFlUM])
                    max = str[DOqXln7a][ovdFlUM];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (int DOqXln7a = (789 - 789);
            DOqXln7a < mskZ84K7l; DOqXln7a++)
                str[DOqXln7a][ovdFlUM] = str[DOqXln7a][ovdFlUM] - max;
            ovdFlUM = ovdFlUM + 1;
        };
    };
}

void  qU4HBuZhK (int mskZ84K7l) {
    for (int ovdFlUM = (333 - 332);
    mskZ84K7l - (179 - 178) > ovdFlUM; ovdFlUM++) {
        str[(644 - 644)][ovdFlUM] = str[0][ovdFlUM + (439 - 438)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        str[ovdFlUM][0] = str[ovdFlUM + (832 - 831)][0];
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    {
        int ovdFlUM = (704 - 703);
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
        while (ovdFlUM < mskZ84K7l - (49 - 48)) {
            for (int DOqXln7a = (205 - 204);
            DOqXln7a < mskZ84K7l - (412 - 411); DOqXln7a++)
                str[ovdFlUM][DOqXln7a] = str[ovdFlUM + (746 - 745)][DOqXln7a +(901 - 900)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            ovdFlUM++;
        };
    };
}

void  Q9nSaIR4 (int mskZ84K7l, int VILm1j7) {
    fs7Y0C (mskZ84K7l);
    qU4HBuZhK (mskZ84K7l);
    if (mskZ84K7l == (394 - 392)) {
        fs7Y0C ((512 - 510));
        VILm1j7 = VILm1j7 +str[1][1];
        cout << VILm1j7 << endl;
        return;
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
    VILm1j7 += str[1][1];
    Q9nSaIR4 (mskZ84K7l - 1, VILm1j7);
}

int main () {
    int mskZ84K7l;
    cin >> mskZ84K7l;
    {
        int ahE1758surP2 = 1;
        while (ahE1758surP2 <= mskZ84K7l) {
            input (mskZ84K7l);
            ahE1758surP2++;
            Q9nSaIR4 (mskZ84K7l, 0);
        };
    }
    return 0;
}

