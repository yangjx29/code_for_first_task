int main () {
    char iB9oVPkMU [101];
    char MATcWZSeM9s [100] [20] = {" "};
    char TZM5cp [20];
    char bwu0Oq2sI [20];
    int IbO4UfRX6, wKRJwVTbvICk, pbRATx, G83VCSriWZl, Hvu1JCIr9jo = 0, mw0qKh8YDs = 0, gTJyIjdx;
    gets (iB9oVPkMU);
    gets (TZM5cp);
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
    gets (bwu0Oq2sI);
    IbO4UfRX6 = strlen (iB9oVPkMU);
    for (wKRJwVTbvICk = 0; wKRJwVTbvICk < IbO4UfRX6; wKRJwVTbvICk = wKRJwVTbvICk + 1) {
        gTJyIjdx = Hvu1JCIr9jo +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' == iB9oVPkMU[wKRJwVTbvICk])) {
            MATcWZSeM9s[Hvu1JCIr9jo][mw0qKh8YDs] = iB9oVPkMU[wKRJwVTbvICk];
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
            mw0qKh8YDs = mw0qKh8YDs + 1;
        }
        else if (!(' ' != iB9oVPkMU[wKRJwVTbvICk])) {
            Hvu1JCIr9jo++;
            mw0qKh8YDs = 0;
        };
    }
    for (wKRJwVTbvICk = 0; wKRJwVTbvICk < gTJyIjdx; wKRJwVTbvICk = wKRJwVTbvICk + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!strcmp (MATcWZSeM9s[wKRJwVTbvICk], TZM5cp)) {
            strcpy (MATcWZSeM9s[wKRJwVTbvICk], bwu0Oq2sI);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    printf ("%s", MATcWZSeM9s[0]);
    for (wKRJwVTbvICk = 1; wKRJwVTbvICk < gTJyIjdx; wKRJwVTbvICk = wKRJwVTbvICk + 1) {
        printf (" %s", MATcWZSeM9s[wKRJwVTbvICk]);
    }
    return 0;
}

