int main () {
    int SUqzWQZ, XrA7jFoB2RqK, XoJsVtrliEZ = 1, hhF0jAda2, N3aKd7ek04zU;
    int ClSe3HWCBhk0 [100] [100];
    scanf ("%d %d", &hhF0jAda2, &N3aKd7ek04zU);
    {
        SUqzWQZ = 0;
        for (; SUqzWQZ < hhF0jAda2;) {
            {
                XrA7jFoB2RqK = 0;
                for (; N3aKd7ek04zU > XrA7jFoB2RqK;) {
                    scanf ("%d", &ClSe3HWCBhk0[SUqzWQZ][XrA7jFoB2RqK]);
                    XrA7jFoB2RqK = XrA7jFoB2RqK +1;
                }
            }
            SUqzWQZ = SUqzWQZ +1;
        }
    }
    {
        XoJsVtrliEZ = 1;
        while (XoJsVtrliEZ <= hhF0jAda2 / 2 && N3aKd7ek04zU / 2 >= XoJsVtrliEZ) {
            {
                SUqzWQZ = XoJsVtrliEZ -1;
                XrA7jFoB2RqK = XoJsVtrliEZ -1;
                while (XrA7jFoB2RqK < N3aKd7ek04zU -XoJsVtrliEZ) {
                    printf ("%d\n", ClSe3HWCBhk0[SUqzWQZ][XrA7jFoB2RqK]);
                    XrA7jFoB2RqK = XrA7jFoB2RqK +1;
                }
            }
            {
                SUqzWQZ = XoJsVtrliEZ -1;
                XrA7jFoB2RqK = N3aKd7ek04zU -XoJsVtrliEZ;
                for (; hhF0jAda2 - XoJsVtrliEZ > SUqzWQZ;) {
                    printf ("%d\n", ClSe3HWCBhk0[SUqzWQZ][XrA7jFoB2RqK]);
                    SUqzWQZ = SUqzWQZ +1;
                }
            }
            {
                SUqzWQZ = hhF0jAda2 - XoJsVtrliEZ;
                XrA7jFoB2RqK = N3aKd7ek04zU -XoJsVtrliEZ;
                while (XrA7jFoB2RqK > XoJsVtrliEZ -1) {
                    printf ("%d\n", ClSe3HWCBhk0[SUqzWQZ][XrA7jFoB2RqK]);
                    XrA7jFoB2RqK = XrA7jFoB2RqK -1;
                }
            }
            {
                SUqzWQZ = hhF0jAda2 - XoJsVtrliEZ;
                XrA7jFoB2RqK = XoJsVtrliEZ -1;
                while (XoJsVtrliEZ -1 < SUqzWQZ) {
                    printf ("%d\n", ClSe3HWCBhk0[SUqzWQZ][XrA7jFoB2RqK]);
                    SUqzWQZ = SUqzWQZ -1;
                }
            }
            XoJsVtrliEZ = XoJsVtrliEZ +1;
        }
    }
    if (hhF0jAda2 % 2 != 0 && hhF0jAda2 <= N3aKd7ek04zU) {
        XrA7jFoB2RqK = XoJsVtrliEZ -1;
        while (XrA7jFoB2RqK <= N3aKd7ek04zU -XoJsVtrliEZ) {
            printf ("%d\n", ClSe3HWCBhk0[hhF0jAda2 / 2][XrA7jFoB2RqK]);
            XrA7jFoB2RqK++;
        }
    }
    else if (N3aKd7ek04zU % 2 != 0) {
        SUqzWQZ = XoJsVtrliEZ -1;
        for (; SUqzWQZ <= hhF0jAda2 - XoJsVtrliEZ;) {
            printf ("%d\n", ClSe3HWCBhk0[SUqzWQZ][N3aKd7ek04zU / 2]);
            SUqzWQZ++;
        }
    }
    return 0;
}

