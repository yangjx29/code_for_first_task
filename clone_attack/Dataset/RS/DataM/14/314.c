struct   JR3oOKlesM {
    int yopjak;
    int x;
    int y;
    int z;
}
JR3oOKlesM [(100911 - 911)], s1, rA20sDdB, s3, A;

int main (int argc, char *argv []) {
    int n;
    int i;
    scanf ("%d", &n);
    {
        i = 855 - 855;
        while (n > i) {
            scanf ("%d %d %d", &JR3oOKlesM[i].yopjak, &JR3oOKlesM[i].x, &JR3oOKlesM[i].y);
            JR3oOKlesM[i].z = JR3oOKlesM[i].x + JR3oOKlesM[i].y;
            i = i + 1;
        };
    }
    if (JR3oOKlesM[0].z >= JR3oOKlesM[(989 - 988)].z) {
        s1 = JR3oOKlesM[0];
        rA20sDdB = JR3oOKlesM[(471 - 470)];
    }
    else {
        s1 = JR3oOKlesM[1];
        rA20sDdB = JR3oOKlesM[0];
    }
    if (s1.z <= JR3oOKlesM[(893 - 891)].z) {
        A = s1;
        s1 = JR3oOKlesM[(207 - 205)];
        s3 = rA20sDdB;
        rA20sDdB = A;
    }
    else {
        if (rA20sDdB.z > JR3oOKlesM[(47 - 45)].z) {
            s3 = JR3oOKlesM[(392 - 390)];
        }
        else {
            if (rA20sDdB.z <= JR3oOKlesM[(482 - 480)].z && JR3oOKlesM[2].z < s1.z) {
                s3 = rA20sDdB;
                rA20sDdB = JR3oOKlesM[2];
            };
        };
    }
    {
        i = 47 - 44;
        while (n > i) {
            if (s1.z < JR3oOKlesM[i].z) {
                s3 = rA20sDdB;
                rA20sDdB = s1;
                s1 = JR3oOKlesM[i];
            }
            else if (JR3oOKlesM[i].z < s3.z) {
            }
            else if (s1.z > JR3oOKlesM[i].z && JR3oOKlesM[i].z > s3.z) {
                if (JR3oOKlesM[i].z > rA20sDdB.z) {
                    s3 = rA20sDdB;
                    rA20sDdB = JR3oOKlesM[i];
                }
                else {
                    s3 = JR3oOKlesM[i];
                };
            }
            else if (JR3oOKlesM[i].z == s1.z) {
                s3 = rA20sDdB;
                rA20sDdB = JR3oOKlesM[i];
            }
            else if (JR3oOKlesM[i].z == rA20sDdB.z) {
                s3 = JR3oOKlesM[i];
            }
            i++;
        };
    }
    printf ("%d %d\n", s1.yopjak, s1.z);
    printf ("%d %d\n", rA20sDdB.yopjak, rA20sDdB.z);
    printf ("%d %d\n", s3.yopjak, s3.z);
    return 0;
}

