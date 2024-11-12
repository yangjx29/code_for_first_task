int main () {
    int UHyzSR;
    char f9c7sH [300];
    int Y8lskWx;
    int rYWIAs6TZ;
    int BrZbfilsav;
    scanf ("%d", &BrZbfilsav);
    {
        Y8lskWx = 0;
        while (Y8lskWx < BrZbfilsav) {
            scanf ("%s", &f9c7sH);
            rYWIAs6TZ = strlen (f9c7sH);
            {
                UHyzSR = 0;
                while (UHyzSR < rYWIAs6TZ) {
                    if (!('A' != f9c7sH[UHyzSR])) {
                        f9c7sH[UHyzSR] = f9c7sH[UHyzSR] + 19;
                    }
                    else if (!('T' != f9c7sH[UHyzSR])) {
                        f9c7sH[UHyzSR] = f9c7sH[UHyzSR] - 19;
                    }
                    else if (f9c7sH[UHyzSR] == 'C') {
                        f9c7sH[UHyzSR] = f9c7sH[UHyzSR] + 4;
                    }
                    else {
                        f9c7sH[UHyzSR] = f9c7sH[UHyzSR] - 4;
                    }
                    UHyzSR++;
                }
            }
            printf ("%s\n", f9c7sH);
            Y8lskWx++;
        }
    }
    return 0;
}

