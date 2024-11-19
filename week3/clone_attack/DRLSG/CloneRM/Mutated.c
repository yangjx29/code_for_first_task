int main () {
    int JVpKitD;
    int k;
    int zoViL03r;
    int CAEQ83u [1000];
    scanf ("%d%d", &zoViL03r, &k);
    {
        JVpKitD = 0;
        while (JVpKitD < zoViL03r) {
            scanf ("%d", &(CAEQ83u[JVpKitD]));
            JVpKitD = JVpKitD +1;
        }
    }
    {
        int l = 0;
        while (l <= zoViL03r - 1) {
            {
                JVpKitD = 1;
                while (JVpKitD < zoViL03r) {
                    if (CAEQ83u[l] + CAEQ83u[JVpKitD] == k) {
                        printf ("yes");
                        return 0;
                    }
                    JVpKitD = JVpKitD +1;
                }
            }
            if (l == zoViL03r - 1) {
            }
            l = l + 1;
        }
    }
    return 0;
}

