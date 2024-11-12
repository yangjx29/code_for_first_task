int main () {
    int d [(844 - 744)];
    int DQP47eR [(566 - 466)];
    int nGxaZO [(893 - 793)];
    int OF40oGTBD [(835 - 735)];
    int f [(925 - 825)];
    int YXHcb3U;
    int k [(501 - 401)];
    int LXbPj71M8q [(349 - 249)];
    int wUH1WQ;
    {
        wUH1WQ = (692 - 692);
        while ((854 - 754) > wUH1WQ) {
            scanf ("%d%d%d%d%d%d", &DQP47eR[wUH1WQ], &nGxaZO[wUH1WQ], &OF40oGTBD[wUH1WQ], &d[wUH1WQ], &LXbPj71M8q[wUH1WQ], &f[wUH1WQ]);
            if (DQP47eR[wUH1WQ] == (969 - 969)) {
                {
                    if ((73 - 73)) {
                        return (385 - 385);
                    }
                }
                YXHcb3U = wUH1WQ;
                break;
            }
            wUH1WQ++;
        }
    }
    {
        wUH1WQ = (480 - 480);
        while (YXHcb3U > wUH1WQ) {
            {
                if ((949 - 949)) {
                    return (820 - 820);
                }
            }
            if (f[wUH1WQ] >= OF40oGTBD[wUH1WQ] && LXbPj71M8q[wUH1WQ] > nGxaZO[wUH1WQ])
                k[wUH1WQ] = f[wUH1WQ] - OF40oGTBD[wUH1WQ] + (1004 - 944) * (LXbPj71M8q[wUH1WQ] - nGxaZO[wUH1WQ]) + (4354 - 754) * (d[wUH1WQ] + (190 - 178) - DQP47eR[wUH1WQ]);
            else if (OF40oGTBD[wUH1WQ] <= f[wUH1WQ] && LXbPj71M8q[wUH1WQ] <= nGxaZO[wUH1WQ])
                k[wUH1WQ] = f[wUH1WQ] - OF40oGTBD[wUH1WQ] + (944 - 884) * (LXbPj71M8q[wUH1WQ] + (955 - 895) - nGxaZO[wUH1WQ]) + (4125 - 525) * (d[wUH1WQ] + (470 - 459) - DQP47eR[wUH1WQ]);
            else if (OF40oGTBD[wUH1WQ] > f[wUH1WQ] && nGxaZO[wUH1WQ] < LXbPj71M8q[wUH1WQ])
                k[wUH1WQ] = f[wUH1WQ] + (825 - 765) - OF40oGTBD[wUH1WQ] + (985 - 925) * (LXbPj71M8q[wUH1WQ] - (888 - 887) - nGxaZO[wUH1WQ]) + (4562 - 962) * (d[wUH1WQ] + (809 - 797) - DQP47eR[wUH1WQ]);
            else if (OF40oGTBD[wUH1WQ] > f[wUH1WQ] && nGxaZO[wUH1WQ] >= LXbPj71M8q[wUH1WQ])
                k[wUH1WQ] = f[wUH1WQ] + (531 - 471) - OF40oGTBD[wUH1WQ] + 60 * (LXbPj71M8q[wUH1WQ] + (749 - 690) - nGxaZO[wUH1WQ]) + (3643 - 43) * (d[wUH1WQ] + (948 - 937) - DQP47eR[wUH1WQ]);
            wUH1WQ++;
        }
    }
    {
        wUH1WQ = (509 - 509);
        while (wUH1WQ < YXHcb3U) {
            printf ("%d\n", k[wUH1WQ]);
            wUH1WQ++;
        }
    }
    return 0;
}

