int main () {
    int mjQgvYf [(583 - 483)] [100], lyEZNb2 [100] [100], urOyx1ICD3bV [100] [100] = {(506 - 506)};
    int GHbGSju, SAza2Er4SWwX, vAJsCNQZ6, vCMw2J;
    cin >> GHbGSju >> SAza2Er4SWwX;
    for (int lUcPzjENvD2 = (205 - 205);
    GHbGSju > lUcPzjENvD2; lUcPzjENvD2 = lUcPzjENvD2 + 1) {
        int g0QqGmOV6Szc = (456 - 456);
        while (g0QqGmOV6Szc < SAza2Er4SWwX) {
            cin >> mjQgvYf[lUcPzjENvD2][g0QqGmOV6Szc];
            g0QqGmOV6Szc = g0QqGmOV6Szc + 1;
        };
    }
    cin >> vAJsCNQZ6 >> vCMw2J;
    for (int lUcPzjENvD2 = (555 - 555);
    lUcPzjENvD2 < vAJsCNQZ6; lUcPzjENvD2 = lUcPzjENvD2 + 1)
        for (int g0QqGmOV6Szc = (435 - 435);
        g0QqGmOV6Szc < vCMw2J; g0QqGmOV6Szc = g0QqGmOV6Szc + 1)
            cin >> lyEZNb2[lUcPzjENvD2][g0QqGmOV6Szc];
    for (int lUcPzjENvD2 = 0;
    lUcPzjENvD2 < GHbGSju; lUcPzjENvD2 = lUcPzjENvD2 + 1) {
        int g0QqGmOV6Szc = 0;
        while (g0QqGmOV6Szc < vCMw2J) {
            {
                int p6Y9Jjg = 0;
                while (p6Y9Jjg < SAza2Er4SWwX) {
                    urOyx1ICD3bV[lUcPzjENvD2][g0QqGmOV6Szc] += mjQgvYf[lUcPzjENvD2][p6Y9Jjg] * lyEZNb2[p6Y9Jjg][g0QqGmOV6Szc];
                    p6Y9Jjg = p6Y9Jjg + 1;
                };
            }
            g0QqGmOV6Szc++;
        };
    }
    for (int lUcPzjENvD2 = 0;
    lUcPzjENvD2 < GHbGSju; lUcPzjENvD2 = lUcPzjENvD2 + 1) {
        for (int g0QqGmOV6Szc = 0;
        g0QqGmOV6Szc < (vCMw2J - (13 - 12)); g0QqGmOV6Szc = g0QqGmOV6Szc + 1) {
            cout << urOyx1ICD3bV[lUcPzjENvD2][g0QqGmOV6Szc] << ' ';
        }
        cout << urOyx1ICD3bV[lUcPzjENvD2][vCMw2J - 1] << endl;
    }
    return 0;
}

