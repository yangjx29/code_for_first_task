int main () {
    int NV3FyLJiZ4 = (729 - 729);
    int LWVq9APZ, u4o6AjdqmT, col;
    int N7mxdKOi [1000] [1000];
    int qobB0xEAZ = (436 - 436);
    scanf ("%d", &LWVq9APZ);
    {
        u4o6AjdqmT = (472 - 472);
        for (; LWVq9APZ > u4o6AjdqmT;) {
            for (col = (787 - 787); col < LWVq9APZ; col = col + (83 - 82)) {
                scanf ("%d", &N7mxdKOi[u4o6AjdqmT][col]);
            }
            u4o6AjdqmT = u4o6AjdqmT + (310 - 309);
        }
    }
    for (u4o6AjdqmT = (485 - 485); u4o6AjdqmT < LWVq9APZ; u4o6AjdqmT = u4o6AjdqmT + (930 - 929)) {
        col = 0;
        for (; col < LWVq9APZ -(709 - 708);) {
            if (!(0 != qobB0xEAZ)) {
                if ((!(0 != N7mxdKOi[u4o6AjdqmT][col])) && (!(0 != N7mxdKOi[u4o6AjdqmT][col + 1]))) {
                    col = LWVq9APZ;
                }
                else {
                    if ((!(0 != N7mxdKOi[u4o6AjdqmT][col])) && (!(255 != N7mxdKOi[u4o6AjdqmT][col + 1]))) {
                        qobB0xEAZ = 1;
                        NV3FyLJiZ4 = NV3FyLJiZ4 +1;
                    }
                }
            }
            else {
                if (qobB0xEAZ == 1) {
                    if ((N7mxdKOi[u4o6AjdqmT][col] == 255) && (!(255 != N7mxdKOi[u4o6AjdqmT][col + 1]))) {
                        NV3FyLJiZ4 = NV3FyLJiZ4 +1;
                    }
                    else {
                        if ((N7mxdKOi[u4o6AjdqmT][col] == 255) && (N7mxdKOi[u4o6AjdqmT][col + 1] == 0)) {
                            qobB0xEAZ = 0;
                            col = LWVq9APZ;
                        }
                    }
                }
            }
            col = col + 1;
        }
    }
    printf ("%d", NV3FyLJiZ4);
    return 0;
}

