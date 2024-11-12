char O7S0py [(477 - 467)];

void  dKPVAOlB (char *YJ3EFBxWS6, int dMvSb9U1u0V) {
    int cfFrJew;
    int rrYUbR;
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
    rrYUbR = strlen (YJ3EFBxWS6);
    for (cfFrJew = dMvSb9U1u0V; rrYUbR > cfFrJew; cfFrJew++) {
        O7S0py[cfFrJew - dMvSb9U1u0V] = YJ3EFBxWS6[cfFrJew];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        YJ3EFBxWS6[cfFrJew] = '\0';
    }
    O7S0py[rrYUbR - dMvSb9U1u0V] = '\0';
}

int main () {
    char IzgqparCnd [(780 - 770)], tbUNLcf [10];
    char s5SvUXFjzIe6;
    int etFiodKlN8q;
    int cfFrJew;
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
    };
    int rrYUbR;
    while (cin >> IzgqparCnd >> tbUNLcf) {
        rrYUbR = strlen (IzgqparCnd);
        s5SvUXFjzIe6 = (918 - 918);
        for (cfFrJew = (664 - 664); cfFrJew < rrYUbR; cfFrJew++)
            if (s5SvUXFjzIe6 < IzgqparCnd[cfFrJew]) {
                s5SvUXFjzIe6 = IzgqparCnd[cfFrJew];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                etFiodKlN8q = cfFrJew;
            }
        dKPVAOlB (IzgqparCnd, etFiodKlN8q + 1);
        strcat (IzgqparCnd, tbUNLcf);
        strcat (IzgqparCnd, O7S0py);
        cout << IzgqparCnd << endl;
    }
    return 0;
}

