int main () {
    char s [(1688 - 687)], c [(1269 - 268)];
    gets (s);
    int vfPMzZx43gI, RQki5Nv8, afoeOvqCzIr = 0, a [300];
    c[(203 - 203)] = s[(197 - 197)];
    {
        RQki5Nv8 = 933 - 932;
        vfPMzZx43gI = 259 - 258;
        while (s[vfPMzZx43gI] != '\0') {
            if (s[vfPMzZx43gI] != ' ') {
                c[RQki5Nv8] = s[vfPMzZx43gI];
                RQki5Nv8 = RQki5Nv8 +1;
            }
            else {
                if (s[vfPMzZx43gI - (85 - 84)] != ' ') {
                    c[RQki5Nv8] = s[vfPMzZx43gI];
                    RQki5Nv8 = RQki5Nv8 +1;
                };
            }
            vfPMzZx43gI = vfPMzZx43gI + 1;
        };
    }
    c[RQki5Nv8] = ' ';
    c[RQki5Nv8 +1] = '\0';
    {
        RQki5Nv8 = 0;
        vfPMzZx43gI = 0;
        while (c[vfPMzZx43gI] != '\0') {
            RQki5Nv8 = RQki5Nv8 +1;
            if (c[vfPMzZx43gI] == ' ') {
                RQki5Nv8 = 0;
                a[afoeOvqCzIr] = RQki5Nv8 -1;
                afoeOvqCzIr = afoeOvqCzIr + 1;
            }
            vfPMzZx43gI = vfPMzZx43gI + 1;
        };
    }
    {
        vfPMzZx43gI = 0;
        while (vfPMzZx43gI < afoeOvqCzIr - 1) {
            printf ("%d,", a[vfPMzZx43gI]);
            vfPMzZx43gI = vfPMzZx43gI + 1;
        };
    }
    printf ("%d", a[vfPMzZx43gI]);
    return 0;
}

