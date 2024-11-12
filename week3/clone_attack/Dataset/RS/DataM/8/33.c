int n, eOXnh9HcBqAZ;
int a [(1007 - 907)], ThwWstT2C3Uf [(222 - 122)], KyfLY1AKBj [100];

void  rbBdrCuijRe () {
    int ZZ2j9g7;
    scanf ("%d %d", &n, &eOXnh9HcBqAZ);
    {
        ZZ2j9g7 = 852 - 852;
        while (ZZ2j9g7 < n) {
            scanf ("%d", &a[ZZ2j9g7]);
            ZZ2j9g7++;
        };
    }
    {
        ZZ2j9g7 = 622 - 622;
        while (ZZ2j9g7 < eOXnh9HcBqAZ) {
            scanf ("%d", &ThwWstT2C3Uf[ZZ2j9g7]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ZZ2j9g7++;
        };
    };
}

void  iuSlTsBXKDa () {
    int ZZ2j9g7;
    int xFytN8HMgz;
    int JarGLqiZ8Cgf;
    {
        ZZ2j9g7 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (ZZ2j9g7 < n - 1) {
            {
                xFytN8HMgz = 0;
                while (xFytN8HMgz < n - 1 - ZZ2j9g7) {
                    if (a[xFytN8HMgz] > a[xFytN8HMgz + 1]) {
                        JarGLqiZ8Cgf = a[xFytN8HMgz];
                        a[xFytN8HMgz] = a[xFytN8HMgz + 1];
                        a[xFytN8HMgz + 1] = JarGLqiZ8Cgf;
                    }
                    xFytN8HMgz++;
                };
            }
            ZZ2j9g7++;
        };
    }
    {
        ZZ2j9g7 = 0;
        while (eOXnh9HcBqAZ - 1 > ZZ2j9g7) {
            {
                xFytN8HMgz = 0;
                while (xFytN8HMgz < eOXnh9HcBqAZ - 1 - ZZ2j9g7) {
                    if (ThwWstT2C3Uf[xFytN8HMgz] > ThwWstT2C3Uf[xFytN8HMgz + 1]) {
                        JarGLqiZ8Cgf = ThwWstT2C3Uf[xFytN8HMgz];
                        ThwWstT2C3Uf[xFytN8HMgz] = ThwWstT2C3Uf[xFytN8HMgz + 1];
                        ThwWstT2C3Uf[xFytN8HMgz + 1] = JarGLqiZ8Cgf;
                    }
                    xFytN8HMgz++;
                };
            }
            ZZ2j9g7++;
        };
    };
}

void  zuhe () {
    int ZZ2j9g7;
    {
        ZZ2j9g7 = 0;
        while (ZZ2j9g7 < n) {
            KyfLY1AKBj[ZZ2j9g7] = a[ZZ2j9g7];
            ZZ2j9g7++;
        };
    }
    {
        ZZ2j9g7 = n;
        while (ZZ2j9g7 < n + eOXnh9HcBqAZ) {
            KyfLY1AKBj[ZZ2j9g7] = ThwWstT2C3Uf[ZZ2j9g7 -n];
            ZZ2j9g7++;
        };
    };
}

void  shuchu () {
    int ZZ2j9g7;
    {
        ZZ2j9g7 = 0;
        while (ZZ2j9g7 < n + eOXnh9HcBqAZ) {
            if (ZZ2j9g7 != n + eOXnh9HcBqAZ - 1)
                printf ("%d ", KyfLY1AKBj[ZZ2j9g7]);
            else
                printf ("%d", KyfLY1AKBj[ZZ2j9g7]);
            ZZ2j9g7++;
        };
    };
}

int main () {
    rbBdrCuijRe ();
    iuSlTsBXKDa ();
    zuhe ();
    shuchu ();
}

