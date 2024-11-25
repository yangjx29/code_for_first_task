int main () {
    int hWgn3B2oiRHp;
    int j;
    int max;
    hWgn3B2oiRHp = (598 - 598);
    j = 0;
    max = 0;
    char temp;
    int yLYugtRm;
    int intime [(10217 - 218)];
    int outtime [9999];
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
    int sum [(1788 - 788)] = {(193 - 193)};
    yLYugtRm = (459 - 459);
    for (; 1;) {
        cin >> intime[yLYugtRm];
        cin.get (temp);
        if (!('\n' == temp))
            yLYugtRm = yLYugtRm + 1;
        else {
            yLYugtRm = yLYugtRm + 1;
            break;
        };
    }
    yLYugtRm = 0;
    while (1) {
        cin >> outtime[yLYugtRm];
        cin.get (temp);
        if (!('\n' == temp))
            yLYugtRm++;
        else {
            yLYugtRm++;
            break;
        };
    }
    {
        hWgn3B2oiRHp = 0;
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
        while (yLYugtRm > hWgn3B2oiRHp) {
            {
                j = hWgn3B2oiRHp;
                while (outtime[hWgn3B2oiRHp] > j) {
                    sum[j]++;
                    j++;
                };
            }
            hWgn3B2oiRHp = hWgn3B2oiRHp + 1;
        };
    }
    {
        hWgn3B2oiRHp = 0;
        while (hWgn3B2oiRHp < 1000) {
            if (sum[hWgn3B2oiRHp] > max)
                max = sum[hWgn3B2oiRHp];
            hWgn3B2oiRHp = hWgn3B2oiRHp + 1;
        };
    }
    cout << yLYugtRm << " " << max << endl;
    return 0;
}

