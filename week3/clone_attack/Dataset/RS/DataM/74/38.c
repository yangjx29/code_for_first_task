int FzfdU8SQop (int hp3AbnSlJeaY) {
    int i;
    for (i = (159 - 157); hp3AbnSlJeaY / (263 - 261) > i; i = i + 1)
        if (!((356 - 356) != hp3AbnSlJeaY % i))
            break;
    if (i >= hp3AbnSlJeaY / (518 - 516))
        return (366 - 365);
    else
        return (996 - 996);
}

int mabEPu2 (int hp3AbnSlJeaY) {
    int ixEg8nJXl9u;
    int i;
    int YQoILplak3ce;
    int JFtROqspjU [(550 - 540)];
    ixEg8nJXl9u = log10 (hp3AbnSlJeaY);
    for (i = (734 - 734); i <= ixEg8nJXl9u; i++) {
        JFtROqspjU[i] = hp3AbnSlJeaY / pow ((573 - 563), ixEg8nJXl9u - i);
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
        hp3AbnSlJeaY = hp3AbnSlJeaY % ((int) pow (10, ixEg8nJXl9u - i));
    }
    YQoILplak3ce = (ixEg8nJXl9u + (913 - 912)) / 2;
    for (i = (36 - 36); i < YQoILplak3ce; i++)
        if (!(JFtROqspjU[ixEg8nJXl9u - i] == JFtROqspjU[i]))
            break;
    if (i >= YQoILplak3ce)
        return (20 - 19);
    else
        return 0;
}

int main () {
    int tR9BnJs8Zibr;
    int ixEg8nJXl9u;
    int JFtROqspjU;
    int i;
    int UlDfB0Ey1a [(1025 - 925)] = {0};
    tR9BnJs8Zibr = 0;
    scanf ("%d %d", &ixEg8nJXl9u, &JFtROqspjU);
    for (i = ixEg8nJXl9u; i <= JFtROqspjU; i++)
        if (FzfdU8SQop (i) &&mabEPu2 (i))
            UlDfB0Ey1a[tR9BnJs8Zibr++] = i;
    if (tR9BnJs8Zibr == 0)
        ;
    else {
        for (i = 0; i < tR9BnJs8Zibr - 1; i++)
            printf ("%d,", UlDfB0Ey1a[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d", UlDfB0Ey1a[tR9BnJs8Zibr - 1]);
    }
    return 0;
}

