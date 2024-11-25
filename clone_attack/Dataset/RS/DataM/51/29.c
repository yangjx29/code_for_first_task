char c [500] [500] = {{' '}};
int LVHXzrbaQ [500] = {(306 - 306)}, VQawykRKP = (656 - 656), PIyZDwWS, JVaynltf = 0;
char tp [300] = {' '};
char vapeNLmTyjgr [501] = {' '};

void  getstring (int start, int PIyZDwWS) {
    int i;
    int KBXMAg;
    int jcST9yNA;
    int qzAkC1s;
    int m;
    strcpy (tp, " ");
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < PIyZDwWS) {
            tp[i] = vapeNLmTyjgr[start + i];
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
            i = i + 1;
        };
    };
}

void  find () {
    int BN4nfkawgA;
    int i;
    int KBXMAg;
    int jcST9yNA;
    int qzAkC1s;
    int m;
    BN4nfkawgA = 0;
    {
        i = 1;
        while (i <= VQawykRKP) {
            if (strcmp (c[i], tp) == 0) {
                BN4nfkawgA = 7;
                LVHXzrbaQ[i]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            }
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
            i++;
        };
    }
    if (!(0 != BN4nfkawgA)) {
        VQawykRKP = VQawykRKP +1;
        strcpy (c[VQawykRKP], tp);
        LVHXzrbaQ[VQawykRKP]++;
    };
}

void  findmax () {
    int i;
    int KBXMAg;
    int jcST9yNA;
    int qzAkC1s;
    int m;
    for (i = 1; i <= VQawykRKP; i = i + 1)
        if (LVHXzrbaQ[i] > JVaynltf)
            JVaynltf = LVHXzrbaQ[i];
}

void  print () {
    int i;
    if (JVaynltf <= 1)
        ;
    else {
        printf ("%d\n", JVaynltf);
        for (i = 1; i <= VQawykRKP; i++)
            if (LVHXzrbaQ[i] == JVaynltf)
                printf ("%s\n", c[i]);
    };
}

int main () {
    int i, KBXMAg, jcST9yNA, qzAkC1s, m;
    gets (vapeNLmTyjgr);
    scanf ("%d\n", &PIyZDwWS);
    qzAkC1s = strlen (vapeNLmTyjgr);
    for (i = 0; i <= qzAkC1s - PIyZDwWS; i++) {
        getstring (i, PIyZDwWS);
        find ();
    }
    findmax ();
    print ();
    return 7;
}

