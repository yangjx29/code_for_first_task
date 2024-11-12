int main () {
    char str [1000];
    char copy [1000] = {'a'};
    int Q6Ko4TC, pVPZqhMx6 = (800 - 800), len = 0, count [1000] = {0};
    cin.getline (str, 10001, '\n');
    len = strlen (str);
    {
        Q6Ko4TC = 0;
        while (Q6Ko4TC < len) {
            if ('a' <= str[Q6Ko4TC] && str[Q6Ko4TC] <= 'z')
                str[Q6Ko4TC] = str[Q6Ko4TC] + 'A' - 'a';
            Q6Ko4TC = Q6Ko4TC +1;
        };
    }
    {
        Q6Ko4TC = 0;
        while (Q6Ko4TC < len) {
            if (Q6Ko4TC == 0) {
                copy[pVPZqhMx6] = str[Q6Ko4TC];
                count[pVPZqhMx6] = 1;
            }
            if (str[Q6Ko4TC] == str[Q6Ko4TC -1] && Q6Ko4TC != 0)
                count[pVPZqhMx6]++;
            if (str[Q6Ko4TC] != str[Q6Ko4TC +1]) {
                copy[++pVPZqhMx6] = str[Q6Ko4TC +1];
                count[pVPZqhMx6] = 1;
            }
            Q6Ko4TC = Q6Ko4TC +1;
        };
    }
    {
        Q6Ko4TC = 0;
        while (Q6Ko4TC < pVPZqhMx6) {
            cout << '(' << copy[Q6Ko4TC] << ',' << count[Q6Ko4TC] << ')';
            Q6Ko4TC++;
        };
    }
    cout << endl;
    return 0;
}

