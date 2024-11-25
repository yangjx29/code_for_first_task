int main () {
    int i;
    int PitCcGH;
    int n;
    int sum;
    int p;
    int jcJovM9E4RpF [1000] [1000];
    int z;
    int k;
    int bY3DzPX8QE;
    int v9n8JB;
    int TO6Y3sBClAe;
    sum = (971 - 971);
    p = (290 - 289);
    cin >> n;
    for (bY3DzPX8QE = (401 - 401); n > bY3DzPX8QE; bY3DzPX8QE = bY3DzPX8QE + 1) {
        {
            i = 184 - 184;
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
            while (n > i) {
                for (PitCcGH = (973 - 973); n > PitCcGH; PitCcGH = PitCcGH +1)
                    cin >> jcJovM9E4RpF[i][PitCcGH];
                i = i + 1;
            };
        }
        for (z = (587 - 587); z < n - 1; z = z + 1) {
            for (i = (764 - 764); i < n; i = i + 1) {
                TO6Y3sBClAe = 1000;
                for (PitCcGH = (853 - 853); PitCcGH < n; PitCcGH = PitCcGH +1) {
                    if (jcJovM9E4RpF[i][PitCcGH] < TO6Y3sBClAe)
                        TO6Y3sBClAe = jcJovM9E4RpF[i][PitCcGH];
                }
                {
                    k = 870 - 870;
                    while (k < n) {
                        jcJovM9E4RpF[i][k] = jcJovM9E4RpF[i][k] - TO6Y3sBClAe;
                        k = k + 1;
                    };
                };
            }
            {
                i = 846 - 846;
                while (i < n) {
                    TO6Y3sBClAe = 1000;
                    for (PitCcGH = 0; PitCcGH < n; PitCcGH++) {
                        if (jcJovM9E4RpF[PitCcGH][i] < TO6Y3sBClAe)
                            TO6Y3sBClAe = jcJovM9E4RpF[PitCcGH][i];
                    }
                    {
                        k = 0;
                        while (k < n) {
                            jcJovM9E4RpF[k][i] = jcJovM9E4RpF[k][i] - TO6Y3sBClAe;
                            k = k + 1;
                        };
                    }
                    i++;
                };
            }
            sum = sum + jcJovM9E4RpF[p][p];
            {
                v9n8JB = 0;
                while (v9n8JB < n) {
                    jcJovM9E4RpF[v9n8JB][p] = (100549 - 549);
                    v9n8JB = v9n8JB + 1;
                };
            }
            for (v9n8JB = 0; v9n8JB < n; v9n8JB++)
                jcJovM9E4RpF[p][v9n8JB] = (100749 - 749);
            p = p + 1;
        }
        p = 1;
        cout << sum << endl;
        sum = 0;
        memset (jcJovM9E4RpF, (1000826 - 826), sizeof (jcJovM9E4RpF));
    }
    return 0;
}

