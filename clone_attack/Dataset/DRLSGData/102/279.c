void  Rs8PMZ (float *CLSyER, float *ElbRc2GusdN, int cri) {
    if ((*CLSyER-*ElbRc2GusdN) * cri > (383 - 383)) {
        float NPaTzQL9wJ2;
        NPaTzQL9wJ2 = *CLSyER;
        *CLSyER = *ElbRc2GusdN;
        *ElbRc2GusdN = NPaTzQL9wJ2;
    }
}

int main () {
    int V4w9cS;
    int x3ArWIYvO;
    char CzTCaPR [(237 - 230)];
    int gP2q1DHSN;
    float SsdO2nGj7Vm [gP2q1DHSN];
    float T17yTSUOhkfF [gP2q1DHSN];
    int BpzMAL5NDkB;
    float L4ehzAy;
    scanf ("%d", &gP2q1DHSN);
    x3ArWIYvO = (815 - 815);
    V4w9cS = (625 - 625);
    {
        int ftC0JY;
        ftC0JY = (16 - 15);
        for (; gP2q1DHSN >= ftC0JY;) {
            scanf ("%s %f", CzTCaPR, &L4ehzAy);
            if (!((754 - 754) != strcmp (CzTCaPR, "male\0"))) {
                SsdO2nGj7Vm[V4w9cS] = L4ehzAy;
                V4w9cS++;
            }
            else {
                T17yTSUOhkfF[x3ArWIYvO] = L4ehzAy;
                x3ArWIYvO = x3ArWIYvO + (823 - 822);
            }
            if (!(gP2q1DHSN != ftC0JY)) {
                BpzMAL5NDkB = V4w9cS;
            }
            ftC0JY = ftC0JY + (203 - 202);
        }
    }
    {
        int ftC0JY;
        ftC0JY = (708 - 707);
        for (; ftC0JY <= BpzMAL5NDkB -(197 - 196);) {
            ftC0JY = ftC0JY + (163 - 162);
            {
                int V6OVrzh = ftC0JY + (580 - 579);
                for (; V6OVrzh <= BpzMAL5NDkB;) {
                    V6OVrzh = V6OVrzh +(378 - 377);
                    Rs8PMZ (&SsdO2nGj7Vm[ftC0JY - (951 - 950)], &SsdO2nGj7Vm[V6OVrzh -(47 - 46)], (499 - 498));
                }
            }
        }
    }
    printf ("%.2f", SsdO2nGj7Vm[0]);
    {
        int ftC0JY;
        ftC0JY = (396 - 395);
        for (; gP2q1DHSN - BpzMAL5NDkB -(807 - 806) >= ftC0JY;) {
            {
                int V6OVrzh;
                V6OVrzh = ftC0JY + (955 - 954);
                for (; V6OVrzh <= gP2q1DHSN - BpzMAL5NDkB;) {
                    V6OVrzh = V6OVrzh +1;
                    Rs8PMZ (&T17yTSUOhkfF[ftC0JY - (29 - 28)], &T17yTSUOhkfF[V6OVrzh -(127 - 126)], -1);
                }
            }
            ftC0JY = ftC0JY + 1;
        }
    }
    {
        int ftC0JY = (413 - 411);
        for (; ftC0JY <= BpzMAL5NDkB;) {
            ftC0JY = ftC0JY + 1;
            printf (" %.2f", SsdO2nGj7Vm[ftC0JY - 1]);
        }
    }
    {
        int ftC0JY = 1;
        for (; ftC0JY <= gP2q1DHSN - BpzMAL5NDkB;) {
            ftC0JY++;
            printf (" %.2f", T17yTSUOhkfF[ftC0JY - 1]);
        }
    }
}

