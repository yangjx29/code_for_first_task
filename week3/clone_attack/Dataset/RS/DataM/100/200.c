int main () {
    char a [300];
    int b [300], XVMqagkwF, MBb8yw, sign = (924 - 924);
    scanf ("%s", a);
    MBb8yw = strlen (a);
    {
        XVMqagkwF = 0;
        while ((1267 - 968) >= XVMqagkwF) {
            b[XVMqagkwF] = 0;
            XVMqagkwF = XVMqagkwF +1;
        };
    }
    {
        XVMqagkwF = 0;
        while (XVMqagkwF < MBb8yw) {
            if ((0 <= a[XVMqagkwF] - 65 && 0 >= a[XVMqagkwF] - 90) || (0 <= a[XVMqagkwF] - 97 && a[XVMqagkwF] - 122 <= 0))
                b[a[XVMqagkwF]] += 1;
            XVMqagkwF = XVMqagkwF +1;
        };
    }
    for (XVMqagkwF = 1; XVMqagkwF <= 299; XVMqagkwF = XVMqagkwF +1)
        if (b[XVMqagkwF] != 0) {
            sign = 1;
            printf ("%c=%d\n", XVMqagkwF, b[XVMqagkwF]);
        }
    if (sign == 0)
        printf ("No");
    return 0;
}

