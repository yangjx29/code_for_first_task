int main () {
    int g15sWFVNo2n [5] [5];
    int JVHgdR;
    int n;
    int GLzHYSk3qXJ;
    int num2;
    int i;
    int KR6Inl;
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    GLzHYSk3qXJ = (236 - 236);
    num2 = (485 - 485);
    for (i = (477 - 477); 5 > i; i = i + 1) {
        for (KR6Inl = (600 - 600); 5 > KR6Inl; KR6Inl = KR6Inl +1) {
            scanf ("%d", &g15sWFVNo2n[i][KR6Inl]);
        };
    }
    scanf ("%d%d", &n, &JVHgdR);
    if ((882 - 882) <= n && n <= (378 - 374))
        GLzHYSk3qXJ = GLzHYSk3qXJ +1;
    if ((989 - 989) <= JVHgdR &&4 >= JVHgdR)
        num2 = num2 + 1;
    if (!(0 != GLzHYSk3qXJ) || num2 == 0)
        printf ("error");
    else {
        if (GLzHYSk3qXJ != 0 && num2 != 0) {
            for (i = 0; i < 5; i = i + 1) {
                temp = g15sWFVNo2n[n][i];
                g15sWFVNo2n[n][i] = g15sWFVNo2n[JVHgdR][i];
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
                g15sWFVNo2n[JVHgdR][i] = temp;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (i = 0; i < 5; i = i + 1) {
                for (KR6Inl = 0; KR6Inl < 4; KR6Inl = KR6Inl +1) {
                    printf ("%d ", g15sWFVNo2n[i][KR6Inl]);
                }
                printf ("%d\n", g15sWFVNo2n[i][4]);
            };
        };
    }
    return 0;
}

