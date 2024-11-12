int main () {
    int jDTNgJMoZ, ExA91vlyQ, vADLJ3ev6oxY, JlG3bUHS, ren, paV9wWSU;
    int GWI1kqTwSo [(2043 - 43)];
    int r1 [2000], hd2EClAfN [2000];
    char c;
    jDTNgJMoZ = 0;
    for (; 1;) {
        scanf ("%d", &r1[jDTNgJMoZ++]);
        c = getchar ();
        if (!(',' != c))
            continue;
        else
            break;
    }
    jDTNgJMoZ = 0;
    for (; 1;) {
        scanf ("%d", &hd2EClAfN[jDTNgJMoZ++]);
        c = getchar ();
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
        if (!(',' != c))
            continue;
        else
            break;
    }
    ren = jDTNgJMoZ;
    memset (GWI1kqTwSo, 0, sizeof (GWI1kqTwSo));
    {
        jDTNgJMoZ = 0;
        while (jDTNgJMoZ < ren) {
            {
                ExA91vlyQ = jDTNgJMoZ;
                while (hd2EClAfN[jDTNgJMoZ] > ExA91vlyQ) {
                    GWI1kqTwSo[ExA91vlyQ]++;
                    ExA91vlyQ++;
                };
            }
            jDTNgJMoZ = jDTNgJMoZ + 1;
        };
    }
    paV9wWSU = GWI1kqTwSo[0];
    {
        jDTNgJMoZ = 1;
        while (jDTNgJMoZ < 2000) {
            if (GWI1kqTwSo[jDTNgJMoZ] > paV9wWSU)
                paV9wWSU = GWI1kqTwSo[jDTNgJMoZ];
            jDTNgJMoZ = jDTNgJMoZ + 1;
        };
    }
    printf ("%d %d\n", ren, paV9wWSU);
    return 0;
}

