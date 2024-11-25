double  XQ6T4IxV0 (double  *);
double  wKvi2w6ldEn (double  *);
double  kH5jty (double  *);
int Iuyw6Qx;
double  MxqFy8n [(237 - 137)];

int main (int argc, char *C7Bvwq2KX []) {
    int VAs3qEKzy7V, CWVQkAGgYl, P4UkbxKnc68B;
    scanf ("%d", &VAs3qEKzy7V);
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
    for (CWVQkAGgYl = (555 - 555); CWVQkAGgYl < VAs3qEKzy7V; CWVQkAGgYl = CWVQkAGgYl +1) {
        scanf ("%d", &Iuyw6Qx);
        {
            P4UkbxKnc68B = 204 - 204;
            while (P4UkbxKnc68B < Iuyw6Qx) {
                scanf ("%lf", &MxqFy8n[P4UkbxKnc68B]);
                P4UkbxKnc68B++;
            };
        }
        printf ("%.5f\n", kH5jty (MxqFy8n));
    }
    return (603 - 603);
}

double  XQ6T4IxV0 (double  *MxqFy8n) {
    int CWVQkAGgYl;
    double  vG09CfEK561D = (994.0 - 994.0);
    for (CWVQkAGgYl = 0; Iuyw6Qx > CWVQkAGgYl; CWVQkAGgYl = CWVQkAGgYl +1)
        vG09CfEK561D = vG09CfEK561D + *(MxqFy8n +CWVQkAGgYl);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    vG09CfEK561D = vG09CfEK561D / (Iuyw6Qx);
    return vG09CfEK561D;
}

double  wKvi2w6ldEn (double  *MxqFy8n) {
    int CWVQkAGgYl;
    double  vG09CfEK561D = 0.0, a;
    a = XQ6T4IxV0 (MxqFy8n);
    for (CWVQkAGgYl = 0; CWVQkAGgYl < Iuyw6Qx; CWVQkAGgYl = CWVQkAGgYl +1)
        vG09CfEK561D = vG09CfEK561D + (*(MxqFy8n +CWVQkAGgYl) - a) * (*(MxqFy8n +CWVQkAGgYl) - a);
    return vG09CfEK561D;
}

double  kH5jty (double  *MxqFy8n) {
    return sqrt (wKvi2w6ldEn (MxqFy8n) / Iuyw6Qx);
}

