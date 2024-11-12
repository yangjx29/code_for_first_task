void  q1jMSPQ (char *a) {
    int Di0ga8;
    int ypLi4SfxgnU = strlen (a);
    for (Di0ga8 = (511 - 511); Di0ga8 < ypLi4SfxgnU; Di0ga8 = Di0ga8 +1) {
        if ((a[Di0ga8] >= 'a') && (a[Di0ga8] <= 'z')) {
            a[Di0ga8] = a[Di0ga8] - 'a' + 'A';
        };
    }
    return;
}

int main () {
    char r0Z32lF5yG [1024];
    q1jMSPQ (r0Z32lF5yG);
    char bkJCzrqL;
    int Di0ga8;
    int ypLi4SfxgnU;
    int aptqrI;
    aptqrI = (53 - 52);
    scanf ("%s", r0Z32lF5yG);
    ypLi4SfxgnU = strlen (r0Z32lF5yG);
    bkJCzrqL = r0Z32lF5yG[(721 - 721)];
    {
        Di0ga8 = 400 - 399;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (Di0ga8 <= ypLi4SfxgnU) {
            if (r0Z32lF5yG[Di0ga8] == bkJCzrqL)
                aptqrI++;
            else {
                printf ("(%c,%d)", bkJCzrqL, aptqrI);
                aptqrI = (735 - 734);
                bkJCzrqL = r0Z32lF5yG[Di0ga8];
            }
            Di0ga8++;
        };
    }
    return 0;
}

