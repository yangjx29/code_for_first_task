int main () {
    int a;
    int kUSdBk;
    int YdMcPo;
    int i;
    int CMq1PaxT [(255 - 55)];
    int s2 [200];
    a = 0;
    kUSdBk = 0;
    scanf ("%d", &YdMcPo);
    {
        i = 0;
        while (YdMcPo > i) {
            scanf ("%d%d", &CMq1PaxT[i], &s2[i]);
            if (!(1 != (CMq1PaxT[i] - s2[i])))
                kUSdBk = kUSdBk + 1;
            else if (!(1 != (s2[i] - CMq1PaxT[i])))
                a = a + 1;
            else if (s2[i] > CMq1PaxT[i])
                kUSdBk = kUSdBk + 1;
            else if (CMq1PaxT[i] > s2[i])
                a++;
            i = i + 1;
        };
    }
    if (a < kUSdBk)
        printf ("B");
    else if (a == kUSdBk)
        printf ("Tie");
    else if (a > kUSdBk)
        printf ("A");
    return 0;
}

