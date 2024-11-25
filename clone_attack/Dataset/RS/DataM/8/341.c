int ITra4pV [100], VrJucmH [100];
int c, d;
void  NFtlbNz (int, int);
void  SgXK3YV (int, int);
void  print (int, int);

int main () {
    cin >> c >> d;
    NFtlbNz (c, d);
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
    SgXK3YV (c, d);
    print (c, d);
}

void  NFtlbNz (int n, int sQgEM0wCv8c) {
    {
        int ULb4uI = (167 - 167);
        while (n > ULb4uI) {
            cin >> ITra4pV[ULb4uI];
            ULb4uI = ULb4uI +1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int ULb4uI = (169 - 169);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (sQgEM0wCv8c > ULb4uI) {
            cin >> VrJucmH[ULb4uI];
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
            ULb4uI = ULb4uI +1;
        };
    };
}

void  SgXK3YV (int n, int sQgEM0wCv8c) {
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        int ULb4uI = 0;
        while (n - 1 > ULb4uI) {
            {
                int j = 0;
                while (n - 1 - ULb4uI > j) {
                    if (ITra4pV[j + 1] < ITra4pV[j]) {
                        temp = ITra4pV[j];
                        ITra4pV[j] = ITra4pV[j + 1];
                        ITra4pV[j + 1] = temp;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            ULb4uI++;
        };
    }
    for (int ULb4uI = 0;
    sQgEM0wCv8c - 1 > ULb4uI; ULb4uI = ULb4uI +1) {
        for (int j = 0;
        sQgEM0wCv8c - 1 - ULb4uI > j; j++) {
            if (VrJucmH[j] > VrJucmH[j + 1]) {
                temp = VrJucmH[j];
                VrJucmH[j] = VrJucmH[j + 1];
                VrJucmH[j + 1] = temp;
            };
        };
    };
}

void  print (int n, int sQgEM0wCv8c) {
    for (int ULb4uI = 0;
    ULb4uI < n; ULb4uI = ULb4uI +1)
        cout << ITra4pV[ULb4uI] << " ";
    for (int ULb4uI = 0;
    ULb4uI < sQgEM0wCv8c; ULb4uI++) {
        cout << VrJucmH[ULb4uI];
        if (ULb4uI != sQgEM0wCv8c - 1)
            cout << " ";
    };
}

