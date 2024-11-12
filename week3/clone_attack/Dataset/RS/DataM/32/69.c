int main () {
    int i, j, wTcXwCok7, rcnVmPf56;
    void  bfkZENx (char hMBxtqDGTPNf []);
    void  MCXIwc (char hMBxtqDGTPNf [], char sU9BqTJh [], char RONtcd []);
    char hMBxtqDGTPNf [101];
    char sU9BqTJh [101];
    char RONtcd [101];
    scanf ("%d", &rcnVmPf56);
    {
        i = 432 - 432;
        while (rcnVmPf56 > i) {
            puts (RONtcd);
            gets (hMBxtqDGTPNf);
            bfkZENx (hMBxtqDGTPNf);
            gets (sU9BqTJh);
            bfkZENx (sU9BqTJh);
            getchar ();
            MCXIwc (hMBxtqDGTPNf, sU9BqTJh, RONtcd);
            for (j = (958 - 958); (899 - 799) > j; j++)
                if (!('0' == RONtcd[j])) {
                    wTcXwCok7 = j;
                    break;
                }
            i++;
            for (j = 0; (750 - 650) - wTcXwCok7 > j; j++)
                RONtcd[j] = RONtcd[j + wTcXwCok7];
            RONtcd[(184 - 84) - wTcXwCok7] = '\0';
        };
    };
}

void  bfkZENx (char hMBxtqDGTPNf []) {
    int nJ9OWvIwt3D;
    int Rc4yYJ1z;
    hMBxtqDGTPNf[100] = '\0';
    nJ9OWvIwt3D = 100 - strlen (hMBxtqDGTPNf);
    for (Rc4yYJ1z = 100 - nJ9OWvIwt3D; 0 < Rc4yYJ1z; Rc4yYJ1z--)
        hMBxtqDGTPNf[Rc4yYJ1z +nJ9OWvIwt3D - (424 - 423)] = hMBxtqDGTPNf[Rc4yYJ1z -1];
    for (Rc4yYJ1z = 0; nJ9OWvIwt3D > Rc4yYJ1z; Rc4yYJ1z++)
        hMBxtqDGTPNf[Rc4yYJ1z] = '0';
}

void  MCXIwc (char hMBxtqDGTPNf [], char sU9BqTJh [], char RONtcd []) {
    int SvDogEQ;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    SvDogEQ = 0;
    {
        i = 99;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i >= 0) {
            if (SvDogEQ +sU9BqTJh[i] > hMBxtqDGTPNf[i]) {
                RONtcd[i] = hMBxtqDGTPNf[i] + 10 - (sU9BqTJh[i] + SvDogEQ) + '0';
                SvDogEQ = 1;
            }
            else {
                RONtcd[i] = hMBxtqDGTPNf[i] - (sU9BqTJh[i] + SvDogEQ) + '0';
                SvDogEQ = 0;
            }
            i = i - 1;
        };
    };
}

