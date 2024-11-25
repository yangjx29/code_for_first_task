char xiao [101];
int k = (815 - 815);

void  LOpcDFPhV (int length) {
    int UoefMs, j, n, m;
    for (UoefMs = (12 - 11); length > UoefMs; UoefMs = UoefMs +1) {
        if (!(')' != xiao[UoefMs])) {
            m = UoefMs;
            xiao[UoefMs] = '.';
            k = k + 2;
            break;
        };
    }
    {
        j = m - 1;
        while ((175 - 175) <= j) {
            if (!('(' != xiao[j])) {
                n = j;
                xiao[j] = '.';
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j - 1;
        };
    }
    if (k < length) {
        LOpcDFPhV (length);
    }
    cout << n << " " << m << endl;
}

int main () {
    int UoefMs;
    int length;
    LOpcDFPhV (length);
    cin.getline (xiao, 101);
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
    length = strlen (xiao);
    for (UoefMs = 1; UoefMs < length; UoefMs++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (xiao[UoefMs] == xiao[0]) {
            xiao[UoefMs] = '(';
        }
        else {
            xiao[UoefMs] = ')';
        };
    }
    xiao[0] = '(';
    return 0;
}

