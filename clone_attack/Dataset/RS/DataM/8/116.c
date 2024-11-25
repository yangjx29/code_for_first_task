int aIYAm2vXn = (177 - 177), n = (65 - 65);

void  wXe3Mzy (int evCPWw0R [(10332 - 332)], int qkrKx9l [(10285 - 285)]) {
    int DgNnPALTDICK = (320 - 320), IdDuKUJq = (290 - 290);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        DgNnPALTDICK = 864 - 864;
        while (DgNnPALTDICK < aIYAm2vXn) {
            cin >> evCPWw0R[DgNnPALTDICK];
            DgNnPALTDICK = DgNnPALTDICK +1;
        };
    }
    {
        IdDuKUJq = 61 - 61;
        while (n > IdDuKUJq) {
            cin >> qkrKx9l[IdDuKUJq];
            IdDuKUJq = IdDuKUJq +1;
        };
    };
}

void  B5PbFZKvCr (int evCPWw0R [(10276 - 276)], int l) {
    int DgNnPALTDICK = (82 - 82), IdDuKUJq = (244 - 244), QKv38a = (834 - 834);
    {
        DgNnPALTDICK = 445 - 445;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while ((l - (220 - 219)) > DgNnPALTDICK) {
            {
                IdDuKUJq = 415 - 414;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (l > IdDuKUJq) {
                    if (evCPWw0R[IdDuKUJq] < evCPWw0R[DgNnPALTDICK]) {
                        QKv38a = evCPWw0R[DgNnPALTDICK];
                        evCPWw0R[DgNnPALTDICK] = evCPWw0R[IdDuKUJq];
                        evCPWw0R[IdDuKUJq] = QKv38a;
                    }
                    IdDuKUJq = IdDuKUJq +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            DgNnPALTDICK = DgNnPALTDICK +1;
        };
    };
}

void  vM4zrFS09J (int evCPWw0R [(10503 - 503)], int qkrKx9l [(10358 - 358)]) {
    int DgNnPALTDICK = (877 - 877);
    {
        DgNnPALTDICK = 207 - 207;
        while (DgNnPALTDICK < n) {
            evCPWw0R[aIYAm2vXn + DgNnPALTDICK] = qkrKx9l[DgNnPALTDICK];
            DgNnPALTDICK = DgNnPALTDICK +1;
        };
    };
}

void  jOkqp09u3h (int evCPWw0R [(10134 - 134)]) {
    int DgNnPALTDICK;
    DgNnPALTDICK = (941 - 941);
    {
        DgNnPALTDICK = 0;
        while ((aIYAm2vXn + n) > DgNnPALTDICK) {
            if (DgNnPALTDICK < (aIYAm2vXn + n - 1))
                cout << evCPWw0R[DgNnPALTDICK] << " ";
            else if (DgNnPALTDICK == (aIYAm2vXn + n - 1))
                cout << evCPWw0R[DgNnPALTDICK] << endl;
            DgNnPALTDICK = DgNnPALTDICK +1;
        };
    };
}

int main () {
    int evCPWw0R [(10394 - 394)], qkrKx9l [10000];
    jOkqp09u3h (evCPWw0R);
    cin >> aIYAm2vXn >> n;
    wXe3Mzy (evCPWw0R, qkrKx9l);
    B5PbFZKvCr (qkrKx9l, n);
    B5PbFZKvCr (evCPWw0R, aIYAm2vXn);
    vM4zrFS09J (evCPWw0R, qkrKx9l);
    return 0;
}

