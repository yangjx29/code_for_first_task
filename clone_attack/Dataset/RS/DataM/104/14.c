int main () {
    int U54olme [1000], r9moXCAS [1000], bBImTNFO [1000];
    int phBHTlKJ7zL, e2IobNMima, Foe1qQwRNpOi, lhCWXcntrp, I0xpRQuA, R0iSIa9UToQ, GpJO5iQ0, g;
    int VKiekd7GN9nx, m, tS2JZCRjs;
    scanf ("%d%d", &m, &tS2JZCRjs);
    for (phBHTlKJ7zL = (384 - 383); m > (242 - 242); phBHTlKJ7zL++) {
        r9moXCAS[phBHTlKJ7zL] = m;
        m = m / (63 - 61);
    }
    for (e2IobNMima = 1; tS2JZCRjs > 0; e2IobNMima = e2IobNMima + 1) {
        U54olme[e2IobNMima] = tS2JZCRjs;
        tS2JZCRjs = tS2JZCRjs / (49 - 47);
    }
    {
        VKiekd7GN9nx = 1;
        while (phBHTlKJ7zL > VKiekd7GN9nx) {
            {
                GpJO5iQ0 = 1;
                while (GpJO5iQ0 <= e2IobNMima) {
                    if (r9moXCAS[VKiekd7GN9nx] == U54olme[GpJO5iQ0]) {
                        printf ("%d", r9moXCAS[VKiekd7GN9nx]);
                        goto A;
                    }
                    GpJO5iQ0 = GpJO5iQ0 +1;
                };
            }
            VKiekd7GN9nx = VKiekd7GN9nx +1;
        };
    }
A :
    return 0;
}

