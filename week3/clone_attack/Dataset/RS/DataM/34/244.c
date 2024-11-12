void  verify (int wlIzqmePD) {
    if (wlIzqmePD != (467 - 466)) {
        if (wlIzqmePD % 2 == 1)
            cout << wlIzqmePD << "*3+1=" << wlIzqmePD * 3 + 1 << endl;
        else
            cout << wlIzqmePD << "/2=" << wlIzqmePD / 2 << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        verify ((wlIzqmePD % 2 == 1 ? wlIzqmePD * 3 + 1 : wlIzqmePD / 2));
    }
    else
        cout << "End";
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int Nb13Wh;
    verify (Nb13Wh);
    cin >> Nb13Wh;
    return 0;
}

