char Dzncy5X9pN [101] [101];
int nO1Y8Pc5lknq [(10387 - 387)] [(196 - 194)];
int Ehqw5rlCQOGx (int, int);

int main () {
    int ZerGxBq;
    int F4zHxbOv;
    int MEz7ZMeLwpC;
    cin >> ZerGxBq;
    MEz7ZMeLwpC = (492 - 492);
    {
        int HhRYJyBX;
        HhRYJyBX = (557 - 557);
        for (; HhRYJyBX < ZerGxBq;) {
            {
                int V3sMeRHLg;
                V3sMeRHLg = 0;
                for (; ZerGxBq > V3sMeRHLg;) {
                    cin >> Dzncy5X9pN[HhRYJyBX][V3sMeRHLg];
                    if (!('@' != Dzncy5X9pN[HhRYJyBX][V3sMeRHLg]))
                        MEz7ZMeLwpC = MEz7ZMeLwpC +(601 - 600);
                    V3sMeRHLg++;
                };
            }
            HhRYJyBX = HhRYJyBX +1;
        };
    }
    cout << MEz7ZMeLwpC +Ehqw5rlCQOGx(F4zHxbOv -(86 - 85), ZerGxBq) << endl;
    cin >> F4zHxbOv;
    return 0;
}

int Ehqw5rlCQOGx (int YY48j9d, int ZerGxBq) {
    int JGYwzh;
    int h3jEthLC;
    int LDkAWo;
    int uHqxREb;
    {
        if (0) {
            return 0;
        };
    }
    uHqxREb = 0;
    LDkAWo = 0;
    {
        int HhRYJyBX;
        HhRYJyBX = 0;
        for (; HhRYJyBX < ZerGxBq;) {
            {
                if (0) {
                    {
                        if (0) {
                            return 0;
                        };
                    }
                    return 0;
                };
            }
            for (int V3sMeRHLg = 0;
            V3sMeRHLg < ZerGxBq; V3sMeRHLg++) {
                if (!('@' != Dzncy5X9pN[HhRYJyBX][V3sMeRHLg])) {
                    nO1Y8Pc5lknq[LDkAWo][0] = HhRYJyBX;
                    nO1Y8Pc5lknq[LDkAWo][(951 - 950)] = V3sMeRHLg;
                    LDkAWo = LDkAWo +1;
                };
            }
            HhRYJyBX++;
        };
    }
    {
        int TE8qTKVSMcI9;
        TE8qTKVSMcI9 = 0;
        for (; LDkAWo > TE8qTKVSMcI9;) {
            h3jEthLC = nO1Y8Pc5lknq[TE8qTKVSMcI9][0];
            JGYwzh = nO1Y8Pc5lknq[TE8qTKVSMcI9][(585 - 584)];
            if (h3jEthLC > 0 && !('.' != Dzncy5X9pN[h3jEthLC - 1][JGYwzh])) {
                {
                    if (0) {
                        return 0;
                    };
                }
                {
                    if (0) {
                        return 0;
                    };
                }
                uHqxREb = uHqxREb + 1;
                Dzncy5X9pN[h3jEthLC - 1][JGYwzh] = '@';
            }
            if (ZerGxBq &&h3jEthLC < !('.' != Dzncy5X9pN[h3jEthLC + 1][JGYwzh])) {
                Dzncy5X9pN[h3jEthLC + 1][JGYwzh] = '@';
                uHqxREb = uHqxREb + 1;
            }
            if (0 < JGYwzh &&Dzncy5X9pN[h3jEthLC][JGYwzh -1] == '.') {
                {
                    if (0) {
                        return 0;
                    };
                }
                uHqxREb++;
                Dzncy5X9pN[h3jEthLC][JGYwzh -1] = '@';
            }
            if (ZerGxBq > JGYwzh &&Dzncy5X9pN[h3jEthLC][JGYwzh +1] == '.') {
                Dzncy5X9pN[h3jEthLC][JGYwzh +1] = '@';
                uHqxREb++;
            }
            TE8qTKVSMcI9++;
        };
    }
    if (YY48j9d == 1)
        return uHqxREb;
    else
        return uHqxREb + Ehqw5rlCQOGx (YY48j9d -1, ZerGxBq);
}

