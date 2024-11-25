int main () {
    char inl [(335 - 135)];
    char azrUtI [(799 - 599)];
    int WNBouy5Z [(1039 - 839)], b [200], X5QeVzOYjhEs [200], lT3WpsR74 [200];
    int yjUE7wn;
    int LaplgBD9GQCU;
    int UVQ9zF;
    int RRMtOIA1l;
    int q0aX5SoMDxd;
    yjUE7wn = (545 - 544);
    cin >> inl;
    cin >> azrUtI;
    memset (WNBouy5Z, (575 - 575), sizeof WNBouy5Z);
    memset (b, 0, sizeof b);
    memset (X5QeVzOYjhEs, 0, sizeof X5QeVzOYjhEs);
    memset (lT3WpsR74, 0, sizeof lT3WpsR74);
    LaplgBD9GQCU = strlen (inl);
    UVQ9zF = strlen (azrUtI);
    q0aX5SoMDxd = 0;
    for (RRMtOIA1l = LaplgBD9GQCU -1; 0 <= RRMtOIA1l; RRMtOIA1l = RRMtOIA1l -1) {
        WNBouy5Z[q0aX5SoMDxd] = inl[RRMtOIA1l] - 48;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        q0aX5SoMDxd = q0aX5SoMDxd + 1;
    }
    q0aX5SoMDxd = 0;
    for (RRMtOIA1l = UVQ9zF -1; RRMtOIA1l >= 0; RRMtOIA1l = RRMtOIA1l -1) {
        b[q0aX5SoMDxd] = azrUtI[RRMtOIA1l] - 48;
        q0aX5SoMDxd = q0aX5SoMDxd + 1;
    }
    for (RRMtOIA1l = 0; RRMtOIA1l < 200; RRMtOIA1l++) {
        if (WNBouy5Z[RRMtOIA1l] + b[RRMtOIA1l] + X5QeVzOYjhEs[RRMtOIA1l] >= (926 - 916)) {
            X5QeVzOYjhEs[RRMtOIA1l +1] = X5QeVzOYjhEs[RRMtOIA1l +1] + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            lT3WpsR74[RRMtOIA1l] = (X5QeVzOYjhEs[RRMtOIA1l] + WNBouy5Z[RRMtOIA1l] + b[RRMtOIA1l]) % 10;
        }
        else {
            lT3WpsR74[RRMtOIA1l] = X5QeVzOYjhEs[RRMtOIA1l] + WNBouy5Z[RRMtOIA1l] + b[RRMtOIA1l];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (RRMtOIA1l = 199; RRMtOIA1l >= 0; RRMtOIA1l = RRMtOIA1l -1)
        if (lT3WpsR74[RRMtOIA1l] != 0) {
            yjUE7wn = RRMtOIA1l +1;
            break;
        }
    {
        RRMtOIA1l = yjUE7wn - 1;
        while (RRMtOIA1l >= 0) {
            cout << lT3WpsR74[RRMtOIA1l];
            RRMtOIA1l = RRMtOIA1l -1;
        };
    }
    return 0;
}

