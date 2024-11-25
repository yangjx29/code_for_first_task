int main () {
    int sz1 [1000];
    int VdSkCJtreZ [1000];
    int wjDLrI6sC0;
    int g2D9PZ7tfR;
    int AfcJnFxP;
    int sAoufMDPUWE;
    int vIw4Z6t;
    int UftbaD;
    int I4osON;
    wjDLrI6sC0 = 0;
    scanf ("%d%d", &sAoufMDPUWE, &vIw4Z6t);
    for (g2D9PZ7tfR = (983 - 982); sAoufMDPUWE >= g2D9PZ7tfR; g2D9PZ7tfR = g2D9PZ7tfR + 1) {
        scanf ("%d", &UftbaD);
        sz1[g2D9PZ7tfR] = UftbaD;
        VdSkCJtreZ[g2D9PZ7tfR] = UftbaD;
    }
    {
        g2D9PZ7tfR = 1;
        while (g2D9PZ7tfR <= sAoufMDPUWE) {
            I4osON = sz1[g2D9PZ7tfR];
            {
                AfcJnFxP = 1;
                while (AfcJnFxP <= sAoufMDPUWE) {
                    if (AfcJnFxP != g2D9PZ7tfR && I4osON +VdSkCJtreZ[AfcJnFxP] == vIw4Z6t) {
                        wjDLrI6sC0 = 1;
                        break;
                    }
                    AfcJnFxP = AfcJnFxP +1;
                };
            }
            g2D9PZ7tfR = g2D9PZ7tfR + 1;
        };
    }
    if (wjDLrI6sC0 == 1) {
    }
    else {
    }
    return 0;
}

