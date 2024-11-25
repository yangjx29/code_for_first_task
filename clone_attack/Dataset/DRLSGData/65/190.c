int main () {
    int ZM5qDEwR, zSv7Tm, QCoWRhEd, ybSY1tV4kowZ = 0, KL7EKCt = 0;
    scanf ("%d\n", &ZM5qDEwR);
    int msWuxS [ZM5qDEwR] [2];
    {
        zSv7Tm = 0;
        while (zSv7Tm < ZM5qDEwR) {
            {
                QCoWRhEd = 0;
                while (2 > QCoWRhEd) {
                    scanf ("%d", &msWuxS[zSv7Tm][QCoWRhEd]);
                    QCoWRhEd++;
                }
            }
            zSv7Tm = zSv7Tm + 1;
        }
    }
    {
        zSv7Tm = 0;
        while (zSv7Tm < ZM5qDEwR) {
            if ((!(0 != msWuxS[zSv7Tm][0]) && msWuxS[zSv7Tm][1] == 0) || (!(1 != msWuxS[zSv7Tm][0]) && !(1 != msWuxS[zSv7Tm][1])) || (msWuxS[zSv7Tm][0] == 2 && !(2 != msWuxS[zSv7Tm][1]))) {
                ybSY1tV4kowZ = ybSY1tV4kowZ;
                KL7EKCt = KL7EKCt;
            }
            else if ((msWuxS[zSv7Tm][0] == 0 && !(1 != msWuxS[zSv7Tm][1])) || (!(1 != msWuxS[zSv7Tm][0]) && msWuxS[zSv7Tm][1] == 2) || (msWuxS[zSv7Tm][0] == 2 && msWuxS[zSv7Tm][1] == 0)) {
                ybSY1tV4kowZ = ybSY1tV4kowZ + 1;
                KL7EKCt = KL7EKCt;
            }
            else if ((msWuxS[zSv7Tm][0] == 0 && msWuxS[zSv7Tm][1] == 2) || (msWuxS[zSv7Tm][0] == 1 && msWuxS[zSv7Tm][1] == 0) || (msWuxS[zSv7Tm][0] == 2 && msWuxS[zSv7Tm][1] == 1)) {
                ybSY1tV4kowZ = ybSY1tV4kowZ;
                KL7EKCt = KL7EKCt +1;
            }
            zSv7Tm++;
        }
    }
    if (ybSY1tV4kowZ > KL7EKCt) {
    }
    else if (ybSY1tV4kowZ < KL7EKCt) {
    }
    else if (ybSY1tV4kowZ == KL7EKCt) {
    }
    return 0;
}

