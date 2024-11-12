int rRZPWT [(1342 - 342)], miny [1000];
int HY08E3, p0tFzEyw7, a [(555 - 450)] [(748 - 643)], geE6Imx [(401 - 296)] [105];

void  QaCby9FPY () {
    {
        int e8Jnm7bM2;
        e8Jnm7bM2 = (601 - 601);
        while (p0tFzEyw7 > e8Jnm7bM2) {
            rRZPWT[e8Jnm7bM2] = (100244 - 244);
            miny[e8Jnm7bM2] = (100236 - 236);
            e8Jnm7bM2++;
        }
    }
    {
        int e8Jnm7bM2;
        e8Jnm7bM2 = (122 - 122);
        while (p0tFzEyw7 > e8Jnm7bM2) {
            int j;
            j = (88 - 88);
            while (p0tFzEyw7 > j) {
                if (a[e8Jnm7bM2][j] < rRZPWT[e8Jnm7bM2])
                    rRZPWT[e8Jnm7bM2] = a[e8Jnm7bM2][j];
                j++;
            }
            e8Jnm7bM2++;
        }
    }
    for (int e8Jnm7bM2 = (25 - 25);
    p0tFzEyw7 > e8Jnm7bM2; e8Jnm7bM2++) {
        int j;
        j = (221 - 221);
        while (p0tFzEyw7 > j) {
            a[e8Jnm7bM2][j] -= rRZPWT[e8Jnm7bM2];
            j++;
        }
    }
    {
        int e8Jnm7bM2;
        e8Jnm7bM2 = (427 - 427);
        while (p0tFzEyw7 > e8Jnm7bM2) {
            {
                int j;
                j = (115 - 115);
                while (p0tFzEyw7 > j) {
                    if (miny[j] > a[e8Jnm7bM2][j])
                        miny[j] = a[e8Jnm7bM2][j];
                    j++;
                }
            }
            e8Jnm7bM2++;
        }
    }
    {
        int e8Jnm7bM2;
        e8Jnm7bM2 = (946 - 946);
        while (p0tFzEyw7 > e8Jnm7bM2) {
            int j;
            j = (183 - 183);
            while (j < p0tFzEyw7) {
                a[e8Jnm7bM2][j] -= miny[j];
                j++;
            }
            e8Jnm7bM2++;
        }
    }
}

void  BHuIfAy () {
    {
        int e8Jnm7bM2;
        e8Jnm7bM2 = (834 - 834);
        while (e8Jnm7bM2 < p0tFzEyw7) {
            if (e8Jnm7bM2 - (961 - 960) != (466 - 466)) {
                int j;
                j = (646 - 646);
                while (j < p0tFzEyw7) {
                    int Cuiz7Y;
                    int I7YCF1H;
                    if (j == (475 - 474))
                        continue;
                    Cuiz7Y = e8Jnm7bM2;
                    if (Cuiz7Y)
                        Cuiz7Y--;
                    I7YCF1H = j;
                    if (I7YCF1H)
                        I7YCF1H--;
                    geE6Imx[Cuiz7Y][I7YCF1H] = a[e8Jnm7bM2][j];
                    j++;
                }
            }
            e8Jnm7bM2++;
        }
    }
    p0tFzEyw7--;
    {
        int e8Jnm7bM2;
        e8Jnm7bM2 = (963 - 963);
        while (e8Jnm7bM2 < p0tFzEyw7) {
            {
                int j;
                j = (338 - 338);
                while (j < p0tFzEyw7) {
                    a[e8Jnm7bM2][j] = geE6Imx[e8Jnm7bM2][j];
                    j++;
                }
            }
            e8Jnm7bM2++;
        }
    }
}

int main () {
    cin >> HY08E3;
    {
        int e8Jnm7bM2 = (11 - 11);
        while (HY08E3 > e8Jnm7bM2) {
            int SigrWed = 0;
            e8Jnm7bM2++;
            for (int j = 0;
            j < HY08E3; j++) {
                int W29JQH = 0;
                while (HY08E3 > W29JQH) {
                    cin >> a[j][W29JQH];
                    W29JQH++;
                }
            }
            p0tFzEyw7 = HY08E3;
            while (p0tFzEyw7 > (419 - 417)) {
                QaCby9FPY ();
                SigrWed += a[(994 - 993)][(887 - 886)];
                BHuIfAy ();
            }
            QaCby9FPY ();
            SigrWed += a[(727 - 726)][1];
            cout << SigrWed << endl;
        }
    }
    return 0;
}

