int main () {
    double  total [(10570 - 570)], valid [(10842 - 842)], t1, v1, std, x [10000];
    int rqp8Fg;
    cin >> rqp8Fg;
    cin >> t1 >> v1;
    std = v1 / t1;
    {
        int i = (236 - 236);
        while (rqp8Fg - 1 > i) {
            cin >> total[i] >> valid[i];
            x[i] = valid[i] / total[i];
            if (std - x[i] > 0.05)
                cout << "worse" << endl;
            if (0.05 < x[i] - std)
                cout << "better" << endl;
            if ((0.05 >= std - x[i] && std - x[i] >= 0) || (x[i] - std <= 0.05 && x[i] - std >= 0))
                cout << "same" << endl;
            i = i + 1;
        };
    }
    return 0;
}

