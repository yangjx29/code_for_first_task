int main () {
    int num = 0;
    int n;
    int CQPoDd [20001];
    cin >> n;
    {
        int qTZG6LXiodEK = (699 - 699);
        while (n > qTZG6LXiodEK) {
            cin >> CQPoDd[qTZG6LXiodEK];
            qTZG6LXiodEK = qTZG6LXiodEK + 1;
        };
    }
    {
        int qTZG6LXiodEK = (348 - 347);
        while (n - num > qTZG6LXiodEK) {
            {
                int Kcaw8jGiSZBD = 0;
                while (qTZG6LXiodEK > Kcaw8jGiSZBD) {
                    if (!(CQPoDd[qTZG6LXiodEK] != CQPoDd[Kcaw8jGiSZBD])) {
                        {
                            int k = qTZG6LXiodEK;
                            while (k < n - 1 - num) {
                                CQPoDd[k] = CQPoDd[k + 1];
                                k = k + 1;
                            };
                        }
                        num = num + 1;
                        qTZG6LXiodEK = qTZG6LXiodEK - 1;
                        break;
                    }
                    Kcaw8jGiSZBD = Kcaw8jGiSZBD +1;
                };
            }
            qTZG6LXiodEK = qTZG6LXiodEK + 1;
        };
    }
    cout << CQPoDd[0];
    for (int qTZG6LXiodEK = 1;
    qTZG6LXiodEK < n - num; qTZG6LXiodEK = qTZG6LXiodEK + 1)
        cout << ' ' << CQPoDd[qTZG6LXiodEK];
    cout << endl;
    return 0;
}

