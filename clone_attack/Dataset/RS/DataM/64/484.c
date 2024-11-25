int main () {
    int oohZOYpBzX;
    int Q7iYzux [oohZOYpBzX];
    int q0PxSM76rAJ [oohZOYpBzX];
    int xC5amD8LGXie [oohZOYpBzX];
    int lIY7pGzVf9aD;
    int s8DFRre2;
    float e9Kukld3a [oohZOYpBzX] [oohZOYpBzX - (694 - 693)];
    float nmBfo9UClFzb;
    float ouabFg [oohZOYpBzX * (oohZOYpBzX - (658 - 657)) / (737 - 735)];
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
    int WqKm6f71 [oohZOYpBzX * (oohZOYpBzX - (637 - 636)) / (101 - 99)];
    int mLIuqZ [oohZOYpBzX * (oohZOYpBzX - (486 - 485)) / (884 - 882)];
    int k;
    k = (617 - 617);
    cin >> oohZOYpBzX;
    {
        int q3VxB0yuIna = (986 - 986);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oohZOYpBzX > q3VxB0yuIna) {
            cin >> Q7iYzux[q3VxB0yuIna] >> q0PxSM76rAJ[q3VxB0yuIna] >> xC5amD8LGXie[q3VxB0yuIna];
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
            q3VxB0yuIna = q3VxB0yuIna + 1;
        };
    }
    {
        int q3VxB0yuIna = (787 - 787);
        while (q3VxB0yuIna < oohZOYpBzX) {
            {
                int kn0ZbC = q3VxB0yuIna + (206 - 205);
                while (oohZOYpBzX > kn0ZbC) {
                    e9Kukld3a[q3VxB0yuIna][kn0ZbC] = sqrt ((Q7iYzux[q3VxB0yuIna] - Q7iYzux[kn0ZbC]) * (Q7iYzux[q3VxB0yuIna] - Q7iYzux[kn0ZbC]) + (q0PxSM76rAJ[q3VxB0yuIna] - q0PxSM76rAJ[kn0ZbC]) * (q0PxSM76rAJ[q3VxB0yuIna] - q0PxSM76rAJ[kn0ZbC]) + (xC5amD8LGXie[q3VxB0yuIna] - xC5amD8LGXie[kn0ZbC]) * (xC5amD8LGXie[q3VxB0yuIna] - xC5amD8LGXie[kn0ZbC]));
                    ouabFg[k] = e9Kukld3a[q3VxB0yuIna][kn0ZbC];
                    WqKm6f71[k] = q3VxB0yuIna;
                    mLIuqZ[k] = kn0ZbC;
                    kn0ZbC = kn0ZbC + 1;
                    k = k + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            q3VxB0yuIna = q3VxB0yuIna + 1;
        };
    }
    for (int q3VxB0yuIna = (441 - 440);
    oohZOYpBzX * (oohZOYpBzX - 1) / 2 > q3VxB0yuIna; q3VxB0yuIna = q3VxB0yuIna + 1)
        for (int kn0ZbC = 0;
        oohZOYpBzX * (oohZOYpBzX - 1) / 2 - q3VxB0yuIna > kn0ZbC; kn0ZbC = kn0ZbC + 1) {
            if (ouabFg[kn0ZbC + 1] > ouabFg[kn0ZbC]) {
                nmBfo9UClFzb = ouabFg[kn0ZbC];
                ouabFg[kn0ZbC] = ouabFg[kn0ZbC + 1];
                ouabFg[kn0ZbC + 1] = nmBfo9UClFzb;
                lIY7pGzVf9aD = WqKm6f71[kn0ZbC];
                WqKm6f71[kn0ZbC] = WqKm6f71[kn0ZbC + 1];
                WqKm6f71[kn0ZbC + 1] = lIY7pGzVf9aD;
                s8DFRre2 = mLIuqZ[kn0ZbC];
                mLIuqZ[kn0ZbC] = mLIuqZ[kn0ZbC + 1];
                mLIuqZ[kn0ZbC + 1] = s8DFRre2;
            };
        }
    {
        int q3VxB0yuIna = 0;
        while (k > q3VxB0yuIna) {
            cout << "(" << Q7iYzux[WqKm6f71[q3VxB0yuIna]] << "," << q0PxSM76rAJ[WqKm6f71[q3VxB0yuIna]] << "," << xC5amD8LGXie[WqKm6f71[q3VxB0yuIna]] << ")-" << "(" << Q7iYzux[mLIuqZ[q3VxB0yuIna]] << "," << q0PxSM76rAJ[mLIuqZ[q3VxB0yuIna]] << "," << xC5amD8LGXie[mLIuqZ[q3VxB0yuIna]] << ")=" << fixed << setprecision (2) << ouabFg[q3VxB0yuIna] << endl;
            q3VxB0yuIna++;
        };
    }
    return 0;
}

