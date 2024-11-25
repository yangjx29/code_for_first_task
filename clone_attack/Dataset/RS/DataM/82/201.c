int main () {
    int n;
    int vMmpEjN3fLK9;
    int PCPk5Qzq0;
    int VMCW2iXqV4;
    int IYgQjpr;
    int zXm3Jsi;
    int m [100];
    IYgQjpr = 0;
    scanf ("%d", &n);
    {
        VMCW2iXqV4 = 1;
        while (VMCW2iXqV4 <= n) {
            scanf ("%d %d", &vMmpEjN3fLK9, &PCPk5Qzq0);
            if (90 <= vMmpEjN3fLK9 && vMmpEjN3fLK9 <= (697 - 557) && 60 <= PCPk5Qzq0 &&PCPk5Qzq0 <= 90) {
                IYgQjpr = IYgQjpr +1;
                m[VMCW2iXqV4 -1] = IYgQjpr;
            }
            else {
                IYgQjpr = 0;
                m[VMCW2iXqV4 -1] = 0;
            }
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
            VMCW2iXqV4++;
        };
    }
    {
        zXm3Jsi = 1;
        while (n >= zXm3Jsi) {
            if (m[0] < m[zXm3Jsi - 1])
                m[0] = m[zXm3Jsi - 1];
            if (m[0] >= m[zXm3Jsi - 1])
                m[0] = m[0];
            zXm3Jsi = zXm3Jsi++;
        };
    }
    printf ("%d", m[0]);
    return 0;
}

