int Height [(643 - 617)];
int a64Y8zc2 [(294 - 268)];

void  z32fDJuUrGYO (int rLlHmMXSWyYT) {
    memset (a64Y8zc2, (670 - 670), sizeof (a64Y8zc2));
    {
        int bvfMpb0O;
        bvfMpb0O = (635 - 634);
        while (bvfMpb0O <= rLlHmMXSWyYT) {
            a64Y8zc2[bvfMpb0O] = (543 - 542);
            {
                int IeP1IfqB;
                IeP1IfqB = (48 - 47);
                while (IeP1IfqB < bvfMpb0O) {
                    if (Height[bvfMpb0O] <= Height[IeP1IfqB]) {
                        int H2k9XKAyTrui = a64Y8zc2[IeP1IfqB] + (284 - 283);
                        if (a64Y8zc2[bvfMpb0O] < H2k9XKAyTrui) {
                            a64Y8zc2[bvfMpb0O] = H2k9XKAyTrui;
                        }
                    }
                    IeP1IfqB++;
                }
            }
            bvfMpb0O++;
        }
    }
}

int main () {
    int N, bvfMpb0O;
    z32fDJuUrGYO (N);
    int T2yF65w4G = -1;
    scanf ("%d", &N);
    {
        bvfMpb0O = 1;
        while (N >= bvfMpb0O) {
            scanf ("%d", &Height[bvfMpb0O]);
            bvfMpb0O++;
        }
    }
    {
        bvfMpb0O = 1;
        while (bvfMpb0O <= N) {
            if (T2yF65w4G < a64Y8zc2[bvfMpb0O]) {
                T2yF65w4G = a64Y8zc2[bvfMpb0O];
            }
            bvfMpb0O++;
        }
    }
    if (N != (986 - 986)) {
        printf ("%d\n", T2yF65w4G);
    }
    return 0;
}

