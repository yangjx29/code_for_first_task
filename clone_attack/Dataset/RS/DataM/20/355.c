int main () {
    int E8OjYeSyoI4, j, XPdEjy;
    char Kv8Lzd [100];
    char tlm9eTh [100];
    char jRTsxycYErj [100];
    char SF1Vi67KYpt [100];
    char O8cnXAJ [1];
    for (; !(EOF == scanf ("%s %s", SF1Vi67KYpt, jRTsxycYErj));) {
        O8cnXAJ[(485 - 485)] = SF1Vi67KYpt[0];
        XPdEjy = 0;
        {
            E8OjYeSyoI4 = 0;
            while (!('\0' == SF1Vi67KYpt[E8OjYeSyoI4])) {
                if (SF1Vi67KYpt[E8OjYeSyoI4] > O8cnXAJ[0]) {
                    O8cnXAJ[0] = SF1Vi67KYpt[E8OjYeSyoI4];
                    XPdEjy = E8OjYeSyoI4;
                }
                E8OjYeSyoI4++;
            };
        }
        {
            E8OjYeSyoI4 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (E8OjYeSyoI4 <= XPdEjy) {
                tlm9eTh[E8OjYeSyoI4] = SF1Vi67KYpt[E8OjYeSyoI4];
                E8OjYeSyoI4++;
            };
        }
        tlm9eTh[E8OjYeSyoI4] = '\0';
        strcat (tlm9eTh, jRTsxycYErj);
        {
            j = XPdEjy +1;
            while (SF1Vi67KYpt[j] != '\0') {
                Kv8Lzd[j - XPdEjy -1] = SF1Vi67KYpt[j];
                j++;
            };
        }
        Kv8Lzd[j - XPdEjy -1] = '\0';
        strcat (tlm9eTh, Kv8Lzd);
        printf ("%s\n", tlm9eTh);
    }
    return 0;
}

