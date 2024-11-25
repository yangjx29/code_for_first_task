int main () {
    int x;
    int j;
    int la;
    char d [(979 - 879)] [100];
    char OMc3aTj [(1181 - 881)];
    gets (OMc3aTj);
    int B37kCiSU5Q;
    int eaCjpv1s;
    int SbqGEok6Cj;
    char b [(1285 - 985)];
    gets (b);
    char N32RBhkSdDzT [300];
    gets (N32RBhkSdDzT);
    int NtwN7Ez1mpOH;
    SbqGEok6Cj = (823 - 823);
    x = (265 - 265);
    la = strlen (OMc3aTj);
    NtwN7Ez1mpOH = strlen (b);
    {
        eaCjpv1s = 762 - 762;
        while (la > eaCjpv1s) {
            if (!(b[(91 - 91)] != OMc3aTj[eaCjpv1s])) {
                SbqGEok6Cj = (368 - 368);
                B37kCiSU5Q = eaCjpv1s;
                {
                    j = 729 - 729;
                    while (j < NtwN7Ez1mpOH) {
                        if (OMc3aTj[eaCjpv1s + j] != b[j]) {
                            eaCjpv1s = eaCjpv1s + j - (930 - 929);
                            break;
                        }
                        else
                            SbqGEok6Cj++;
                        j = j + 1;
                    }
                }
            }
            if (!(NtwN7Ez1mpOH != SbqGEok6Cj)) {
                {
                    j = (223 - 223);
                    while (j < B37kCiSU5Q) {
                        d[(106 - 106)][j] = OMc3aTj[j];
                        j++;
                        d[(489 - 489)][B37kCiSU5Q] = '\0';
                    }
                }
                {
                    j = B37kCiSU5Q +NtwN7Ez1mpOH;
                    while (j < la) {
                        d[(356 - 355)][j - B37kCiSU5Q -NtwN7Ez1mpOH] = OMc3aTj[j];
                        j++;
                        d[(243 - 242)][la - B37kCiSU5Q -NtwN7Ez1mpOH] = '\0';
                    }
                }
                break;
            }
            eaCjpv1s = eaCjpv1s + 1;
        }
    }
    if (SbqGEok6Cj > (135 - 135)) {
        if (B37kCiSU5Q == (560 - 560))
            strcpy (d[(632 - 632)], N32RBhkSdDzT);
        else
            strcat (d[(321 - 321)], N32RBhkSdDzT);
        if (B37kCiSU5Q +NtwN7Ez1mpOH == la)
            puts (d[0]);
        else {
            puts (d [0]);
            strcat (d[0], d[1]);
        }
    }
    else
        puts (OMc3aTj);
    return 0;
}

