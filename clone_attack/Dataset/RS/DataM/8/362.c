void  read (int zV7IpG2SMZK [], int ylaPhMCu);
void  a6StUZy (int zV7IpG2SMZK [], int ylaPhMCu);
void  gULgD4Ejipc (int GcqgyWm [], int g2rbR0 [], int GlMy8Xg3n21, int V4YiWAkBJG);
void  LQcu0wL1Al (int array [], int num);

int main () {
    int s1 [100], KyG21Ud [100];
    int n1;
    int rFUSdCXLv;
    scanf ("%d%d", &n1, &rFUSdCXLv);
    read (s1, n1);
    read (KyG21Ud, rFUSdCXLv);
    a6StUZy (s1, n1);
    a6StUZy (KyG21Ud, rFUSdCXLv);
    gULgD4Ejipc (s1, KyG21Ud, n1, rFUSdCXLv);
    LQcu0wL1Al (s1, n1 + rFUSdCXLv);
    return 0;
}

void  read (int zV7IpG2SMZK [], int ylaPhMCu) {
    int V4H7uNnb;
    {
        V4H7uNnb = 0;
        while (ylaPhMCu > V4H7uNnb) {
            scanf ("%d", &zV7IpG2SMZK[V4H7uNnb]);
            V4H7uNnb = V4H7uNnb +1;
        };
    };
}

void  a6StUZy (int zV7IpG2SMZK [], int ylaPhMCu) {
    int yTOYqD0aW;
    int V4H7uNnb, BE2sPgRb9m;
    {
        V4H7uNnb = 0;
        while (V4H7uNnb < ylaPhMCu - 1) {
            V4H7uNnb++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                BE2sPgRb9m = 0;
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
                while (BE2sPgRb9m < ylaPhMCu - V4H7uNnb -1) {
                    if (zV7IpG2SMZK[BE2sPgRb9m +1] < zV7IpG2SMZK[BE2sPgRb9m]) {
                        yTOYqD0aW = zV7IpG2SMZK[BE2sPgRb9m +1];
                        zV7IpG2SMZK[BE2sPgRb9m +1] = zV7IpG2SMZK[BE2sPgRb9m];
                        zV7IpG2SMZK[BE2sPgRb9m] = yTOYqD0aW;
                    }
                    BE2sPgRb9m = BE2sPgRb9m +1;
                };
            };
        };
    };
}

void  gULgD4Ejipc (int GcqgyWm [], int g2rbR0 [], int GlMy8Xg3n21, int V4YiWAkBJG) {
    int V4H7uNnb;
    for (V4H7uNnb = GlMy8Xg3n21; V4H7uNnb < GlMy8Xg3n21 +V4YiWAkBJG; V4H7uNnb = V4H7uNnb +1) {
        GcqgyWm[V4H7uNnb] = g2rbR0[V4H7uNnb -GlMy8Xg3n21];
    };
}

void  LQcu0wL1Al (int array [], int num) {
    int V4H7uNnb;
    printf ("%d", array[0]);
    {
        V4H7uNnb = 1;
        while (V4H7uNnb < num) {
            printf (" %d", array[V4H7uNnb]);
            V4H7uNnb++;
        };
    };
}

