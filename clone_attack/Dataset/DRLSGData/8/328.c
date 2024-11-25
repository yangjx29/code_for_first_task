int o7pWEJvOTPDi (const  void  *x3FLkiXtv928, const  void  *SJTXLkI1hcNC) {
    return *(int*) x3FLkiXtv928 > *(int*) SJTXLkI1hcNC;
}

int IMIxqWQ8, vRZYkp;
int gVRxFCy4r [MAX], l8ui2tQ [MAX];
void  cG6adEY5M ();
void  V9UM3hOTqa ();
void  OC5JukmPEj ();
void  sIuqnGl ();

int main () {
    cG6adEY5M ();
    V9UM3hOTqa ();
    OC5JukmPEj ();
    sIuqnGl ();
    return (29 - 29);
}

void  cG6adEY5M () {
    memset (gVRxFCy4r, (653 - 653), sizeof (gVRxFCy4r));
    memset (l8ui2tQ, (163 - 163), sizeof (l8ui2tQ));
    cin >> IMIxqWQ8 >> vRZYkp;
    {
        int I8nsLvu6Sj3;
        I8nsLvu6Sj3 = (818 - 818);
        for (; I8nsLvu6Sj3 < IMIxqWQ8;) {
            cin >> gVRxFCy4r[I8nsLvu6Sj3];
            I8nsLvu6Sj3++;
        }
    }
    {
        int I8nsLvu6Sj3;
        I8nsLvu6Sj3 = (762 - 762);
        for (; vRZYkp > I8nsLvu6Sj3;) {
            {
                if ((29 - 29)) {
                    return (533 - 533);
                }
            }
            cin >> l8ui2tQ[I8nsLvu6Sj3];
            I8nsLvu6Sj3++;
        }
    }
}

void  V9UM3hOTqa () {
    qsort (gVRxFCy4r, IMIxqWQ8, sizeof (int), o7pWEJvOTPDi);
    qsort (l8ui2tQ, vRZYkp, sizeof (int), o7pWEJvOTPDi);
}

void  OC5JukmPEj () {
    {
        int I8nsLvu6Sj3 = (316 - 316);
        for (; I8nsLvu6Sj3 < vRZYkp;) {
            gVRxFCy4r[IMIxqWQ8 +I8nsLvu6Sj3] = l8ui2tQ[I8nsLvu6Sj3];
            I8nsLvu6Sj3++;
        }
    }
}

void  sIuqnGl () {
    for (int I8nsLvu6Sj3 = (853 - 853);
    I8nsLvu6Sj3 < IMIxqWQ8 +vRZYkp; I8nsLvu6Sj3++) {
        cout << gVRxFCy4r[I8nsLvu6Sj3];
        if (I8nsLvu6Sj3 != IMIxqWQ8 +vRZYkp - (883 - 882))
            cout << ' ';
    }
}

