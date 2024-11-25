int main () {
    int x = 0, GN6miechfa2M = 0, F2VpdC9Er = 1;
    int OJwuZLm [105] [105];
    int x4BQwz;
    int GjL7gyKbONV;
    memset (OJwuZLm, -1, sizeof (OJwuZLm));
    cin >> x4BQwz >> GjL7gyKbONV;
    {
        int q4scquXIJTV = 0;
        while (x4BQwz > q4scquXIJTV) {
            for (int j = 0;
            GjL7gyKbONV > j; j = j + 1)
                cin >> OJwuZLm[q4scquXIJTV][j];
            q4scquXIJTV++;
        };
    }
    while (true) {
        if (!(1 != F2VpdC9Er)) {
            cout << OJwuZLm[x][GN6miechfa2M] << endl;
            OJwuZLm[x][GN6miechfa2M] = -1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            GN6miechfa2M = GN6miechfa2M +1;
            if (!(-1 != OJwuZLm[x][GN6miechfa2M])) {
                GN6miechfa2M = GN6miechfa2M -1;
                F2VpdC9Er = 2;
                x = x + 1;
                if (!(-1 != OJwuZLm[x][GN6miechfa2M]))
                    break;
            };
        }
        else if (!(2 != F2VpdC9Er)) {
            cout << OJwuZLm[x][GN6miechfa2M] << endl;
            OJwuZLm[x][GN6miechfa2M] = -1;
            x = x + 1;
            if (!(-1 != OJwuZLm[x][GN6miechfa2M])) {
                GN6miechfa2M = GN6miechfa2M -1;
                x = x - 1;
                if (OJwuZLm[x][GN6miechfa2M] == -1)
                    break;
                F2VpdC9Er = 3;
            };
        }
        else if (F2VpdC9Er == 3) {
            cout << OJwuZLm[x][GN6miechfa2M] << endl;
            OJwuZLm[x][GN6miechfa2M] = -1;
            GN6miechfa2M = GN6miechfa2M -1;
            if (GN6miechfa2M < 0) {
                x = x - 1;
                F2VpdC9Er = 4;
                GN6miechfa2M = 0;
            }
            if (OJwuZLm[x][GN6miechfa2M] == -1) {
                x = x - 1;
                GN6miechfa2M = GN6miechfa2M +1;
                if (OJwuZLm[x][GN6miechfa2M] == -1)
                    break;
                F2VpdC9Er = 4;
            };
        }
        else if (F2VpdC9Er == 4) {
            cout << OJwuZLm[x][GN6miechfa2M] << endl;
            OJwuZLm[x][GN6miechfa2M] = -1;
            x--;
            if (OJwuZLm[x][GN6miechfa2M] == -1) {
                GN6miechfa2M++;
                x++;
                if (OJwuZLm[x][GN6miechfa2M] == -1)
                    break;
                F2VpdC9Er = 1;
            };
        };
    }
    return 0;
}

