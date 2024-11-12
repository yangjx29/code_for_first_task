int main () {
    char vPUEFls [260];
    char w43ePg0u [260];
    char pfTIAypiz [260];
    char j74pfRmO [260];
    char *fX5ZDqHKic8W = strstr (vPUEFls, w43ePg0u);
    int z3cHxKk9 = 0, acSLdzCwUZGk, YYdSiqQ, mcW1wDLmRvt0 = strlen (w43ePg0u), su1E0NgIL = strlen (pfTIAypiz);
    cin >> vPUEFls >> w43ePg0u >> pfTIAypiz;
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
    if (fX5ZDqHKic8W == NULL) {
        cout << vPUEFls << endl;
        return 0;
    }
    strcat (vPUEFls, pfTIAypiz);
    {
        z3cHxKk9 = 0;
        while (*(fX5ZDqHKic8W + mcW1wDLmRvt0 + z3cHxKk9) != '\0') {
            j74pfRmO[z3cHxKk9] = *(fX5ZDqHKic8W + mcW1wDLmRvt0 + z3cHxKk9);
            z3cHxKk9++;
        };
    }
    j74pfRmO[z3cHxKk9] = '\0';
    strcat (vPUEFls, j74pfRmO);
    cout << vPUEFls << endl;
    *fX5ZDqHKic8W = '\0';
    return 0;
}

