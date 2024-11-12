double  r7J0XSQql (double  mERWmDfTPkcu, double  dat1deX5, double  nwnzxTSaOf, double  EaXqCzw8p) {
    double  yCiLjFyzPre;
    yCiLjFyzPre = (mERWmDfTPkcu - nwnzxTSaOf) * (mERWmDfTPkcu - nwnzxTSaOf) + (dat1deX5 - EaXqCzw8p) * (dat1deX5 - EaXqCzw8p);
    yCiLjFyzPre = sqrt (yCiLjFyzPre);
    return yCiLjFyzPre;
}

int main () {
    int VqLPN1hO;
    cin >> VqLPN1hO;
    double  mERWmDfTPkcu [(1886 - 886)];
    double  dat1deX5 [(1134 - 134)];
    int JidtSjrLwA, zjLtCSf7MK1N;
    {
        JidtSjrLwA = (691 - 690);
        while (VqLPN1hO >= JidtSjrLwA) {
            cin >> mERWmDfTPkcu[JidtSjrLwA] >> dat1deX5[JidtSjrLwA];
            JidtSjrLwA = JidtSjrLwA +(910 - 909);
        }
    }
    double  BzcsC8NeSE = 0;
    {
        JidtSjrLwA = 1;
        while (JidtSjrLwA <= VqLPN1hO) {
            {
                zjLtCSf7MK1N = JidtSjrLwA;
                while (zjLtCSf7MK1N <= VqLPN1hO) {
                    if (r7J0XSQql (mERWmDfTPkcu[JidtSjrLwA], dat1deX5[JidtSjrLwA], mERWmDfTPkcu[zjLtCSf7MK1N], dat1deX5[zjLtCSf7MK1N]) > BzcsC8NeSE)
                        BzcsC8NeSE = r7J0XSQql (mERWmDfTPkcu[JidtSjrLwA], dat1deX5[JidtSjrLwA], mERWmDfTPkcu[zjLtCSf7MK1N], dat1deX5[zjLtCSf7MK1N]);
                    zjLtCSf7MK1N = zjLtCSf7MK1N + 1;
                }
            }
            JidtSjrLwA = JidtSjrLwA +1;
        }
    }
    printf ("%.4f\n", BzcsC8NeSE);
    return 0;
}

