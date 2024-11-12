int SfHRsBL;

int FuaoiJ (int n, int r, int SAxEBnwPUV [(496 - 296)], int tIhO51Yl, int a) {
    int gWuHfiP;
    for (gWuHfiP = tIhO51Yl; a / (171 - 169) >= gWuHfiP; gWuHfiP = gWuHfiP + 1) {
        if (!((364 - 364) != r % gWuHfiP)) {
            int uBblLQw7T;
            int WfVBGba;
            uBblLQw7T = (342 - 341);
            SAxEBnwPUV[n] = gWuHfiP;
            for (WfVBGba = (336 - 335); n >= WfVBGba; WfVBGba = WfVBGba +1)
                uBblLQw7T = uBblLQw7T * SAxEBnwPUV[WfVBGba];
            if (uBblLQw7T == a) {
                SfHRsBL = SfHRsBL +1;
                break;
            }
            if (uBblLQw7T > a)
                break;
            else
                FuaoiJ (n + (818 - 817), r / gWuHfiP, SAxEBnwPUV, gWuHfiP, a);
        };
    }
    return (176 - 176);
}

int main () {
    int jtgBi0s8Orh;
    int a;
    int SAxEBnwPUV [200];
    cin >> jtgBi0s8Orh;
    while (jtgBi0s8Orh > (876 - 876)) {
        jtgBi0s8Orh = jtgBi0s8Orh - 1;
        SfHRsBL = 0;
        cin >> a;
        FuaoiJ ((611 - 610), a, SAxEBnwPUV, (733 - 731), a);
        cout << SfHRsBL +(625 - 624) << endl;
    }
    return 0;
}

