int main (void ) {
    char *DWBqT8Eois;
    char XWoBi9ZkNpT [2000];
    gets (XWoBi9ZkNpT);
    int OJQx5I3b = strlen (XWoBi9ZkNpT) + 1, yPrnTo8I = 0, Vs1ieVSP4OED;
    char *zOFnTmuAt;
    char rSOgexJQwmHc [2000], IFUZgCGzsp [2000];
    puts (IFUZgCGzsp);
    puts (rSOgexJQwmHc);
    DWBqT8Eois = XWoBi9ZkNpT;
    zOFnTmuAt = XWoBi9ZkNpT;
    {
        while (true) {
            if (!(' ' != *DWBqT8Eois) || *DWBqT8Eois == ',') {
                *DWBqT8Eois = '\0';
                Vs1ieVSP4OED = DWBqT8Eois -zOFnTmuAt;
                if (yPrnTo8I < Vs1ieVSP4OED) {
                    yPrnTo8I = Vs1ieVSP4OED;
                    strcpy (IFUZgCGzsp, zOFnTmuAt);
                }
                if (Vs1ieVSP4OED < OJQx5I3b &&Vs1ieVSP4OED) {
                    OJQx5I3b = Vs1ieVSP4OED;
                    strcpy (rSOgexJQwmHc, zOFnTmuAt);
                }
                zOFnTmuAt = DWBqT8Eois +1;
            }
            else if (*DWBqT8Eois == '\0') {
                Vs1ieVSP4OED = strlen (zOFnTmuAt);
                if (Vs1ieVSP4OED > yPrnTo8I) {
                    yPrnTo8I = Vs1ieVSP4OED;
                    strcpy (IFUZgCGzsp, zOFnTmuAt);
                }
                if (Vs1ieVSP4OED < OJQx5I3b) {
                    strcpy (rSOgexJQwmHc, zOFnTmuAt);
                    OJQx5I3b = Vs1ieVSP4OED;
                }
                break;
            }
            DWBqT8Eois = DWBqT8Eois +1;
        }
    }
    return 0;
}

