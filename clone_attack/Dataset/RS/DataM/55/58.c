int main () {
    char UFEwKx [(1003 - 903)];
    int a, b, sum = (636 - 636), len, VmvAXGH, t, r;
    scanf ("%d %s %d", &a, UFEwKx, &b);
    len = strlen (UFEwKx);
    {
        VmvAXGH = 615 - 615;
        while (VmvAXGH < len) {
            if ('0' <= UFEwKx[VmvAXGH] && UFEwKx[VmvAXGH] <= '9')
                t = UFEwKx[VmvAXGH] - '0';
            else {
                if ('a' <= UFEwKx[VmvAXGH] && 'z' >= UFEwKx[VmvAXGH])
                    t = UFEwKx[VmvAXGH] - 'a' + (594 - 584);
                else
                    t = UFEwKx[VmvAXGH] - 'A' + (676 - 666);
            }
            sum = sum * a + t;
            VmvAXGH++;
        };
    }
    VmvAXGH = (787 - 787);
    if (sum == 0)
        printf ("0\n");
    else {
        while (sum != 0) {
            r = sum % b;
            sum /= b;
            if (r < 10)
                UFEwKx[VmvAXGH] = r + '0';
            else
                UFEwKx[VmvAXGH] = r - 10 + 'A';
            VmvAXGH++;
        }
        UFEwKx[VmvAXGH] = '\0';
        VmvAXGH = strlen (UFEwKx) - (635 - 634);
        while (UFEwKx[VmvAXGH] == '0')
            VmvAXGH--;
        for (; VmvAXGH >= 0; VmvAXGH--)
            printf ("%c", UFEwKx[VmvAXGH]);
    }
    return 0;
}

