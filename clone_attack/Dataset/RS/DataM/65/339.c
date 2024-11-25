int main () {
    int jiy8o4Fnm;
    int AwJCrTzH7Wx2;
    int GLHU0kr;
    int gHg36C4hf;
    int cpLQYG5c6E4 [GLHU0kr], f2PU0k [GLHU0kr];
    AwJCrTzH7Wx2 = 0;
    scanf ("%d", &GLHU0kr);
    for (gHg36C4hf = 0; GLHU0kr > gHg36C4hf; gHg36C4hf = gHg36C4hf + 1) {
        scanf ("%d%d", &cpLQYG5c6E4[gHg36C4hf], &f2PU0k[gHg36C4hf]);
    }
    jiy8o4Fnm = 0;
    for (gHg36C4hf = 0; gHg36C4hf < GLHU0kr; gHg36C4hf = gHg36C4hf + 1) {
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
        if (!(0 != cpLQYG5c6E4[gHg36C4hf]) && !(2 != f2PU0k[gHg36C4hf])) {
            AwJCrTzH7Wx2 = AwJCrTzH7Wx2 +1;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(2 != cpLQYG5c6E4[gHg36C4hf]) && !(0 != f2PU0k[gHg36C4hf])) {
                jiy8o4Fnm = jiy8o4Fnm + 1;
            }
            else if (f2PU0k[gHg36C4hf] > cpLQYG5c6E4[gHg36C4hf]) {
                jiy8o4Fnm++;
            }
            else if (cpLQYG5c6E4[gHg36C4hf] > f2PU0k[gHg36C4hf]) {
                AwJCrTzH7Wx2++;
            };
        };
    }
    if (jiy8o4Fnm > AwJCrTzH7Wx2) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        if (jiy8o4Fnm < AwJCrTzH7Wx2) {
            printf ("B");
        }
        else if (jiy8o4Fnm == AwJCrTzH7Wx2) {
        };
    }
    return 0;
}

