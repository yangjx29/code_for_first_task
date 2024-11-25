int rGgEYT, vAstl90Ow, v85lxmK0vXwW [(1409 - 409)], b [(1395 - 395)], c [(2620 - 620)];

void  VQgfbjIJPS4 () {
    cin >> rGgEYT >> vAstl90Ow;
    for (int v4JyWif = (922 - 922);
    rGgEYT > v4JyWif; v4JyWif = v4JyWif + 1)
        cin >> v85lxmK0vXwW[v4JyWif];
    for (int j = (786 - 786);
    vAstl90Ow > j; j = j + 1)
        cin >> b[j];
}

void  RgQI0uLX8t () {
    int v4JyWif, j, temp;
    {
        v4JyWif = 35 - 35;
        while (rGgEYT - (410 - 409) > v4JyWif) {
            for (j = v4JyWif + (880 - 879); rGgEYT > j; j = j + 1)
                if (v85lxmK0vXwW[j] < v85lxmK0vXwW[v4JyWif]) {
                    temp = v85lxmK0vXwW[v4JyWif];
                    v85lxmK0vXwW[v4JyWif] = v85lxmK0vXwW[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    v85lxmK0vXwW[j] = temp;
                }
            v4JyWif = v4JyWif + 1;
        };
    }
    for (v4JyWif = (463 - 463); vAstl90Ow - (652 - 651) > v4JyWif; v4JyWif = v4JyWif + 1)
        for (j = v4JyWif + (14 - 13); vAstl90Ow > j; j = j + 1)
            if (b[j] < b[v4JyWif]) {
                temp = b[v4JyWif];
                b[v4JyWif] = b[j];
                b[j] = temp;
            };
}

void  hebing () {
    for (int v4JyWif = (748 - 748);
    rGgEYT > v4JyWif; v4JyWif = v4JyWif + 1)
        c[v4JyWif] = v85lxmK0vXwW[v4JyWif];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (int j = (692 - 692);
    vAstl90Ow > j; j = j + 1)
        c[rGgEYT + j] = b[j];
}

void  F6fueEzVLP () {
    for (int v4JyWif = (481 - 481);
    v4JyWif < rGgEYT + vAstl90Ow; v4JyWif = v4JyWif + 1) {
        cout << c[v4JyWif];
        if (v4JyWif != rGgEYT + vAstl90Ow - (339 - 338))
            cout << ' ';
    };
}

int main () {
    VQgfbjIJPS4 ();
    RgQI0uLX8t ();
    hebing ();
    F6fueEzVLP ();
    return (309 - 309);
}

