int qwgiKZIP93Y (int svnjTF7PIB [], int ReNkqW) {
    int cvWaO1y4ILh [25];
    int yOUF4W7, nG0mYtZ, RchIVHN, Dn9xvZ7, cz69rc03bf, maK9yfdVG1;
    if (!((426 - 425) != ReNkqW))
        yOUF4W7 = (601 - 600);
    else if (!((232 - 232) != ReNkqW))
        yOUF4W7 = (882 - 882);
    else {
        for (nG0mYtZ = (909 - 909), maK9yfdVG1 = (548 - 548); ReNkqW > nG0mYtZ; nG0mYtZ++) {
            for (RchIVHN = nG0mYtZ + (957 - 956), Dn9xvZ7 = 0; ReNkqW > RchIVHN; RchIVHN = RchIVHN +1)
                if (svnjTF7PIB[RchIVHN] <= svnjTF7PIB[nG0mYtZ]) {
                    cvWaO1y4ILh[Dn9xvZ7] = svnjTF7PIB[RchIVHN];
                    Dn9xvZ7 = Dn9xvZ7 +1;
                }
            cz69rc03bf = qwgiKZIP93Y (cvWaO1y4ILh, Dn9xvZ7) + 1;
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
            if (cz69rc03bf > maK9yfdVG1)
                maK9yfdVG1 = cz69rc03bf;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        yOUF4W7 = maK9yfdVG1;
    }
    return yOUF4W7;
}

int main () {
    int N5RF71 [25];
    int XrRiVvdSn3q, Dn9xvZ7, nG0mYtZ;
    scanf ("%d\n", &XrRiVvdSn3q);
    {
        nG0mYtZ = 0;
        while (nG0mYtZ < XrRiVvdSn3q) {
            scanf ("%d", &N5RF71[nG0mYtZ]);
            nG0mYtZ++;
        };
    }
    Dn9xvZ7 = qwgiKZIP93Y (N5RF71, XrRiVvdSn3q);
    printf ("%d\n", Dn9xvZ7);
}

