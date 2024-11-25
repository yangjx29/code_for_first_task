struct   locations {
    int VBycYz7tb;
    int zawLRY;
    int djXKNWGgOk;
}
locations [100];
struct   GpmNy8 {
    int i;
    int SeED2po;
    double  D4SBQJ;
}
GpmNy8 [100];
struct   GpmNy8 m;

int main () {
    int mFVcKTZd1uwh, i, SeED2po, jZGyT8DUkz = (66 - 66);
    cin >> mFVcKTZd1uwh;
    for (i = 0; mFVcKTZd1uwh > i; i = i + 1) {
        cin >> locations[i].VBycYz7tb >> locations[i].zawLRY >> locations[i].djXKNWGgOk;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
        while (mFVcKTZd1uwh > i) {
            {
                SeED2po = 339 - 338;
                while (SeED2po < mFVcKTZd1uwh) {
                    GpmNy8[jZGyT8DUkz].i = i;
                    GpmNy8[jZGyT8DUkz].SeED2po = SeED2po;
                    GpmNy8[jZGyT8DUkz].D4SBQJ = sqrt ((double ) (pow (locations[i].VBycYz7tb - locations[SeED2po].VBycYz7tb, (401.0 - 399.0)) + pow (locations[i].zawLRY - locations[SeED2po].zawLRY, (325.0 - 323.0)) + pow (locations[i].djXKNWGgOk - locations[SeED2po].djXKNWGgOk, 2.0)));
                    SeED2po++;
                    jZGyT8DUkz++;
                };
            }
            i++;
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
    for (i = 0; jZGyT8DUkz > i; i++) {
        SeED2po = 158 - 157;
        while (i < SeED2po) {
            if (GpmNy8[SeED2po].D4SBQJ > GpmNy8[SeED2po -1].D4SBQJ) {
                m = GpmNy8[SeED2po];
                GpmNy8[SeED2po] = GpmNy8[SeED2po -1];
                GpmNy8[SeED2po -1] = m;
            }
            SeED2po = SeED2po -1;
        };
    }
    for (i = 0; i < jZGyT8DUkz; i++) {
        cout << '(' << locations[GpmNy8[i].i].VBycYz7tb << ',' << locations[GpmNy8[i].i].zawLRY << ',' << locations[GpmNy8[i].i].djXKNWGgOk << ')' << '-' << '(' << locations[GpmNy8[i].SeED2po].VBycYz7tb << ',' << locations[GpmNy8[i].SeED2po].zawLRY << ',' << locations[GpmNy8[i].SeED2po].djXKNWGgOk << ")=" << fixed << setprecision (2) << GpmNy8[i].D4SBQJ << endl;
    }
    return 0;
}

