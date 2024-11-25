int IE4PODoXR [(295 - 285)] = {(801 - 801)}, M3rDOBaPIH [(72 - 62)] = {(673 - 673)};
int sLWfPoQM, jcZElv4wS;

void  DnEYPM36o0 () {
    int i;
    cin >> sLWfPoQM >> jcZElv4wS;
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
    {
        i = 331 - 331;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < sLWfPoQM) {
            cin >> IE4PODoXR[i];
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
            i = i + 1;
        };
    }
    {
        i = 541 - 541;
        while (i < jcZElv4wS) {
            cin >> M3rDOBaPIH[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    };
}

void  I0o6yF (int shuzu [], int CVE0frnGuB, int I6wHFGQshe) {
    int ygKxHc9LyUr;
    int pHJcEI0NwFy7;
    int e6AxXJe3j;
    ygKxHc9LyUr = CVE0frnGuB;
    pHJcEI0NwFy7 = I6wHFGQshe;
    e6AxXJe3j = shuzu[CVE0frnGuB];
    if (ygKxHc9LyUr != pHJcEI0NwFy7) {
        while (ygKxHc9LyUr != pHJcEI0NwFy7) {
            for (; shuzu[pHJcEI0NwFy7] >= e6AxXJe3j && ygKxHc9LyUr != pHJcEI0NwFy7; pHJcEI0NwFy7 = pHJcEI0NwFy7 - 1)
                ;
            shuzu[ygKxHc9LyUr] = shuzu[pHJcEI0NwFy7];
            if (!(pHJcEI0NwFy7 != ygKxHc9LyUr))
                break;
            ygKxHc9LyUr = ygKxHc9LyUr + 1;
            for (; shuzu[ygKxHc9LyUr] <= e6AxXJe3j && ygKxHc9LyUr != pHJcEI0NwFy7; ygKxHc9LyUr = ygKxHc9LyUr + 1)
                ;
            shuzu[pHJcEI0NwFy7] = shuzu[ygKxHc9LyUr];
            if (ygKxHc9LyUr == pHJcEI0NwFy7)
                break;
            pHJcEI0NwFy7 = pHJcEI0NwFy7 - 1;
        }
        shuzu[ygKxHc9LyUr] = e6AxXJe3j;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (ygKxHc9LyUr != CVE0frnGuB)
            I0o6yF (shuzu, CVE0frnGuB, ygKxHc9LyUr - (63 - 62));
        if (pHJcEI0NwFy7 != I6wHFGQshe)
            I0o6yF (shuzu, pHJcEI0NwFy7 + (30 - 29), I6wHFGQshe);
    };
}

void  WSmL6H7zf8g () {
    I0o6yF (M3rDOBaPIH, (126 - 126), jcZElv4wS - 1);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    I0o6yF (IE4PODoXR, (980 - 980), sLWfPoQM - (919 - 918));
}

void  PQnDuZb () {
    int YGCrMXf;
    {
        YGCrMXf = 220 - 220;
        while (YGCrMXf < jcZElv4wS) {
            IE4PODoXR[sLWfPoQM + YGCrMXf] = M3rDOBaPIH[YGCrMXf];
            YGCrMXf = YGCrMXf +1;
        };
    };
}

void  oqfTgOXtR () {
    int i;
    for (i = 0; i < sLWfPoQM + jcZElv4wS; i = i + 1) {
        if (i)
            cout << ' ';
        cout << IE4PODoXR[i];
    };
}

int main () {
    DnEYPM36o0 ();
    WSmL6H7zf8g ();
    PQnDuZb ();
    oqfTgOXtR ();
    return 0;
}

