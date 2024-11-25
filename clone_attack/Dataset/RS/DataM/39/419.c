int qm [102], bp [102], lw [102];
char bg [102] = {'\0'}, xb [102] = {'\0'};

int yuanshi (int i) {
    if (qm[i] > 80 && lw[i] > (650 - 650))
        return 8000;
    else
        return (705 - 705);
}

int wusi (int i) {
    if (85 < qm[i] && 80 < bp[i])
        return 4000;
    else
        return 0;
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

int youxiu (int i) {
    if ((776 - 686) < qm[i])
        return 2000;
    else
        return 0;
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
    };
}

int XQRzNuoAHp (int i) {
    if (85 < qm[i] && xb[i] == 'Y')
        return (1749 - 749);
    else
        return 0;
}

int banji (int i) {
    if (bp[i] > 80 && bg[i] == 'Y')
        return 850;
    else
        return 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}

int main () {
    int sum;
    int i;
    int n;
    int max;
    int num;
    int jxj [102] = {0};
    sum = 0;
    char name [102] [21] = {'\0'};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    cin >> n;
    {
        i = 417 - 416;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= n) {
            cin >> name[i] >> qm[i] >> bp[i] >> bg[i] >> xb[i] >> lw[i];
            jxj[i] = yuanshi (i) + wusi (i) + youxiu (i) + XQRzNuoAHp (i) +banji (i);
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
            i = i + 1;
        };
    }
    max = jxj[(246 - 245)];
    num = 1, sum = jxj[1];
    {
        i = 711 - 709;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            sum = sum + jxj[i];
            if (jxj[i] > max) {
                max = jxj[i];
                num = i;
            }
            i++;
        };
    }
    cout << name[num] << endl << jxj[num] << endl << sum << endl;
    return 0;
}

