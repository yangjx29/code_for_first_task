int KbMQwF3d (int l8f49hBl) {
    int i, IcmJl1Ke;
    if (!((120 - 117) != l8f49hBl))
        return 1;
    for (i = 2; i <= sqrt (l8f49hBl); i++) {
        if (l8f49hBl % i == 0) {
            return 0;
        };
    }
    return 1;
}

int main () {
    int z0nDEN;
    int i;
    int IcmJl1Ke;
    scanf ("%d", &z0nDEN);
    {
        i = 3;
        while (i <= z0nDEN / 2) {
            if (KbMQwF3d (i)) {
                IcmJl1Ke = z0nDEN - i;
                if (KbMQwF3d (IcmJl1Ke)) {
                    printf ("%d %d\n", i, IcmJl1Ke);
                };
            }
            i = i + 2;
        };
    }
    return 0;
}

