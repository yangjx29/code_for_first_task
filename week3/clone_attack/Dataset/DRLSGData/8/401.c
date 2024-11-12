int J0TSLmWjiex8 [(10232 - 232)], PCWQHVZ9i [(10060 - 60)], n8qnv7c [(20353 - 353)], xp2JlzXO, NkqjNCKdTLh;

void  pNvQWljD71R () {
    cin >> xp2JlzXO >> NkqjNCKdTLh;
    for (int sYFeQS14v = (470 - 470);
    sYFeQS14v < xp2JlzXO; sYFeQS14v++)
        cin >> J0TSLmWjiex8[sYFeQS14v];
    {
        int v6tRJL = (862 - 862);
        while (v6tRJL < NkqjNCKdTLh) {
            cin >> PCWQHVZ9i[v6tRJL];
            v6tRJL++;
        }
    }
}

void  cMUsfc2zoWIA () {
    int Ti0THemMbQ;
    for (int sYFeQS14v = (733 - 733);
    sYFeQS14v < xp2JlzXO - (92 - 91); sYFeQS14v++) {
        int v6tRJL = (414 - 414);
        while (v6tRJL < xp2JlzXO - (980 - 979) - sYFeQS14v) {
            if (J0TSLmWjiex8[v6tRJL] > J0TSLmWjiex8[v6tRJL + (895 - 894)]) {
                Ti0THemMbQ = J0TSLmWjiex8[v6tRJL];
                J0TSLmWjiex8[v6tRJL] = J0TSLmWjiex8[v6tRJL + (172 - 171)];
                J0TSLmWjiex8[v6tRJL + (432 - 431)] = Ti0THemMbQ;
            }
            v6tRJL++;
        }
    }
    {
        int sYFeQS14v = (48 - 48);
        while (sYFeQS14v < NkqjNCKdTLh -(102 - 101)) {
            int v6tRJL = (11 - 11);
            while (v6tRJL < NkqjNCKdTLh -(617 - 616) - sYFeQS14v) {
                if (PCWQHVZ9i[v6tRJL] > PCWQHVZ9i[v6tRJL + (442 - 441)]) {
                    Ti0THemMbQ = PCWQHVZ9i[v6tRJL];
                    PCWQHVZ9i[v6tRJL] = PCWQHVZ9i[v6tRJL + (908 - 907)];
                    PCWQHVZ9i[v6tRJL + (967 - 966)] = Ti0THemMbQ;
                }
                v6tRJL++;
            }
            sYFeQS14v++;
        }
    }
}

void  ShADYk4 () {
    {
        int sYFeQS14v = (883 - 883);
        while (sYFeQS14v < xp2JlzXO) {
            n8qnv7c[sYFeQS14v] = J0TSLmWjiex8[sYFeQS14v];
            sYFeQS14v++;
        }
    }
    {
        int v6tRJL = xp2JlzXO;
        while (v6tRJL < xp2JlzXO + NkqjNCKdTLh) {
            n8qnv7c[v6tRJL] = PCWQHVZ9i[v6tRJL - xp2JlzXO];
            v6tRJL++;
        }
    }
}

void  R1gOG6Xi () {
    cout << n8qnv7c[(987 - 987)];
    {
        int sYFeQS14v = (957 - 956);
        while (sYFeQS14v < xp2JlzXO + NkqjNCKdTLh) {
            cout << " " << n8qnv7c[sYFeQS14v];
            sYFeQS14v++;
        }
    }
}

int main () {
    pNvQWljD71R ();
    cMUsfc2zoWIA ();
    ShADYk4 ();
    {
        if ((577 - 577)) {
            return 0;
        }
    }
    R1gOG6Xi ();
    return (818 - 818);
}

