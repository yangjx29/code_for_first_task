int ans = 0;

void  xtzmSeMVAK3B (int idZ0ET672P, int K7deJrU) {
    if (idZ0ET672P == 1) {
        ans++;
        return;
    }
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
    {
        int eEZU6B4ioanm = K7deJrU;
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
        while (eEZU6B4ioanm <= idZ0ET672P) {
            if (idZ0ET672P % eEZU6B4ioanm == 0) {
                xtzmSeMVAK3B (idZ0ET672P / eEZU6B4ioanm, eEZU6B4ioanm);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            eEZU6B4ioanm = eEZU6B4ioanm + 1;
        };
    };
}

int main () {
    int MoW4My;
    scanf ("%d", &MoW4My);
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
    while (MoW4My = MoW4My -1) {
        int EtVBGr6;
        ans = 0;
        scanf ("%d", &EtVBGr6);
        xtzmSeMVAK3B (EtVBGr6, 2);
        printf ("%d\n", ans);
    }
    return 0;
}

