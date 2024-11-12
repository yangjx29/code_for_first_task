int main () {
    int LjhJuzYkS;
    int JE7kPAK = 0;
    cin >> LjhJuzYkS;
    double  kxHFIjo [10000], ricNaDn2J [10000];
    {
        int qyEAFHjcwktI = 0;
        while (qyEAFHjcwktI < LjhJuzYkS) {
            cin >> kxHFIjo[qyEAFHjcwktI] >> ricNaDn2J[qyEAFHjcwktI];
            qyEAFHjcwktI++;
        }
    }
    double  Ie2y4i, FjOGsvNt8xmR;
    Ie2y4i = 0.0;
    {
        int Nr1DJ208RNPf = 0;
        while (Nr1DJ208RNPf < LjhJuzYkS) {
            {
                int A0algikO = 0;
                while (A0algikO < LjhJuzYkS) {
                    FjOGsvNt8xmR = sqrt (pow ((kxHFIjo[A0algikO] - kxHFIjo[Nr1DJ208RNPf]), 2.0) + pow ((ricNaDn2J[A0algikO] - ricNaDn2J[Nr1DJ208RNPf]), 2.0));
                    if (Ie2y4i < FjOGsvNt8xmR)
                        Ie2y4i = FjOGsvNt8xmR;
                    A0algikO++;
                }
            }
            Nr1DJ208RNPf = Nr1DJ208RNPf +1;
        }
    }
    cout << Ie2y4i << endl;
    return 0;
}

