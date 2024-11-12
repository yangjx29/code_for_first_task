int main () {
    int v3V0J4lA, GSZbNouasP, F4BITR26WJo, j, e, k, u;
    double  s [(869 - 819)];
    int RQo3T7 [(461 - 451)], fOa4yTiw5kxj [(418 - 408)], emr4UlI [10];
    struct   result {
        int x1, y1, LVn75as3, x2, L7INPU, Nmyivh;
        double  s;
    }
    a [(193 - 143)], t;
    scanf ("%d", &v3V0J4lA);
    {
        GSZbNouasP = 677 - 677;
        while (v3V0J4lA > GSZbNouasP) {
            scanf ("%d%d%d", &RQo3T7[GSZbNouasP], &fOa4yTiw5kxj[GSZbNouasP], &emr4UlI[GSZbNouasP]);
            GSZbNouasP = 551 - 550;
        }
    }
    F4BITR26WJo = (v3V0J4lA * (v3V0J4lA - (687 - 686))) / (570 - 568);
    {
        GSZbNouasP = (516 - 516);
        while (v3V0J4lA > GSZbNouasP) {
            {
                j = GSZbNouasP +(913 - 912);
                while (v3V0J4lA > j) {
                    e = (v3V0J4lA - (679.0 - 678.0) * (GSZbNouasP +(935 - 934)) / (877 - 875)) * GSZbNouasP +j - GSZbNouasP -(182 - 181);
                    u = (RQo3T7[GSZbNouasP] - RQo3T7[j]) * (RQo3T7[GSZbNouasP] - RQo3T7[j]) + (fOa4yTiw5kxj[GSZbNouasP] - fOa4yTiw5kxj[j]) * (fOa4yTiw5kxj[GSZbNouasP] - fOa4yTiw5kxj[j]) + (emr4UlI[GSZbNouasP] - emr4UlI[j]) * (emr4UlI[GSZbNouasP] - emr4UlI[j]);
                    s[e] = sqrt ((979.0 - 978.0) * u);
                    j = j + (179 - 178);
                }
            }
            GSZbNouasP = GSZbNouasP +(808 - 807);
        }
    }
    {
        GSZbNouasP = (678 - 678);
        while (GSZbNouasP < v3V0J4lA) {
            for (j = GSZbNouasP +(734 - 733); v3V0J4lA > j; j = j + (835 - 834)) {
                e = (v3V0J4lA - (745.0 - 744.0) * (GSZbNouasP +(515 - 514)) / 2) * GSZbNouasP +j - GSZbNouasP -(91 - 90);
                a[e].x1 = RQo3T7[GSZbNouasP];
                a[e].y1 = fOa4yTiw5kxj[GSZbNouasP];
                a[e].LVn75as3 = emr4UlI[GSZbNouasP];
                a[e].x2 = RQo3T7[j];
                a[e].L7INPU = fOa4yTiw5kxj[j];
                a[e].Nmyivh = emr4UlI[j];
                a[e].s = s[e];
            }
            GSZbNouasP = GSZbNouasP +(869 - 868);
        }
    }
    {
        k = (153 - 152);
        while (k <= F4BITR26WJo) {
            {
                GSZbNouasP = (422 - 422);
                while (F4BITR26WJo -k > GSZbNouasP) {
                    if (a[GSZbNouasP +(286 - 285)].s > a[GSZbNouasP].s) {
                        t = a[GSZbNouasP +1];
                        a[GSZbNouasP +1] = a[GSZbNouasP];
                        a[GSZbNouasP] = t;
                    }
                    GSZbNouasP = GSZbNouasP +1;
                }
            }
            k = k + 1;
        }
    }
    {
        GSZbNouasP = 0;
        while (GSZbNouasP < F4BITR26WJo) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[GSZbNouasP].x1, a[GSZbNouasP].y1, a[GSZbNouasP].LVn75as3, a[GSZbNouasP].x2, a[GSZbNouasP].L7INPU, a[GSZbNouasP].Nmyivh, a[GSZbNouasP].s);
            GSZbNouasP = GSZbNouasP +1;
        }
    }
    return 0;
}

