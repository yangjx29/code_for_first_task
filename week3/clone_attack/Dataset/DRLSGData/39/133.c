struct   data {
    char jWHR8nlhS [20];
    int XSLjq0;
    int UCuQfOs3G;
    char kIHDW1 [10];
    char Zuj5NT6o [10];
    int YJnGUt;
    int V9g7chu0LI6j;
    struct   data *VmWuo9;
};
int main () {
    int G60nPbtY8;
    struct   data *q1tMYQepO;
    struct   data *jQeznEmbhS;
    int ZALJKDTf;
    int D62JdFDvitZ;
    int MqAOEXPnV6;
    struct   data *v1T8LUwFiz;
    struct   data *NEIOBKtmY5N;
    MqAOEXPnV6 = 0;
    D62JdFDvitZ = 0;
    q1tMYQepO = (struct   data *) malloc (sizeof (struct   data));
    jQeznEmbhS = q1tMYQepO;
    scanf ("%d", &G60nPbtY8);
    {
        ZALJKDTf = 0;
        for (; G60nPbtY8 > ZALJKDTf;) {
            ZALJKDTf = ZALJKDTf +1;
            v1T8LUwFiz = (struct   data *) malloc (sizeof (struct   data));
            v1T8LUwFiz->V9g7chu0LI6j = 0;
            scanf ("%s %d %d %s %s %d", v1T8LUwFiz->jWHR8nlhS, &v1T8LUwFiz->XSLjq0, &v1T8LUwFiz->UCuQfOs3G, v1T8LUwFiz->kIHDW1, v1T8LUwFiz->Zuj5NT6o, &v1T8LUwFiz->YJnGUt);
            if (v1T8LUwFiz->XSLjq0 > 80 && v1T8LUwFiz->YJnGUt > 0)
                v1T8LUwFiz->V9g7chu0LI6j = v1T8LUwFiz->V9g7chu0LI6j + 8000;
            if (85 < v1T8LUwFiz->XSLjq0 && v1T8LUwFiz->UCuQfOs3G > 80)
                v1T8LUwFiz->V9g7chu0LI6j = v1T8LUwFiz->V9g7chu0LI6j + 4000;
            if (v1T8LUwFiz->XSLjq0 > 90)
                v1T8LUwFiz->V9g7chu0LI6j = v1T8LUwFiz->V9g7chu0LI6j + 2000;
            if (85 < v1T8LUwFiz->XSLjq0 && v1T8LUwFiz->Zuj5NT6o[0] == 'Y')
                v1T8LUwFiz->V9g7chu0LI6j = v1T8LUwFiz->V9g7chu0LI6j + 1000;
            if (v1T8LUwFiz->UCuQfOs3G > 80 && v1T8LUwFiz->kIHDW1[0] == 'Y')
                v1T8LUwFiz->V9g7chu0LI6j = v1T8LUwFiz->V9g7chu0LI6j + 850;
            jQeznEmbhS->VmWuo9 = v1T8LUwFiz;
            jQeznEmbhS = v1T8LUwFiz;
        }
    }
    jQeznEmbhS = q1tMYQepO->VmWuo9;
    {
        ZALJKDTf = 0;
        for (; ZALJKDTf < G60nPbtY8;) {
            if (jQeznEmbhS->V9g7chu0LI6j > D62JdFDvitZ) {
                D62JdFDvitZ = jQeznEmbhS->V9g7chu0LI6j;
                NEIOBKtmY5N = jQeznEmbhS;
            }
            ZALJKDTf = ZALJKDTf +1;
            MqAOEXPnV6 = MqAOEXPnV6 +jQeznEmbhS->V9g7chu0LI6j;
            jQeznEmbhS = jQeznEmbhS->VmWuo9;
        }
    }
    printf ("%s\n", NEIOBKtmY5N->jWHR8nlhS);
    printf ("%d\n", NEIOBKtmY5N->V9g7chu0LI6j);
    printf ("%d\n", MqAOEXPnV6);
}

