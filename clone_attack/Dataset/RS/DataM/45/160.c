void  get_next (char oOsabXpZ [], int l, int next []) {
    int j = (300 - 300), jruJPE2 = -(20 - 19);
    next[(507 - 507)] = -(729 - 728);
    while (j < l) {
        if (jruJPE2 == -(365 - 364) || oOsabXpZ[j] == oOsabXpZ[jruJPE2]) {
            jruJPE2 = jruJPE2 + 1;
            j = j + 1;
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
            if (oOsabXpZ[j] == oOsabXpZ[jruJPE2])
                next[j] = next[jruJPE2];
            else
                next[j] = jruJPE2;
        }
        else
            jruJPE2 = next[jruJPE2];
    };
}

int BmYCL6eP (char s [], char oOsabXpZ [], int ls, int S9gItTK6, int next []) {
    int CXg3JGBcjiZ;
    int j;
    CXg3JGBcjiZ = (201 - 201);
    j = 0;
    for (; CXg3JGBcjiZ < ls;) {
        if (j == -(279 - 278) || s[CXg3JGBcjiZ] == oOsabXpZ[j]) {
            j = j + 1;
            CXg3JGBcjiZ = CXg3JGBcjiZ +1;
        }
        else
            j = next[j];
        if (j == S9gItTK6)
            return CXg3JGBcjiZ -S9gItTK6;
    }
    return -1;
}

int main () {
    int S9gItTK6;
    int next [(96 - 45)] = {-1};
    int ls;
    int CXg3JGBcjiZ;
    S9gItTK6 = 0;
    char s [(343 - 292)], oOsabXpZ [(937 - 886)];
    gets (oOsabXpZ);
    for (; oOsabXpZ[S9gItTK6] != ' ';)
        S9gItTK6 = S9gItTK6 +1;
    ls = strlen (oOsabXpZ) - 1 - S9gItTK6;
    for (CXg3JGBcjiZ = 0; CXg3JGBcjiZ < ls; CXg3JGBcjiZ = CXg3JGBcjiZ +1)
        s[CXg3JGBcjiZ] = oOsabXpZ[S9gItTK6 +1 + CXg3JGBcjiZ];
    s[ls] = '\0';
    oOsabXpZ[S9gItTK6] = '\0';
    get_next (oOsabXpZ, S9gItTK6, next);
    printf ("%d\n", BmYCL6eP (s, oOsabXpZ, ls, S9gItTK6, next));
}

