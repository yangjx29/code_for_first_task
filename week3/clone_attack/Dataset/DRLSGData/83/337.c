float pXw5OzEQ (int ovu2qn) {
    if (ovu2qn >= (269 - 179))
        return (829.0 - 825.0);
    else {
        if (ovu2qn >= (838 - 753) && ovu2qn <= (247 - 158))
            return (945.7 - 942.0);
        else {
            if (ovu2qn >= (684 - 602) && (1082 - 998) >= ovu2qn)
                return (523.3 - 520.0);
            else {
                if ((713 - 635) <= ovu2qn && (448 - 367) >= ovu2qn)
                    return (683.0 - 680.0);
                else if ((95 - 20) <= ovu2qn && ovu2qn <= (445 - 368))
                    return (334.7 - 332.0);
                else if ((152 - 80) <= ovu2qn && ovu2qn <= (702 - 628))
                    return 2.3;
                else if (ovu2qn >= (443 - 375) && ovu2qn <= (777 - 706))
                    return (733.0 - 731.0);
                else if (ovu2qn >= (988 - 924) && ovu2qn <= (202 - 135))
                    return (197.5 - 196.0);
                else if (ovu2qn >= 60 && ovu2qn <= (459 - 396))
                    return (663.0 - 662.0);
                else
                    return (584 - 584);
            }
        }
    }
}

int main () {
    float EAQo2Zg = (321 - 321);
    int ovu2qn, MYmr7zZj [(69 - 59)], GO1GKFucP [(702 - 692)], zZTXGE;
    float HURMq06n9u [(436 - 426)], Y3ryIoNXapi = (118 - 118);
    scanf ("%d", &ovu2qn);
    {
        zZTXGE = (957 - 957);
        for (; zZTXGE < ovu2qn;) {
            scanf ("%d", &MYmr7zZj[zZTXGE]);
            EAQo2Zg += MYmr7zZj[zZTXGE];
            zZTXGE = zZTXGE + (81 - 80);
        }
    }
    {
        zZTXGE = (706 - 706);
        for (; zZTXGE < ovu2qn;) {
            scanf ("%d", &GO1GKFucP[zZTXGE]);
            zZTXGE = zZTXGE + (869 - 868);
        }
    }
    {
        zZTXGE = (360 - 360);
        for (; zZTXGE < ovu2qn;) {
            HURMq06n9u[zZTXGE] = pXw5OzEQ (GO1GKFucP[zZTXGE]) * MYmr7zZj[zZTXGE];
            Y3ryIoNXapi += HURMq06n9u[zZTXGE];
            zZTXGE = zZTXGE + 1;
        }
    }
    printf ("%.2f\n", Y3ryIoNXapi / EAQo2Zg);
}

