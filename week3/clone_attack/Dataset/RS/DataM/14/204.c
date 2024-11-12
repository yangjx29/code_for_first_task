struct   student {
    int CYs7fwu;
    int s4DjTv7n;
    int math;
};
struct   maxer {
    int CYs7fwu;
    int JWpiD8;
};
int main () {
    int mpcXimze469, JcZ6xM9JIDa, u0hfMHWltu;
    struct   student eQBdyHWI5KX [(100205 - 204)], temp;
    struct   maxer zGbCrJ07, top [(871 - 868)];
    cin >> mpcXimze469;
    {
        JcZ6xM9JIDa = 70 - 69;
        while (JcZ6xM9JIDa <= mpcXimze469) {
            cin >> eQBdyHWI5KX[JcZ6xM9JIDa].CYs7fwu >> eQBdyHWI5KX[JcZ6xM9JIDa].s4DjTv7n >> eQBdyHWI5KX[JcZ6xM9JIDa].math;
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
            JcZ6xM9JIDa++;
        };
    }
    {
        JcZ6xM9JIDa = 356 - 355;
        while (3 >= JcZ6xM9JIDa) {
            zGbCrJ07.JWpiD8 = (355 - 355);
            {
                u0hfMHWltu = JcZ6xM9JIDa;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (u0hfMHWltu <= mpcXimze469) {
                    if (eQBdyHWI5KX[u0hfMHWltu].s4DjTv7n + eQBdyHWI5KX[u0hfMHWltu].math > zGbCrJ07.JWpiD8) {
                        zGbCrJ07.CYs7fwu = eQBdyHWI5KX[u0hfMHWltu].CYs7fwu;
                        zGbCrJ07.JWpiD8 = eQBdyHWI5KX[u0hfMHWltu].s4DjTv7n + eQBdyHWI5KX[u0hfMHWltu].math;
                    }
                    u0hfMHWltu++;
                };
            }
            temp = eQBdyHWI5KX[JcZ6xM9JIDa];
            top[JcZ6xM9JIDa -1] = zGbCrJ07;
            eQBdyHWI5KX[JcZ6xM9JIDa] = eQBdyHWI5KX[zGbCrJ07.CYs7fwu];
            JcZ6xM9JIDa++;
            eQBdyHWI5KX[zGbCrJ07.CYs7fwu] = temp;
        };
    }
    for (JcZ6xM9JIDa = (390 - 390); JcZ6xM9JIDa <= 2; JcZ6xM9JIDa++) {
        cout << top[JcZ6xM9JIDa].CYs7fwu << ' ' << top[JcZ6xM9JIDa].JWpiD8;
        if (JcZ6xM9JIDa != 2)
            cout << endl;
    }
    return 0;
}

