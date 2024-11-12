int main () {
    int ONmUIOWfTB1Q [1000] = {0}, x [1000] = {0}, ORudF1876 [1000], num [1000], sXzRkT = (918 - 917), j, MP71W8HQw, most = 0;
    char XzwcqR [100000];
    char FJkc8yip;
    cin >> XzwcqR;
    {
        j = 0;
        while (!('\0' == XzwcqR[j])) {
            if (!(',' != XzwcqR[j])) {
                num[sXzRkT] = j;
                sXzRkT = sXzRkT + 1;
            }
            j = j + 1;
        };
    }
    x[1] = XzwcqR[0] - 48;
    for (j = 1; num[1] > j; j = j + 1) {
        x[1] = 10 * x[1] + XzwcqR[j] - 48;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (j = 2; sXzRkT >= j; j = j + 1) {
        x[j] = XzwcqR[num[j - 1] + 1] - 48;
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
        if (!(sXzRkT != j)) {
            MP71W8HQw = sXzRkT - 1;
            while (!('\0' == XzwcqR[MP71W8HQw])) {
                x[sXzRkT] = 10 * x[sXzRkT] + XzwcqR[MP71W8HQw] - 48;
                MP71W8HQw = MP71W8HQw +1;
            };
        }
        {
            MP71W8HQw = j - 1;
            while (num[j] > MP71W8HQw) {
                x[j] = 10 * x[j] + XzwcqR[MP71W8HQw] - 48;
                MP71W8HQw++;
            };
        };
    }
    cin >> ORudF1876[1];
    for (j = x[1]; j < ORudF1876[1]; j = j + 1) {
        ONmUIOWfTB1Q[j]++;
    }
    {
        j = 2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j <= sXzRkT) {
            cin >> FJkc8yip >> ORudF1876[j];
            {
                MP71W8HQw = j;
                while (MP71W8HQw < ORudF1876[j]) {
                    ONmUIOWfTB1Q[MP71W8HQw]++;
                    MP71W8HQw++;
                };
            }
            j = j + 1;
        };
    }
    {
        j = 1;
        while (j < 1000) {
            if (ONmUIOWfTB1Q[j] > most) {
                most = ONmUIOWfTB1Q[j];
            }
            j = j + 1;
        };
    }
    cout << sXzRkT << " " << most << endl;
    return 0;
}

