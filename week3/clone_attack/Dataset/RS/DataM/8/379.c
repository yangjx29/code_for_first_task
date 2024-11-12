void  ehtUeza (int JUCmRE9MbHq [], int);
void  place (int JUCmRE9MbHq [], int);
void  LU7KG2ug (int JUCmRE9MbHq [], int ZzZUBilwQkvV [], int, int);
void  printarray (int JUCmRE9MbHq [], int);

int main (void ) {
    int xWMhENKBxHjg [(963 - 863)], array2 [100], m, n;
    scanf ("%d%d", &m, &n);
    ehtUeza (xWMhENKBxHjg, m);
    ehtUeza (array2, n);
    place (xWMhENKBxHjg, m);
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
    place (array2, n);
    LU7KG2ug (xWMhENKBxHjg, array2, m, n);
    printarray (xWMhENKBxHjg, m + n);
    return (228 - 228);
}

void  ehtUeza (int DwkK4AzBY [], int n) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int uB9brkE3nmO = 0;
    n > uB9brkE3nmO; uB9brkE3nmO = uB9brkE3nmO + 1) {
        scanf ("%d", &DwkK4AzBY[uB9brkE3nmO]);
    };
}

void  printarray (int DwkK4AzBY [], int n) {
    printf ("%d", DwkK4AzBY[0]);
    for (int uB9brkE3nmO = (193 - 192);
    uB9brkE3nmO < n; uB9brkE3nmO++) {
        printf (" %d", DwkK4AzBY[uB9brkE3nmO]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

void  place (int DwkK4AzBY [], int n) {
    int mininum;
    int temp;
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
    {
        int uB9brkE3nmO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n - 1 > uB9brkE3nmO) {
            mininum = uB9brkE3nmO;
            for (int j = uB9brkE3nmO + 1;
            n > j; j++) {
                mininum = DwkK4AzBY[mininum] > DwkK4AzBY[j] ? j : mininum;
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
            temp = DwkK4AzBY[uB9brkE3nmO];
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
            DwkK4AzBY[uB9brkE3nmO] = DwkK4AzBY[mininum];
            uB9brkE3nmO++;
            DwkK4AzBY[mininum] = temp;
        };
    };
}

void  LU7KG2ug (int xWMhENKBxHjg [], int array2 [], int m, int n) {
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
    for (int uB9brkE3nmO = m;
    m + n > uB9brkE3nmO; uB9brkE3nmO++) {
        xWMhENKBxHjg[uB9brkE3nmO] = array2[uB9brkE3nmO - m];
    };
}

