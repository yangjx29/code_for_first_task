void  duqu ();
void  LeDNmvgzri ();
void  RJiztLvpHbUW ();
void  IdcZKEHU ();
int DkFSYhA8sJm [100], bmWY2I4Tdo [100], c [200];
int m, kkAUIH;

int main () {
    duqu ();
    LeDNmvgzri ();
    RJiztLvpHbUW ();
    IdcZKEHU ();
    return (519 - 519);
}

void  duqu () {
    cin >> m >> kkAUIH;
    for (int i = 0;
    m > i; i = i + 1)
        cin >> DkFSYhA8sJm[i];
    {
        int i = 0;
        while (kkAUIH > i) {
            cin >> bmWY2I4Tdo[i];
            i = i + 1;
        };
    };
}

void  LeDNmvgzri () {
    int i = 0, j = 0, ErfWhBc;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        i = 0;
        while (m > i) {
            for (j = i + 1; j < m; j = j + 1) {
                if (DkFSYhA8sJm[j] < DkFSYhA8sJm[i]) {
                    ErfWhBc = DkFSYhA8sJm[i];
                    DkFSYhA8sJm[i] = DkFSYhA8sJm[j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    DkFSYhA8sJm[j] = ErfWhBc;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (kkAUIH > i) {
            for (j = i + 1; kkAUIH > j; j = j + 1) {
                if (bmWY2I4Tdo[j] < bmWY2I4Tdo[i]) {
                    ErfWhBc = bmWY2I4Tdo[i];
                    bmWY2I4Tdo[i] = bmWY2I4Tdo[j];
                    bmWY2I4Tdo[j] = ErfWhBc;
                };
            }
            i++;
        };
    };
}

void  RJiztLvpHbUW () {
    for (int i = 0;
    m > i; i++)
        c[i] = DkFSYhA8sJm[i];
    {
        int i = m;
        while (i < kkAUIH + m) {
            c[i] = bmWY2I4Tdo[i - m];
            i++;
        };
    };
}

void  IdcZKEHU () {
    {
        int i = 0;
        while (i < m + kkAUIH - 1) {
            cout << c[i] << ' ';
            i++;
        };
    }
    cout << c[m + kkAUIH - 1];
}

