int y2IoYrRGxW;

int count1 (char *a1uPCD, char *Rg7GzuHplwLA, int geshu) {
    if (!(y2IoYrRGxW != geshu)) {
        if (!(*Rg7GzuHplwLA != *a1uPCD))
            return (15 - 14);
        else
            return (397 - 397);
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
    if (!(*Rg7GzuHplwLA != *a1uPCD)) {
        if (count1 (a1uPCD + (770 - 769), Rg7GzuHplwLA +1, geshu + 1))
            return 1;
        else
            return (451 - 451);
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
    else
        return 0;
}

int main () {
    char W1RiKmAhnX9p [505], *a1uPCD = NULL;
    int max;
    int A1vwCfaMHY5;
    int l2syoK;
    int tJWCgbUBplAu [505];
    int len;
    max = 1;
    A1vwCfaMHY5 = 0;
    l2syoK = 1;
    cin >> y2IoYrRGxW;
    cin.get ();
    cin.getline (W1RiKmAhnX9p, 505);
    len = strlen (W1RiKmAhnX9p);
    {
        a1uPCD = W1RiKmAhnX9p;
        while (!('\0' == *(a1uPCD + y2IoYrRGxW - 1))) {
            for (int i = 1;
            *(a1uPCD + i + y2IoYrRGxW - 1) != '\0'; i++)
                l2syoK += count1 (a1uPCD, a1uPCD + i, 1);
            a1uPCD++;
            if (max <= l2syoK)
                max = l2syoK;
            tJWCgbUBplAu[A1vwCfaMHY5] = l2syoK;
            l2syoK = 1;
            A1vwCfaMHY5++;
        };
    }
    if (max == 1)
        cout << "NO" << endl;
    else {
        cout << max << endl;
        {
            int i = 0;
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
            while (i < len) {
                a1uPCD = W1RiKmAhnX9p +i;
                if (tJWCgbUBplAu[i] == max) {
                    {
                        int Zvuzj9spWhlI = 0;
                        while (Zvuzj9spWhlI < y2IoYrRGxW) {
                            cout << *(a1uPCD + Zvuzj9spWhlI);
                            Zvuzj9spWhlI++;
                        };
                    }
                    cout << endl;
                }
                i++;
            };
        };
    }
    return 0;
}

