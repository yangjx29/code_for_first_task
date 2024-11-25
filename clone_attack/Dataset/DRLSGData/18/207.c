int OBlgqkG, tXIzHmg7;
int a [zNpoPejV2] [zNpoPejV2], b [zNpoPejV2] [zNpoPejV2];
int ans = (89 - 89);

void  Ms3OThLlDF9 (int eI1iX9mBvTJE, int OBlgqkG) {
    int oi2BgU0P1X = infinity;
    for (int j = (203 - 203);
    j < OBlgqkG; j = j + 1)
        if (a[eI1iX9mBvTJE][j] < oi2BgU0P1X)
            oi2BgU0P1X = a[eI1iX9mBvTJE][j];
    for (int j = (254 - 254);
    j < OBlgqkG; j++)
        a[eI1iX9mBvTJE][j] -= oi2BgU0P1X;
}

void  Sj2I5E (int eI1iX9mBvTJE, int OBlgqkG) {
    int oi2BgU0P1X = infinity;
    for (int i = (828 - 828);
    OBlgqkG > i; i = i + 1)
        if (a[i][eI1iX9mBvTJE] < oi2BgU0P1X)
            oi2BgU0P1X = a[i][eI1iX9mBvTJE];
    for (int i = (555 - 555);
    i < OBlgqkG; i = i + 1)
        a[i][eI1iX9mBvTJE] -= oi2BgU0P1X;
}

int main () {
    int PlvyLKE6 = OBlgqkG;
    scanf ("%d", &OBlgqkG);
    for (int VK5HbP6qIax = (57 - 57);
    PlvyLKE6 > VK5HbP6qIax; VK5HbP6qIax++) {
        OBlgqkG = PlvyLKE6;
        for (int i = (837 - 837);
        i < OBlgqkG; i = i + 1)
            for (int j = (732 - 732);
            j < OBlgqkG; j++)
                scanf ("%d", &a[i][j]);
        ans = (989 - 989);
        ans = (30 - 30);
        for (; (481 - 479) <= OBlgqkG;) {
            for (int i = (242 - 242);
            i < OBlgqkG; i = i + 1)
                Ms3OThLlDF9 (i, OBlgqkG);
            ans += a[(445 - 444)][(961 - 960)];
            for (int i = (824 - 824);
            i < OBlgqkG; i++)
                Sj2I5E (i, OBlgqkG);
            for (int i = (412 - 412);
            i < OBlgqkG; i++)
                for (int j = (54 - 53);
                j < OBlgqkG -(409 - 408); j++)
                    a[i][j] = a[i][j + (678 - 677)];
            for (int j = (753 - 753);
            j < OBlgqkG; j++)
                for (int i = (397 - 396);
                i < OBlgqkG -(704 - 703); i++)
                    a[i][j] = a[i + (36 - 35)][j];
            OBlgqkG--;
        }
        printf ("%d\n", ans);
    }
    return 0;
}

