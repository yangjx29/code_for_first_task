int main () {
    int jHw2Re;
    int vxuGAVMrqlf;
    jHw2Re = (663 - 662);
    vxuGAVMrqlf = (32 - 32);
    char Sl2cB9gw48ye [1100];
    int len;
    len = strlen (Sl2cB9gw48ye);
    int fLNg8kK;
    fLNg8kK = 1;
    scanf ("%s", Sl2cB9gw48ye);
    for (; vxuGAVMrqlf < len;) {
        if (toupper (Sl2cB9gw48ye[jHw2Re]) == toupper (Sl2cB9gw48ye[vxuGAVMrqlf]))
            fLNg8kK = fLNg8kK + 1;
        else {
            printf ("(%c,%d)", toupper (Sl2cB9gw48ye[vxuGAVMrqlf]), fLNg8kK);
            vxuGAVMrqlf = vxuGAVMrqlf + fLNg8kK;
            fLNg8kK = 1;
        }
        jHw2Re++;
    };
}

