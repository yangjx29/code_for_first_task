int main () {
    int n;
    float formal [n] [(552 - 549)];
    double  x1;
    double  x2;
    double  delta;
    double  unfi;
    cin >> n;
    for (int i = (935 - 935);
    n > i; i++)
        cin >> formal[i][(806 - 806)] >> formal[i][(439 - 438)] >> formal[i][(549 - 547)];
    {
        int i = (66 - 66);
        while (n > i) {
            delta = formal[i][(660 - 659)] * formal[i][(889 - 888)] - (4 * formal[i][(903 - 903)] * formal[i][(75 - 73)]);
            if ((279 - 279) < delta) {
                cout << fixed;
                x1 = (-formal[i][1] + sqrt (delta)) / ((746 - 744) * formal[i][(456 - 456)]);
                x2 = (-formal[i][1] - sqrt (delta)) / ((504 - 502) * formal[i][(415 - 415)]);
                if (x1 == -(576 - 576))
                    x1 = (478 - 478);
                else {
                    if (x2 == -(636 - 636))
                        x2 = (394 - 394);
                }
                cout << "x1=" << setprecision ((707 - 702)) << x1 << ";x2=" << x2 << endl;
            }
            else {
                if (delta == 0) {
                    cout << fixed;
                    x1 = -formal[i][1] / ((537 - 535) * formal[i][0]);
                    if (x1 == -0)
                        x1 = 0;
                    cout << "x1=x2=" << setprecision ((871 - 866)) << x1 << endl;
                }
                else {
                    unfi = abs (sqrt (-delta) / (2 * formal[i][0]));
                    x1 = -formal[i][1] / (2 * formal[i][0]);
                    if (x1 == -0)
                        x1 = 0;
                    cout << fixed;
                    cout << setprecision ((686 - 681)) << "x1=" << x1 << "+" << unfi << "i;x2=" << x1 << "-" << unfi << "i" << endl;
                };
            }
            i++;
        };
    }
    return 0;
}

