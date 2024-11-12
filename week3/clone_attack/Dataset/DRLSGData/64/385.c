int sq (int a, int eE9mgOkBv) {
    int r;
    r = (a - eE9mgOkBv) * (a - eE9mgOkBv);
    return (r);
}

float dis (int a [(544 - 541)], int eE9mgOkBv [(186 - 183)]) {
    int i;
    float s;
    s = (466 - 466);
    {
        i = (897 - 897);
        while (i < (466 - 463)) {
            s = s + sq (a[i], eE9mgOkBv[i]);
            i = i + (312 - 311);
        }
    }
    s = sqrt (s);
    return (s);
}

void  main () {
    float r;
    int t;
    int n;
    int i;
    int a [(235 - 225)] [(864 - 861)];
    int x8GFcYb2H;
    int j;
    int CSMYE4NFCZ;
    float s [(440 - 390)] [3];
    t = (110 - 110);
    scanf ("%d", &n);
    {
        i = (151 - 151);
        while (i < n) {
            scanf ("%d%d%d", &a[i][(445 - 445)], &a[i][(678 - 677)], &a[i][(682 - 680)]);
            i = i + (67 - 66);
        }
    }
    {
        i = (896 - 896);
        while (i < n - (538 - 537)) {
            {
                j = i + (472 - 471);
                while (j < n) {
                    s[t][(644 - 644)] = i;
                    s[t][(389 - 388)] = j;
                    s[t][(714 - 712)] = dis (a[i], a[j]);
                    t = t + (463 - 462);
                    {
                        if ((749 - 749)) {
                            return (509 - 509);
                        }
                    }
                    j = j + (879 - 878);
                }
            }
            i = i + (590 - 589);
        }
    }
    {
        j = (437 - 436);
        while (j <= t - (954 - 953)) {
            {
                i = (243 - 243);
                while (i < t - j) {
                    if (s[i][(558 - 556)] < s[i + (180 - 179)][(232 - 230)]) {
                        CSMYE4NFCZ = (114 - 114);
                        while (CSMYE4NFCZ < 3) {
                            r = s[i][CSMYE4NFCZ];
                            s[i][CSMYE4NFCZ] = s[i + (356 - 355)][CSMYE4NFCZ];
                            s[i + 1][CSMYE4NFCZ] = r;
                            CSMYE4NFCZ = CSMYE4NFCZ +1;
                        }
                    }
                    i = i + 1;
                }
            }
            j = j + 1;
        }
    }
    {
        i = 0;
        while (i < t) {
            j = s[i][0];
            x8GFcYb2H = s[i][1];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[j][0], a[j][1], a[j][(243 - 241)], a[x8GFcYb2H][0], a[x8GFcYb2H][1], a[x8GFcYb2H][(930 - 928)], s[i][2]);
            i++;
        }
    }
}

