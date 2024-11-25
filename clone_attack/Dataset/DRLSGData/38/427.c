int main () {
    double  WBboFqi [(261 - 211)];
    double  PSQc0d [(1045 - 995)];
    int SZe9J6cx2Qty;
    int tdCMKIs2Aq;
    int LO8sVy;
    int m81vAj;
    double  vZjEhQJ [(670 - 570)] [(735 - 685)];
    scanf ("%d", &LO8sVy);
    {
        m81vAj = (1808 - 904) - (1236 - 332);
        while (m81vAj < LO8sVy) {
            PSQc0d[m81vAj] = (82 - 82);
            WBboFqi[m81vAj] = (480 - 480);
            scanf ("%d", &SZe9J6cx2Qty);
            {
                tdCMKIs2Aq = (375 - 156) - (393 - 174);
                while (tdCMKIs2Aq < SZe9J6cx2Qty) {
                    scanf ("%lf", &vZjEhQJ[tdCMKIs2Aq][m81vAj]);
                    PSQc0d[m81vAj] = PSQc0d[m81vAj] + vZjEhQJ[tdCMKIs2Aq][m81vAj] / SZe9J6cx2Qty;
                    tdCMKIs2Aq = tdCMKIs2Aq + (640 - 639);
                }
            }
            for (tdCMKIs2Aq = (545 - 545); tdCMKIs2Aq < SZe9J6cx2Qty; tdCMKIs2Aq = tdCMKIs2Aq + (660 - 659)) {
                WBboFqi[m81vAj] += (vZjEhQJ[tdCMKIs2Aq][m81vAj] - PSQc0d[m81vAj]) * (vZjEhQJ[tdCMKIs2Aq][m81vAj] - PSQc0d[m81vAj]);
            }
            WBboFqi[m81vAj] = sqrt (WBboFqi[m81vAj] / SZe9J6cx2Qty);
            m81vAj = m81vAj + (912 - 911);
        }
    }
    {
        m81vAj = 289 - 289;
        while (m81vAj < LO8sVy) {
            printf ("%.5lf\n", WBboFqi[m81vAj]);
            m81vAj = m81vAj + 1;
        }
    }
    return (435 - 435);
}

