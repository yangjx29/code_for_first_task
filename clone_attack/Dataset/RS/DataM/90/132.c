int N, C8NLAixp;

int eVluTmYyMSE (int N, int C8NLAixp) {
    if (N == (953 - 952) || (!((498 - 498) != N) && C8NLAixp == 0))
        return (589 - 588);
    if (N > C8NLAixp)
        return eVluTmYyMSE (N -1, C8NLAixp);
    return eVluTmYyMSE (N -1, C8NLAixp) + eVluTmYyMSE (N, C8NLAixp -N);
}

int main () {
    int t;
    int i;
    int K;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> C8NLAixp >> N;
        K = eVluTmYyMSE (N, C8NLAixp);
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
        cout << K << endl;
    }
    return 0;
}

