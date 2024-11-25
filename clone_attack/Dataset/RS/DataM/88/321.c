int GimoLJkDfjt (int q9K4Q1f) {
    int zpD0N6eE;
    zpD0N6eE = 1;
    for (int NqIKexj4spb = 0;
    NqIKexj4spb < q9K4Q1f; NqIKexj4spb++) {
        zpD0N6eE = zpD0N6eE * 10;
    }
    return zpD0N6eE;
}

int main () {
    char s4hYtQn8G [31];
    int vPHjKSopI = strlen (s4hYtQn8G), vECiO3SqoLh [30], DkiQqEyalD = 0, NcPwJpbs = 0;
    memset (vECiO3SqoLh, 0, sizeof (vECiO3SqoLh));
    cin.getline (s4hYtQn8G, 31);
    for (int NqIKexj4spb = vPHjKSopI - 1;
    NqIKexj4spb >= 0; NqIKexj4spb--) {
        if ((s4hYtQn8G[NqIKexj4spb] <= '9') && (s4hYtQn8G[NqIKexj4spb] >= '0')) {
            vECiO3SqoLh[NcPwJpbs] = vECiO3SqoLh[NcPwJpbs] + (s4hYtQn8G[NqIKexj4spb] - '0') * GimoLJkDfjt (DkiQqEyalD);
            DkiQqEyalD++;
        }
        else if ((s4hYtQn8G[NqIKexj4spb +1] <= '9') && (s4hYtQn8G[NqIKexj4spb +1] >= '0')) {
            DkiQqEyalD = 0;
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
            NcPwJpbs++;
        }
        else
            continue;
    }
    if ((s4hYtQn8G[0] > '9') || (s4hYtQn8G[0] < '0'))
        NcPwJpbs--;
    for (int NqIKexj4spb = NcPwJpbs;
    NqIKexj4spb >= 0; NqIKexj4spb--)
        cout << vECiO3SqoLh[NqIKexj4spb] << endl;
    return 0;
}

