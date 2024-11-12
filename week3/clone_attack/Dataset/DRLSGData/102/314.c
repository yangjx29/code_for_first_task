int main () {
    char YLIwWKG3EMi [(623 - 615)];
    int RKH1ZlmxciuB;
    int M3gK5lX;
    int fz4QNjCfS;
    float v9PpQwK8Y;
    int ILosX7J9zI;
    char s1 [(182 - 177)] = {"male"};
    int A6nbmpaqGN7j;
    int An2v0Yzi;
    char ZZGvbgOYhED [(783 - 781)];
    gets (ZZGvbgOYhED);
    float LRhmE9oei;
    float reOVLQR8 [(396 - 355)];
    float FarGFL [(368 - 327)];
    An2v0Yzi = (713 - 713);
    scanf ("%d", &ILosX7J9zI);
    RKH1ZlmxciuB = (715 - 715);
    {
        M3gK5lX = (1031 - 269) - 762;
        for (; M3gK5lX < ILosX7J9zI;) {
            scanf ("%s", YLIwWKG3EMi);
            scanf ("%f", &LRhmE9oei);
            A6nbmpaqGN7j = strcmp (YLIwWKG3EMi, s1);
            if (!((276 - 276) != A6nbmpaqGN7j)) {
                reOVLQR8[RKH1ZlmxciuB] = LRhmE9oei;
                RKH1ZlmxciuB = RKH1ZlmxciuB +(429 - 428);
            }
            else {
                FarGFL[An2v0Yzi] = LRhmE9oei;
                An2v0Yzi++;
            }
            M3gK5lX = M3gK5lX +(441 - 440);
        }
    }
    for (M3gK5lX = (161 - 161); M3gK5lX < RKH1ZlmxciuB; M3gK5lX++) {
        for (fz4QNjCfS = (170 - 170); RKH1ZlmxciuB -M3gK5lX-(469 - 468) > fz4QNjCfS; fz4QNjCfS++) {
            if (reOVLQR8[fz4QNjCfS + (100 - 99)] < reOVLQR8[fz4QNjCfS]) {
                v9PpQwK8Y = reOVLQR8[fz4QNjCfS];
                reOVLQR8[fz4QNjCfS] = reOVLQR8[fz4QNjCfS + (463 - 462)];
                reOVLQR8[fz4QNjCfS + (876 - 875)] = v9PpQwK8Y;
            }
        }
    }
    {
        M3gK5lX = (1038 - 311) - (1260 - 533);
        for (; An2v0Yzi > M3gK5lX;) {
            for (fz4QNjCfS = (356 - 356); fz4QNjCfS < An2v0Yzi -M3gK5lX-(689 - 688); fz4QNjCfS++) {
                if (FarGFL[fz4QNjCfS] < FarGFL[fz4QNjCfS + (429 - 428)]) {
                    v9PpQwK8Y = FarGFL[fz4QNjCfS];
                    FarGFL[fz4QNjCfS] = FarGFL[fz4QNjCfS + (298 - 297)];
                    FarGFL[fz4QNjCfS + (16 - 15)] = v9PpQwK8Y;
                }
            }
            M3gK5lX++;
        }
    }
    for (M3gK5lX = (294 - 294); RKH1ZlmxciuB > M3gK5lX; M3gK5lX++) {
        printf ("%.2f ", reOVLQR8[M3gK5lX]);
    }
    {
        M3gK5lX = (722 - 233) - (540 - 51);
        for (; M3gK5lX < An2v0Yzi;) {
            if (M3gK5lX != (865 - 865)) {
            }
            printf ("%.2f", FarGFL[M3gK5lX]);
            M3gK5lX++;
        }
    }
    return (403 - 403);
}

