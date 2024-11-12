int main () {
    float t5XGJi9 = 0, DRrNzgpDiC, o5gIOz7 = 0, msxXJYM6P, u5rIVH, LGj6EukqF, s6tz7hcUe;
    int vbLnZRhT;
    int go0qj5;
    int N97cbnX;
    int jRPlBMOu [10000];
    scanf ("%d", &vbLnZRhT);
    for (go0qj5 = 0; vbLnZRhT > go0qj5; go0qj5++) {
        scanf ("%d", &jRPlBMOu[go0qj5]);
        t5XGJi9 = t5XGJi9 + (float) jRPlBMOu[go0qj5];
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    DRrNzgpDiC = t5XGJi9 / (float) vbLnZRhT;
    u5rIVH = DRrNzgpDiC;
    msxXJYM6P = DRrNzgpDiC;
    {
        N97cbnX = 0;
        while (vbLnZRhT > N97cbnX) {
            if (u5rIVH < (float) jRPlBMOu[N97cbnX])
                u5rIVH = (float) jRPlBMOu[N97cbnX];
            else if (msxXJYM6P > (float) jRPlBMOu[N97cbnX])
                msxXJYM6P = (float) jRPlBMOu[N97cbnX];
            N97cbnX++;
        };
    }
    s6tz7hcUe = DRrNzgpDiC -msxXJYM6P;
    LGj6EukqF = u5rIVH - DRrNzgpDiC;
    if (LGj6EukqF > s6tz7hcUe)
        printf ("%d\n", (int) u5rIVH);
    else {
        if (LGj6EukqF < s6tz7hcUe)
            printf ("%d\n", (int) msxXJYM6P);
        else
            printf ("%d,%d\n", (int) msxXJYM6P, (int) u5rIVH);
    }
    return 0;
}

