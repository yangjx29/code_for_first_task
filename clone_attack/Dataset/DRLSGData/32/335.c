int I3sACve6 [100];
int JsbFJIMaKY [100];
char oPALFQskty [100];
char uNQIp4CBtu [100];

void  main () {
    int kDOF1tdYPBQ;
    int OLCEsFm;
    int Hay6fJoLn;
    int smZMy0Rr1o;
    int WrpN9ij;
    int EVOJIpd8ySbl;
    int B2vx9ltOLw;
    scanf ("%d", &WrpN9ij);
    EVOJIpd8ySbl = 0;
    {
        kDOF1tdYPBQ = 0;
        for (; kDOF1tdYPBQ < WrpN9ij;) {
            memset (I3sACve6, 0, sizeof (I3sACve6));
            kDOF1tdYPBQ = kDOF1tdYPBQ + 1;
            B2vx9ltOLw = 0;
            memset (JsbFJIMaKY, 0, sizeof (JsbFJIMaKY));
            scanf ("%s", oPALFQskty);
            Hay6fJoLn = strlen (oPALFQskty);
            {
                OLCEsFm = Hay6fJoLn -1;
                for (; 0 <= OLCEsFm;) {
                    I3sACve6[B2vx9ltOLw++] = oPALFQskty[OLCEsFm] - '0';
                    OLCEsFm = OLCEsFm -1;
                }
            }
            B2vx9ltOLw = 0;
            scanf ("%s", uNQIp4CBtu);
            smZMy0Rr1o = strlen (uNQIp4CBtu);
            {
                OLCEsFm = smZMy0Rr1o - 1;
                for (; OLCEsFm >= 0;) {
                    JsbFJIMaKY[B2vx9ltOLw++] = uNQIp4CBtu[OLCEsFm] - '0';
                    OLCEsFm = OLCEsFm -1;
                }
            }
            if (Hay6fJoLn > smZMy0Rr1o)
                EVOJIpd8ySbl = Hay6fJoLn -1;
            else
                EVOJIpd8ySbl = smZMy0Rr1o;
            {
                OLCEsFm = 0;
                for (; OLCEsFm < EVOJIpd8ySbl;) {
                    I3sACve6[OLCEsFm] -= JsbFJIMaKY[OLCEsFm];
                    if (I3sACve6[OLCEsFm] < 0) {
                        I3sACve6[OLCEsFm] += 10;
                        I3sACve6[OLCEsFm +1]--;
                    }
                    OLCEsFm = OLCEsFm +1;
                }
            }
            {
                OLCEsFm = EVOJIpd8ySbl;
                for (; OLCEsFm >= 0;) {
                    printf ("%d", I3sACve6[OLCEsFm]);
                    OLCEsFm = OLCEsFm -1;
                }
            }
        }
    }
}

