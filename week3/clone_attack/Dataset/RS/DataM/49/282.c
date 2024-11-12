int main () {
    int YQsWVK7XyxkY;
    int OaRoAQ;
    int hWfly3TN;
    int k;
    char xfJVM6uBNzhi [(847 - 347)];
    cin >> xfJVM6uBNzhi;
    hWfly3TN = strlen (xfJVM6uBNzhi);
    {
        YQsWVK7XyxkY = 301 - 299;
        while (YQsWVK7XyxkY <= hWfly3TN) {
            {
                OaRoAQ = 0;
                while (OaRoAQ <= hWfly3TN - YQsWVK7XyxkY) {
                    for (k = OaRoAQ; k <= OaRoAQ +YQsWVK7XyxkY / 2; k = k + 1) {
                        if (xfJVM6uBNzhi[k] == xfJVM6uBNzhi[YQsWVK7XyxkY +2 * OaRoAQ -1 - k])
                            continue;
                        else
                            break;
                    }
                    if (k > OaRoAQ +YQsWVK7XyxkY / 2) {
                        for (k = OaRoAQ; k < OaRoAQ +YQsWVK7XyxkY; k++)
                            cout << xfJVM6uBNzhi[k];
                        cout << endl;
                    }
                    OaRoAQ++;
                };
            }
            YQsWVK7XyxkY++;
        };
    }
    return 0;
}

