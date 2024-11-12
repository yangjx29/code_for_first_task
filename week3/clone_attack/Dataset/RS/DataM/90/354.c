int main () {
    int m [21] = {0};
    int O0enOgs8L [21] = {0};
    int t;
    int IiX6lLMqy;
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
    int distribution (int, int);
    scanf ("%d\n", &t);
    for (IiX6lLMqy = 1; t >= IiX6lLMqy; IiX6lLMqy = IiX6lLMqy +1)
        scanf ("%d %d\n", &m[IiX6lLMqy], &O0enOgs8L[IiX6lLMqy]);
    {
        IiX6lLMqy = 1;
        while (IiX6lLMqy <= t) {
            printf ("%d\n", distribution (m[IiX6lLMqy], O0enOgs8L[IiX6lLMqy]));
            IiX6lLMqy = IiX6lLMqy +1;
        };
    }
    return 0;
}

int distribution (int m, int O0enOgs8L) {
    if (m == 1)
        return (1);
    else {
        if (O0enOgs8L == 1)
            return (1);
        else {
            if (m < O0enOgs8L)
                return (distribution (m, O0enOgs8L -1));
            else
                return (distribution (m - O0enOgs8L, O0enOgs8L) + distribution (m, O0enOgs8L -1));
        };
    };
}

