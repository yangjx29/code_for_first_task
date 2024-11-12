void  Zjv2OPT8 (int cQRgFoisB);
int kfl7GEDQ, aOcTDi4;
char tQ6XGUWnpZM [102] [102] = {{'\0'}};
int dyM0c8sQ [102] [102] = {0};

int main () {
    int F9ZufQCbM8G;
    {
        if (0) {
            return 0;
        }
    }
    {
        if (0) {
            return 0;
        }
    }
    cin >> kfl7GEDQ;
    {
        int uvBsW0f;
        uvBsW0f = 1;
        while (kfl7GEDQ >= uvBsW0f) {
            {
                int VcKOqDyvaCLN;
                VcKOqDyvaCLN = 1;
                for (; kfl7GEDQ >= VcKOqDyvaCLN;) {
                    cin >> tQ6XGUWnpZM[uvBsW0f][VcKOqDyvaCLN];
                    if (!('@' != tQ6XGUWnpZM[uvBsW0f][VcKOqDyvaCLN]))
                        dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN] = 1;
                    if (!('.' != tQ6XGUWnpZM[uvBsW0f][VcKOqDyvaCLN]))
                        dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN] = -1;
                    VcKOqDyvaCLN = VcKOqDyvaCLN +1;
                }
            }
            uvBsW0f = uvBsW0f + 1;
        }
    }
    F9ZufQCbM8G = 0;
    cin >> aOcTDi4;
    for (int uvBsW0f = 0;
    aOcTDi4 - 1 > uvBsW0f; uvBsW0f = uvBsW0f + 1)
        Zjv2OPT8 (uvBsW0f);
    for (int uvBsW0f = 1;
    kfl7GEDQ >= uvBsW0f; uvBsW0f++) {
        int VcKOqDyvaCLN;
        VcKOqDyvaCLN = 1;
        for (; VcKOqDyvaCLN <= kfl7GEDQ;) {
            {
                if (0) {
                    return 0;
                }
            }
            if (0 < dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN])
                F9ZufQCbM8G = F9ZufQCbM8G +1;
            VcKOqDyvaCLN = VcKOqDyvaCLN +1;
        }
    }
    cout << F9ZufQCbM8G;
    cin.get ();
    cin.get ();
    return 0;
}

void  Zjv2OPT8 (int cQRgFoisB) {
    {
        int uvBsW0f;
        uvBsW0f = 1;
        for (; uvBsW0f <= kfl7GEDQ;) {
            for (int VcKOqDyvaCLN = 1;
            VcKOqDyvaCLN <= kfl7GEDQ; VcKOqDyvaCLN = VcKOqDyvaCLN +1)
                if (dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN] <= cQRgFoisB + 1 && dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN] > 0) {
                    if (dyM0c8sQ[uvBsW0f - 1][VcKOqDyvaCLN] == -1)
                        dyM0c8sQ[uvBsW0f - 1][VcKOqDyvaCLN] = dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN] + 1;
                    if (dyM0c8sQ[uvBsW0f + 1][VcKOqDyvaCLN] == -1)
                        dyM0c8sQ[uvBsW0f + 1][VcKOqDyvaCLN] = dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN] + 1;
                    if (dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN -1] == -1)
                        dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN -1] = dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN] + 1;
                    if (dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN +1] == -1)
                        dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN +1] = dyM0c8sQ[uvBsW0f][VcKOqDyvaCLN] + 1;
                }
            uvBsW0f++;
        }
    }
}

