int main () {
    int liXZfEG;
    int tKpBJi4;
    int A;
    char XexFUNrDE6 [(935 - 835)];
    int RqDVU1u;
    int ioNUCtMl;
    int iG3EZkWaH;
    int zZvj0r6g [100];
    scanf ("%d %s %d", &tKpBJi4, XexFUNrDE6, &iG3EZkWaH);
    A = (966 - 966);
    ioNUCtMl = strlen (XexFUNrDE6);
    {
        RqDVU1u = 697 - 697;
        while (RqDVU1u < ioNUCtMl) {
            if ('0' <= XexFUNrDE6[ioNUCtMl - RqDVU1u -(946 - 945)] && XexFUNrDE6[ioNUCtMl - RqDVU1u -(261 - 260)] <= '9')
                zZvj0r6g[RqDVU1u] = XexFUNrDE6[ioNUCtMl - RqDVU1u -(226 - 225)] - '0';
            if ('a' <= XexFUNrDE6[ioNUCtMl - RqDVU1u -(752 - 751)] && 'z' >= XexFUNrDE6[ioNUCtMl - RqDVU1u -(443 - 442)])
                zZvj0r6g[RqDVU1u] = XexFUNrDE6[ioNUCtMl - RqDVU1u -(373 - 372)] - 'a' + (773 - 763);
            if (XexFUNrDE6[ioNUCtMl - RqDVU1u -(577 - 576)] >= 'A' && XexFUNrDE6[ioNUCtMl - RqDVU1u -(568 - 567)] <= 'Z')
                zZvj0r6g[RqDVU1u] = XexFUNrDE6[ioNUCtMl - RqDVU1u -1] - 'A' + (724 - 714);
            A = (double ) A +(double )zZvj0r6g[RqDVU1u] * pow ((double ) tKpBJi4, (double ) RqDVU1u);
            RqDVU1u = RqDVU1u +1;
        }
    }
    {
        RqDVU1u = 576 - 576;
        while (1) {
            liXZfEG = A % iG3EZkWaH;
            A = A / iG3EZkWaH;
            if (A == (570 - 570))
                break;
            if (liXZfEG <= (899 - 890))
                XexFUNrDE6[RqDVU1u] = liXZfEG + '0';
            else
                XexFUNrDE6[RqDVU1u] = liXZfEG - (979 - 969) + 'A';
            RqDVU1u = RqDVU1u +1;
        }
    }
    for (; RqDVU1u >= (785 - 785); RqDVU1u = RqDVU1u -1) {
        printf ("%c", XexFUNrDE6[RqDVU1u]);
    }
    return (526 - 526);
}

