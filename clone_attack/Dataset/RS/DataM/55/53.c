int main () {
    long  num = 0;
    char aZdBa4lhsC5 [50];
    char XRrbXylwAYD2 [50] = {'\0'};
    char trans [36];
    int NEnBxubYeL;
    int NFRb4I;
    int ochrGtyNLkE;
    int m7PQxHrLYd3E;
    int len;
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
    for (ochrGtyNLkE = 0; ochrGtyNLkE < 10; ochrGtyNLkE = ochrGtyNLkE + 1)
        trans[ochrGtyNLkE] = '0' + ochrGtyNLkE;
    {
        ochrGtyNLkE = 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ochrGtyNLkE < 36) {
            trans[ochrGtyNLkE] = 'A' + ochrGtyNLkE - 10;
            ochrGtyNLkE = ochrGtyNLkE + 1;
        };
    }
    cin >> NEnBxubYeL >> aZdBa4lhsC5 >> NFRb4I;
    for (ochrGtyNLkE = 0; aZdBa4lhsC5[ochrGtyNLkE] != '\0'; ochrGtyNLkE++) {
        if ('0' <= aZdBa4lhsC5[ochrGtyNLkE] && aZdBa4lhsC5[ochrGtyNLkE] <= '9')
            m7PQxHrLYd3E = aZdBa4lhsC5[ochrGtyNLkE] - '0';
        else {
            if (aZdBa4lhsC5[ochrGtyNLkE] >= 'a' && aZdBa4lhsC5[ochrGtyNLkE] <= 'z')
                m7PQxHrLYd3E = aZdBa4lhsC5[ochrGtyNLkE] - 'a' + 10;
            else if (aZdBa4lhsC5[ochrGtyNLkE] >= 'A' && aZdBa4lhsC5[ochrGtyNLkE] <= 'Z')
                m7PQxHrLYd3E = aZdBa4lhsC5[ochrGtyNLkE] - 'A' + 10;
        }
        num = num * NEnBxubYeL +m7PQxHrLYd3E;
    }
    ochrGtyNLkE = 0;
    do {
        XRrbXylwAYD2[ochrGtyNLkE++] = trans[num % NFRb4I];
        num = num / NFRb4I;
    }
    while (num != 0);
    len = strlen (XRrbXylwAYD2);
    for (ochrGtyNLkE = len - 1; ochrGtyNLkE >= 0; ochrGtyNLkE--)
        cout << XRrbXylwAYD2[ochrGtyNLkE];
    return 0;
}

