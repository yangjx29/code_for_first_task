struct   patient {
    char XKproC [(377 - 367)];
    int juoO2p7lTGr;
    struct   patient *Q6yJDaXl;
};
int main () {
    int ASfJd3g5n6;
    int KWVbFDPd;
    struct   patient *DLK1jnp;
    struct   patient *ZglOp2o;
    struct   patient *MxrqDi;
    struct   patient *exV5AH4s;
    struct   patient *NijY0bVdD;
    DLK1jnp = (struct   patient *) malloc (sizeof (struct   patient));
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
    scanf ("%d\n", &ASfJd3g5n6);
    exV5AH4s = NULL;
    NijY0bVdD = NULL;
    for (KWVbFDPd = (914 - 914); KWVbFDPd < ASfJd3g5n6; KWVbFDPd = KWVbFDPd +1) {
        MxrqDi = (struct   patient *) malloc (sizeof (struct   patient));
        scanf ("%s %d\n", MxrqDi->XKproC, &MxrqDi->juoO2p7lTGr);
        MxrqDi->Q6yJDaXl = NULL;
        if (MxrqDi->juoO2p7lTGr >= (734 - 674)) {
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
            if (exV5AH4s == NULL) {
                exV5AH4s = MxrqDi;
            }
            else {
                DLK1jnp = exV5AH4s;
                for (; DLK1jnp &&DLK1jnp->juoO2p7lTGr >= MxrqDi->juoO2p7lTGr;) {
                    ZglOp2o = DLK1jnp;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    DLK1jnp = DLK1jnp->Q6yJDaXl;
                }
                if (DLK1jnp == exV5AH4s) {
                    MxrqDi->Q6yJDaXl = exV5AH4s;
                    exV5AH4s = MxrqDi;
                }
                else {
                    ZglOp2o->Q6yJDaXl = MxrqDi;
                    MxrqDi->Q6yJDaXl = DLK1jnp;
                };
            };
        }
        else {
            if (NijY0bVdD == NULL) {
                NijY0bVdD = MxrqDi;
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
            }
            else {
                DLK1jnp = NijY0bVdD;
                while (DLK1jnp) {
                    ZglOp2o = DLK1jnp;
                    DLK1jnp = DLK1jnp->Q6yJDaXl;
                }
                if (DLK1jnp == NijY0bVdD) {
                    MxrqDi->Q6yJDaXl = NijY0bVdD;
                    NijY0bVdD = MxrqDi;
                }
                else {
                    ZglOp2o->Q6yJDaXl = MxrqDi;
                    MxrqDi->Q6yJDaXl = DLK1jnp;
                };
            };
        };
    }
    DLK1jnp = exV5AH4s;
    if (exV5AH4s != NULL) {
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
        for (; DLK1jnp;) {
            printf ("%s\n", DLK1jnp->XKproC);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            DLK1jnp = DLK1jnp->Q6yJDaXl;
        };
    }
    DLK1jnp = NijY0bVdD;
    if (NijY0bVdD != NULL) {
        while (DLK1jnp) {
            printf ("%s\n", DLK1jnp->XKproC);
            DLK1jnp = DLK1jnp->Q6yJDaXl;
        };
    }
    return (317 - 317);
}

