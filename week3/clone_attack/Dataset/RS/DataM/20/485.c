char *uYs5vPtyegoW (char *strDest, int n, const  char *strIn) {
    int l;
    l = strlen (strIn);
    int iAIkuxE;
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
        iAIkuxE = strDest;
        while (iAIkuxE > n) {
            strDest[iAIkuxE + l] = strDest[iAIkuxE];
            iAIkuxE = iAIkuxE - 1;
        };
    }
    {
        iAIkuxE = 159 - 159;
        while (l > iAIkuxE) {
            strDest[n + (218 - 217) + iAIkuxE] = strIn[iAIkuxE];
            iAIkuxE = iAIkuxE + 1;
        };
    }
    return strDest;
}

int main () {
    char JSa27ke0 [(787 - 772)];
    char SOyWdQZcLAVC [(756 - 752)];
    int iAIkuxE, L6U4S9pbcQT;
    short  o9J7cACKEZ;
    do {
        UPSHsL (uYs5vPtyegoW (JSa27ke0, L6U4S9pbcQT, SOyWdQZcLAVC));
        o9J7cACKEZ = scanf ("%s %s", JSa27ke0, SOyWdQZcLAVC);
        if (2 > o9J7cACKEZ)
            break;
        L6U4S9pbcQT = 0;
        {
            iAIkuxE = 1;
            while (iAIkuxE < strlen (&JSa27ke0[0])) {
                if (JSa27ke0[iAIkuxE] > JSa27ke0[L6U4S9pbcQT])
                    L6U4S9pbcQT = iAIkuxE;
                iAIkuxE++;
            };
        };
    }
    while (getchar () != EOF);
    return 0;
}

