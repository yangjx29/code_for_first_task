int main () {
    char nqBJb6u [10000];
    char CXoBe5ZLJR [300] [100];
    int JKTVi45h, DrPefIhYZ6pu, WWzKQCxgJqeZ, lNYajC = 0, d0CMJei7VU = 0, C4V8BUE = 0;
    int cUmiOP [300];
    gets (nqBJb6u);
    DrPefIhYZ6pu = strlen (nqBJb6u);
    for (JKTVi45h = 0; DrPefIhYZ6pu > JKTVi45h; JKTVi45h++) {
        if (!(' ' == nqBJb6u[JKTVi45h])) {
            CXoBe5ZLJR[lNYajC][d0CMJei7VU] = nqBJb6u[JKTVi45h];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            d0CMJei7VU++;
        }
        else {
            if (!(' ' != nqBJb6u[JKTVi45h])) {
                CXoBe5ZLJR[lNYajC][d0CMJei7VU] = '\0';
                lNYajC++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                d0CMJei7VU = 0;
            };
        };
    }
    C4V8BUE = 0;
    {
        WWzKQCxgJqeZ = 0;
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
        while (lNYajC + 1 > WWzKQCxgJqeZ) {
            cUmiOP[WWzKQCxgJqeZ] = strlen (CXoBe5ZLJR[WWzKQCxgJqeZ]);
            if (cUmiOP[WWzKQCxgJqeZ] != 0) {
                if (WWzKQCxgJqeZ == 0) {
                    C4V8BUE = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    printf ("%d", cUmiOP[WWzKQCxgJqeZ]);
                }
                else {
                    if (C4V8BUE == 0) {
                        printf ("%d", cUmiOP[WWzKQCxgJqeZ]);
                        C4V8BUE = 1;
                    }
                    else
                        printf (",%d", cUmiOP[WWzKQCxgJqeZ]);
                };
            }
            WWzKQCxgJqeZ++;
        };
    }
    return 0;
}

