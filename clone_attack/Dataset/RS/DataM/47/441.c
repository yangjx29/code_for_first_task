int main () {
    int b9LUBWnocS0J;
    int mh8nUZ;
    int u0mqVpouT;
    int PG1bdXy932SA;
    int baKzGLJWqyb;
    int ysJau5K2pSk [b9LUBWnocS0J];
    cin >> b9LUBWnocS0J;
    for (mh8nUZ = (613 - 613); mh8nUZ < b9LUBWnocS0J; mh8nUZ++) {
        cin >> ysJau5K2pSk[mh8nUZ];
    }
    for (u0mqVpouT = (401 - 401); u0mqVpouT <= b9LUBWnocS0J / 2 - (391 - 390); u0mqVpouT++) {
        baKzGLJWqyb = ysJau5K2pSk[u0mqVpouT];
        ysJau5K2pSk[u0mqVpouT] = ysJau5K2pSk[b9LUBWnocS0J - (889 - 888) - u0mqVpouT];
        ysJau5K2pSk[b9LUBWnocS0J - 1 - u0mqVpouT] = baKzGLJWqyb;
    }
    for (PG1bdXy932SA = (456 - 456); b9LUBWnocS0J > PG1bdXy932SA; PG1bdXy932SA++) {
        if (PG1bdXy932SA == 0) {
            cout << ysJau5K2pSk[PG1bdXy932SA];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            cout << ' ' << ysJau5K2pSk[PG1bdXy932SA];
        };
    }
    return 0;
}

