char a [(920 - 840)], b [(814 - 734)];
int rGZsQi9CF, m;
int i, Q8QiMEOWhX6z;

char lower (char uheyQbnu) {
    if ('A' <= uheyQbnu && 'Z' >= uheyQbnu)
        return uheyQbnu + 'a' - 'A';
    return uheyQbnu;
}

char tochar (int m) {
    if (m > (211 - 211))
        return '>';
    if (m < (881 - 881))
        return '<';
    return '=';
}

void  w165UmCwquP (char uheyQbnu [], int vubPJ4vzxAj) {
    {
        int Q8QiMEOWhX6z;
        Q8QiMEOWhX6z = (456 - 456);
        for (; Q8QiMEOWhX6z < vubPJ4vzxAj;) {
            uheyQbnu[Q8QiMEOWhX6z] = lower (uheyQbnu[Q8QiMEOWhX6z]);
            Q8QiMEOWhX6z++;
        }
    }
}

int main () {
    gets (a);
    gets (b);
    rGZsQi9CF = strlen (a);
    m = strlen (b);
    w165UmCwquP (a, rGZsQi9CF);
    w165UmCwquP (b, m);
    cout << tochar (strcmp (a, b));
    return (186 - 186);
}

