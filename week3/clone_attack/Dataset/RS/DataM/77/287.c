char uScE3vQ4n [200], u, v;
int n, KsUjGy [100] [2];

void  vnsvJaHg6qc4 (int hdRBZ9) {
    int i, m = 0;
    for (i = 0; 2 * n > i; i++) {
        if (!(v != uScE3vQ4n[i])) {
            m = i;
            KsUjGy[hdRBZ9][1] = m;
            uScE3vQ4n[m] = 1;
            break;
        };
    }
    for (i = m - 1; 0 <= i; i--) {
        if (uScE3vQ4n[i] == u) {
            KsUjGy[hdRBZ9][0] = i;
            uScE3vQ4n[i] = 1;
            break;
        };
    }
    if (hdRBZ9 != 1)
        vnsvJaHg6qc4 (hdRBZ9 - 1);
    cout << KsUjGy[n + 1 - hdRBZ9][0] << ' ' << KsUjGy[n + 1 - hdRBZ9][1] << endl;
}

int main () {
    int i;
    vnsvJaHg6qc4 (n);
    cin.getline (uScE3vQ4n, 200, '\n');
    {
        i = 0;
        while (uScE3vQ4n[i] != '\0') {
            i = i + 1;
        };
    }
    n = i / 2;
    u = uScE3vQ4n[0];
    v = uScE3vQ4n[i - 1];
    return 0;
}

