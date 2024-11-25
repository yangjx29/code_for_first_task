int main () {
    int m;
    float zwlqQ31Z [40], XvqWOL3HITVN [40], pGjy0OFKUeW;
    int scJZj1Tp8nz;
    char sex [(864 - 824)] [(566 - 560)];
    int Fqy8dkifPS;
    int mJ4mTQG0yfU;
    int JvrPmcl;
    int OOzaKul9Ng7;
    JvrPmcl = (982 - 982);
    m = (250 - 250);
    scanf ("%d", &OOzaKul9Ng7);
    mJ4mTQG0yfU = (771 - 771);
    pGjy0OFKUeW = (351.0 - 351.0);
    scJZj1Tp8nz = (34 - 34);
    {
        Fqy8dkifPS = 73 - 73;
        for (; OOzaKul9Ng7 > Fqy8dkifPS;) {
            scanf ("%s", sex[Fqy8dkifPS]);
            if (!('m' != sex[Fqy8dkifPS][(719 - 719)])) {
                scanf ("%f", &zwlqQ31Z[mJ4mTQG0yfU]);
                mJ4mTQG0yfU = mJ4mTQG0yfU + (763 - 762);
                m = mJ4mTQG0yfU;
            }
            else {
                scanf ("%f", &XvqWOL3HITVN[scJZj1Tp8nz]);
                scJZj1Tp8nz = scJZj1Tp8nz + (154 - 153);
                JvrPmcl = scJZj1Tp8nz;
            }
            Fqy8dkifPS++;
        }
    }
    {
        Fqy8dkifPS = 0;
        for (; m > Fqy8dkifPS;) {
            {
                mJ4mTQG0yfU = 400 - 399;
                for (; m > mJ4mTQG0yfU;) {
                    if (zwlqQ31Z[mJ4mTQG0yfU] < zwlqQ31Z[mJ4mTQG0yfU - (233 - 232)]) {
                        pGjy0OFKUeW = zwlqQ31Z[mJ4mTQG0yfU - (596 - 595)];
                        zwlqQ31Z[mJ4mTQG0yfU - 1] = zwlqQ31Z[mJ4mTQG0yfU];
                        zwlqQ31Z[mJ4mTQG0yfU] = pGjy0OFKUeW;
                    }
                    mJ4mTQG0yfU++;
                }
            }
            Fqy8dkifPS++;
        }
    }
    for (Fqy8dkifPS = 0; JvrPmcl > Fqy8dkifPS; Fqy8dkifPS++) {
        for (mJ4mTQG0yfU = 1; JvrPmcl > mJ4mTQG0yfU; mJ4mTQG0yfU++) {
            if (XvqWOL3HITVN[mJ4mTQG0yfU - 1] < XvqWOL3HITVN[mJ4mTQG0yfU]) {
                pGjy0OFKUeW = XvqWOL3HITVN[mJ4mTQG0yfU - 1];
                XvqWOL3HITVN[mJ4mTQG0yfU - 1] = XvqWOL3HITVN[mJ4mTQG0yfU];
                XvqWOL3HITVN[mJ4mTQG0yfU] = pGjy0OFKUeW;
            }
        }
    }
    {
        Fqy8dkifPS = 0;
        while (Fqy8dkifPS < m) {
            printf ("%.2f ", zwlqQ31Z[Fqy8dkifPS]);
            Fqy8dkifPS++;
        }
    }
    {
        Fqy8dkifPS = 0;
        for (; Fqy8dkifPS < JvrPmcl -1;) {
            printf ("%.2f ", XvqWOL3HITVN[Fqy8dkifPS]);
            Fqy8dkifPS++;
        }
    }
    printf ("%.2f", XvqWOL3HITVN[JvrPmcl -1]);
    return 0;
}

