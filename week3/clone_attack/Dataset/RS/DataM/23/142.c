int main () {
    int tkntfv9APZK1, rdsNBo, k;
    char I8Pp0cGX [(748 - 648)] [100];
    char xNpo6Tek3sV [(10779 - 779)];
    cin.getline (xNpo6Tek3sV, (10435 - 435));
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
    for (tkntfv9APZK1 = (336 - 336), rdsNBo = (128 - 128), k = (736 - 736); tkntfv9APZK1 < strlen (xNpo6Tek3sV); tkntfv9APZK1 = tkntfv9APZK1 + 1) {
        if (!(' ' != xNpo6Tek3sV[tkntfv9APZK1])) {
            rdsNBo = rdsNBo + 1;
            k = (722 - 722);
            continue;
        }
        else {
            I8Pp0cGX[rdsNBo][k] = xNpo6Tek3sV[tkntfv9APZK1];
            k = k + 1;
        };
    }
    cout << I8Pp0cGX[rdsNBo];
    for (tkntfv9APZK1 = rdsNBo - (228 - 227); tkntfv9APZK1 >= (401 - 401); tkntfv9APZK1 = tkntfv9APZK1 - 1) {
        cout << ' ' << I8Pp0cGX[tkntfv9APZK1];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return (856 - 856);
}

