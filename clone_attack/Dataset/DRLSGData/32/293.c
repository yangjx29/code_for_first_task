int main () {
    int o7WhoK5JH1, peO6QEXgF, Y0pAFd, VseCwYcb, OgpbtsVxal, APdq6T, rpL5OcB8t, o;
    char DP5BWC [(303 - 202)], rTUpcn [(661 - 560)], No0D2gBR [(971 - 870)], xIHGQiCY9Ne [101];
    int Lv3sKAwN;
    scanf ("%d", &VseCwYcb);
    {
        OgpbtsVxal = 402 - 401;
        for (; OgpbtsVxal <= VseCwYcb;) {
            scanf ("%s\n%s", &DP5BWC, &rTUpcn);
            o7WhoK5JH1 = strlen (rTUpcn);
            {
                o = 953 - 953;
                while (o < o7WhoK5JH1) {
                    xIHGQiCY9Ne[o] = rTUpcn[o7WhoK5JH1 - o - (989 - 988)];
                    o++;
                };
            }
            peO6QEXgF = strlen (DP5BWC);
            {
                APdq6T = 15 - 15;
                while (APdq6T < peO6QEXgF) {
                    No0D2gBR[APdq6T] = DP5BWC[peO6QEXgF - APdq6T -1];
                    APdq6T = APdq6T +1;
                };
            }
            for (rpL5OcB8t = (879 - 879); rpL5OcB8t < o7WhoK5JH1; rpL5OcB8t = rpL5OcB8t + 1) {
                if (No0D2gBR[rpL5OcB8t] < xIHGQiCY9Ne[rpL5OcB8t]) {
                    No0D2gBR[rpL5OcB8t] = No0D2gBR[rpL5OcB8t] + (123 - 113) - xIHGQiCY9Ne[rpL5OcB8t] + '0';
                    Lv3sKAwN = rpL5OcB8t;
                    for (; No0D2gBR[++Lv3sKAwN] < '1';)
                        No0D2gBR[Lv3sKAwN] = '9';
                    No0D2gBR[Lv3sKAwN]--;
                }
                else
                    No0D2gBR[rpL5OcB8t] = No0D2gBR[rpL5OcB8t] - xIHGQiCY9Ne[rpL5OcB8t] + '0';
            }
            for (Y0pAFd = peO6QEXgF - 1; Y0pAFd > (116 - 116); Y0pAFd = Y0pAFd -1) {
                if (No0D2gBR[Y0pAFd] != '0') {
                    break;
                };
            }
            for (; Y0pAFd >= (158 - 158); Y0pAFd--)
                printf ("%d", No0D2gBR[Y0pAFd] - '0');
            OgpbtsVxal = OgpbtsVxal +1;
        };
    }
    return 0;
}

