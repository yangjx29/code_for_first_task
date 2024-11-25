struct   student {
    int WCXpvjF;
    int chinese;
    int math;
};
int main () {
    int n;
    int RDWzpJt;
    int j;
    struct   student etI3MpDW [100001];
    cin >> n;
    for (RDWzpJt = (305 - 304); RDWzpJt <= n; RDWzpJt++)
        cin >> etI3MpDW[RDWzpJt].WCXpvjF >> etI3MpDW[RDWzpJt].chinese >> etI3MpDW[RDWzpJt].math;
    {
        RDWzpJt = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (3 >= RDWzpJt) {
            for (j = n - 1; j >= RDWzpJt; j = j - 1)
                if (etI3MpDW[j].chinese + etI3MpDW[j].math < etI3MpDW[j + 1].chinese + etI3MpDW[j + 1].math) {
                    etI3MpDW[0] = etI3MpDW[j];
                    etI3MpDW[j] = etI3MpDW[j + 1];
                    etI3MpDW[j + 1] = etI3MpDW[0];
                }
            RDWzpJt++;
        };
    }
    for (RDWzpJt = 1; RDWzpJt <= 3; RDWzpJt++)
        cout << etI3MpDW[RDWzpJt].WCXpvjF << ' ' << etI3MpDW[RDWzpJt].chinese + etI3MpDW[RDWzpJt].math << endl;
}

