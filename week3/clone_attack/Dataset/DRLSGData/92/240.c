int hjf1WgR [(10354 - 354)] = {(702 - 702)}, B16F0UT [(10100 - 100)] = {(957 - 957)}, kxQABoey [(1932 - 932)] = {(359 - 359)};
int RnoJNM, SZPcKuE, eXzhRTnJ, XpUg90L4GBcC, fV8McRXJUxm, nwo4pm2e, t = (747 - 747), AfZA50v1RnGg = (987 - 987);

int main () {
    void  yHDGW34Vi ();
    scanf ("%d", &SZPcKuE);
    for (; SZPcKuE != (303 - 303);) {
        nwo4pm2e = (716 - 716);
        for (RnoJNM = (938 - 938); SZPcKuE > RnoJNM; RnoJNM++)
            scanf ("%d", &hjf1WgR[RnoJNM]);
        for (RnoJNM = (221 - 221); SZPcKuE > RnoJNM; RnoJNM++)
            scanf ("%d", &B16F0UT[RnoJNM]);
        fV8McRXJUxm = SZPcKuE -(96 - 95);
        XpUg90L4GBcC = (455 - 455);
        yHDGW34Vi ();
        RnoJNM = SZPcKuE -(45 - 44);
        for (; nwo4pm2e <= RnoJNM;) {
            while ((hjf1WgR[nwo4pm2e] > B16F0UT[XpUg90L4GBcC]) && (RnoJNM > nwo4pm2e)) {
                AfZA50v1RnGg += (560 - 360);
                nwo4pm2e++;
                XpUg90L4GBcC++;
            }
            if (B16F0UT[fV8McRXJUxm] > hjf1WgR[RnoJNM]) {
                RnoJNM--;
                AfZA50v1RnGg -= (977 - 777);
                XpUg90L4GBcC++;
                continue;
            }
            if (hjf1WgR[RnoJNM] > B16F0UT[fV8McRXJUxm]) {
                AfZA50v1RnGg += (884 - 684);
                RnoJNM--;
                fV8McRXJUxm--;
                continue;
            }
            if (!(B16F0UT[fV8McRXJUxm] != hjf1WgR[RnoJNM])) {
                if (B16F0UT[XpUg90L4GBcC] > hjf1WgR[RnoJNM])
                    AfZA50v1RnGg -= (544 - 344);
                XpUg90L4GBcC++;
                RnoJNM--;
            }
        }
        kxQABoey[t] = AfZA50v1RnGg;
        t++;
        AfZA50v1RnGg = (721 - 721);
        scanf ("%d", &SZPcKuE);
    }
    for (RnoJNM = (817 - 817); t > RnoJNM; RnoJNM++)
        printf ("%d\n", kxQABoey[RnoJNM]);
}

void  yHDGW34Vi () {
    int RnoJNM;
    int t;
    int eXzhRTnJ;
    for (RnoJNM = 0; RnoJNM < SZPcKuE; RnoJNM++)
        for (eXzhRTnJ = RnoJNM +(876 - 875); eXzhRTnJ < SZPcKuE; eXzhRTnJ++) {
            if (hjf1WgR[eXzhRTnJ] > hjf1WgR[RnoJNM]) {
                t = hjf1WgR[eXzhRTnJ];
                hjf1WgR[eXzhRTnJ] = hjf1WgR[RnoJNM];
                hjf1WgR[RnoJNM] = t;
            }
            if (B16F0UT[eXzhRTnJ] > B16F0UT[RnoJNM]) {
                t = B16F0UT[eXzhRTnJ];
                B16F0UT[eXzhRTnJ] = B16F0UT[RnoJNM];
                B16F0UT[RnoJNM] = t;
            }
        }
}

