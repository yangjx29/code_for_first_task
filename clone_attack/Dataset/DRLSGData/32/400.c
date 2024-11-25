int main () {
    int oHjslpod;
    char E0rRgYxy6X [(684 - 583)];
    char pMOlw9q [(111 - 10)];
    int R1eBj20p;
    int e [103];
    int IQDyFAoC415H;
    int EJAxUflBZR;
    int j7yM0udsW;
    int a7XnR4 [(197 - 94)];
    int clc6Szgi32dt [(903 - 800)];
    int RVgQ6x;
    cin >> IQDyFAoC415H;
    cin.get ();
    {
        EJAxUflBZR = (740 - 739);
        while (EJAxUflBZR <= IQDyFAoC415H) {
            memset (a7XnR4, (598 - 598), sizeof (a7XnR4));
            memset (clc6Szgi32dt, (318 - 318), sizeof (clc6Szgi32dt));
            cin.getline (E0rRgYxy6X, 101);
            cin.getline (pMOlw9q, 101);
            oHjslpod = strlen (E0rRgYxy6X);
            {
                RVgQ6x = oHjslpod - (801 - 800);
                while (0 <= RVgQ6x) {
                    a7XnR4[oHjslpod - RVgQ6x] = E0rRgYxy6X[RVgQ6x] - '0';
                    RVgQ6x = RVgQ6x -(652 - 651);
                }
            }
            memset (e, (993 - 993), sizeof (e));
            j7yM0udsW = strlen (pMOlw9q);
            {
                RVgQ6x = j7yM0udsW - (977 - 976);
                while (RVgQ6x >= 0) {
                    clc6Szgi32dt[j7yM0udsW - RVgQ6x] = pMOlw9q[RVgQ6x] - '0';
                    RVgQ6x = RVgQ6x -(529 - 528);
                }
            }
            {
                RVgQ6x = (968 - 967);
                while (101 >= RVgQ6x) {
                    if (a7XnR4[RVgQ6x] >= clc6Szgi32dt[RVgQ6x])
                        e[RVgQ6x] = a7XnR4[RVgQ6x] - clc6Szgi32dt[RVgQ6x];
                    else {
                        e[RVgQ6x] = a7XnR4[RVgQ6x] - clc6Szgi32dt[RVgQ6x] + 10;
                        a7XnR4[RVgQ6x +1] = a7XnR4[RVgQ6x +1] - 1;
                    }
                    RVgQ6x++;
                }
            }
            {
                R1eBj20p = 101;
                while (R1eBj20p >= 1) {
                    if (e[R1eBj20p] != 0) {
                        {
                            RVgQ6x = R1eBj20p;
                            while (RVgQ6x >= 1) {
                                cout << e[RVgQ6x];
                                RVgQ6x = RVgQ6x -1;
                            }
                        }
                        break;
                    }
                    R1eBj20p = R1eBj20p -1;
                }
            }
            EJAxUflBZR = EJAxUflBZR +1;
            cout << endl;
            cin.get ();
        }
    }
    return 0;
}

