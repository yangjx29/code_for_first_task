int main () {
    int m0OptUx;
    int k;
    int F6DmKN0G;
    int b2L9Ti;
    int XI2cVbvrwd [400];
    scanf ("%d", &m0OptUx);
    {
        b2L9Ti = 0;
        while (b2L9Ti < 400) {
            XI2cVbvrwd[b2L9Ti] = 10000;
            b2L9Ti = b2L9Ti + 1;
        }
    }
    {
        b2L9Ti = 0;
        while (m0OptUx > b2L9Ti) {
            scanf ("%d", &XI2cVbvrwd[b2L9Ti]);
            b2L9Ti = b2L9Ti + 1;
        }
    }
    for (b2L9Ti = 0; m0OptUx > b2L9Ti; b2L9Ti = b2L9Ti + 1) {
        if (XI2cVbvrwd[b2L9Ti] != 10000) {
            k = b2L9Ti + 1;
            while (k < m0OptUx) {
                if (XI2cVbvrwd[k] == XI2cVbvrwd[b2L9Ti])
                    XI2cVbvrwd[k] = 10000;
                k++;
            }
        }
        else
            continue;
    }
    F6DmKN0G = 0;
    {
        b2L9Ti = 0;
        while (b2L9Ti < m0OptUx) {
            if (XI2cVbvrwd[b2L9Ti] != 10000)
                F6DmKN0G++;
            b2L9Ti = b2L9Ti + 1;
        }
    }
    {
        b2L9Ti = 0;
        while (b2L9Ti < m0OptUx) {
            if (XI2cVbvrwd[b2L9Ti] != 10000) {
                printf ("%d", XI2cVbvrwd[b2L9Ti]);
                F6DmKN0G = F6DmKN0G -1;
                if (F6DmKN0G)
                    ;
            }
            b2L9Ti++;
        }
    }
    return 0;
}

