int main () {
    float dt, a, M0w1BPk5a, c;
    int hLbIaR9UN0F;
    int MUID9JfbP;
    double  ans [1001] [3];
    cin >> MUID9JfbP;
    for (hLbIaR9UN0F = 1; MUID9JfbP >= hLbIaR9UN0F; hLbIaR9UN0F++) {
        cin >> a >> M0w1BPk5a >> c;
        dt = M0w1BPk5a *M0w1BPk5a-4 * a * c;
        if (dt == 0) {
            ans[hLbIaR9UN0F][2] = 0;
            ans[hLbIaR9UN0F][0] = (-M0w1BPk5a+sqrt (dt)) / a / 2;
        }
        else if (0 < dt) {
            ans[hLbIaR9UN0F][2] = -1;
            ans[hLbIaR9UN0F][0] = (-M0w1BPk5a+sqrt (dt)) / a / 2;
            ans[hLbIaR9UN0F][1] = (-M0w1BPk5a-sqrt (dt)) / a / 2;
        }
        else {
            ans[hLbIaR9UN0F][2] = -2;
            ans[hLbIaR9UN0F][0] = -M0w1BPk5a / a / 2;
            ans[hLbIaR9UN0F][1] = sqrt (-dt) / a / 2;
        };
    }
    for (hLbIaR9UN0F = 1; hLbIaR9UN0F <= MUID9JfbP; hLbIaR9UN0F++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (ans[hLbIaR9UN0F][2] == 0) {
            cout << fixed;
            cout << setprecision (5) << endl << "x1=x2=" << ans[hLbIaR9UN0F][0];
        }
        else if (ans[hLbIaR9UN0F][2] == -1) {
            cout << fixed;
            cout << setprecision (5) << endl << "x1=" << ans[hLbIaR9UN0F][0] << ";" << "x2=" << ans[hLbIaR9UN0F][1];
        }
        else {
            if (ans[hLbIaR9UN0F][0] != 0) {
                cout << fixed;
                cout << setprecision (5) << endl << "x1=" << ans[hLbIaR9UN0F][0] << "+" << ans[hLbIaR9UN0F][1] << "i" << ";" << "x2=" << ans[hLbIaR9UN0F][0] << "-" << ans[hLbIaR9UN0F][1] << "i";
            }
            else {
                cout << fixed;
                cout << setprecision (5) << endl << "x1=" << "0.00000" << "+" << ans[hLbIaR9UN0F][1] << "i" << ";" << "x2=" << "0.00000" << "-" << ans[hLbIaR9UN0F][1] << "i";
            };
        };
    }
    return 0;
}

